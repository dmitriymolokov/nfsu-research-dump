/* Decompiled from Speed.exe @ 00421b10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00421b10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((int *)param_1[2] != param_1 + 2) {
    do {
      piVar1 = (int *)param_1[2];
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      param_1[4] = 1;
      if (piVar1[2] == 1) {
        *param_1 = piVar1[3];
        param_1[1] = DAT_0073ad3c;
      }
      (*(code *)(&PTR_LAB_00700db8)[*param_1])(piVar1[2],piVar1[3]);
      if (piVar1[2] == 2) {
        *param_1 = 0;
      }
      iVar4 = DAT_007361f4;
      param_1[4] = 0;
      iVar2 = *(int *)(iVar4 + 0x18);
      *piVar1 = *(int *)(iVar4 + 0x10);
      *(int *)(iVar4 + 0x18) = iVar2 + -1;
      *(int **)(iVar4 + 0x10) = piVar1;
    } while ((int *)param_1[2] != param_1 + 2);
  }
  return;
}

