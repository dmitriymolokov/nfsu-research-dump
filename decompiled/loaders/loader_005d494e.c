/* Decompiled from Speed.exe @ 005d494e */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d494e(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined4 local_18 [5];
  
  if (param_3 == (uint *)0x0) {
    return 0x8876086c;
  }
  iVar1 = FUN_005d1d40(param_2,1,0);
  if (iVar1 == 0) {
    return 0x8876086c;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar1 + 4) * 4);
  iVar5 = *(int *)(iVar2 + 0x38);
  if (iVar5 == 0) {
    iVar6 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  piVar3 = (int *)(*(int *)(iVar2 + 0x24) + *(int *)(iVar1 + 8) + iVar6);
  if ((piVar3[4] != 0) && (*(int *)(iVar1 + 0x18) == -1)) {
    return 0x8876086c;
  }
  if (piVar3[1] < 0) {
    return 0x8876086c;
  }
  if (3 < piVar3[1]) {
    return 0x8876086c;
  }
  uVar4 = piVar3[5];
  iVar6 = *piVar3;
  if (((iVar6 != 3) || (piVar3[6] != 1)) || ((uVar4 != 3 && (uVar4 != 4)))) {
    if (uVar4 != 1) {
      return 0x8876086c;
    }
    if (piVar3[6] != 1) {
      return 0x8876086c;
    }
    if (iVar6 == 1) {
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      uVar4 = (uint)(*(int *)(*(int *)(iVar2 + 0x28) + *(int *)(iVar1 + 0xc) + iVar5) != 0);
    }
    else if (iVar6 == 2) {
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      uVar4 = *(uint *)(*(int *)(iVar2 + 0x28) + *(int *)(iVar1 + 0xc) + iVar5);
    }
    else {
      if (iVar6 != 3) {
        return 0x8876086c;
      }
      uVar4 = __ftol();
    }
    goto LAB_005d4b3b;
  }
  uVar7 = 0;
  fVar9 = (float10)_DAT_006cc7bc;
  fVar10 = (float10)DAT_006cc7a4;
  if (uVar4 == 0) {
LAB_005d4a63:
    uVar7 = 0;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x28) + *(int *)(iVar1 + 0xc);
    do {
      if (iVar5 == 0) {
        iVar2 = *(int *)(param_1 + 0x2c);
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 8);
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(&stack0xffffffe4 + uVar7 * 4) = *(undefined4 *)(iVar1 + iVar2);
      iVar1 = iVar1 + 4;
    } while (uVar7 < uVar4);
    if ((float10)0.0 < fVar9) {
      if ((float10)0.0 < fVar10 != ((float10)0.0 == fVar10)) goto LAB_005d4a63;
      uVar7 = __ftol();
      fVar10 = extraout_ST0;
      fVar9 = extraout_ST1;
    }
    else {
      uVar7 = 0xff;
    }
  }
  if ((float10)0.0 < fVar9) {
    if ((float10)0.0 < fVar10 == ((float10)0.0 == fVar10)) {
      uVar8 = __ftol();
      fVar10 = extraout_ST0_00;
      fVar9 = extraout_ST1_00;
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 0xff;
  }
  if ((float10)0.0 < fVar9) {
    if ((float10)0.0 < fVar10 == ((float10)0.0 == fVar10)) {
      uVar4 = __ftol();
      fVar9 = extraout_ST0_01;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  if ((float10)0.0 < fVar9) {
    if (0.0 < DAT_006cc7a4 == (DAT_006cc7a4 == 0.0)) {
      iVar1 = __ftol();
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0xff;
  }
  uVar4 = ((iVar1 << 8 | uVar7) << 8 | uVar8) << 8 | uVar4;
LAB_005d4b3b:
  *param_3 = uVar4;
  return 0;
}

