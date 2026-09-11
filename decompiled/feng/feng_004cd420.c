/* Decompiled from Speed.exe @ 004cd420 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_004cd420(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007469c0)[iVar1 * 2]) {
      return *(undefined4 *)(&DAT_007469c4 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  return 0;
}

