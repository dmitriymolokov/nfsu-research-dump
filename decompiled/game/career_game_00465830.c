/* Decompiled from Speed.exe @ 00465830 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465830(int param_1,undefined4 *param_2,float *param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float local_34;
  int *piStack_30;
  int iStack_2c;
  float local_28;
  float local_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fVar9 = param_3[1];
  fVar8 = param_3[2];
  *(float *)(param_1 + 0x50) = *param_3 + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = fVar9 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = fVar8 + *(float *)(param_1 + 0x58);
  fVar9 = SQRT(param_3[1] * param_3[1] + param_3[2] * param_3[2] + *param_3 * *param_3);
  *(float *)(param_1 + 0x60) = fVar9 + *(float *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc) = DAT_0073ad34;
  uVar1 = param_2[2];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(float *)(param_1 + 0x40) = param_4;
  FUN_00465d00(param_1,param_2,param_3);
  fVar7 = (float10)FUN_004212f0();
  if (fVar7 < (float10)_DAT_006b728c) {
    iVar4 = FUN_00466350();
    iVar5 = iVar4 * 0x94;
    if (*(float *)(&DAT_006ef35c + iVar5) < param_4) {
      local_28 = DAT_006cc7a4;
      if (((_DAT_006ccb7c <
            ABS(*(float *)(&DAT_006ef360 + iVar5) - *(float *)(&DAT_006ef35c + iVar5))) &&
          (fVar8 = (param_4 - *(float *)(&DAT_006ef35c + iVar5)) /
                   (*(float *)(&DAT_006ef360 + iVar5) - *(float *)(&DAT_006ef35c + iVar5)),
          DAT_006cc7a4 < fVar8)) && (local_28 = fVar8, _DAT_006cc7bc < fVar8)) {
        local_28 = 1.0;
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 100) + 600) + 0xc))();
      (**(code **)(**(int **)(*(int *)(param_1 + 100) + 0x25c) + 0xc))();
      FUN_00598260(iVar4,local_28);
    }
    if (*(float *)(&DAT_006ef350 + iVar5) < fVar9) {
      fVar8 = (fVar9 - *(float *)(&DAT_006ef350 + iVar5)) /
              (*(float *)(&DAT_006ef354 + iVar5) - *(float *)(&DAT_006ef350 + iVar5));
      local_24 = DAT_006cc7a4;
      if ((DAT_006cc7a4 < fVar8) && (local_24 = fVar8, _DAT_006cc7bc < fVar8)) {
        local_24 = 1.0;
      }
      iStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      FUN_00598260(iVar4,local_24);
    }
    FUN_00567370();
    fVar7 = (float10)FUN_00421400();
    if (((fVar7 < (float10)_DAT_006b7288) && (DAT_006f1dd8 != 0)) &&
       (FUN_00530240(), DAT_006f1dd8 != 0)) {
      FUN_00530090();
    }
  }
  cVar3 = FUN_004664b0();
  if (cVar3 != '\0') {
    iVar4 = *(int *)(*(int *)(param_1 + 100) + 600);
    iStack_20 = 0;
    uStack_1c = 0;
    if (*(char *)(iVar4 + 0x15) == '\0') {
      iStack_20 = *(int *)(iVar4 + 0x140);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x25c);
    if (*(char *)(iVar4 + 0x15) == '\0') {
      uStack_1c = *(undefined4 *)(iVar4 + 0x140);
    }
    piStack_30 = &iStack_20;
    iStack_2c = 2;
    do {
      iVar4 = *piStack_30;
      if ((iVar4 != 0) && (iVar5 = *(int *)(iVar4 + 0x18), iVar5 != 0)) {
        FUN_0043fbb0(param_1);
        fVar8 = *(float *)(*(int *)(iVar4 + 0x20) + 0x110);
        local_34 = _DAT_006cc7bc;
        if (_DAT_006b7290 < fVar8) {
          local_34 = _DAT_006b7290 / fVar8;
        }
        local_34 = SQRT(param_3[1] * param_3[1] + param_3[2] * param_3[2] + *param_3 * *param_3) *
                   local_34;
        if (iStack_2c == 2) {
          cVar3 = *(char *)(*(int *)(*(int *)(param_1 + 100) + 0x25c) + 0x15);
        }
        else {
          cVar3 = *(char *)(*(int *)(*(int *)(param_1 + 100) + 600) + 0x15);
        }
        if (cVar3 == '\x01') {
          local_34 = _DAT_006b7294 * local_34;
        }
        if (((((DAT_007361f0 != (int *)0x0) && (iVar4 = *DAT_007361f0, iVar4 != 5)) && (iVar4 != 6))
            && ((iVar4 != 10 && (iVar4 != 9)))) && (*(char *)(iVar5 + 0x21) != '\0')) {
          FUN_00574d90(local_34);
        }
      }
      piStack_30 = piStack_30 + 1;
      iStack_2c = iStack_2c + -1;
    } while (0 < iStack_2c);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 100) + 600);
  iVar5 = 0;
  iVar6 = 0;
  if (*(char *)(iVar4 + 0x15) == '\0') {
    iVar5 = *(int *)(iVar4 + 0x140);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x25c);
  if (*(char *)(iVar4 + 0x15) == '\0') {
    iVar6 = *(int *)(iVar4 + 0x140);
  }
  if ((iVar5 != 0) && (*(char *)(*(int *)(iVar5 + 0x14) + 0x734) != '\0')) {
    fVar8 = fVar9;
    FUN_00438aa0(fVar9);
    FUN_00438300(fVar8);
  }
  if ((iVar6 != 0) && (*(char *)(*(int *)(iVar6 + 0x14) + 0x734) != '\0')) {
    FUN_00438aa0(fVar9);
    FUN_00438300(fVar9);
  }
  return;
}

