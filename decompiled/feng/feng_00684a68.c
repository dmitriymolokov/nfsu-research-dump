/* Decompiled from Speed.exe @ 00684a68 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void Unwind_00684a68(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 4) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 4) + 0x20;
  }
  FUN_0052e460();
  return;
}

