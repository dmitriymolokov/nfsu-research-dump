/* spd-match: far pct=76.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00610BA6 */
/* Decompiled from Speed.exe @ 00610ba6 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint; extern int __stdcall FUN_00618c39(uint val); extern int __fastcall FUN_0061663f(void* pThis); int __fastcall FUN_00610ba6(int esi) { int eax; if (*(int*)(esi + 0xec) == 0) { eax = *(uint*)(esi + 0x30); } else { eax = *(uint*)(esi + 0x30) & 0x7fffffff; } if (FUN_00618c39(eax) >= 0) { if (FUN_0061663f((void*)esi) >= 0) return 0; } return -1; }

