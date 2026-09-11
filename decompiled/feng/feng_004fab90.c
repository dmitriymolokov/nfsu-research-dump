/* Decompiled from Speed.exe @ 004fab90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fab90(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0xc4);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_004fa570();
  }
  ExceptionList = local_c;
  return;
}

