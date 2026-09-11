/* Decompiled from Speed.exe @ 004f8240 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f8240(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -4;
    }
    iVar2 = unaff_ESI;
    if (unaff_ESI == -4) {
      iVar2 = 0;
    }
    if (iVar1 == iVar2) break;
    if (*(int *)(iVar1 + 0xc) == unaff_EDI) {
      *(int *)(unaff_ESI + 0xc) = iVar1;
      if (*(int *)(*(int *)(unaff_ESI + 0x10) + 0x18) == 2) {
        FUN_0041f060(*(int *)(unaff_ESI + 0x10),*(undefined4 *)(iVar1 + 0x10));
      }
      return;
    }
    iVar1 = *(int *)(iVar1 + 4);
  }
  return;
}

