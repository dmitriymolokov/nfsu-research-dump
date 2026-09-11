/* Decompiled from Speed.exe @ 00446b70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00446b70(void)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int unaff_EDI;
  
  do {
    bVar2 = false;
    iVar4 = 0;
    if (*(int *)(unaff_EDI + 0x10) == 1 || *(int *)(unaff_EDI + 0x10) + -1 < 0) {
      return;
    }
    psVar3 = (short *)(unaff_EDI + 0x14);
    do {
      sVar1 = psVar3[1];
      if (sVar1 < *psVar3) {
        psVar3[1] = *psVar3;
        *psVar3 = sVar1;
        bVar2 = true;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 0x10) + -1);
  } while (bVar2);
  return;
}

