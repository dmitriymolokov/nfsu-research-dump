/* Decompiled from Speed.exe @ 0058d520 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0058d520(undefined4 param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int *extraout_EDX;
  
  pbVar2 = (byte *)(param_2 + 8);
  iVar3 = 0x20;
  do {
    *(short *)(param_2 + 0x28) = *(short *)(param_2 + 0x28) - (ushort)*pbVar2;
    *pbVar2 = 0;
    pbVar2 = pbVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)(param_2 + 0x28) = 0;
  FUN_0058d620();
  iVar3 = *extraout_EDX;
  piVar1 = (int *)extraout_EDX[1];
  *piVar1 = iVar3;
  *(int **)(iVar3 + 4) = piVar1;
  return;
}

