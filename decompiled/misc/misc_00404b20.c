/* Decompiled from Speed.exe @ 00404b20 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00404b20(void)

{
  char *pcVar1;
  char cVar2;
  char *unaff_EDI;
  
  if (unaff_EDI != (char *)0x0) {
    cVar2 = *unaff_EDI;
    while (cVar2 != '\0') {
      cVar2 = FUN_00671b76((int)*unaff_EDI);
      *unaff_EDI = cVar2;
      pcVar1 = unaff_EDI + 1;
      unaff_EDI = unaff_EDI + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

