/* Decompiled from Speed.exe @ 0064c620 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0064c620(void)

{
  int iVar1;
  
  if ((DAT_00713ee4 != '\0') && (iVar1 = 0, '\0' < DAT_00713ee7)) {
    do {
      (*(code *)(&DAT_00713f08)[iVar1])();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00713ee7);
  }
  return;
}

