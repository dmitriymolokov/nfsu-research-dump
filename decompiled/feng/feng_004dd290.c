/* Decompiled from Speed.exe @ 004dd290 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004dd290(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  bVar1 = false;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c3778;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x8cb1da82);
    }
  }
  FUN_004f6910(iVar2);
  switch(DAT_0077a920) {
  case 1:
  case 7:
  case 8:
    FUN_00495fc0();
    FUN_00495fc0();
    bVar1 = true;
    break;
  case 2:
  case 4:
  case 5:
    bVar1 = true;
    iVar2 = FUN_004df710();
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x1c) = (*(int *)(iVar2 + 0x1c) + 1) % 0xff;
    }
    param_1[0x11] = iVar2;
    break;
  case 6:
    bVar1 = true;
  }
  FUN_004ddfa0(param_1[0x11]);
  if (bVar1) {
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0xa96c3902);
      }
    }
    FUN_004f6970(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x8cb1da82);
      }
    }
    FUN_004f6970(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x2716e8a);
      }
    }
    FUN_004f6970(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x6d91704);
      }
    }
    FUN_004f6970(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c != 0) {
        uVar3 = FUN_004ef050(0xa962466e);
        FUN_004f6970(uVar3);
        ExceptionList = local_c;
        return param_1;
      }
      iVar2 = 0;
    }
    FUN_004f6970(iVar2);
  }
  else {
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0xa96c3902);
      }
    }
    FUN_004f6910(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x8cb1da82);
      }
    }
    FUN_004f6910(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x2716e8a);
      }
    }
    FUN_004f6910(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x6d91704);
      }
    }
    FUN_004f6910(iVar2);
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0xa962466e);
      }
    }
    FUN_004f6910(iVar2);
  }
  ExceptionList = local_c;
  return param_1;
}

