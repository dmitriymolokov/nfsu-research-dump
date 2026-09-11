/* Decompiled from Speed.exe @ 004bb870 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004bb870(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_006879f8;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c5bc0;
  iVar1 = param_1[0x15];
  local_4 = 0;
  while (iVar1 != 0) {
    FUN_0058a850();
    iVar1 = param_1[0x15];
  }
  if (param_1[0x10] != 0) {
    FUN_00546060();
  }
  if (param_1[0x11] != 0) {
    FUN_00546060();
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

