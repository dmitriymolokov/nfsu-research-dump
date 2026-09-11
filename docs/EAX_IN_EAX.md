# EAX, `in_EAX`, and EA frontend unwind

Ghidra often invents a local named **`in_EAX`**. That is not a real C variable Black Box wrote. It means: **this value arrives in the EAX register**, outside the stack arguments Ghidra recovered.

On Underground that pattern is not “always `thiscall`.” It splits into families.

## 1. FEng unwind / debug tracker (the one that actually matches)

MSVC `/GX` exception unwind left a large family of **~19-byte** frontend thunks. They do the same thing:

1. Push a **name string** (UI / object class) and a flag.
2. **`mov eax, [ebp ± displacement]`** — the live object pointer, **not** a stack argument.
3. `call FUN_00594fe0` (retail behaviour is effectively “tracker / free using EAX”).
4. `add esp, 8` / `ret`.

A normal `__cdecl` rewrite cannot emit “load EAX from the frame, then call.” Ghidra therefore shows **`in_EAX`** and the wrong stack cleanup (`add esp, 12`, missing `mov eax, …`).

The recovered form is a **declarative helper** in [`include/feng_tracker.h`](../include/feng_tracker.h) (same macros also live next to the FEng dump as [`decompiled/feng/feng_tracker.h`](../decompiled/feng/feng_tracker.h)):

```c
DEFINE_FENG_UNWIND_THUNK(FUN_00xxxxxx, "SomeFEngName", /* ebp_disp */ -0x10)
```

The only assembly is inside that header (`naked` thunk). Readable `.c` files should be one macro line, not hand-written `_asm`.

`DEFINE_FENG_UNWIND_THUNK_RVA` hardcodes a string address from a specific `Speed.exe` and is **verify-only**. Prefer the string-literal form.

This is the EA/Black Box **frontend debug/unwind leftover**: named objects, pointer in **EAX**, SEH-style thunks — not a separate “debugger protocol.”

## 2. Other `in_EAX` (do not use the unwind macro)

| What you see | What it usually is | What to do |
|--------------|--------------------|------------|
| Tiny leaf, `mov edi, eax` at entry | `/Og` **register argument** in EAX | Typed first arg, often `__fastcall`; still not the unwind family |
| Big ESP frame + `in_EAX` | Decompiler noise or FPO vs EAX | Do not `__asm { mov in_EAX, eax }` |
| Random `in_EAX` in thousands of TUs | Mix of the above + Ghidra junk | Filter by family; **do not** mass-apply one recipe |

`in_EAX` ≠ proof of `__thiscall`. `__thiscall` uses ECX.

## 3. `ghidra_compat.h` (written for this dump, not taken from the exe)

[`include/ghidra_compat.h`](../include/ghidra_compat.h) is a **host header** so Ghidra pseudo-C can compile as C/C++ (MSVC 6 `/TC`/`/TP` or a modern compiler). It is **not** recovered game source.

It provides:

- Ghidra types: `undefined4`, `byte`, odd-width `uint3`, …
- Piece/carry macros: `CONCAT*`, `CARRY4`, `SUBPIECE`, …
- Soft Win32/CRT names so a single TU type-checks (`DWORD`, `_malloc`, …)

Per-function `FUN_*` / `DAT_*` stubs stay in the `.c` file. Do not `#include <windows.h>` on top of this if you are trying to match original call sites (`e8` vs import thunks).

## How to use

1. See `in_EAX` in a dump file.
2. Check size ~19 bytes and a call to `FUN_00594fe0` → unwind helper.
3. Otherwise treat EAX as a hidden argument or decompiler artifact; confirm in a disassembler.
4. To compile a TU, `#include "ghidra_compat.h"` (and `feng_tracker.h` only for that thunk family).
