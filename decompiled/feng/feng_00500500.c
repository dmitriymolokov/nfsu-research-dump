/* Decompiled from Speed.exe @ 00500500 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00500500(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006858b8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ffb00(param_1);
  ExceptionList = local_c;
  return;
}

