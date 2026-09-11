/* Decompiled from Speed.exe @ 0057bf90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0057bf90(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00578060(param_1,param_2,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_006ba40c;
  param_1[0x25] = 0;
  pcVar7 = "TrainCar";
  iVar8 = -1;
  uVar3 = 0x54;
  do {
    pbVar1 = (byte *)(pcVar7 + 1);
    iVar8 = iVar8 * 0x21 + uVar3;
    pcVar7 = pcVar7 + 1;
    uVar3 = (uint)*pbVar1;
  } while (*pbVar1 != 0);
  param_1[0x24] = 0;
  iVar4 = FUN_00577d10(iVar8);
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x2c);
    if (iVar2 == iVar4 + 0x2c) {
      puVar6 = (undefined *)FUN_00577e60(0);
    }
    else if (iVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)(iVar2 + -4);
    }
    while (puVar6 != (undefined *)0x0) {
      param_1[param_1[0x24] + 0x26] = puVar6;
      param_1[0x24] = param_1[0x24] + 1;
      if (iVar8 == DAT_0073b128) {
        puVar5 = &DAT_0073b118;
      }
      else {
        if ((undefined4 **)DAT_0073b138 == &DAT_0073b138) break;
        while( true ) {
          uVar9 = FUN_00577d10(iVar8);
          puVar5 = (undefined *)uVar9;
          if (puVar5 != (undefined *)0x0) break;
          if ((undefined4 **)*(undefined4 *)((ulonglong)uVar9 >> 0x20) == &DAT_0073b138)
          goto LAB_0057c09f;
        }
      }
      puVar6 = *(undefined **)(puVar5 + 0x2c);
      if (puVar6 == puVar5 + 0x2c) {
        puVar6 = (undefined *)FUN_00577e60(0);
      }
      else if (puVar6 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar6 + -4;
      }
    }
  }
LAB_0057c09f:
  if (*(int *)(param_1[8] + 0x14) != 0) {
    *(float *)(*(int *)(param_1[8] + 0x14) + 100) = (float)(int)param_1[0x24] * _DAT_006b5c10;
  }
  *(undefined4 *)(param_1[0xc] + 0x18) = 1;
  ExceptionList = local_c;
  return param_1;
}

