/* Decompiled from Speed.exe @ 004cd0d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_004cd0d0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00746bf8;
  do {
    if (*piVar1 == param_2) {
      if (iVar2 != -1) {
        return 6;
      }
      break;
    }
    piVar1 = piVar1 + 7;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x746ca0);
  piVar1 = &DAT_00746dcc;
  do {
    if (*piVar1 == param_2) {
      return 7;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x746dd0);
  piVar1 = &DAT_00746ca0;
  do {
    if (*piVar1 == param_2) {
      return 3;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x746d90);
  piVar1 = &DAT_00746db4;
  do {
    if (*piVar1 == param_2) {
      return 2;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x746dcc);
  piVar1 = &DAT_00746dcc;
  do {
    if (*piVar1 == param_2) {
      return 2;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x746dd0);
  piVar1 = &DAT_00746a98;
  do {
    if (*piVar1 == param_2) {
      return 1;
    }
    piVar1 = piVar1 + 1;
  } while ((int)piVar1 < 0x746bf8);
  return 1;
}

