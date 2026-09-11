/* Decompiled from Speed.exe @ 005a3780 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a3780(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int unaff_ESI;
  int unaff_EDI;
  
  bVar2 = false;
  pcVar5 = &DAT_007373ac;
  do {
    if (0x737653 < (int)pcVar5) {
      return;
    }
    if (*(int *)(pcVar5 + -4) == unaff_EDI) {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        bVar2 = true;
        iVar3 = 0;
        do {
          if ((&DAT_007373a8)[iVar3 * 2] == unaff_EDI) {
            *(uint *)(unaff_ESI + 0x10) =
                 *(uint *)(unaff_ESI + 0x10) | 1 << ((&DAT_007373ad)[iVar3 * 8] & 0x1f);
            goto LAB_005a3834;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x55);
        *(undefined4 *)(unaff_ESI + 0x10) = *(undefined4 *)(unaff_ESI + 0x10);
      }
      else if (cVar1 == '\x01') {
        iVar3 = 0;
        do {
          bVar2 = true;
          if ((&DAT_007373a8)[iVar3 * 2] == unaff_EDI) {
            *(uint *)(unaff_ESI + 0x14) =
                 *(uint *)(unaff_ESI + 0x14) | 1 << ((&DAT_007373ad)[iVar3 * 8] & 0x1f);
            goto LAB_005a3834;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x55);
        *(undefined4 *)(unaff_ESI + 0x14) = *(undefined4 *)(unaff_ESI + 0x14);
      }
      else if (cVar1 == '\x02') {
        bVar2 = true;
        uVar4 = FUN_005a3750(unaff_ESI);
        *(uint *)(unaff_ESI + 0x18) = *(uint *)(unaff_ESI + 0x18) | uVar4;
      }
    }
LAB_005a3834:
    pcVar5 = pcVar5 + 8;
    if (bVar2) {
      return;
    }
  } while( true );
}

