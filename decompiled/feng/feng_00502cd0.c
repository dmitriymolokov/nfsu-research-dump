/* Decompiled from Speed.exe @ 00502cd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00502cd0(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684ceb;
  local_c = ExceptionList;
  for (iVar3 = *(int *)(unaff_EDI + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    ExceptionList = &local_c;
    if (*(int *)(iVar3 + 0x690) != 0) goto LAB_00502d52;
  }
  ExceptionList = &local_c;
  pvVar2 = _malloc(0x6a0);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00502dd0(pvVar2);
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(unaff_EDI + 8);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(unaff_EDI + 8) = iVar3;
    if (*(int *)(unaff_EDI + 0xc) == 0) {
      *(int *)(unaff_EDI + 0xc) = iVar3;
    }
    *(int *)(unaff_EDI + 4) = *(int *)(unaff_EDI + 4) + 1;
  }
LAB_00502d52:
  if (*(int *)(iVar3 + 0x694) != 0) {
    FUN_004ee670();
  }
  *(int *)(iVar3 + 0x69c) = *(int *)(iVar3 + 0x69c) + 1;
  ExceptionList = local_c;
  return;
}

