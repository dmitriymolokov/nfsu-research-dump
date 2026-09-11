/* Decompiled from Speed.exe @ 004dcf10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004dcf10(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006879f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c3ba8;
  local_4 = 0;
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0xff;
  }
  FUN_004f39a0(param_1[3],0);
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

