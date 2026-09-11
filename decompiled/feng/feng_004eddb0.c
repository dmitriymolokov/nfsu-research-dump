/* Decompiled from Speed.exe @ 004eddb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int __fastcall FUN_004eddb0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x1e8);
  do {
    if (*piVar2 == param_2) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  return -1;
}

