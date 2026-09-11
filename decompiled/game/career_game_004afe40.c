/* Decompiled from Speed.exe @ 004afe40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004afe40(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006873d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c61e0;
  local_4 = 2;
  FUN_004ae070(&DAT_00746dd0);
  if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x18])(1);
  }
  pvVar1 = (void *)param_1[0x10];
  if (pvVar1 != (void *)0x0) {
    FUN_0056a0d0();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x11];
  if (pvVar1 != (void *)0x0) {
    FUN_0056a0d0();
    _free(pvVar1);
  }
  if (*(int *)(DAT_007356a8 + 0xbc) != 0) {
    FUN_00523060(*(int *)(DAT_007356a8 + 0xbc));
  }
  FUN_004aea00(param_1 + 0x20);
  if ((param_1[0x14] != 0) || (param_1[0x15] != 0)) {
    iVar2 = param_1[0x12];
    piVar3 = (int *)param_1[0x13];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
  }
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

