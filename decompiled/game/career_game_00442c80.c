/* Decompiled from Speed.exe @ 00442c80 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00442c80(void)

{
  int unaff_EBX;
  int *unaff_ESI;
  int unaff_EDI;
  int local_4;
  
  local_4 = -1;
  if ((*unaff_ESI != 0) && (unaff_EBX != 0)) {
    local_4 = ((*unaff_ESI - unaff_EBX) + -0x27c) / 0x88;
  }
  FUN_00571c20(unaff_EDI,&local_4,2,4,0);
  if (((*(char *)(unaff_EDI + 0x3c) != '\0' || *(char *)(unaff_EDI + 0x3d) != '\0') &&
      (*unaff_ESI != 0)) && (local_4 == -1)) {
    *unaff_ESI = 0;
  }
  if (*(char *)(unaff_EDI + 0x3d) != '\0') {
    if (-1 < local_4) {
      *unaff_ESI = local_4 * 0x88 + 0x27c + unaff_EBX;
      return;
    }
    *unaff_ESI = 0;
  }
  return;
}

