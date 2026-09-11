/* Decompiled from Speed.exe @ 005e9081 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005e9081(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int *param_8,int param_9,uint param_10,uint param_11,uint param_12,uint param_13,
            uint param_14,uint param_15,int param_16)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    do {
      iVar1 = *(int *)*param_8;
      *param_8 = (int)((int *)*param_8 + 1);
      iVar4 = 0;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        piVar2 = (int *)*param_8;
        iVar3 = *piVar2;
        *param_8 = (int)(piVar2 + 1);
        iVar4 = piVar2[1] + iVar4 * 4;
        *param_8 = (int)(piVar2 + 2);
        if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || ((iVar3 == 4 || (iVar3 == 5)))) {
          iVar4 = __ftol();
        }
      }
      piVar2 = (int *)*param_8;
      iVar1 = *piVar2;
      *param_8 = (int)(piVar2 + 1);
      uVar5 = piVar2[1] + iVar4 * 4;
      *param_8 = (int)(piVar2 + 2);
      if (iVar1 == 1) {
        if (param_16 == 0) {
          iVar4 = param_2 + (uVar5 % param_14) * 8;
          goto LAB_005e9182;
        }
      }
      else {
        if (iVar1 == 2) {
          uVar5 = uVar5 & param_11;
          iVar4 = param_3;
        }
        else if (iVar1 == 3) {
          uVar5 = uVar5 & param_10;
          iVar4 = param_5;
        }
        else if (iVar1 == 4) {
          uVar5 = uVar5 & param_13;
          iVar4 = param_6;
        }
        else {
          if (iVar1 != 5) {
            if (iVar1 == 7) {
              iVar4 = param_4 + (uVar5 & param_12) * 4;
              goto LAB_005e9182;
            }
            goto LAB_005e9188;
          }
          uVar5 = uVar5 & param_15;
          iVar4 = param_7;
        }
        iVar4 = iVar4 + uVar5 * 8;
LAB_005e9182:
        *(int *)(param_9 + local_8 * 4) = iVar4;
      }
LAB_005e9188:
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

