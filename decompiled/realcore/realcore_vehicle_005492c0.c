/* spd-match: far pct=20.00 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005492C0 */
/* Decompiled from Speed.exe @ 005492c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned char u8; typedef unsigned int u32; extern void __cdecl FUN_00662bc0(void); extern void __cdecl FUN_00663190(void* p1, int s1, void* p2, int s2); extern u32 DAT_007346d0; int FUN_005492c0(void) { struct { u32 b1, b2, b3, b4; u8 c1, c2, c3, c4; u8 c5, c6, c7, c8; } s; u8 buf[16]; FUN_00662bc0(); s.b1 = 0; s.b2 = 0; s.b3 = 0; *(unsigned short*)&s.c1 = 2; s.c3 = 0x18; s.c4 = 1; s.c5 = 1; s.c6 = 1; FUN_00663190(buf, 16, &s.c1, 16); DAT_007346d0 = (s.c4 << 24) | (s.c5 << 16) | (s.c6 << 8) | s.c7; return 1; }

