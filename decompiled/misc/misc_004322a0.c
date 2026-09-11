/* Decompiled from Speed.exe @ 004322a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004322a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  if ((*(int *)(unaff_EDI + 4) == 1) && (*(char *)(unaff_EDI + 0x734) == '\0')) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x120);
    do {
      if (iVar1 == 2) break;
      if (*piVar2 == -1) {
        *(int *)(param_1 + 0x120 + iVar1 * 4) = (int)*(char *)(unaff_EDI + 1);
        break;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 3);
  }
  if (*(int *)(param_1 + 300) < 0x1e) {
    iVar1 = 0;
    if (0 < DAT_00734594) {
      piVar2 = DAT_00734590;
      do {
        if ((*piVar2 == *(int *)(unaff_EDI + 0x10)) &&
           (piVar2[1] == (int)*(char *)(unaff_EDI + 0x17))) break;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x10;
      } while (iVar1 < DAT_00734594);
    }
    FUN_00432360();
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
    if (*(char *)(unaff_EDI + 0x734) != '\0') {
      if (*(int *)(unaff_EDI + 4) == 1) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        return;
      }
      if (*(int *)(unaff_EDI + 4) == 2) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
    }
  }
  return;
}

