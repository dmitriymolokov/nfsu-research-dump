/* spd-match: far pct=14.58 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00521B90 */
/* Decompiled from Speed.exe @ 00521b90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned int u32; extern u32 __stdcall FUN_0063a5d0(void*, int, int, int); extern u32 __stdcall FUN_00639d70(u32); extern u32 __stdcall FUN_00639c00(u32); extern void __stdcall FUN_0063c2c0(u32, int); extern void __stdcall FUN_0063aba0(void*); extern void __stdcall FUN_00567de0(void); void FUN_00521b90(void) { char buf[240]; u32 ebx, eax; eax = FUN_0063a5d0(0, 100, 1, 0); ebx = FUN_00639d70(eax); eax = FUN_00639c00(eax); if (ebx == 1) { FUN_0063c2c0(eax, 100); return; } *(u32*)(buf + 8) = 0x28; FUN_0063aba0(buf + 8); if (*(char**)(buf + 0x24) != 0) { char* s = *(char**)(buf + 0x24); char* d = buf + 0x30; do { *d++ = *s; } while (*s++ != 0); FUN_00567de0(); eax = FUN_0063a5d0(buf + 0x30, 1, 100, 0); ebx = FUN_00639d70(eax); eax = FUN_00639c00(eax); if (ebx == 1) { FUN_0063c2c0(eax, 100); } } }

