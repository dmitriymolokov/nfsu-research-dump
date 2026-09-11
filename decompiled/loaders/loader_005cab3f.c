/* Decompiled from Speed.exe @ 005cab3f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005cab3f(int param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = param_3;
  if (param_4 != (int *)0x0) {
    iVar2 = *(int *)(param_4[2] + param_3 * 4);
  }
  iVar2 = iVar2 * 0x1c + *(int *)(param_1 + 0x24);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  *(int **)(iVar2 + 4) = param_2;
  if (param_4 != (int *)0x0) {
    for (piVar3 = (int *)param_4[4]; piVar3 != param_4; piVar3 = (int *)piVar3[4]) {
      if (*piVar3 != 0) {
        iVar4 = *(int *)(piVar3[2] + param_3 * 4) * 0x1c + *(int *)(*piVar3 + 0x24);
        piVar1 = *(int **)(iVar2 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        piVar1 = *(int **)(iVar4 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar2 + 4);
      }
    }
  }
  return 0;
}

