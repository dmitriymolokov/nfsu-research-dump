/* Decompiled from Speed.exe @ 0051a8b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0051a8b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_00744ab0)[iVar1 * 2] == param_1) {
      return *(undefined4 *)(&DAT_00744ab4 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1b);
  return 0;
}

