/* Decompiled from Speed.exe @ 004fbca0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fbca0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685458;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x58) = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  local_4 = 0xffffffff;
  FUN_004fef10();
  ExceptionList = local_c;
  return;
}

