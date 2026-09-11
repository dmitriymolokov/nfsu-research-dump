/* spd-match: far pct=5.95 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern int DAT_006a6e30;
extern int DAT_006a6e40;
extern int DAT_00716678;
extern int DAT_0071667a;
extern int DAT_0071667c;
extern int _DAT_006cc7c8;
extern void LAB_006570c0(void);
extern void LAB_006573a6(void);
int unaff_EBP;
int unaff_ESI;

undefined4 FUN_00657220(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar4;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 auStack_84 [4];
  undefined2 *puStack_74;
  undefined4 local_60 [2];
  undefined2 uStack_58;
  undefined4 uStack_54;
  
  piVar1 = param_1 + 0x11;
  piVar2 = param_1 + 0xf;
  *piVar2 = 0;
  param_1[0x10] = 0;
  *piVar1 = 0;
  if (DAT_00716678 == 0) {
    local_60[0] = 0x60;
    (**(code **)(*(int *)*param_2 + 0x10))((int *)*param_2,local_60);
    DAT_0071667a = uStack_58;
    DAT_0071667c = uStack_54;
    DAT_00716678 = 1;
  }
  if (param_2[1] == 0) {
    puVar4 = auStack_84;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_74 = &uStack_98;
    param_1[8] = 1;
    *param_1 = &LAB_006570c0;
    param_1[0xe] = 0xffffffff;
    uStack_98 = 1;
    uStack_96 = 1;
    auStack_84[0] = 0x24;
    auStack_84[1] = 0x80b4;
    auStack_84[2] = 0x8000;
    uStack_94 = 0x5622;
    uStack_90 = 0xac44;
    uStack_8c = 2;
    uStack_8a = 0x10;
    uStack_88 = 0;
    iVar3 = (**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2,auStack_84,piVar2,0);
    if (iVar3 != 0) {
      *piVar2 = 0;
      goto LAB_006573a6;
    }
  }
  else {
    param_1[8] = 0;
    param_1[9] = (int)*(char *)(param_2 + 3);
    iVar3 = (**(code **)(*(int *)*param_2 + 0x14))((int *)*param_2,param_2[1],piVar2);
    unaff_ESI = piVar1;
    if (iVar3 != 0) {
      *piVar2 = 0;
      goto LAB_006573a6;
    }
  }
  iVar3 = (*(code *)**(undefined4 **)*piVar2)((undefined4 *)*piVar2,&DAT_006a6e40,unaff_EBP);
  if (iVar3 != 0) {
    *unaff_EBP = 0;
LAB_006573a6:
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x48))(piVar1);
    }
    piVar1 = (int *)*unaff_ESI;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = (int *)*unaff_EBP;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    return 0;
  }
  if (*(char *)((int)param_2 + 0xd) != '\0') {
    iVar3 = (*(code *)**(undefined4 **)*piVar2)((undefined4 *)*piVar2,&DAT_006a6e30,unaff_ESI);
    if (iVar3 != 0) {
      *unaff_ESI = 0;
      goto LAB_006573a6;
    }
  }
  param_1[7] = (float)*(ushort *)((int)param_2 + 10) * _DAT_006cc7c8;
  return 1;
}
