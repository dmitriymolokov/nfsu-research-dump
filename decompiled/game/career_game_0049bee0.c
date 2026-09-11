/* Decompiled from Speed.exe @ 0049bee0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0049bee0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c75a8;
  local_4 = 0;
  if (DAT_007361b4 == 0) {
    param_1[0x4f] = 1;
  }
  else {
    param_1[0x4f] = (int)*(char *)(*(int *)(*(int *)(DAT_007361b4 + 4) + 0x1c) + 0xc);
  }
  FUN_0049c0e0(param_1);
  FUN_0049c820(param_1,param_1[0x4f]);
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_1[3] == 0) {
LAB_0049bf7f:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xaa68bfd4);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0049bf7f;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0049bf7f;
  }
  param_1[0x10] = iVar2;
  if (param_1[3] != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_0049bfdb;
    }
  }
  if (DAT_0073578c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ef050(0xaa68bfce);
  }
LAB_0049bfdb:
  param_1[0x11] = iVar2;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) {
    if ((DAT_0073578c == 0) || (iVar1 = *(int *)(DAT_0073578c + 8), iVar1 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004fd1e0(iVar1 + 0xdc);
      if (iVar2 == 0) {
        iVar2 = FUN_004fd1e0(iVar1 + 0xec);
      }
    }
  }
  param_1[0x12] = iVar2;
  ExceptionList = local_c;
  return param_1;
}

