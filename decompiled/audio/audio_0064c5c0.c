/* Decompiled from Speed.exe @ 0064c5c0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0064c5c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_00713ee7) {
    while ((&DAT_00713f08)[iVar1] != param_1) {
      iVar1 = iVar1 + 1;
      if (DAT_00713ee7 <= iVar1) {
        return;
      }
    }
    DAT_00713ee7 = DAT_00713ee7 + -1;
    if (iVar1 < DAT_00713ee7) {
      do {
        (&DAT_00713f08)[iVar1] = (&DAT_00713f0c)[iVar1];
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_00713ee7);
    }
  }
  return;
}

