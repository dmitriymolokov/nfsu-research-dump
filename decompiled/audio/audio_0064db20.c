/* Decompiled from Speed.exe @ 0064db20 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064db20(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (1 < *param_1) {
    pbVar2 = param_1 + 0xc;
    iVar3 = *param_1 - 1;
    do {
      iVar1 = iVar1 + *(int *)pbVar2;
      pbVar2 = pbVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 4) < iVar1) {
    iVar1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}

