/* Decompiled from Speed.exe @ 0058a0a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int * FUN_0058a0a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar2 = FUN_00674898();
  iVar3 = FUN_00674898();
  piVar6 = DAT_00737bc4;
  iVar2 = (iVar2 >> 0x16 & 0xffffU) + (iVar3 >> 0x16) * 0x10000;
  piVar4 = (int *)FUN_0040a880();
  piVar7 = DAT_00737bc8;
  for (; (piVar6 != piVar4 && (piVar6[4] != iVar2)); piVar6 = (int *)*piVar6) {
  }
  if ((int **)piVar6 != &DAT_00737bc4) {
    piVar7 = (int *)piVar6[1];
    piVar6[5] = DAT_006f089c;
    iVar2 = *piVar6;
    *piVar7 = iVar2;
    *(int **)(iVar2 + 4) = piVar7;
    piVar4 = DAT_00737bc4;
    piVar7 = DAT_00737bc4 + 1;
    DAT_00737bc4 = piVar6;
    *piVar7 = (int)piVar6;
    *piVar6 = (int)piVar4;
    piVar6[1] = (int)&DAT_00737bc4;
    return piVar6;
  }
  iVar3 = DAT_00734510;
  if (*(int *)(DAT_00734510 + 0x18) == *(int *)(DAT_00734510 + 0x2c)) {
    iVar3 = *DAT_00737bc8;
    piVar6 = (int *)DAT_00737bc8[1];
    *piVar6 = iVar3;
    *(int **)(iVar3 + 4) = piVar6;
    FUN_0058a2e0(piVar7);
    iVar3 = DAT_00734510;
    iVar5 = *(int *)(DAT_00734510 + 0x18);
    *piVar7 = *(int *)(DAT_00734510 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar5 + -1;
    *(int **)(iVar3 + 0x10) = piVar7;
  }
  if ((*(int *)(iVar3 + 0x10) == 0) && ((*(byte *)(iVar3 + 0x14) & 1) != 0)) {
    FUN_00566e60();
  }
  piVar6 = *(int **)(iVar3 + 0x10);
  iVar5 = *(int *)(iVar3 + 0x18) + 1;
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar1 = *piVar6;
    if (*(int *)(iVar3 + 0x1c) < iVar5) {
      *(int *)(iVar3 + 0x1c) = iVar5;
    }
    *(int *)(iVar3 + 0x18) = iVar5;
    *(int *)(iVar3 + 0x10) = iVar1;
    if (((*(byte *)(iVar3 + 0x14) & 2) != 0) &&
       (iVar3 = *(int *)(iVar3 + 0x28) >> 2, piVar7 = piVar6, 0 < iVar3)) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
    }
    piVar7 = piVar6 + 2;
    *piVar7 = (int)piVar7;
    piVar6[3] = (int)piVar7;
    iVar3 = param_1[1];
    iVar5 = param_1[2];
    piVar6[8] = *param_1;
    piVar6[9] = iVar3;
    piVar6[10] = iVar5;
    piVar6[4] = iVar2;
    iVar2 = *param_1;
    iVar3 = param_1[1];
    iVar5 = param_1[2];
    piVar6[0xc] = iVar2;
    piVar6[0xd] = iVar3;
    piVar6[0xe] = iVar5;
    piVar6[0x12] = iVar5;
    piVar6[0x10] = iVar2;
    piVar6[0x11] = iVar3;
  }
  piVar4 = DAT_00737bc4;
  piVar7 = DAT_00737bc4 + 1;
  DAT_00737bc4 = piVar6;
  *piVar7 = (int)piVar6;
  piVar6[1] = (int)&DAT_00737bc4;
  *piVar6 = (int)piVar4;
  return piVar6;
}

