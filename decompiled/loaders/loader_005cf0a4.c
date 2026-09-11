/* Decompiled from Speed.exe @ 005cf0a4 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005cf0a4(int *param_1,int *param_2,int *param_3,uint param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_8;
  
  piVar1 = (int *)*param_1;
  iVar4 = piVar1[1];
  local_8 = piVar1[4];
  iVar3 = 0;
  iVar2 = *piVar1;
  if ((param_5 != 0) || (local_8 == 0)) {
    local_8 = 1;
  }
  if (-1 < iVar4) {
    if (iVar4 < 4) {
      uVar5 = piVar1[6] * piVar1[5] * local_8;
      if (iVar2 == 1) {
        param_4 = 0;
        if (uVar5 != 0) {
          do {
            iVar4 = param_4 * 4;
            param_4 = param_4 + 1;
            *(uint *)(iVar4 + *param_2) = (uint)(*(int *)(iVar4 + *param_3) != 0);
          } while (param_4 < uVar5);
        }
      }
      else if (iVar2 == 2) {
        param_4 = 0;
        if (uVar5 != 0) {
          do {
            iVar4 = param_4 * 4;
            param_4 = param_4 + 1;
            *(undefined4 *)(iVar4 + *param_2) = *(undefined4 *)(iVar4 + *param_3);
          } while (param_4 < uVar5);
        }
      }
      else {
        if (iVar2 != 3) {
          return -0x7fffbffb;
        }
        param_4 = 0;
        if (uVar5 != 0) {
          do {
            iVar4 = param_4 * 4;
            param_4 = param_4 + 1;
            *(undefined4 *)(iVar4 + *param_2) = *(undefined4 *)(iVar4 + *param_3);
          } while (param_4 < uVar5);
        }
      }
      *param_2 = *param_2 + uVar5 * 4;
      *param_3 = *param_3 + uVar5 * 4;
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar4 == 4) {
      if (iVar2 == 4) {
        for (; local_8 != 0; local_8 = local_8 + -1) {
          iVar3 = FUN_005cabd8(*(undefined4 *)*param_3,*(undefined4 *)*param_2,param_4);
          if (iVar3 < 0) {
            return iVar3;
          }
          *param_2 = *param_2 + 4;
          *param_3 = *param_3 + 4;
        }
      }
      else {
        if (iVar2 < 5) {
          return -0x7fffbffb;
        }
        if (iVar2 < 10) {
          for (; local_8 != 0; local_8 = local_8 + -1) {
            iVar3 = FUN_005cab3f(*(undefined4 *)*param_3,*(undefined4 *)*param_2,param_4);
            if (iVar3 < 0) {
              return iVar3;
            }
            *param_2 = *param_2 + 4;
            *param_3 = *param_3 + 4;
          }
        }
        else if (iVar2 == 0xf) {
          for (; local_8 != 0; local_8 = local_8 + -1) {
            iVar3 = FUN_005ce64f(*(undefined4 *)*param_3,*(undefined4 *)*param_2,param_4);
            if (iVar3 < 0) {
              return iVar3;
            }
            *param_2 = *param_2 + 4;
            *param_3 = *param_3 + 4;
          }
        }
        else {
          if (iVar2 != 0x10) {
            return -0x7fffbffb;
          }
          for (; local_8 != 0; local_8 = local_8 + -1) {
            iVar3 = FUN_005ce8ec(*(undefined4 *)*param_3,*(undefined4 *)*param_2,param_4);
            if (iVar3 < 0) {
              return iVar3;
            }
            *param_2 = *param_2 + 4;
            *param_3 = *param_3 + 4;
          }
        }
      }
      *param_1 = *param_1 + 0x14;
      return iVar3;
    }
    if (iVar4 == 5) {
      uVar5 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      do {
        if (local_8 == 0) {
          return iVar3;
        }
        uVar6 = 0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar5 != 0) {
          do {
            iVar3 = FUN_005cf0a4(param_1,param_2,param_3,param_4,0);
            if (iVar3 < 0) {
              return iVar3;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar5);
        }
        local_8 = local_8 + -1;
      } while( true );
    }
  }
  return -0x7fffbffb;
}

