/* Decompiled from Speed.exe @ 0067f15e */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0067f15e(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_006b129c + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

