/* Decompiled from Speed.exe @ 004e8380 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004e8380(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006879f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c2d84;
  local_4 = 0;
  if ((*(char *)(param_1 + 0x10) != '\0') && (DAT_0073578c != 0)) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar1 + 0xdc;
    if ((iVar2 == 0) || (iVar2 = FUN_004fd1e0(iVar2), iVar2 == 0)) {
      FUN_004eede0(iVar1,"PC_MenuBar.fng",0x42,0);
    }
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

