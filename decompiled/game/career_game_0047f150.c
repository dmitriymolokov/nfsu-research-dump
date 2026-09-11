/* Decompiled from Speed.exe @ 0047f150 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047f150(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00687428;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_006c8128;
  iVar6 = 0;
  local_8 = 0;
  if (*(int *)(DAT_007361f8 + 0x2f0) != 0) {
    FUN_0059b790();
  }
  iVar1 = DAT_007361c4;
  if ((param_1[8] != 0) && (param_1[8] = 0, 0 < iVar1)) {
    do {
      iVar1 = *(int *)(DAT_007361f0 + 0x3c);
      iVar2 = (&DAT_007361bc)[iVar6];
      if (((iVar1 == 0) || ((*(int *)(iVar1 + 0x20) == 0 || (*(int *)(iVar1 + 0x1c) == 0)))) &&
         ((*(int *)(DAT_007361f0 + 0x40) == 0 ||
          (*(int *)(*(int *)(DAT_007361f0 + 0x40) + 0x1c) == 0)))) {
        FUN_0042c6d0(iVar2,(-(DAT_00700aa4 != 0) & 0x10U) + 1,0);
        piVar4 = *(int **)(iVar2 + 0x27c);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x34))();
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < DAT_007361c4);
  }
  if ((DAT_00779818 != 0) && (FUN_00578b10(DAT_00779818), DAT_00779818 != 0)) {
    piVar4 = DAT_0077af10;
    if ((int **)DAT_0077af10 != &DAT_0077af10) {
      do {
        if ((short)piVar4[2] == 0x8fc) {
          iVar6 = *piVar4;
          piVar3 = (int *)piVar4[1];
          *piVar3 = iVar6;
          *(int **)(iVar6 + 4) = piVar3;
          _free(piVar4);
          break;
        }
        piVar4 = (int *)*piVar4;
      } while ((int **)piVar4 != &DAT_0077af10);
    }
    piVar4 = DAT_0077af10;
    if ((int **)DAT_0077af10 != &DAT_0077af10) {
      do {
        if (DAT_00779818 == (short)piVar4[2]) {
          iVar6 = *piVar4;
          piVar3 = (int *)piVar4[1];
          *piVar3 = iVar6;
          *(int **)(iVar6 + 4) = piVar3;
          _free(piVar4);
          break;
        }
        piVar4 = (int *)*piVar4;
      } while ((int **)piVar4 != &DAT_0077af10);
    }
    DAT_0077aaf9 = 1;
    puVar5 = &DAT_0077aa6c;
    do {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 0x11;
    } while ((int)puVar5 < 0x77aaf4);
    FUN_0047b810();
    FUN_0047c4d0(&DAT_00779800);
    DAT_00779818 = 0;
  }
  local_8 = 0xffffffff;
  *param_1 = &PTR_LAB_006c8118;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  piVar4 = (int *)param_1[2];
  iVar6 = param_1[1];
  *piVar4 = iVar6;
  *(int **)(iVar6 + 4) = piVar4;
  ExceptionList = local_10;
  return;
}

