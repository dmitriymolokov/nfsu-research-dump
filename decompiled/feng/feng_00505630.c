/* Decompiled from Speed.exe @ 00505630 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_00505630(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_00706530;
  do {
    if (*piVar2 == param_2) {
      return &DAT_00706530 + iVar1 * 7;
    }
    piVar2 = piVar2 + 7;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x70669c);
  return (undefined4 *)0x0;
}

