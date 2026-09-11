/* Decompiled from Speed.exe @ 004936e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004936e0(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  int local_10b8;
  int local_10b4;
  float *local_10b0;
  int local_10ac;
  float local_10a8;
  int local_10a4;
  undefined4 local_10a0;
  undefined4 local_109c;
  int local_1090;
  int local_108c;
  undefined4 local_1088;
  undefined1 *local_1084;
  undefined4 local_1080;
  undefined4 local_107c;
  undefined4 local_1078;
  undefined4 local_1070;
  undefined4 local_1064;
  undefined4 local_1058;
  float local_1048 [10];
  undefined1 local_1020 [4092];
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00685b0b;
  local_1c = ExceptionList;
  uStack_24 = 0x493706;
  ExceptionList = &local_1c;
  FUN_00438800((float)*(int *)(param_1 + 4) * param_2);
  iVar3 = FUN_00674898();
  local_1048[0] = 0.0;
  local_1048[1] = 0.0;
  if (((param_3 != 0) && (param_4 != 0)) && (iVar5 = 0, 0 < param_4)) {
    do {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
LAB_0049378f:
        fVar1 = (float)(*(int *)(param_1 + 4) + -1);
      }
      else if (iVar2 == 1) {
        fVar1 = (float)*(int *)(param_1 + 4);
      }
      else {
        fVar1 = DAT_006cc7a4;
        if (iVar2 == 2) goto LAB_0049378f;
      }
      fVar1 = (*(float *)(param_3 + iVar5 * 4) / fVar1) * (float)(iVar3 + -1);
      fVar6 = (float10)FUN_004387e0(fVar1);
      if ((float10)fVar1 < fVar6) {
        fVar6 = fVar6 - (float10)_DAT_006cc7bc;
      }
      if ((float10)_DAT_006cc7dc <= (float10)fVar1 - fVar6) {
        fVar6 = (float10)FUN_00438800(fVar1);
      }
      else {
        fVar6 = (float10)FUN_004387e0();
        if ((float10)fVar1 < fVar6) {
          fVar6 = fVar6 - (float10)_DAT_006cc7bc;
        }
      }
      fVar1 = *(float *)(param_3 + iVar5 * 4);
      iVar5 = iVar5 + 1;
      local_1048[iVar5 * 2] = (float)fVar6;
      local_1048[iVar5 * 2 + 1] = fVar1;
    } while (iVar5 < param_4);
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      fVar1 = (float)*(int *)(param_1 + 4);
      goto LAB_0049384f;
    }
    fVar1 = DAT_006cc7a4;
    if (iVar5 != 2) goto LAB_0049384f;
  }
  fVar1 = (float)(*(int *)(param_1 + 4) + -1);
LAB_0049384f:
  local_1048[param_4 * 2 + 3] = fVar1;
  local_1048[param_4 * 2 + 2] = (float)(iVar3 + -1);
  local_10ac = param_4 + 2;
  local_10b0 = local_1048;
  local_10b8 = 0;
  if (0 < iVar3) {
    do {
      fVar6 = (float10)FUN_00583f20(&local_10b0,(float)local_10b8);
      FUN_005829e0((float)fVar6);
      local_10b8 = local_10b8 + 1;
    } while (local_10b8 < iVar3);
  }
  local_1084 = local_1020;
  local_1088 = 2;
  local_1070 = 0;
  local_107c = 1;
  local_1078 = 0;
  local_1064 = 0;
  local_1080 = 0;
  local_10a4 = *(int *)(param_1 + 4);
  local_14 = 0;
  local_10b4 = 0;
  if (0 < local_10a4) {
    local_10a8 = (float)(local_10a4 + -1);
    local_10b8 = 0;
    local_1090 = iVar3;
    local_108c = iVar3;
    do {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
LAB_0049393d:
        fVar1 = (float)(*(int *)(param_1 + 4) + -1);
      }
      else if (iVar3 == 1) {
        fVar1 = (float)*(int *)(param_1 + 4);
      }
      else {
        fVar1 = DAT_006cc7a4;
        if (iVar3 == 2) goto LAB_0049393d;
      }
      fVar1 = ((float)local_10b4 * fVar1) / local_10a8;
      fVar6 = (float10)FUN_00583ff0(&local_10b0,fVar1);
      FUN_005829e0((float)fVar6);
      FUN_005829e0(fVar1);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc) + local_10b8);
      puVar4[1] = local_109c;
      local_10b8 = local_10b8 + 0x10;
      *puVar4 = local_10a0;
      puVar4[2] = local_1058;
      local_10b4 = local_10b4 + 1;
    } while (local_10b4 < local_10a4);
  }
  ExceptionList = local_1c;
  return;
}

