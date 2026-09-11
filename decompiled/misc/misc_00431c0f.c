/* Decompiled from Speed.exe @ 00431c0f */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_0043197d::caseD_9b(void)

{
  char cVar1;
  char unaff_BL;
  int unaff_ESI;
  
  cVar1 = FUN_0041f600();
  if (cVar1 == '\0') {
    cVar1 = FUN_0042ab30();
    if (cVar1 == '\0') {
      if (unaff_BL == '\0') {
        cVar1 = FUN_004318d0();
        if ((cVar1 != '\0') && (DAT_007000e8 != 0)) {
          FUN_00465530();
        }
      }
      else {
        cVar1 = FUN_00431900();
        if (cVar1 != '\0') {
          cVar1 = FUN_004654f0();
          if (cVar1 != '\0') {
            if (*DAT_0073619c < 4) {
              FUN_0042abf0();
            }
            else {
              _DAT_0073654c = 1;
              *(undefined1 *)(unaff_ESI + 0x270) = 1;
            }
            if (*(char *)(unaff_ESI + 0x21) != '\0') {
              FUN_00574d90(0x3f800000);
              return;
            }
          }
        }
      }
    }
  }
  return;
}

