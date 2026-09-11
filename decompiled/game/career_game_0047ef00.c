/* Decompiled from Speed.exe @ 0047ef00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0047ef00(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00687428;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = param_2;
  *param_1 = &PTR_LAB_006c8118;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  puVar1 = param_1 + 1;
  *DAT_00779700 = puVar1;
  puVar7 = puVar1;
  param_1[2] = DAT_00779700;
  DAT_00779700 = puVar7;
  *puVar1 = &DAT_007796fc;
  *param_1 = &PTR_FUN_006c8128;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x41000000;
  param_1[10] = 0x41400000;
  param_1[0xb] = 0;
  local_8 = 0;
  if (DAT_007301d4 != 0) {
    FUN_005657d0();
  }
  iVar6 = DAT_00779818;
  if (DAT_00779818 != 0) {
    if (DAT_00779810 == 0) {
      iVar8 = 0;
    }
    else {
      FUN_0047cb50(&DAT_00779800);
      FUN_0047c160(&DAT_00779800);
      iVar8 = FUN_0047c020(&DAT_00779800);
      FUN_0047c310(&DAT_00779800);
    }
    param_1[8] = iVar8;
    param_1[8] = (uint)(iVar8 != 0);
    if ((iVar8 != 0) == 0) {
      param_2 = 0;
      if (0 < DAT_007361c4) {
        do {
          iVar8 = (&DAT_007361bc)[param_2];
          iVar2 = *(int *)(DAT_007361f0 + 0x3c);
          if ((((iVar2 == 0) || (*(int *)(iVar2 + 0x20) == 0)) || (*(int *)(iVar2 + 0x1c) == 0)) &&
             ((*(int *)(DAT_007361f0 + 0x40) == 0 ||
              (*(int *)(*(int *)(DAT_007361f0 + 0x40) + 0x1c) == 0)))) {
            FUN_0042c6d0(iVar8,(-(DAT_00700aa4 != 0) & 0x10U) + 1,0);
            piVar3 = *(int **)(iVar8 + 0x27c);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x34))();
            }
          }
          param_2 = param_2 + 1;
        } while (param_2 < DAT_007361c4);
      }
    }
    else {
      param_2 = 0;
      if (0 < DAT_007361c4) {
        do {
          if (param_2 == 0) {
            uVar10 = 0x16;
          }
          else {
            uVar10 = 0;
          }
          FUN_0042c6d0((&DAT_007361bc)[param_2],uVar10,0);
          param_2 = param_2 + 1;
        } while (param_2 < DAT_007361c4);
      }
    }
    if (*(int *)(DAT_007361f8 + 0x2f0) != 0) {
      FUN_0059b710();
    }
    iVar8 = DAT_0073619c;
    if (DAT_00779810 != 0) {
      fVar4 = _DAT_006cc7bc / DAT_006ffdbc;
      bVar9 = DAT_0073619c != 0;
      param_1[10] = (float)*(int *)(DAT_00779810 + 100) * fVar4;
      fVar5 = (float)*(int *)(DAT_00779810 + 0x6c) * fVar4;
      param_1[9] = fVar5;
      if (bVar9) {
        *(float *)(iVar8 + 0xc) =
             ((float)*(int *)(DAT_00779810 + 0x68) * fVar4 - fVar5) * _DAT_006cca58;
      }
      param_1[7] = 1;
    }
    FUN_00578880(iVar6,0);
  }
  ExceptionList = local_10;
  return param_1;
}

