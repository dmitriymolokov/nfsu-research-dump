/* Decompiled from Speed.exe @ 00500350 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00500350(int param_1)

{
  char in_AL;
  int unaff_ESI;
  
  if (in_AL != '\0') {
    if (*(int *)(unaff_ESI + 0x80) != 0) {
      FUN_004f0700(0x55d1e635,0,unaff_ESI,*(int *)(unaff_ESI + 0x80),0);
      FUN_004f0700(0x55d1e635,*(undefined4 *)(unaff_ESI + 0x80),unaff_ESI,0xfffffffb,0);
    }
    if (param_1 != 0) {
      FUN_004f0700(0xabc08912,0,unaff_ESI,param_1,0);
      FUN_004f0700(0xabc08912,param_1,unaff_ESI,0xfffffffb,0);
    }
  }
  *(int *)(unaff_ESI + 0x80) = param_1;
  return;
}

