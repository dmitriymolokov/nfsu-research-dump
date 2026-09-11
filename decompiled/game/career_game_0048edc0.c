/* Decompiled from Speed.exe @ 0048edc0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


float10 __fastcall FUN_0048edc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return (float10)*(int *)(param_1 + 4);
    }
    if (iVar1 != 2) {
      return (float10)DAT_006cc7a4;
    }
  }
  return (float10)(*(int *)(param_1 + 4) + -1);
}

