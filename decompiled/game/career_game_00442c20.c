/* Decompiled from Speed.exe @ 00442c20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00442c20(int param_1)

{
  int unaff_ESI;
  int *unaff_EDI;
  int local_4;
  
  local_4 = -1;
  if ((*(char *)(unaff_ESI + 0x3d) == '\0') && (*unaff_EDI != 0)) {
    local_4 = (int)*(short *)(*unaff_EDI + 10);
  }
  FUN_00571c20(unaff_ESI,&local_4,1,4,0);
  if (*(char *)(unaff_ESI + 0x3d) != '\0') {
    if (-1 < local_4) {
      *unaff_EDI = *(int *)(param_1 + 0x10 + local_4 * 4);
      return;
    }
    *unaff_EDI = 0;
  }
  return;
}

