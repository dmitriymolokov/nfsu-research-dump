/* Decompiled from Speed.exe @ 00685c18 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void Unwind_00685c18(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 4) + 8;
  }
  FUN_00474430();
  return;
}

