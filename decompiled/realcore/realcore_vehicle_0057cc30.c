/* Decompiled from Speed.exe @ 0057cc30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0057cc30(int param_1,int param_2,int param_3)

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
        return piVar2[1] + _DAT_00734584;
      }
    }
  }
  return param_3;
}

