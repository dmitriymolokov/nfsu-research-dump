/* Decompiled from Speed.exe @ 004bbd70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int __fastcall FUN_004bbd70(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  piVar1 = piVar2 + *(short *)(param_1 + 0x1c) * 2;
  if (piVar2 != (int *)0x0) {
    for (; piVar2 < piVar1; piVar2 = piVar2 + 2) {
      if (*piVar2 == 0x10c98090) {
        if (piVar2 == (int *)0x0) {
          return 0;
        }
        return piVar2[1];
      }
    }
  }
  return 0;
}

