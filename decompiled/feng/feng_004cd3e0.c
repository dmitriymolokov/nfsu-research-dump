/* Decompiled from Speed.exe @ 004cd3e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004cd3e0(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = 0;
    while ((&DAT_006fa738)[iVar1 * 2] != param_1) {
      iVar1 = iVar1 + 1;
      if (0xe < iVar1) {
        return;
      }
    }
    if (*(int *)(iVar1 * 8 + 0x6fa73c) != -1) {
      FUN_0051c830(0xffffffff);
    }
  }
  return;
}

