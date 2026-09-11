/* Decompiled from Speed.exe @ 004f5490 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004f5490(undefined4 param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 + 0x10;
    do {
      if (*(int *)(param_3 + -8) == 4) {
        FUN_00565ce0();
      }
      param_3 = param_3 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}

