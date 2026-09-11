/* Decompiled from Speed.exe @ 00477250 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00477250(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00685bff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_006c8364;
  param_1[2] = &PTR_LAB_006c8358;
  *(undefined1 *)(*(int *)(param_1[0x17] + 0x3c) + 0x1d) = 1;
  *(undefined4 *)(param_1[8] + 0x140) = 1;
  local_4 = 1;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  iVar3 = DAT_00735f80;
  puVar1 = (undefined4 *)param_1[0x14];
  iVar2 = *(int *)(DAT_00735f80 + 0x18);
  *puVar1 = *(undefined4 *)(DAT_00735f80 + 0x10);
  *(undefined4 **)(iVar3 + 0x10) = puVar1;
  *(int *)(iVar3 + 0x18) = iVar2 + -1;
  local_4 = local_4 & 0xffffff00;
  FUN_0046a9b0();
  *param_1 = &PTR_LAB_006caadc;
  ExceptionList = pvStack_c;
  return;
}

