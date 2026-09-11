/* Decompiled from Speed.exe @ 004dc3a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dc3a0(void)

{
  int iVar1;
  int unaff_ESI;
  
  if ((&DAT_00745b6c)[*(int *)(unaff_ESI + 0xb18)] != 0) {
    iVar1 = FUN_004dbb40();
    if (iVar1 != 0) {
      *(undefined4 *)(unaff_ESI + 0xb0c) = *(undefined4 *)(iVar1 + 0x24);
      *(undefined4 *)(unaff_ESI + 0xb10) = *(undefined4 *)(iVar1 + 0x28);
      return;
    }
  }
  *(undefined4 *)(unaff_ESI + 0xb10) = 0;
  *(undefined4 *)(unaff_ESI + 0xb0c) = 0;
  return;
}

