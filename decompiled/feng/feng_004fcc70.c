/* Decompiled from Speed.exe @ 004fcc70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_004fcc70(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if (-1 < unaff_EDI) {
    iVar2 = *(int *)(unaff_ESI + 0x30);
    if (*(char *)(unaff_ESI + 0x2c) != '\0') {
      iVar2 = FUN_004fc0e0();
    }
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      while ((iVar1 != 0 && (*(int *)(iVar2 + 0xc) < unaff_EDI))) {
        iVar2 = *(int *)(iVar2 + 4);
        iVar1 = *(int *)(iVar2 + 4);
      }
      return iVar2;
    }
  }
  return unaff_ESI + 8;
}

