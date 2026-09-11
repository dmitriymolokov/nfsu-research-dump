/* Decompiled from Speed.exe @ 005d2276 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d2276(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_3 == (int *)0x0) {
    return 0x8876086c;
  }
  iVar2 = FUN_005d1d40(param_2,1,0);
  if (iVar2 == 0) {
    return 0x8876086c;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4);
  if (*(int *)(iVar1 + 0x38) == 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  piVar4 = (int *)(*(int *)(iVar1 + 0x24) + *(int *)(iVar2 + 8) + iVar3);
  piVar5 = param_3;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  param_3[2] = piVar4[1];
  param_3[3] = *piVar4;
  if (*(int *)(iVar2 + 0x18) == -1) {
    iVar3 = piVar4[4];
  }
  else {
    iVar3 = 0;
  }
  param_3[6] = iVar3;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4) + 0x38);
  if (iVar3 == 0) {
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  if (*(int *)(piVar4[2] + iVar6) == 0) {
    iVar3 = 0;
  }
  else {
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar3 = piVar4[2] + 4 + iVar3;
  }
  *param_3 = iVar3;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar2 + 4) * 4) + 0x38);
  if (iVar3 == 0) {
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  if (*(int *)(piVar4[3] + iVar6) == 0) {
    iVar3 = 0;
  }
  else {
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    }
    iVar3 = piVar4[3] + 4 + iVar3;
  }
  param_3[1] = iVar3;
  param_3[10] = *(int *)(iVar2 + 0x1c);
  param_3[9] = *(int *)(iVar1 + 0x20);
  if (((*(int *)(iVar2 + 8) == 0) && (*(int *)(iVar2 + 0xc) == 0)) && (*(int *)(iVar2 + 0x18) == -1)
     ) {
    param_3[7] = *(int *)(iVar1 + 0x30);
  }
  else {
    param_3[7] = 0;
  }
  iVar2 = param_3[2];
  if (iVar2 == 1) {
    param_3[8] = 0;
    param_3[4] = piVar4[6];
    iVar2 = piVar4[5];
LAB_005d23f9:
    param_3[5] = iVar2;
  }
  else {
    if (iVar2 == 4) {
      param_3[8] = 0;
    }
    else {
      if (iVar2 != 5) {
        param_3[8] = 0;
        param_3[4] = piVar4[5];
        iVar2 = piVar4[6];
        goto LAB_005d23f9;
      }
      param_3[8] = piVar4[5];
    }
    param_3[4] = 0;
    param_3[5] = 0;
  }
  return 0;
}

