/* spd-match: close pct=84.00 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00632D80 */
/* Decompiled from Speed.exe @ 00632d80 */
/* Module: EAGL */
/* Ghidra DecompileAll */
struct Params { float a; float b; float c; }; extern int __cdecl FUN_00629350(float val); int __stdcall FUN_00632d80(float a, float b, float c) { float diff1 = b - a; float diff2 = c - b; if (a < b) { return FUN_00629350(diff1 / diff2); } if (c <= a) { return FUN_00629350((a - c) / diff2) + 1; } return 0; }

