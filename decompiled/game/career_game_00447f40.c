/* spd-match: far pct=32.43 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00447F40 */
/* Decompiled from Speed.exe @ 00447f40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */
typedef void* (*PVOID_FUNC)(int, const char*, int); extern void* FUN_00566dc0(int, const char*, int); extern void** DAT_007360f8; extern int DAT_0073d814; extern void** DAT_0073d81c; extern void* DAT_0073d818; void FUN_00447f40(void) { void* eax = FUN_00566dc0(0xb4, "ResourceFileSlotPool", 0); if (!(DAT_007360f8 = eax)) return; if (DAT_0073d814 == 1) { void** p = (void**)eax; *DAT_0073d81c = eax; p[1] = DAT_0073d81c; DAT_0073d81c = p; *p = &DAT_0073d818; } }

