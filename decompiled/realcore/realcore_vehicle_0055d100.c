/* spd-match: far pct=24.47 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m39/va_0055D100 */
/* Decompiled from Speed.exe @ 0055d100 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned long u32; extern void* _malloc(unsigned int); extern void* FUN_0055d160(void* p, u32 p1); void* ExceptionList; int FUN_0055d160_wrapper(void* p, u32 p1); u32 __stdcall FUN_0055d100(u32 param_1) { u32 res; void* p; __try { p = _malloc(0x88); if (p != 0) { res = (u32)FUN_0055d160(p, param_1); } else { res = 0; } } __except(0x688773) { res = 0; } return res; }

