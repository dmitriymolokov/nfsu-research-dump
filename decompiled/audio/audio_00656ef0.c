/* Decompiled from Speed.exe @ 00656ef0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00656ef0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) = param_2;
  *(uint *)(param_1 + 0x30) = (*(int *)(param_1 + 0x28) * param_2) / 1000 & 0xfffff0;
  return;
}

