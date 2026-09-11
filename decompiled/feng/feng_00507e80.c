/* Decompiled from Speed.exe @ 00507e80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00507e80(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_00745e50)[iVar1 * 2] == param_1) {
      return *(undefined4 *)(&DAT_00745e54 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x13);
  return 0;
}

