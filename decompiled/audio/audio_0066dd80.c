/* Decompiled from Speed.exe @ 0066dd80 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0066dd80(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_2;
  if (param_2 < 0) {
    iVar4 = -param_2;
  }
  piVar1 = *(int **)(param_1[5] + (iVar4 % param_1[4]) * 4);
  piVar3 = (int *)(param_1[5] + (iVar4 % param_1[4]) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    piVar2 = (int *)*piVar3;
    if (piVar2[2] == param_2) break;
    piVar1 = (int *)*piVar2;
    piVar3 = piVar2;
  }
  *piVar3 = *piVar1;
  *piVar1 = param_1[7];
  param_1[7] = (int)piVar1;
  *param_1 = *param_1 + -1;
  return piVar1[1];
}

