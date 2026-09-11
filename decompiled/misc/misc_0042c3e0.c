/* Decompiled from Speed.exe @ 0042c3e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042c3e0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686db3;
  local_c = ExceptionList;
  if (*(int *)(unaff_ESI + 0x290) == 0) {
    ExceptionList = &local_c;
    FUN_0042c6d0(unaff_ESI,0,0);
    pvVar1 = _malloc(0x24);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0047edb0(pvVar1,*(undefined4 *)(unaff_ESI + 0x18),unaff_ESI);
    }
    *(undefined4 *)(unaff_ESI + 0x290) = uVar2;
  }
  ExceptionList = local_c;
  return;
}

