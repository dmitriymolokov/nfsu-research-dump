/* Decompiled from Speed.exe @ 0051ae90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_0051ae90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_00744ab0)[iVar1 * 2] == param_1) {
      DAT_0073576c = &DAT_007602a0 + *(int *)(&DAT_00744ab4 + iVar1 * 8) * 0x454;
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1b);
  DAT_0073576c = &DAT_007602a0;
  return;
}

