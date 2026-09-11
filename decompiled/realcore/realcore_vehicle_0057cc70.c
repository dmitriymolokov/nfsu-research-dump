/* Decompiled from Speed.exe @ 0057cc70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_0057cc70(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  piVar1 = piVar2 + *(short *)(param_1 + 0x1c) * 2;
  if (piVar2 != (int *)0x0) {
    for (; piVar2 < piVar1; piVar2 = piVar2 + 2) {
      if ((param_2 == 0) || (*piVar2 == param_2)) {
        if (piVar2 == (int *)0x0) {
          return param_3;
        }
        return piVar2[1];
      }
    }
  }
  return param_3;
}

