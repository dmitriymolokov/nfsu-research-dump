/* Decompiled from Speed.exe @ 00424550 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00424550(void)

{
  void *pvVar1;
  int iVar2;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0068608b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004244b0();
  FUN_00443a10(&DAT_007372b0,unaff_EDI + 0x70);
  FUN_00443a10(&DAT_007372b0,unaff_EDI + 0x80);
  pvVar1 = _malloc(0x18);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00492e70(pvVar1,0x42c80000,0);
  }
  local_4 = 0xffffffff;
  *(int *)(unaff_EDI + 0xa8) = iVar2;
  if ((iVar2 != 0) && (4 < *(int *)(iVar2 + 4))) {
    ExceptionList = local_c;
    return 1;
  }
  FUN_004244b0();
  ExceptionList = local_c;
  return 0;
}

