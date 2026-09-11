/* Decompiled from Speed.exe @ 00660700 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00660700(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[2];
  iVar2 = param_2[1];
  *(float *)(param_1 + 0x50) = (float)(*param_2 >> 7) / (float)(iVar1 >> 8);
  *(float *)(param_1 + 0x54) = (float)(iVar2 >> 7) / (float)(iVar1 >> 8);
  FUN_00661460();
  return;
}

