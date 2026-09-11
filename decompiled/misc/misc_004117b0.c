/* Decompiled from Speed.exe @ 004117b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_004117b0(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = DAT_0073639c;
  if (DAT_0070108d == '\n') {
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    pcVar1 = DAT_0073639c;
    if (pcVar2[-1] == '\n') {
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2[-1] = '\0';
    }
    return 1;
  }
  if (DAT_0070108d != '\0') {
    return 0;
  }
  if (DAT_007363a8 != 0) {
    *DAT_0073639c = '\0';
    DAT_007363a0 = 0;
    DAT_007363a4 = 0;
  }
  return 0xffffffff;
}

