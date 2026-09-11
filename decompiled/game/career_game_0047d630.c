/* Decompiled from Speed.exe @ 0047d630 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_0047d630(void)

{
  char cVar1;
  char *pcVar2;
  char *unaff_ESI;
  char local_68;
  char local_67 [99];
  
  if (DAT_00734958 == 0) {
    FUN_00401cd0(&DAT_00779730,0);
    if (*unaff_ESI != '\0') {
      pcVar2 = &local_68;
      do {
        cVar1 = pcVar2[(int)(unaff_ESI + (1 - (int)&local_68))];
        pcVar2 = pcVar2 + 1;
        *pcVar2 = cVar1;
      } while (cVar1 != '\0');
    }
  }
  return;
}

