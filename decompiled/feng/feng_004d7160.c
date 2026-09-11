/* Decompiled from Speed.exe @ 004d7160 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d7160(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c3d50;
  local_4 = 0;
  FUN_004d6eb0(param_1 + 0x10);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

