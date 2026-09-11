/* Decompiled from Speed.exe @ 004ffb70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_004ffb70(undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006858b8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ffb00(param_2);
  ExceptionList = local_c;
  return 0;
}

