/* Decompiled from Speed.exe @ 00664a40 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00664a40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_00664990(param_1);
  piVar1 = param_1 + 0x128;
  iVar2 = 10;
  do {
    if (*piVar1 != 0) {
      FUN_0066da20(*piVar1);
      FUN_00666da0(piVar1[1]);
    }
    piVar1 = piVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00668870(param_1[1]);
  FUN_0066def0(*param_1);
  FUN_00447030(param_1);
  return;
}

