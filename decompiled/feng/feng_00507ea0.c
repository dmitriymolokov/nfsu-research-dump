/* Decompiled from Speed.exe @ 00507ea0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00507ea0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_00745fc0)[iVar1 * 2] == param_1) {
      return *(undefined4 *)(&DAT_00745fc4 + iVar1 * 8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  return 0;
}

