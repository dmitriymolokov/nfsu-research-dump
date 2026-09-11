/* Decompiled from Speed.exe @ 004ffa60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ffa60(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685398;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ffb00(param_1);
  ExceptionList = local_c;
  return;
}

