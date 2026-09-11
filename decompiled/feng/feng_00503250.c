/* Decompiled from Speed.exe @ 00503250 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00503250(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int unaff_EDI;
  
  for (iVar3 = *(int *)(unaff_EDI + 0x14); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    if (*(short *)(iVar3 + 0xe) != 0x20) goto LAB_005032b4;
  }
  pvVar2 = _malloc(0x18);
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005030d0();
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(unaff_EDI + 0x14);
    *(int *)(iVar3 + 4) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(unaff_EDI + 0x14) = iVar3;
    if (*(int *)(unaff_EDI + 0x18) == 0) {
      *(int *)(unaff_EDI + 0x18) = iVar3;
    }
    *(int *)(unaff_EDI + 0x10) = *(int *)(unaff_EDI + 0x10) + 1;
  }
LAB_005032b4:
  FUN_005031c0();
  return;
}

