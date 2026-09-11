/* Decompiled from Speed.exe @ 005330b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005330b0(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_007441b8 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(DAT_007441b8 + -0x210);
  }
  piVar1 = (int *)FUN_005325f0();
  while (piVar2 != piVar1) {
    (**(code **)(*piVar2 + 0x24))();
    if (piVar2[0x84] == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(piVar2[0x84] + -0x210);
    }
  }
  return;
}

