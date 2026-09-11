/* Decompiled from Speed.exe @ 0056a040 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0056a040(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685feb;
  local_c = ExceptionList;
  pvVar1 = *(void **)(unaff_EDI + 8);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_0056c140(pvVar1);
    _free(pvVar1);
    *(undefined4 *)(unaff_EDI + 8) = 0;
  }
  if (param_1 != 0) {
    FUN_004323f0(unaff_EDI + 0x10,param_1);
    pvVar1 = _malloc(0x1dc0);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0056a130(pvVar1,unaff_EDI + 0x10,0);
    }
    *(undefined4 *)(unaff_EDI + 8) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

