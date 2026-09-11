/* Decompiled from Speed.exe @ 004e7860 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e7860(int param_1)

{
  int iVar1;
  int *piVar2;
  char unaff_BL;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = 0;
  if (*(int *)(unaff_EDI + 0x40) < 1) {
    return;
  }
  piVar2 = (int *)(unaff_EDI + 0x44);
  do {
    if (*piVar2 != 0) {
      iVar1 = *(int *)(*piVar2 + 0x10);
      if (iVar1 == -0xe81d3ba) {
        iVar1 = *(int *)(piVar2[0x30] + 0x10);
      }
      if (iVar1 == param_1) {
        *(char *)(iVar3 + 0x144 + unaff_EDI) = unaff_BL;
        if (unaff_BL == '\0') {
          FUN_004f6910(*(undefined4 *)(unaff_EDI + 0x44 + iVar3 * 4));
        }
        else {
          FUN_004f6970();
        }
        iVar1 = *(int *)(unaff_EDI + 0x84 + iVar3 * 4);
        if (iVar1 != 0) {
          if (unaff_BL == '\0') {
            FUN_004f6910(iVar1);
          }
          else {
            FUN_004f6970();
          }
        }
        iVar1 = *(int *)(unaff_EDI + 0xc4 + iVar3 * 4);
        if (iVar1 != 0) {
          if (unaff_BL == '\0') {
            FUN_004f6910(iVar1);
          }
          else {
            FUN_004f6970();
          }
        }
        iVar3 = *(int *)(unaff_EDI + 0x104 + iVar3 * 4);
        if (iVar3 == 0) {
          return;
        }
        if (unaff_BL == '\0') {
          FUN_004f6910(iVar3);
          return;
        }
        FUN_004f6970();
        return;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (*(int *)(unaff_EDI + 0x40) <= iVar3) {
      return;
    }
  } while( true );
}

