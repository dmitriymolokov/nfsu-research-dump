/* spd-match: far pct=15.97 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00552610 */
#include "ghidra_compat.h"
long __cdecl atol(const char*); 
int __cdecl FUN_00417600();
int __cdecl FUN_00495f00(int);
int __cdecl FUN_004c2a50();
int __cdecl FUN_004f6850(void*);
int __cdecl FUN_00549dc0();
int __cdecl FUN_00549ed0(void*, int*);
int __cdecl FUN_0054b700(void*, void*);
int __cdecl FUN_00550bd0(int, int);
int __cdecl FUN_00551c10(int, int);
int __cdecl FUN_00551fa0(int, int);
int __cdecl FUN_0055e980();
int __cdecl FUN_005808e0();
int __cdecl FUN_0059fb30(int);
int __cdecl FUN_0059fb80();
int __cdecl FUN_0064c660(int);
int __cdecl FUN_00666f30(int, int);
int __cdecl FUN_006682f0(void*, void*, int, void*);
int __cdecl FUN_00668b40(void*, int, int, int);
int __cdecl FUN_00674898();
extern int DAT_006b9172, DAT_006bcecc, DAT_006bd444, DAT_006ca910, DAT_006f3cd0, DAT_0073d868, DAT_0073d8d0, DAT_0073d8d8, DAT_0073daf4, DAT_00777b54, DAT_00777cb4;
void FUN_00552610(int p1, char p2) { int i, limit; int *obj = (int*)(*(int*)(p1 + 0x7a0)); DAT_00777b54 = 0; limit = (DAT_0073d8d0 == 0) ? 0 : FUN_0064c660(DAT_0073d8d8); if(limit > 6) limit = 6; for(i = 0; i < limit; i++) FUN_00551c10(p1, i + 1); for(; i < 6; i++) FUN_00551fa0(p1, i + 1); FUN_00550bd0((int)obj, limit); }
