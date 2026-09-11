/* Decompiled from Speed.exe @ 00578500 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00578500(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = DAT_007344c8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686598;
  local_c = ExceptionList;
  puVar1 = *(undefined4 **)(unaff_EDI + 0x30);
  ExceptionList = &local_c;
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_00591c90(puVar1);
    iVar2 = *(int *)(iVar3 + 0x18);
    *puVar1 = *(undefined4 *)(iVar3 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar2 + -1;
    *(undefined4 **)(iVar3 + 0x10) = puVar1;
  }
  iVar3 = FUN_00567160();
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00591bf0(*(undefined4 *)(unaff_EDI + 0x1c),param_1,param_2 != 0);
  }
  *(undefined4 *)(unaff_EDI + 0x30) = uVar4;
  ExceptionList = local_c;
  return;
}

