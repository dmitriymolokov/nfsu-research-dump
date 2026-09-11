/* Decompiled from Speed.exe @ 004bbc90 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_004bbc90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006882e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) &&
     (iVar2 = 0, iVar1 = DAT_00736168, 0 < DAT_0073616c)) {
    while (*(short *)(iVar1 + 0x6c) != param_1) {
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xfc;
      if (DAT_0073616c <= iVar2) {
        ExceptionList = local_c;
        return;
      }
    }
    local_4 = 0;
    uVar3 = FUN_004b92a0();
    uVar4 = FUN_004f42f0("TRACK_%d_SPLINE",(int)*(short *)(iVar1 + 0x6c));
    FUN_004bba40(uVar3,uVar4);
  }
  ExceptionList = local_c;
  return;
}

