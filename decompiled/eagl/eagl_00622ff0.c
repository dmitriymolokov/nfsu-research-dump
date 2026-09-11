/* spd-match: far pct=16.16 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00622FF0 */
/* Decompiled from Speed.exe @ 00622ff0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef struct Node { int pad1[1]; int f4; int f8; char f12; char pad[3]; int f16; int f20; } Node; extern Node *DAT_0070a4a4; extern void** DAT_00709d80; extern char __cdecl FUN_00620230(void); extern void __cdecl FUN_0061f7a0(int); void FUN_00622ff0(void) { Node *esi; esi = DAT_0070a4a4; if (esi != 0) { do { if (esi->f12 == 0 && esi->f4 != 0 && esi->f8 != 0) { int res; int arg; void*** vtable; res = FUN_00620230(); if (res == 0) { FUN_0061f7a0(1); arg = 16; } else { FUN_0061f7a0(0); arg = 0; } vtable = (void***)*DAT_00709d80; ((void (__cdecl *)(void*, int, int, Node*, int))(*vtable + 0x12c/4))(DAT_00709d80, esi->f4, esi->f8, esi, arg); esi->f16 = esi->f16 + 1; } esi = (Node*)esi->f20; } while (esi != 0); } }

