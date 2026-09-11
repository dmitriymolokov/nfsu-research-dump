/* Decompiled from Speed.exe @ 00467220 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00467220(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686518;
  local_c = ExceptionList;
  pcVar1 = (char *)(*(int *)(unaff_EDI + 600) + 0x1c);
  ExceptionList = &local_c;
  *pcVar1 = *pcVar1 + '\x01';
  pcVar1 = (char *)(*(int *)(unaff_EDI + 0x25c) + 0x1c);
  *pcVar1 = *pcVar1 + '\x01';
  DAT_00736004 = DAT_00736004 + 1;
  if (DAT_0073602c < DAT_00736004) {
    DAT_0073602c = DAT_00736004;
  }
  iVar2 = FUN_00567160();
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00465640();
  }
  *(undefined4 *)(unaff_EDI + 0x264) = uVar3;
  ExceptionList = local_c;
  return;
}

