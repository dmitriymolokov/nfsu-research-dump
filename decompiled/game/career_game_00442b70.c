/* Decompiled from Speed.exe @ 00442b70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00442b70(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  for (piVar1 = (int *)(param_1 + 8); piVar1 < (int *)(iVar2 + 8 + param_1);
      piVar1 = piVar1 + (short)piVar1[4] * 0x22 + 0x9f) {
    *(int **)(param_2 + 0x10 + *(short *)((int)piVar1 + 10) * 4) = piVar1;
    if (piVar1[3] == 0) {
      puVar3 = *(undefined4 **)(param_2 + 4);
      *puVar3 = piVar1;
      *(int **)(param_2 + 4) = piVar1;
      piVar1[1] = (int)puVar3;
      *piVar1 = param_2;
    }
    else if (piVar1[3] == 1) {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      *puVar3 = piVar1;
      *(int **)(param_2 + 0xc) = piVar1;
      piVar1[1] = (int)puVar3;
      *piVar1 = param_2 + 8;
    }
  }
  return;
}

