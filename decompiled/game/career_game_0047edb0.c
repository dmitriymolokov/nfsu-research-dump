/* Decompiled from Speed.exe @ 0047edb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0047edb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685bb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[5] = param_2;
  *param_1 = &PTR_LAB_006c8118;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  puVar1 = param_1 + 1;
  *DAT_00779700 = puVar1;
  puVar2 = puVar1;
  param_1[2] = DAT_00779700;
  DAT_00779700 = puVar2;
  *puVar1 = &DAT_007796fc;
  param_1[7] = param_3;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c8138;
  param_1[8] = 0xffffffff;
  FUN_0047ee50(0);
  ExceptionList = local_c;
  return param_1;
}

