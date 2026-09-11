/* Decompiled from Speed.exe @ 004bb5d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004bb5d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c5bc0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xf4734a97);
    }
  }
  FUN_004f6910(iVar2);
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x790c04e1);
    }
  }
  FUN_004f6910(iVar2);
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x3b8ed302);
    }
  }
  FUN_004f6910(iVar2);
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xa3989aac);
    }
  }
  FUN_004f6910(iVar2);
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) goto LAB_004bb7b3;
    iVar2 = FUN_004ef050(0x790c04e1);
  }
  if (iVar2 != 0) {
    for (iVar1 = *(int *)(iVar2 + 0x4c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar3 = FUN_004fd230();
      if (*(int *)(iVar1 + 0x30) == iVar3) {
        if (iVar1 != 0) {
          if (iVar1 != *(int *)(iVar2 + 0x54)) {
            *(int *)(iVar2 + 0x54) = iVar1;
            FUN_004ff030(iVar2);
            *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        break;
      }
    }
  }
LAB_004bb7b3:
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    iVar2 = FUN_004ef050(0xa3989aac);
  }
  if (iVar2 != 0) {
    for (iVar1 = *(int *)(iVar2 + 0x4c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar3 = FUN_004fd230();
      if (*(int *)(iVar1 + 0x30) == iVar3) {
        if (iVar1 == 0) {
          ExceptionList = local_c;
          return param_1;
        }
        if (iVar1 != *(int *)(iVar2 + 0x54)) {
          *(int *)(iVar2 + 0x54) = iVar1;
          FUN_004ff030(iVar2);
          *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x10) = 0;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
        ExceptionList = local_c;
        return param_1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

