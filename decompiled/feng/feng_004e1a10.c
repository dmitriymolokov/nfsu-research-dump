/* Decompiled from Speed.exe @ 004e1a10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e1a10(void)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  
  cVar1 = FUN_004e0bf0();
  if (cVar1 == '\0') {
    cVar1 = FUN_004e0bf0();
    if (cVar1 == '\0') {
      return;
    }
    iVar2 = unaff_EDI + 100;
  }
  else {
    iVar2 = unaff_EDI + 0x40;
  }
  if (iVar2 != 0) {
    FUN_004e1a50();
  }
  return;
}

