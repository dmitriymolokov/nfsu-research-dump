/* Decompiled from Speed.exe @ 00469d70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00469d70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c8798;
  DAT_00736018 = DAT_00736018 + -1;
  local_4 = 0;
  if (*(char *)(param_1 + 5) == '\0') {
    if ((*(int *)(param_1[4] + 0x10) == 1) && (*(int *)(*(int *)(param_1[0x50] + 0x14) + 4) != 3)) {
      FUN_00472ea0();
    }
  }
  else {
    if (*(int *)(param_1[4] + 0x10) == 1) {
      FUN_00472df0();
    }
    if ((void *)param_1[4] != (void *)0x0) {
      _free((void *)param_1[4]);
    }
  }
  *param_1 = &PTR_FUN_006c85b8;
  DAT_00736010 = DAT_00736010 + -1;
  local_4 = 0xffffffff;
  FUN_00468410();
  ExceptionList = local_c;
  return;
}

