/* Decompiled from Speed.exe @ 00503170 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00503170(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684ef8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  param_1[3] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = local_c;
  return;
}

