/* Decompiled from Speed.exe @ 00460f50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460f50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685526;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c8ad0;
  local_4 = 1;
  if (*(int *)(param_1[0x9b] + 0x18) != 0) {
    _DAT_0073654c = 0;
  }
  FUN_004613b0();
  FUN_00460820();
  *param_1 = &PTR_FUN_006caa58;
  ExceptionList = local_c;
  return;
}

