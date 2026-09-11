/* Decompiled from Speed.exe @ 00685bd8 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void Unwind_00685bd8(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + 4) + 8;
  }
  FUN_00474430();
  return;
}

