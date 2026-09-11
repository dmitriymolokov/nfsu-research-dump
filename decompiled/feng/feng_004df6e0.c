/* Decompiled from Speed.exe @ 004df6e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004df6e0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_006fa294;
  do {
    if (*piVar1 == param_2) {
      if (iVar2 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar2 * 0x24] = 1;
      }
      return;
    }
    piVar1 = piVar1 + 9;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6fa5ac);
  return;
}

