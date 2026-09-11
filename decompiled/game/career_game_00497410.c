/* Decompiled from Speed.exe @ 00497410 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00497410(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  float10 extraout_ST0;
  
  DAT_00735ed4 = 0;
  if ((DAT_00777b4c != 4) && (iVar3 = 0, 0 < DAT_0078a320)) {
    piVar5 = &DAT_00758ad4;
    do {
      iVar1 = 0;
      if (0 < DAT_007787b0) {
        piVar2 = &DAT_00777cd4;
        do {
          if (*piVar2 == (&DAT_0078a410)[iVar3]) {
            puVar4 = &DAT_00777cd0 + iVar1 * 0x57;
            goto LAB_0049746d;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x57;
        } while (iVar1 < DAT_007787b0);
      }
      puVar4 = (undefined4 *)0x0;
LAB_0049746d:
      FUN_004387e0(puVar4[0x30]);
      iVar1 = FUN_00674898();
      if (((float10)DAT_006cc7a4 < (float10)iVar1 * extraout_ST0) || (DAT_00735ec0 != '\0')) {
        FUN_004387e0(puVar4[0x30]);
        FUN_00674898();
        iVar1 = FUN_00674898();
        *piVar5 = *piVar5 + iVar1;
        if (*piVar5 < 0) {
          *piVar5 = 0;
        }
        FUN_004aa970(piVar5 + -0x84,*piVar5);
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 0x3e51;
    } while (iVar3 < DAT_0078a320);
  }
  DAT_00778898 = 0;
  if (DAT_00777ccc != (int *)0x0) {
    (**(code **)(*DAT_00777ccc + 0x18))();
    FUN_004abc20();
  }
  FUN_00421c00(DAT_007361f0,9,0);
  return;
}

