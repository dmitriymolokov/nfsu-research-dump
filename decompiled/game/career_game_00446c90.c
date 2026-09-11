/* Decompiled from Speed.exe @ 00446c90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00446c90(void)

{
  char cVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int unaff_ESI;
  char local_5;
  int local_4;
  
  iVar6 = 0;
  if (0 < *(int *)(unaff_ESI + 0x10)) {
    psVar5 = (short *)(unaff_ESI + 0x14);
    do {
      iVar4 = (int)*psVar5 % 100;
      cVar1 = (char)((int)*psVar5 / 100) + '@';
      if ((('@' < cVar1) && (cVar1 < 'U')) && ((iVar4 == 0 || (iVar4 == 10)))) {
        FUN_00446b10();
        iVar6 = iVar6 + -1;
        psVar5 = psVar5 + -1;
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 1;
    } while (iVar6 < *(int *)(unaff_ESI + 0x10));
  }
  local_5 = 'A';
  do {
    local_4 = 0;
    if (0 < *(int *)(unaff_ESI + 0x10)) {
      psVar5 = (short *)(unaff_ESI + 0x14);
      do {
        cVar1 = (char)((int)*psVar5 / 100) + '@';
        if (cVar1 == local_5) {
          if ((int)*psVar5 % 100 < 10) {
            sVar3 = (cVar1 + -0x40) * 100;
            iVar6 = *(int *)(unaff_ESI + 0x10);
            if (iVar6 < 0x40) {
              iVar4 = 0;
              if (0 < iVar6) {
                psVar2 = (short *)(unaff_ESI + 0x14);
                do {
                  if (*psVar2 == sVar3) goto LAB_00446d7e;
                  iVar4 = iVar4 + 1;
                  psVar2 = psVar2 + 1;
                } while (iVar4 < *(int *)(unaff_ESI + 0x10));
              }
LAB_00446d76:
              *(short *)(unaff_ESI + 0x14 + iVar6 * 2) = sVar3;
              *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
            }
          }
          else {
            iVar6 = *(int *)(unaff_ESI + 0x10);
            sVar3 = cVar1 * 100 + -0x18f6;
            if (iVar6 < 0x40) {
              iVar4 = 0;
              if (0 < iVar6) {
                psVar2 = (short *)(unaff_ESI + 0x14);
                do {
                  if (*psVar2 == sVar3) goto LAB_00446d7e;
                  iVar4 = iVar4 + 1;
                  psVar2 = psVar2 + 1;
                } while (iVar4 < *(int *)(unaff_ESI + 0x10));
              }
              goto LAB_00446d76;
            }
          }
        }
LAB_00446d7e:
        local_4 = local_4 + 1;
        psVar5 = psVar5 + 1;
      } while (local_4 < *(int *)(unaff_ESI + 0x10));
    }
    local_5 = local_5 + '\x01';
    if ('T' < local_5) {
      return;
    }
  } while( true );
}

