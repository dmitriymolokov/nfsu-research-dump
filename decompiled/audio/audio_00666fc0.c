/* Decompiled from Speed.exe @ 00666fc0 */
/* Module: Audio */
/* Ghidra DecompileAll */


bool FUN_00666fc0(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return 0 < *(int *)(param_1 + 0xc);
}

