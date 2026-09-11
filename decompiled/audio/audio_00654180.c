/* Decompiled from Speed.exe @ 00654180 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00654180(void)

{
  int *piVar1;
  
  DAT_00713ff1 = 0;
  while (DAT_00713ff0 != '\0') {
    Sleep(0);
  }
  FUN_00653d50();
  FUN_0064e520();
  FUN_006510d0(DAT_0071400c);
  if (DAT_00714014 != 0) {
    FUN_006510d0(DAT_00714014);
  }
  if (DAT_00713ff4 != '\0') {
    piVar1 = &DAT_00713ffc;
    do {
      if (*piVar1 != 0) {
        FUN_006510d0(*piVar1);
      }
      piVar1 = piVar1 + 1;
    } while ((int)piVar1 < 0x714004);
  }
  FUN_0064e540();
  return 0;
}

