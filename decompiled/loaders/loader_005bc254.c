/* spd-match: far pct=6.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069_void_illegal */
#include "ghidra_compat.h"

int __cdecl FUN_005ba5ee();
int __cdecl FUN_005ba80b();
int __cdecl FUN_005baccd();
int __cdecl FUN_005bbe7f();

int FUN_005bc254(int *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar1 = param_2;
  if ((param_3 != (undefined4 *)0x0) && (param_4 != (undefined4 *)0x0)) {
    *param_3 = 0;
    *param_4 = 0;
    if (param_5 != (int *)0x0) {
      *param_5 = 0;
    }
    if (param_1 == (int *)0x0) {
      if (param_2 == (int *)0x0) {
        return 0;
      }
    }
    else if (param_2 != (int *)0x0) {
      uVar2 = FUN_005ba80b(param_1);
      uVar3 = FUN_005ba80b(piVar1);
      if ((((uVar3 <= uVar2) &&
           (iVar4 = FUN_005bbe7f(param_1,piVar1,0), piVar5 = param_1, iVar4 != 0)) ||
          (iVar4 = FUN_005bbe7f(piVar1,param_1,0), piVar5 = piVar1, iVar4 != 0)) ||
         (iVar4 = FUN_005bbe7f(param_1,piVar1,0), piVar5 = param_1, iVar4 != 0)) {
        iVar4 = FUN_005baccd(param_1,piVar1,&param_2);
        piVar1 = param_2;
        if (iVar4 < 0) {
          return iVar4;
        }
        if ((int *)piVar5[5] != param_2) {
          piVar5 = (**(int * (**)())(*piVar5 + 8))();
          if (piVar5 == (int *)0x0) {
            return -0x7ff8fff2;
          }
          piVar5[5] = (int)piVar1;
        }
        piVar1 = param_5;
        if (param_5 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar5 + 8))();
          *piVar1 = iVar4;
          if (iVar4 == 0) {
            (**(code **)*piVar5)();
            return -0x7ff8fff2;
          }
          FUN_005ba5ee(iVar4,1);
        }
        *param_3 = piVar5;
        *param_4 = piVar5;
        return 0;
      }
    }
  }
  return -0x7fffbffb;
}
