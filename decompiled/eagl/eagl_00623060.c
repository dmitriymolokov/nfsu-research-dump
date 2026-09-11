/* Decompiled from Speed.exe @ 00623060 */
/* Module: EAGL */
/* Ghidra DecompileModule */


void FUN_00623060(void)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar2 = DAT_0070a4a8; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && (*piVar2 != 0)) {
      (**(code **)(*DAT_00709d80 + 0x168))(DAT_00709d80,*piVar2);
    }
  }
  return;
}

