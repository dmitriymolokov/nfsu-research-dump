/* Decompiled from Speed.exe @ 004e28d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_004e28d0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  
  uVar2 = FUN_004e2680();
  if ((char)uVar2 != '\0') {
    return uVar2 & 0xffffff00;
  }
  if ((DAT_00735de0 == 0x13f365) && (*(int *)(unaff_ESI + 0xc) == 0x13f365)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (DAT_00735de4 != 0x10) {
    if (DAT_00735de4 == 0x11) {
      iVar3 = FUN_004e2520();
      if ((0 < iVar3) && (iVar3 < 6)) {
        return 1;
      }
    }
    else if ((*(byte *)(unaff_ESI + 0x12) == DAT_00735de4) || (bVar1)) {
      return 1;
    }
    return 0;
  }
  return (uint)(*(char *)(unaff_ESI + 0x12) == '\x10');
}

