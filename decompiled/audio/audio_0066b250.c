/* Decompiled from Speed.exe @ 0066b250 */
/* Module: Audio */
/* Ghidra DecompileAll */


int __thiscall FUN_0066b250(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(byte *)(*(int *)(param_1 + 0xb0) + 8 + *(int *)(param_1 + 0xac)) - 0x80;
  if (*(byte *)(param_2 + 8) - 0xc0 == iVar1) {
    iVar2 = *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0xac);
    iVar1 = iVar2 / *(int *)(param_1 + 0xa4);
    *(int *)(param_1 + 0xac) = iVar2 % *(int *)(param_1 + 0xa4);
  }
  return iVar1;
}

