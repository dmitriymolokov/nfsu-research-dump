/* spd-match: far pct=34.00 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0057A4F0 */
#include "ghidra_compat.h"

typedef struct { int val0; int val4; char pad[0x1C8]; int val1d0; int val1d4; } T;
extern int __cdecl FUN_00647b70(int);
extern void __cdecl FUN_00671102(int*);

void __fastcall FUN_0057a4f0(T* p)
{
  int* n = (int*)p->val4;
  int* v = (int*)p->val0;
  *n = (int)v;
  *(int**)((int)v + 4) = n;
  if (FUN_00647b70((int)&p->val1d4 + 0x1c) == 4) {
    if (p->val1d0 != 0) {
      FUN_00671102((int*)p->val1d0);
    }
  }
}
