/* Decompiled from Speed.exe @ 0058c3b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int * FUN_0058c3b0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = 1000;
  iVar3 = DAT_00734500;
  if (*(int *)(DAT_00734500 + 0x18) != *(int *)(DAT_00734500 + 0x2c)) {
LAB_0058c412:
    if ((*(int *)(iVar3 + 0x10) == 0) && ((*(byte *)(iVar3 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar5 = *(int **)(iVar3 + 0x10);
    iVar4 = *(int *)(iVar3 + 0x18) + 1;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar1 = *piVar5;
      if (*(int *)(iVar3 + 0x1c) < iVar4) {
        *(int *)(iVar3 + 0x1c) = iVar4;
      }
      *(int *)(iVar3 + 0x18) = iVar4;
      *(int *)(iVar3 + 0x10) = iVar1;
      if (((*(byte *)(iVar3 + 0x14) & 2) != 0) &&
         (iVar3 = *(int *)(iVar3 + 0x28) >> 2, piVar6 = piVar5, 0 < iVar3)) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
      }
      piVar5[2] = 0;
      piVar5[3] = *param_2 * 0xc90 + DAT_00734588;
      piVar5[4] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x50);
    *puVar2 = piVar5;
    *(int **)(param_1 + 0x50) = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = param_1 + 0x4c;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (piVar5[2] == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
      if (piVar5[4] == 0) {
        iVar3 = FUN_0058b580(param_1);
        piVar5[4] = iVar3;
      }
      if (piVar5[5] == 0) {
        iVar3 = FUN_0058b750(param_1);
        piVar5[5] = iVar3;
      }
      if (piVar5[6] == 0) {
        iVar3 = FUN_0058bb50(param_1,param_2);
        piVar5[6] = iVar3;
      }
    }
    piVar5[2] = piVar5[2] + 1;
    return piVar5;
  }
LAB_0058c3d0:
  iVar4 = iVar4 + -1;
  if (iVar4 != 0) {
    for (iVar1 = *(int *)(param_1 + 0x50); iVar1 != param_1 + 0x4c; iVar1 = *(int *)(iVar1 + 4)) {
      if (*(int *)(iVar1 + 8) == 0) goto LAB_0058c3f0;
    }
    goto LAB_0058c40a;
  }
  goto LAB_0058c412;
LAB_0058c3f0:
  do {
    iVar3 = FUN_0058c5a0(param_1,iVar1,0);
  } while (iVar3 != 0);
  FUN_0058c760();
  iVar3 = DAT_00734500;
LAB_0058c40a:
  if (*(int *)(iVar3 + 0x18) != *(int *)(iVar3 + 0x2c)) goto LAB_0058c412;
  goto LAB_0058c3d0;
}

