/* spd-match: far pct=7.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_005c9025();
int __cdecl FUN_005c90b3();
int __cdecl FUN_005cb1d4();
int __cdecl FUN_005cd207();
int __cdecl FUN_005d0177();
int __cdecl FUN_005d0387();
extern void LAB_005d07dd(void);

int FUN_005d0627(uint param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int local_10;
  int local_8;
  
  puVar2 = param_3;
  iVar1 = param_1;
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar4 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar4 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) && (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), uVar3 < *param_3)
     ) {
    return -0x7fffbffb;
  }
  iVar4 = FUN_005c90b3(*(undefined4 *)(param_1 + 0x20));
  if (-1 < iVar4) {
    piVar6 = (int *)(param_1 + 0x2c);
    local_10 = 0;
    param_1 = 0;
    if (*piVar6 != 0) {
      do {
        pvVar5 = _malloc(0x44);
        if (pvVar5 == (void *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = FUN_005d0177();
        }
        if (local_8 == 0) {
          return -0x7ff8fff2;
        }
        iVar4 = FUN_005c9025(local_8,param_2,param_3);
        if (iVar4 < 0) goto LAB_005d07dd;
        if (local_10 == 0) {
          *(int *)(iVar1 + 0x30) = local_8;
        }
        else {
          *(int *)(local_10 + 0x34) = local_8;
        }
        local_10 = local_8;
        param_1 = param_1 + 1;
      } while (param_1 < *(uint *)(iVar1 + 0x2c));
    }
    param_3 = (uint *)iVar4;
    local_8 = 0;
    iVar4 = *(int *)(iVar1 + 0x24);
    if (iVar4 != 0) {
      piVar6 = _malloc(iVar4 * 0xac + 4);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        *piVar6 = iVar4;
        piVar6 = piVar6 + 1;
        FUN_004010a0(piVar6,0xac,iVar4,FUN_005cd207);
      }
      *(int **)(iVar1 + 0x28) = piVar6;
      if (piVar6 == (int *)0x0) {
        return -0x7ff8fff2;
      }
    }
    iVar7 = 0;
    param_1 = 0;
    iVar4 = (int)param_3;
    if (*(int *)(iVar1 + 0x24) != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x54 + iVar7) = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)(*(int *)(iVar1 + 0x28) + 0x58 + iVar7) = *(undefined4 *)(iVar1 + 8);
        iVar4 = FUN_005cb1d4(*(int *)(iVar1 + 0x28) + iVar7,param_2,puVar2);
        if (iVar4 < 0) {
          return iVar4;
        }
        param_1 = param_1 + 1;
        iVar7 = iVar7 + 0xac;
      } while (param_1 < *(uint *)(iVar1 + 0x24));
LAB_005d07dd:
      param_3 = (uint *)iVar4;
      iVar4 = (int)param_3;
      if (local_8 != 0) {
        FUN_005d0387(1);
      }
    }
  }
  param_3 = (uint *)iVar4;
  return (int)param_3;
}
