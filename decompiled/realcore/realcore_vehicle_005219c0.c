/* Decompiled from Speed.exe @ 005219c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int FUN_005219c0(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_00735678 == 0) && ((DAT_006f8710 != '\0' || (DAT_007356a4 != '\0')))) {
    iVar2 = 0;
    piVar1 = &DAT_0072ce58;
    do {
      if (*piVar1 == 2) {
        FUN_00565ce0();
        (&DAT_0072cfd8)[(&DAT_0072ce50)[iVar2 * 3]] = 0;
        (&DAT_0072ce58)[iVar2 * 3] = 0;
        return 0;
      }
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 + 1;
    } while ((int)piVar1 < 0x72cfd8);
    piVar1 = &DAT_0072ce58;
    do {
      if (*piVar1 == 1) {
        return 0;
      }
      piVar1 = piVar1 + 3;
    } while ((int)piVar1 < 0x72cfd8);
    iVar2 = 0;
    piVar1 = &DAT_0072ce54;
    do {
      if (*piVar1 == 1) {
        DAT_006f8708 = (&DAT_0072ce50)[iVar2 * 3];
        DAT_006f870c = iVar2;
        (&DAT_0072ce58)[iVar2 * 3] = 1;
        (&DAT_0072ce54)[iVar2 * 3] = 0xffffffff;
        FUN_00522330();
        if (iVar2 < 0x20) {
          DAT_00735694 = 0;
        }
        return iVar2;
      }
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 + 1;
    } while ((int)piVar1 < 0x72cfd4);
    return iVar2;
  }
  return 0;
}

