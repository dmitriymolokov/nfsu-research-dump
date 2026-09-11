/* Decompiled from Speed.exe @ 00577210 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_00577210(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068564b;
  local_c = ExceptionList;
  puVar1 = param_1 + 8;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ba6d8;
  *puVar1 = puVar1;
  param_1[9] = puVar1;
  local_4 = 0;
  param_1[7] = param_2;
  FUN_00564940(&DAT_0073b14c,&LAB_00576e90);
  ExceptionList = local_c;
  return param_1;
}

