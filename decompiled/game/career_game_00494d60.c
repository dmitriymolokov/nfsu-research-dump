/* Decompiled from Speed.exe @ 00494d60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00494d60(void)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = DAT_0073578c;
  puStack_8 = &LAB_00688bfb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_0073578c != 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  local_4 = 0xffffffff;
  FUN_00421900();
  ExceptionList = local_c;
  return;
}

