/* Decompiled from Speed.exe @ 004e9ce0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e9ce0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar2 = DAT_0073578c;
  bVar3 = DAT_0073578c != 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_006c2da4;
  if (bVar3) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar1 + 0x18));
    }
  }
  param_1[0x13] = 0;
  FUN_00414a10();
  FUN_004e9e90(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_1[3] == 0) {
LAB_004e9d90:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xaa68bfd4);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_004e9d90;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_004e9d90;
  }
  param_1[0x10] = iVar2;
  if (param_1[3] != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_004e9dec;
    }
  }
  if (DAT_0073578c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ef050(0xaa68bfce);
  }
LAB_004e9dec:
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

