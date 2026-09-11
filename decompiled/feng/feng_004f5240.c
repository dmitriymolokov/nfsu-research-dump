/* Decompiled from Speed.exe @ 004f5240 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5240(void)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006862b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *unaff_EDI = &PTR_LAB_006c1b18;
  pvVar2 = _malloc(0x5254);
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004ee700();
  }
  unaff_EDI[2] = iVar3;
  *(undefined4 **)(iVar3 + 0x10c) = unaff_EDI;
  FUN_004eea10(unaff_EDI[2]);
  FUN_004eeab0();
  puVar1 = (undefined1 *)unaff_EDI[2];
  iVar3 = *(int *)(puVar1 + 0xe4);
  *puVar1 = 1;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    *(undefined1 *)(iVar3 + 0x14) = *puVar1;
  }
  *(undefined1 *)(unaff_EDI[2] + 2) = 1;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  *(undefined1 *)((int)unaff_EDI + 5) = 0;
  *(undefined1 *)((int)unaff_EDI + 6) = 1;
  pvVar2 = _malloc(0x3420);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    unaff_EDI[3] = 0;
    ExceptionList = local_c;
    return;
  }
  uVar4 = FUN_004f50d0(pvVar2);
  unaff_EDI[3] = uVar4;
  ExceptionList = local_c;
  return;
}

