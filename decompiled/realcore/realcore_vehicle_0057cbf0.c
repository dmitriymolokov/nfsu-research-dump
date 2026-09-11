/* Decompiled from Speed.exe @ 0057cbf0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


bool __fastcall FUN_0057cbf0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  piVar1 = piVar2 + *(short *)(param_1 + 0x1c) * 2;
  if (piVar2 == (int *)0x0) {
    return false;
  }
  for (; piVar2 < piVar1; piVar2 = piVar2 + 2) {
    if ((param_2 == 0) || (*piVar2 == param_2)) goto LAB_0057cc21;
  }
  piVar2 = (int *)0x0;
LAB_0057cc21:
  return piVar2 != (int *)0x0;
}

