/* Decompiled from Speed.exe @ 0047f680 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0047f680(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  puVar4 = puVar1;
  param_1[2] = DAT_00779700;
  DAT_00779700 = puVar4;
  *puVar1 = &DAT_007796fc;
  *param_1 = &PTR_FUN_006c8120;
  param_1[7] = 0;
  param_1[8] = 0x40800000;
  param_1[9] = 0x41000000;
  param_1[10] = 0;
  local_8 = 0;
  if (DAT_007301d4 != 0) {
    FUN_005657d0();
  }
  if (DAT_00779810 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_0047cb50(&DAT_00779800);
    FUN_0047c160(&DAT_00779800);
    iVar5 = FUN_0047c020(&DAT_00779800);
    FUN_0047c310(&DAT_00779800);
  }
  iVar7 = 0;
  param_1[7] = iVar5;
  param_1[7] = (uint)(iVar5 != 0);
  if (DAT_00779810 == 0) {
    param_1[7] = 0;
  }
  else {
    fVar3 = _DAT_006cc7bc / DAT_006ffdbc;
    param_1[9] = (float)*(int *)(DAT_00779810 + 0x74) * fVar3;
    param_1[8] = (float)*(int *)(DAT_00779810 + 0x78) * fVar3;
  }
  if (param_1[7] != 0) {
    if (0 < DAT_007361c4) {
      do {
        if (iVar7 == 0) {
          uVar8 = 0x16;
        }
        else {
          uVar8 = 0;
        }
        FUN_0042c6d0((&DAT_007361bc)[iVar7],uVar8,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_007361c4);
    }
    if (*(int *)(DAT_007361f8 + 0x2f0) != 0) {
      FUN_0059b710();
    }
    if (DAT_0078a2fc == 0) {
      pcVar6 = "ForwardStartingPosition";
      do {
        pcVar2 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar2 != '\0');
    }
    else {
      pcVar6 = "BackwardStartingPosition";
      do {
        pcVar2 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar2 != '\0');
    }
    FUN_00578880(DAT_00779818,0);
  }
  ExceptionList = local_10;
  return param_1;
}

