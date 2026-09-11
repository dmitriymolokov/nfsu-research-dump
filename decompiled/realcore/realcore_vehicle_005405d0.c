/* spd-match: far pct=31.51 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005405D0 */
/* Decompiled from Speed.exe @ 005405d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
struct S { int f0; int* f4; int f8[2]; int f10; int f14; int f18; int f1c[2]; int f20; int f24; }; struct R { int pad[0x68/4]; int f68; int f6c; int pad2[0x7c/4 - 0x6e/4]; int f7c; }; extern void __cdecl FUN_00447bb0(int a, int b); extern struct R* __cdecl FUN_0053fef0(int a); void __stdcall FUN_005405d0(struct S* p1) { struct R* res; int* edi; edi = p1->f4; FUN_00447bb0((int)(edi + 2), edi[1] + (int)edi + 8); res = FUN_0053fef0((int)edi); p1->f10 = res->f7c; p1->f14 = res->pad[0x0c/4]; p1->f18 = (int)res; if (res->f6c != 0) { p1->f20 = res->f68; p1->f24 = res->f6c; } }

