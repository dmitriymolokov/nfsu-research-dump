/* Decompiled from Speed.exe @ 005b74a7 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b74a7(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x8876086c;
  }
  iVar1 = FUN_005b7369(param_2,1);
  if (iVar1 == 0) {
    return 0x8876086c;
  }
  puVar5 = (undefined4 *)
           (*(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
           *(int *)(iVar1 + 0x18));
  puVar6 = param_3;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  piVar2 = (int *)(puVar5[2] + *(int *)(param_1 + 0x118));
  if (*piVar2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar2 + 1;
  }
  *param_3 = piVar2;
  piVar2 = (int *)(puVar5[3] + *(int *)(param_1 + 0x118));
  if (*piVar2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar2 + 1;
  }
  param_3[1] = piVar2;
  param_3[10] = *(undefined4 *)(iVar1 + 0x14);
  iVar4 = *(int *)(*(int *)(iVar1 + 4) + 0x44);
  if (iVar4 == 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x110));
  }
  param_3[9] = uVar3;
  param_3[3] = *puVar5;
  param_3[2] = puVar5[1];
  if (*(int *)(iVar1 + 0x10) == -1) {
    uVar3 = puVar5[4];
  }
  else {
    uVar3 = 0;
  }
  param_3[6] = uVar3;
  param_3[7] = 0;
  if ((*(int *)(iVar1 + 0x18) == 0) && (*(int *)(iVar1 + 0x10) == -1)) {
    param_3[7] = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x28);
  }
  iVar1 = param_3[2];
  if (iVar1 == 1) {
    param_3[8] = 0;
    param_3[4] = 1;
    uVar3 = puVar5[5];
LAB_005b75c4:
    param_3[5] = uVar3;
  }
  else {
    if (iVar1 == 4) {
      param_3[8] = 0;
    }
    else {
      if (iVar1 != 5) {
        param_3[8] = 0;
        param_3[4] = puVar5[5];
        uVar3 = puVar5[6];
        goto LAB_005b75c4;
      }
      param_3[8] = puVar5[5];
    }
    param_3[4] = 0;
    param_3[5] = 0;
  }
  return 0;
}

