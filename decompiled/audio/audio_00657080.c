/* Decompiled from Speed.exe @ 00657080 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00657080(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(int **)(param_1 + 0x3c),0);
  iVar1 = (*(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x34)) + ((uint)&param_1 >> 1 & 0xffffff0);
  if (0x3fff < iVar1) {
    iVar1 = iVar1 + -0x4000;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

