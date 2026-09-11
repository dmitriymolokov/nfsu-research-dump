/* Decompiled from Speed.exe @ 004e96d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004e96d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006879f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c2d54;
  DAT_006fb038 = param_1[0x14];
  local_4 = 0;
  FUN_0051bb50();
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

