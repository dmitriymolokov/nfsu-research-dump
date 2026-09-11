/* Decompiled from Speed.exe @ 00474460 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00474460(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00685c3f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c8468;
  param_1[2] = &PTR_LAB_006c845c;
  *(undefined1 *)(*(int *)(param_1[0xd] + 0x3c) + 0x1d) = 1;
  *(undefined4 *)(param_1[8] + 0x140) = 1;
  iVar2 = DAT_00735f80;
  iVar3 = *(int *)(DAT_00735f80 + 0x18);
  local_4 = 1;
  puVar1 = (undefined4 *)param_1[10];
  *puVar1 = *(undefined4 *)(DAT_00735f80 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar3 + -1;
  *(undefined4 **)(iVar2 + 0x10) = puVar1;
  piVar4 = param_1 + 0xe;
  iVar3 = 4;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4 = local_4 & 0xffffff00;
  FUN_0046a9b0();
  *param_1 = &PTR_LAB_006caadc;
  ExceptionList = pvStack_c;
  return;
}

