/* Decompiled from Speed.exe @ 00685f48 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void Unwind_00685f48(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x1c;
  }
  FUN_00579600(*(undefined4 *)(unaff_EBP + -0x14));
  return;
}

