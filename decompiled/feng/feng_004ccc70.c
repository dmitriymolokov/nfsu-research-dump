/* Decompiled from Speed.exe @ 004ccc70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int __fastcall FUN_004ccc70(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00746bf8;
  do {
    if (*piVar2 == param_2) {
      return iVar1;
    }
    piVar2 = piVar2 + 7;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x746ca0);
  return -1;
}

