/* spd-match: far pct=50.83 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060FDC9 */
/* Decompiled from Speed.exe @ 0060fdc9 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned long u32; typedef unsigned short u16; struct Obj { char pad[80]; u32 val; u16 id; }; u32 __cdecl FUN_0060fdc9(struct Obj* a, u32* b, u32* c, u32* d) { u32 v1 = a->val & 0xffff; *b = a->id; if (d) *d = 0; if (v1 == 1) { if (*b != 0) return 0x80004005; *c = 4; *b = 0; return 0; } if (v1 == 5) { if (*b != 0) return 0x80004005; *c = 4; *b = 2; if (d) *d = 1; return 0; } if (v1 == 0x0c) { if (*b != 0) return 0x80004005; *c = 4; *b = 1; if (d) *d = 1; return 0; } if (v1 == 0x0b) { if (*b > 1) return 0x80004005; *c = 5; return 0; } if (v1 == 6) { if (*b < 8) { *c = 6; return 0; } return 0x80004005; } if (v1 == 0xffff) { *c = 0; return 0; } return 0x80004005; }

