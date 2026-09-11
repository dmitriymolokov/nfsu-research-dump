/* Decompiled from Speed.exe @ 0064951e */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 __thiscall FUN_0064951e(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  int local_8;
  
  FUN_00648fda(&local_8);
  if (param_1[3] == 0) {
    param_2 = param_2 - param_1[7];
    if (param_2 < 3) {
      if (0 < param_2) {
        for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
          iVar1 = FUN_00649469(local_8);
          if (iVar1 == 0x4d414465) {
            FUN_00649006(local_8);
            FUN_00648fda(&local_8);
          }
        }
      }
    }
    else {
      do {
        FUN_00649006(local_8);
        FUN_00648fda(&local_8);
        iVar1 = FUN_00649469(local_8);
      } while (iVar1 != 0x4d41446b);
    }
  }
  if (local_8 == 0) {
    if (param_1[6] != 0) {
      (**(code **)(*param_1 + 0x14))(param_1[6]);
      param_1[6] = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00649028(local_8);
    FUN_00649006(local_8);
  }
  return uVar2;
}

