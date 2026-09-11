/* spd-match: far pct=5.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00641b50();
extern void LAB_00642275(void);

int * FUN_00642210(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1 + 0x18;
  FUN_0063f190(iVar1);
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 != (int *)0x0) {
    while (uVar2 = (**(code **)(param_1 + 0x10))(piVar4,*(undefined4 *)(param_1 + 0x14)),
          uVar2 < param_2) {
      piVar4 = (int *)*piVar4;
      if (piVar4 == (int *)0x0) {
        FUN_0063f1a0(iVar1);
        return (int *)0x0;
      }
    }
    if (((piVar4 != (int *)0x0) &&
        (uVar2 = (**(code **)(param_1 + 0x10))(piVar4,*(undefined4 *)(param_1 + 0x14)),
        uVar2 == param_2)) && (iVar3 = FUN_00641b50(), iVar3 != 0)) goto LAB_00642275;
  }
  piVar4 = (int *)0x0;
LAB_00642275:
  FUN_0063f1a0(iVar1);
  return piVar4;
}
