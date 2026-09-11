/* spd-match: far pct=20.00 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-c3/va_00545C10 */
#include "ghidra_compat.h"
struct Obj { int pad[29]; int v1; int pad2[1]; int v2; };
int __cdecl FUN_0053e400(int, int, int);
int __cdecl FUN_00545c10(struct Obj *obj, int param_1)
{
  int iVar1 = obj->v2;
  int iVar3 = obj->v1;
  int iVar2 = FUN_0053e400(param_1,iVar3,0x24);
  if (iVar2 == 0) {
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar3 + 0x24) == param_1) return iVar3;
        iVar2++;
        iVar3 += 0x7c;
      } while (iVar2 < iVar1);
      iVar2 = 0;
    }
  }
  return iVar2;
}
