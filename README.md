# NFSU1 `Speed.exe` research dump

Ghidra pseudo-C for about **10,000 functions** from PC *Need for Speed Underground*, plus a frozen **byte-match report**.

This is a **map of the binary** for mod authors and reverse engineers. It is **not** a port, not a replacement `Speed.exe`, and not Electronic Arts source code.

**Game files are not in this repository.** You need your own copy of the game.

## What you get

| Path | What it is |
|------|------------|
| [`decompiled/`](decompiled/) | ~9995 `.c` files, grouped by research module |
| [`decompiled/ghidra_functions.json`](decompiled/ghidra_functions.json) | VA, size, call/data ref counts |
| [`decompiled/FULL_DUMP_MANIFEST.json`](decompiled/FULL_DUMP_MANIFEST.json) | VA → file path |
| [`decompiled/GLOBAL_CATALOG.json`](decompiled/GLOBAL_CATALOG.json) | Extra module/class tags |
| [`decompiled/INDEX.md`](decompiled/INDEX.md) | Folder counts and naming |
| [`docs/MATCH_COVERAGE.md`](docs/MATCH_COVERAGE.md) | Honest match statistics |
| [`docs/MATCH_COVERAGE_DETAIL.md`](docs/MATCH_COVERAGE_DETAIL.md) | Every **matched** and **close** VA |
| [`docs/EAX_IN_EAX.md`](docs/EAX_IN_EAX.md) | EA FEng unwind / debug trackers: EAX and Ghidra `in_EAX` |
| [`include/ghidra_compat.h`](include/ghidra_compat.h) | Host helpers so Ghidra pseudo-C type-checks (not game source) |
| [`include/feng_tracker.h`](include/feng_tracker.h) | `DEFINE_FENG_UNWIND_THUNK` — EAX object pointer + `FUN_00594fe0` |
| [`DISCLAIMER.md`](DISCLAIMER.md) | Legal / honesty notes |

Image base **`0x400000`**. Example: VA `0x004EDD90` → `decompiled/feng/feng_004edd90.c`.

## EAX / `in_EAX` (EA frontend unwind)

Ghidra invents a local **`in_EAX`** when a value lives in **EAX** but is not a recovered stack argument. On this binary that is often **not** `thiscall`.

Black Box frontend code left MSVC `/GX` **unwind thunks** (~19 bytes): they load a UI/object pointer into **EAX**, push a **debug/class name string**, and call **`FUN_00594fe0`**. A plain cdecl body cannot emit that; the recovered form is the helper macro in [`include/feng_tracker.h`](include/feng_tracker.h).

Other `in_EAX` hits are `/Og` register arguments or decompiler noise — do not apply the unwind macro to everything.

Full write-up: [`docs/EAX_IN_EAX.md`](docs/EAX_IN_EAX.md).  
Compile helpers (CONCAT, `undefined4`, CRT stubs): [`include/ghidra_compat.h`](include/ghidra_compat.h). That header was **written for matching**, it was not extracted as EA source.

## How to read the C

Most files are **raw Ghidra output** (`undefined4`, recovered locals, guessed calling conventions). Treat them as annotated disassembly in C syntax.

A minority of files have a first-line score:

```c
/* spd-match: matched pct=100.00 ... */
/* spd-match: close pct=86.67 ... */
/* spd-match: far pct=22.97 ... */
```

Those percentages are **reloc-masked byte overlap** against the no-CD `Speed.exe` `.text`, after compiling a rewrite with MSVC 6. The toolchain is not published here.

**Snapshot (2026-08-09):**

- **843** functions **matched** (byte-perfect under that oracle)
- **257** **close** (≥ 80%)
- Average reloc score over all VAs: **28.7%**
- **11.0%** of VAs are match or close

So: you have a **full function list and bodies to read**, and a **small high-confidence subset**. Do not assume every `.c` file is a faithful reconstruction.

## Typical uses

- Find a hook site: search the hex VA or `FUN_00xxxxxx`.
- See what a loader/frontend/audio function is doing, then confirm in your own disassembler.
- Prefer addresses listed as matched/close when you need the body to be trustworthy.
- Cross-check Underground 2 docs ([nfsu2-re](https://github.com/yugecin/nfsu2-re)): a lot of Black Box structure is shared, addresses are not.

## What this dump does not include

- `Speed.exe`, assets, ASI plugins, or a playable build
- Call-graph viewer, class overlay, matching scripts, or WASM runtime
- A guarantee that VAs match **retail** CD `Speed.exe` (work was done on a no-CD image; compare hashes yourself)

## How to use (NFSMods / local)

1. Clone or download this GitHub repository (the tree is larger than the 50 MB NFSMods file cap).
2. Read this README and [`DISCLAIMER.md`](DISCLAIMER.md).
3. Look up functions in `decompiled/` via [`INDEX.md`](decompiled/INDEX.md).
4. Keep your own legal game install; do not ask this repo to provide binaries.

## Related community work

- [yugecin/nfsu2-re](https://github.com/yugecin/nfsu2-re) — Underground 2 RE documentation
- [berkayylmao/NFSPluginSDK](https://github.com/berkayylmao/NFSPluginSDK) — C++ types for Black Box NFS mods
- [ExIfDev/NFSU_model_research](https://github.com/ExIfDev/NFSU_model_research) — `GEOMETRY.BIN`
- [SpeedReflect/Binary](https://github.com/SpeedReflect/Binary) — BIN/BUN/LZC editor
- Widescreen / Extra Options / Unlimiter / SilentPatch — runtime mods; this dump is documentation, not a competitor

## License

See [`DISCLAIMER.md`](DISCLAIMER.md). Original game © Electronic Arts. Research notes in this repo are provided as-is for interoperability research and modding documentation.
