/* Decompiled from Speed.exe @ 005afa23 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005afa23(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *local_8;
  
  piVar4 = (int *)0x0;
  local_8 = (undefined4 *)0x0;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if ((param_1 == 0) || (param_6 == (undefined4 *)0x0)) {
    iVar3 = -0x7789f794;
  }
  else {
    pvVar1 = _malloc(0x130);
    if (pvVar1 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_005b9096();
    }
    if (piVar4 == (int *)0x0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      iVar3 = FUN_005c7b70(param_1,param_2,param_3,param_4);
      if (-1 < iVar3) {
        iVar3 = FUN_005c50ee(piVar4 + 2,param_5,&local_8);
        if (-1 < iVar3) {
          iVar3 = FUN_005b19e6();
          if (iVar3 == 0) {
            iVar3 = FUN_005b9b78(local_8);
            if (iVar3 < 0) goto LAB_005afaf6;
            local_8 = (undefined4 *)0x0;
            iVar2 = FUN_005b19e6();
            if (iVar2 == 0) {
              *param_6 = piVar4;
              (**(code **)(*piVar4 + 4))(piVar4);
              goto LAB_005afaf6;
            }
          }
          iVar3 = -0x7789f4a7;
        }
      }
    }
  }
LAB_005afaf6:
  if ((param_7 != (undefined4 *)0x0) && (piVar4 != (int *)0x0)) {
    FUN_005b197d(param_7);
  }
  if (local_8 != (undefined4 *)0x0) {
    (**(code **)*local_8)(1);
    local_8 = (undefined4 *)0x0;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return iVar3;
}

