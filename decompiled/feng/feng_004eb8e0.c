/* Decompiled from Speed.exe @ 004eb8e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004eb8e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_006c2d28;
  DAT_00735da0 = DAT_00735da0 + -1;
  local_4 = 0;
  if (DAT_00735da0 < 0) {
    DAT_00735da0 = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x16,0xc,0x20,FUN_00504010);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

