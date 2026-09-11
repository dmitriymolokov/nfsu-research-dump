/* spd-match: far pct=5.84 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0048EAD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004387e0(...);
int __cdecl FUN_0048ad90(...);
int __cdecl FUN_00674898(...);
extern int _DAT_006cc7bc;

struct ThisCallBox {
  void FUN_0048ead0(undefined4 * obj, float param_2);
};
void ThisCallBox::FUN_0048ead0(undefined4 * obj, float param_2)

{
  float fVar1;

  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  
  iVar3 = *((int *)this);
  fVar1 = (param_2 - (float)((int *)this)[1]) * (float)((int *)this)[3];
  iVar2 = FUN_00674898();
  if (iVar2 < 0) {
    puVar4 = (undefined4 *)((int *)this)[4];
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *obj = *puVar4;
      puVar4 = puVar4 + 1;
      obj = obj + 1;
    }
    return;
  }
  if (iVar3 + -1 <= iVar2) {
    puVar4 = (undefined4 *)(((int *)this)[4] + -0x80 + iVar3 * 0x80);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *obj = *puVar4;
      puVar4 = puVar4 + 1;
      obj = obj + 1;
    }
    return;
  }
  fVar5 = (float10)FUN_004387e0(fVar1);
  if ((float10)fVar1 < fVar5) {
    fVar5 = fVar5 - (float10)_DAT_006cc7bc;
  }
  FUN_0048ad90(((int *)this),(float)((float10)fVar1 - fVar5));
  return;
}
