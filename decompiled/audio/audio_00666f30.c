/* Decompiled from Speed.exe @ 00666f30 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00666f30(int param_1,int param_2)

{
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x18))) {
    return **(undefined4 **)(*(int *)(param_1 + 0x40) + param_2 * 4);
  }
  return 0;
}

