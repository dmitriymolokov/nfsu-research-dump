/* Decompiled from Speed.exe @ 004dc280 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dc280(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  uint unaff_EDI;
  undefined8 uVar6;
  
  iVar1 = *(int *)(unaff_ESI + 0xb0c);
  iVar2 = *(int *)(unaff_ESI + 0xb10);
  bVar3 = false;
  if (unaff_EDI < 0x9120409f) {
    if (unaff_EDI == 0x9120409e) {
      iVar4 = iVar2 + -1;
LAB_004dc2d4:
      *(int *)(unaff_ESI + 0xb10) = iVar4;
    }
    else if (unaff_EDI == 0x72619778) {
      *(int *)(unaff_ESI + 0xb0c) = iVar1 + -1;
    }
    else {
      if (unaff_EDI != 0x911c0a4b) goto LAB_004dc2df;
      *(int *)(unaff_ESI + 0xb0c) = iVar1 + 1;
    }
    bVar3 = true;
  }
  else if (unaff_EDI == 0xb5971bf1) {
    iVar4 = iVar2 + 1;
    goto LAB_004dc2d4;
  }
LAB_004dc2df:
  FUN_004dc230();
  iVar4 = *(int *)(unaff_ESI + 0xb10);
  uVar6 = FUN_004dbad0();
  iVar5 = (int)((ulonglong)uVar6 >> 0x20);
  if (((int)uVar6 != 0) && (*(int *)((int)uVar6 + 0x10) != 0)) goto LAB_004dc37e;
  if (unaff_EDI < 0x9120409f) {
    if (unaff_EDI == 0x9120409e) {
      iVar4 = iVar4 + -1;
LAB_004dc33f:
      *(int *)(unaff_ESI + 0xb10) = iVar4;
    }
    else if (unaff_EDI == 0x72619778) {
      *(int *)(unaff_ESI + 0xb0c) = iVar5 + -1;
    }
    else if (unaff_EDI == 0x911c0a4b) {
      *(int *)(unaff_ESI + 0xb0c) = iVar5 + 1;
    }
  }
  else if (unaff_EDI == 0xb5971bf1) {
    iVar4 = iVar4 + 1;
    goto LAB_004dc33f;
  }
  FUN_004dc230();
  iVar4 = FUN_004dbad0();
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x10) == 0)) {
    *(int *)(unaff_ESI + 0xb0c) = iVar1;
    *(int *)(unaff_ESI + 0xb10) = iVar2;
  }
LAB_004dc37e:
  if (bVar3) {
    FUN_004dbf90();
  }
  return;
}

