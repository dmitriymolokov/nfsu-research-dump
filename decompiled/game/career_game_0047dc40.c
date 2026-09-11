/* Decompiled from Speed.exe @ 0047dc40 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_0047dc40(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_007796fc == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(DAT_007796fc + -4);
  }
  piVar1 = (int *)FUN_0040cb70();
  while (piVar2 != piVar1) {
    if (piVar2[4] == 0) {
      (**(code **)(*piVar2 + 4))(param_1);
    }
    if (piVar2[1] == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(piVar2[1] + -4);
    }
  }
  return;
}

