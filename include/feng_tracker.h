/* FEng SEH unwind-thunk helpers (MSVC 6).
 *
 * ~19-byte /GX leftovers: load a UI/object pointer into EAX, then call
 * FUN_00594fe0 (retail ≈ tracker/free using EAX). Ghidra shows this as in_EAX.
 * See docs/EAX_IN_EAX.md. Naked asm lives only in this header.
 *
 * Prefer DEFINE_FENG_UNWIND_THUNK (string in .rdata).
 * DEFINE_FENG_UNWIND_THUNK_RVA is verify-only (hardcodes a game VA).
 */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif
void __cdecl FUN_00594fe0(const char *name, int flag);
#ifdef __cplusplus
}
#endif

/* Production form — string in .rdata; Path A / DIR32 mask → matched. */
#define DEFINE_FENG_UNWIND_THUNK(func_name, string_name, ebp_disp) \
    static const char _str_##func_name[] = string_name; \
    __declspec(naked) void func_name(void) { \
        __asm { push 0 } \
        __asm { push offset _str_##func_name } \
        __asm { mov eax, dword ptr [ebp + ebp_disp] } \
        __asm { call FUN_00594fe0 } \
        __asm { add esp, 8 } \
        __asm { ret } \
    }

/* Verify-only — absolute push imm32 = string VA from speed.exe. */
#define DEFINE_FENG_UNWIND_THUNK_RVA(func_name, string_rva, ebp_disp) \
    __declspec(naked) void func_name(void) { \
        __asm { push 0 } \
        __asm { push string_rva } \
        __asm { mov eax, dword ptr [ebp + ebp_disp] } \
        __asm { call FUN_00594fe0 } \
        __asm { add esp, 8 } \
        __asm { ret } \
    }
