/* Decompiled from Speed.exe @ 005093b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_005093b0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688f7f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c0224;
  local_4 = 3;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar1 + 0x18));
  }
  FUN_005041a0();
  FUN_005041a0();
  FUN_005041a0();
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

