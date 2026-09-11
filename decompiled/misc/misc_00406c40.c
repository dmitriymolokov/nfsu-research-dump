/* Decompiled from Speed.exe @ 00406c40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00406c40(int param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int unaff_ESI;
  int iVar4;
  
  bVar2 = true;
  if ((*(char *)(unaff_ESI + 0x264) != '\0') &&
     ((*(int *)(unaff_ESI + 0x23c) == 3 || (*(int *)(unaff_ESI + 0x23c) == 4)))) {
    bVar2 = false;
  }
  if (((*(char *)(unaff_ESI + 0x265) != '\0') && (*(char *)(unaff_ESI + 0x268) == '\0')) &&
     (*(int *)(unaff_ESI + 0x23c) == 1)) {
    bVar2 = false;
  }
  if (((*(char *)(unaff_ESI + 0x266) != '\0') && (*(char *)(unaff_ESI + 0x268) == '\0')) &&
     (*(int *)(unaff_ESI + 0x23c) == 2)) {
    bVar2 = false;
  }
  if (((*(char *)(unaff_ESI + 0x267) != '\0') && (*(char *)(unaff_ESI + 0x268) != '\0')) &&
     ((*(int *)(unaff_ESI + 0x23c) == 2 || (*(int *)(unaff_ESI + 0x23c) == 1)))) {
    bVar2 = false;
  }
  piVar3 = (int *)(unaff_ESI + 0x18);
  iVar4 = 0x20;
  do {
    iVar1 = *(int *)(unaff_ESI + 0x23c);
    if (*piVar3 == iVar1) {
      if (((((*(int *)(unaff_ESI + 0x240) == 1) && (bVar2)) && (iVar1 != 4)) &&
          ((iVar1 != 3 && (iVar1 != 1)))) && (iVar1 != 2)) {
        bVar2 = false;
      }
      else {
        *piVar3 = 0;
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = FUN_00406d50(unaff_ESI);
  *(undefined4 *)(unaff_ESI + 0x58 + (iVar4 + param_1 * 4) * 4) = *(undefined4 *)(unaff_ESI + 0x23c)
  ;
  *(undefined4 *)(unaff_ESI + 0x23c) = 0;
  DAT_00736508 = 0;
  return;
}

