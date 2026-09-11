/* Decompiled from Speed.exe @ 00563a80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_00563a80(undefined4 *param_1,undefined4 param_2)

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
  *param_1 = &PTR_FUN_006bc618;
  local_4 = 0;
  param_1[0x13] = DAT_00777cb4;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  FUN_00563f70();
  FUN_00564110();
  FUN_00563e40();
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_1[3] == 0) {
LAB_00563b49:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xaa68bfd4);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_00563b49;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_00563b49;
  }
  param_1[0x10] = iVar2;
  if (param_1[3] != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_00563ba5;
    }
  }
  if (DAT_0073578c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ef050(0xaa68bfce);
  }
LAB_00563ba5:
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

