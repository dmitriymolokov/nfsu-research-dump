/* spd-match: close pct=82.56 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060DBB2 */
/* Decompiled from Speed.exe @ 0060dbb2 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint; long __stdcall FUN_0060dbb2(void* p1, uint* p2, int* p3, int* p4) { int mode = *(int*)((char*)p1 + 0x50) & 0xFF; int val = (int)*(unsigned char*)((char*)p1 + 0x51); *p2 = (uint)val; if (mode == 1) { if (val < 4) { *p3 = 8; } else return 0x80004005; } else if (mode == 2 && val == 0) { *p3 = 9; } else return 0x80004005; if (p4) *p4 = 1; return 0; }

