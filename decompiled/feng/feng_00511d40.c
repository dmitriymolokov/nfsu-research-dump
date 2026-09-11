/* Decompiled from Speed.exe @ 00511d40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_00511d40(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_007066a0;
  do {
    if (*piVar2 == param_2) {
      return &DAT_007066a0 + iVar1 * 8;
    }
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < 0x706780);
  return (undefined4 *)0x0;
}

