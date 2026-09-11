/* Decompiled from Speed.exe @ 004f6a10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6a10(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686c88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    local_4 = 0;
    FUN_004ffb00(iVar1);
  }
  ExceptionList = local_c;
  return;
}

