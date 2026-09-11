/* Decompiled from Speed.exe @ 00649443 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00649443(int param_1)

{
  if ((*(uint *)(param_1 + 0xc) >> 0xc & 1) == 0) {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = param_1 + *(int *)(param_1 + 0x10);
  }
  return param_1;
}

