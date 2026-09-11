/* Decompiled from Speed.exe @ 005ca76c */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005ca76c(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_24 [12];
  int local_18;
  
  iVar2 = param_1;
  piVar3 = *(int **)(param_1 + 0x98);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    *(int *)(param_1 + 0x98) = 0;
  }
  piVar3 = (int *)(param_1 + 0x18);
  param_1 = 0;
  if (*piVar3 != 0) {
    iVar4 = 0;
    do {
      piVar3 = *(int **)(*(int *)(iVar2 + 0x1c) + 0x80 + iVar4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x80 + iVar4) = 0;
      }
      piVar3 = *(int **)(*(int *)(iVar2 + 0x1c) + 0x84 + iVar4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x84 + iVar4) = 0;
      }
      piVar3 = *(int **)(*(int *)(iVar2 + 0x1c) + 0x88 + iVar4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x88 + iVar4) = 0;
      }
      piVar3 = *(int **)(*(int *)(iVar2 + 0x1c) + 0x8c + iVar4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x8c + iVar4) = 0;
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0xac;
    } while (param_1 < *(uint *)(iVar2 + 0x18));
  }
  param_1 = 0;
  if (*(int *)(iVar2 + 0x20) != 0) {
    iVar4 = 0;
    do {
      piVar3 = (int *)(*(int *)(iVar2 + 0x24) + iVar4);
      iVar1 = *piVar3;
      if (((((iVar1 == 5) || (iVar1 == 6)) || (iVar1 == 7)) || ((iVar1 == 8 || (iVar1 == 9)))) &&
         (piVar3 = (int *)piVar3[1], piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x44))(piVar3,0,local_24);
        if ((local_18 == 0) &&
           (piVar3 = *(int **)(*(int *)(iVar2 + 0x24) + 4 + iVar4), piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *(undefined4 *)(*(int *)(iVar2 + 0x24) + 4 + iVar4) = 0;
        }
      }
      param_1 = param_1 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (param_1 < *(uint *)(iVar2 + 0x20));
  }
  return 0;
}

