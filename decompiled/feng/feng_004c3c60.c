/* Decompiled from Speed.exe @ 004c3c60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c3c60(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006879f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c5488;
  local_4 = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
      FUN_004f62f0();
    }
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

