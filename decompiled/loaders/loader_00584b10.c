/* Decompiled from Speed.exe @ 00584b10 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00584b10(void)

{
  float fVar1;
  int unaff_ESI;
  
  fVar1 = **(float **)(unaff_ESI + 0x14);
  *(float *)(unaff_ESI + 0x144) = fVar1;
  *(float *)(unaff_ESI + 0x148) = _DAT_006cc7bc / fVar1;
  FUN_00565060();
  FUN_00401cd0();
  FUN_00565060();
  return;
}

