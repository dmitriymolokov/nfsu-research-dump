/* Decompiled from Speed.exe @ 004cd440 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_004cd440(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == (&DAT_006fa7f0)[iVar1 * 2]) {
      return *(undefined4 *)(iVar1 * 8 + 0x6fa7f4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  return 0xffffffff;
}

