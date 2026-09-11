/* Decompiled from Speed.exe @ 005b291b */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005b291b(uint *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[10] = param_2;
  param_3[4] = param_1[6];
  iVar2 = 0;
  param_3[5] = param_1[7];
  iVar1 = FUN_005b226e();
  if (iVar1 == 0) {
    param_3[4] = param_1[6];
    param_3[5] = param_1[7];
    if (*param_1 < param_1[1]) {
      iVar2 = FUN_005b1ac5(*param_1,param_3 + 2);
      if (iVar2 == 0) {
        iVar2 = FUN_005b27f9(*param_1,param_3 + 2);
        if (iVar2 != 0) {
          *param_3 = 2;
          goto LAB_005b2a75;
        }
        iVar2 = FUN_005b239e(*param_1,param_3 + 2);
        if (iVar2 == 0) {
          iVar2 = FUN_005b2443(*param_1,param_3 + 2);
          if (iVar2 == 0) {
            iVar2 = FUN_005b24bf(*param_1,param_3 + 2);
            if (iVar2 == 0) {
              iVar2 = FUN_005b2838(*param_1,param_3 + 2);
              if (iVar2 == 0) {
                iVar2 = FUN_005b26f6(*param_1,param_3 + 2);
                if (iVar2 == 0) {
                  iVar2 = FUN_005b1c41(*param_1,param_3 + 2);
                  if (iVar2 == 0) {
                    iVar2 = FUN_005b1cc0(*param_1,param_3 + 2);
                    *param_3 = 1;
                  }
                  else {
                    *param_3 = 9;
                  }
                }
                else {
                  *param_3 = 0;
                }
              }
              else {
                *param_3 = (*(char *)*param_1 != '\"') + 10;
              }
              goto LAB_005b2a75;
            }
          }
        }
        *param_3 = 2;
        iVar1 = FUN_005b1e12(*param_1 + iVar2,param_3);
      }
      else {
        *param_3 = 5;
        iVar1 = FUN_005b1dcc(*param_1 + iVar2,param_3);
      }
      iVar2 = iVar2 + iVar1;
    }
    else {
      *param_3 = 0xd;
    }
  }
  else {
    *param_3 = 0xc;
  }
LAB_005b2a75:
  param_3[6] = *param_1;
  param_3[7] = iVar2;
  *param_1 = *param_1 + iVar2;
  return 0;
}

