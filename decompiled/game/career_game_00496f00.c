/* Decompiled from Speed.exe @ 00496f00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00496f00(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 extraout_ST0;
  
  if ((DAT_00777b4c != 4) && (iVar4 = 0, 0 < DAT_0078a320)) {
    piVar6 = &DAT_00758ad4;
    do {
      iVar2 = 0;
      if (0 < DAT_007787b0) {
        piVar3 = &DAT_00777cd4;
        do {
          if (*piVar3 == (&DAT_0078a410)[iVar4]) {
            puVar5 = &DAT_00777cd0 + iVar2 * 0x57;
            goto LAB_00496f5d;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 0x57;
        } while (iVar2 < DAT_007787b0);
      }
      puVar5 = (undefined4 *)0x0;
LAB_00496f5d:
      FUN_004387e0(puVar5[0x30]);
      iVar2 = FUN_00674898();
      if (((float10)DAT_006cc7a4 < (float10)iVar2 * extraout_ST0) || (DAT_00735ec0 != '\0')) {
        FUN_004387e0(puVar5[0x30]);
        FUN_00674898();
        iVar2 = FUN_00674898();
        *piVar6 = *piVar6 + iVar2;
        if (*piVar6 < 0) {
          *piVar6 = 0;
        }
        FUN_004aa970(piVar6 + -0x84,*piVar6);
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 0x3e51;
    } while (iVar4 < DAT_0078a320);
  }
  DAT_00735790 = FUN_004ab670(&DAT_00748f70);
  FUN_004dfdc0();
  DAT_00778898 = 1;
  if (DAT_00777ccc != (int *)0x0) {
    (**(code **)(*DAT_00777ccc + 0x14))();
    piVar6 = DAT_00777ccc;
    if (DAT_00777b4c == 1) {
      cVar1 = FUN_005a2f10(DAT_00777ccc,1);
      if (cVar1 != '\0') {
        FUN_005a0dc0(piVar6[0x1628]);
        return;
      }
      FUN_005a0f60();
      return;
    }
    if (((DAT_00777b4c == 2) || (DAT_00777b4c == 4)) && (DAT_00777cc8 == 4)) {
      if (DAT_00777ccc != (int *)0x0) {
        (**(code **)*DAT_00777ccc)(1);
      }
      DAT_00777ccc = (int *)0x0;
    }
  }
  return;
}

