/* Decompiled from Speed.exe @ 00569990 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00569990(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686823;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = _malloc(0x1dc0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0056a130(pvVar1,param_1);
  }
  *(undefined4 *)(unaff_ESI + 0x4d4) = uVar2;
  FUN_005712a0(uVar2,unaff_ESI);
  ExceptionList = pvStack_c;
  return;
}

