/* Decompiled from Speed.exe @ 005b1147 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b1147(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  piVar1 = (int *)*param_1;
  local_8 = piVar1[4];
  iVar4 = piVar1[1];
  iVar5 = *piVar1;
  if (local_8 == 0) {
    local_8 = 1;
  }
  if (-1 < iVar4) {
    if (iVar4 < 4) {
      if (((iVar5 != 1) && (iVar5 != 2)) && (iVar5 != 3)) {
        return -0x7fffbffb;
      }
      *param_2 = *param_2 + piVar1[6] * piVar1[5] * local_8 * 4;
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar4 != 4) {
      if (iVar4 != 5) {
        return -0x7fffbffb;
      }
      uVar2 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      do {
        if (local_8 == 0) {
          return local_c;
        }
        local_10 = 0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar2 != 0) {
          do {
            local_c = FUN_005b1147(param_1,param_2,param_3,param_4);
            if (local_c < 0) {
              return local_c;
            }
            local_10 = local_10 + 1;
          } while (local_10 < uVar2);
        }
        local_8 = local_8 + -1;
      } while( true );
    }
    if (iVar5 < 0x10) {
      if (iVar5 == 0xf) {
        for (; local_8 != 0; local_8 = local_8 + -1) {
          iVar4 = *(int *)(*(int *)*param_2 * 4 + param_4[2]) * 0x1c + *(int *)(*param_4 + 0x24);
          iVar5 = *(int *)(*(int *)*param_2 * 4 + param_3[2]) * 0x1c + *(int *)(*param_3 + 0x24);
          piVar1 = *(int **)(iVar5 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar5 + 0x10);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar4 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          piVar1 = *(int **)(iVar4 + 0x10);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar4 + 0x10) = 0;
          }
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
          uVar3 = *(undefined4 *)(iVar5 + 0x14);
          *(undefined4 *)(iVar4 + 0x14) = uVar3;
          local_c = FUN_005ccec4(*(undefined4 *)(iVar4 + 0x18),uVar3,0);
          if (local_c < 0) {
            return local_c;
          }
          *param_2 = *param_2 + 4;
        }
        goto LAB_005b145e;
      }
      if (iVar5 == 4) {
        for (; local_8 != 0; local_8 = local_8 + -1) {
          iVar4 = *(int *)(*(int *)*param_2 * 4 + param_4[2]) * 0x1c + *(int *)(*param_4 + 0x24);
          iVar5 = *(int *)(*(int *)*param_2 * 4 + param_3[2]) * 0x1c + *(int *)(*param_3 + 0x24);
          piVar1 = *(int **)(iVar5 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar4 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 4);
          *param_2 = *param_2 + 4;
        }
        goto LAB_005b145e;
      }
      if (iVar5 < 5) {
        return -0x7fffbffb;
      }
      if (iVar5 < 10) {
        for (; local_8 != 0; local_8 = local_8 + -1) {
          iVar4 = *(int *)(*(int *)*param_2 * 4 + param_4[2]) * 0x1c + *(int *)(*param_4 + 0x24);
          iVar5 = *(int *)(*(int *)*param_2 * 4 + param_3[2]) * 0x1c + *(int *)(*param_3 + 0x24);
          piVar1 = *(int **)(iVar5 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar4 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 4);
          *param_2 = *param_2 + 4;
        }
        goto LAB_005b145e;
      }
      bVar7 = SBORROW4(iVar5,0xe);
      iVar4 = -0xe;
      bVar6 = iVar5 == 0xe;
    }
    else {
      if (iVar5 == 0x10) {
        for (; local_8 != 0; local_8 = local_8 + -1) {
          iVar4 = *(int *)(*(int *)*param_2 * 4 + param_4[2]) * 0x1c + *(int *)(*param_4 + 0x24);
          iVar5 = *(int *)(*(int *)*param_2 * 4 + param_3[2]) * 0x1c + *(int *)(*param_3 + 0x24);
          piVar1 = *(int **)(iVar5 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar5 + 0x10);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))(piVar1);
          }
          piVar1 = *(int **)(iVar4 + 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar4 + 4) = 0;
          }
          piVar1 = *(int **)(iVar4 + 0x10);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(undefined4 *)(iVar4 + 0x10) = 0;
          }
          *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
          *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
          uVar3 = *(undefined4 *)(iVar5 + 0x14);
          *(undefined4 *)(iVar4 + 0x14) = uVar3;
          local_c = FUN_005ccec4(*(undefined4 *)(iVar4 + 0x18),uVar3,0);
          if (local_c < 0) {
            return local_c;
          }
          *param_2 = *param_2 + 4;
        }
        goto LAB_005b145e;
      }
      if (iVar5 < 0x11) {
        return -0x7fffbffb;
      }
      bVar7 = SBORROW4(iVar5,0x12);
      iVar4 = -0x12;
      bVar6 = iVar5 == 0x12;
    }
    if (bVar6 || bVar7 != iVar5 + iVar4 < 0) {
LAB_005b145e:
      *param_1 = *param_1 + 0x14;
      return local_c;
    }
  }
  return -0x7fffbffb;
}

