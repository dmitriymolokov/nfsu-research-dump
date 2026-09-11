/* Decompiled from Speed.exe @ 004f84d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f84d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = param_1[10];
  uVar2 = param_1[0xc];
  uVar3 = param_1[0xb];
  *param_1 = &PTR_FUN_006c1870;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 0x18);
    iVar6 = *(int *)(iVar4 + 0x2c);
    if (((iVar5 == 1) || (iVar5 == 7)) || (iVar5 == 9)) {
      *(undefined4 *)(iVar6 + 0x38) = uVar3;
      *(undefined4 *)(iVar6 + 0x3c) = uVar2;
    }
    *(undefined4 *)(iVar6 + 0x38) = uVar3;
    *(undefined4 *)(iVar6 + 0x3c) = uVar2;
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
  }
  piVar1 = param_1 + 1;
  piVar7 = (int *)param_1[1];
  while (piVar7 != piVar1) {
    piVar7 = (int *)*piVar1;
    iVar4 = *piVar7;
    piVar8 = (int *)piVar7[1];
    *piVar8 = iVar4;
    *(int **)(iVar4 + 4) = piVar8;
    iVar4 = piVar7[8];
    iVar6 = piVar7[3];
    iVar5 = piVar7[7];
    if (iVar6 != 0) {
      iVar9 = *(int *)(iVar6 + 0x18);
      iVar10 = *(int *)(iVar6 + 0x2c);
      if (((iVar9 == 1) || (iVar9 == 7)) || (iVar9 == 9)) {
        *(int *)(iVar10 + 0x38) = iVar5;
        *(int *)(iVar10 + 0x3c) = iVar4;
      }
      *(int *)(iVar10 + 0x38) = iVar5;
      *(int *)(iVar10 + 0x3c) = iVar4;
      *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
    }
    _free(piVar7);
    piVar7 = (int *)*piVar1;
  }
  _free((void *)param_1[4]);
  piVar7 = (int *)*piVar1;
  while (piVar7 != piVar1) {
    iVar4 = *piVar7;
    piVar8 = (int *)piVar7[1];
    *piVar8 = iVar4;
    *(int **)(iVar4 + 4) = piVar8;
    _free(piVar7);
    piVar7 = (int *)*piVar1;
  }
  return;
}

