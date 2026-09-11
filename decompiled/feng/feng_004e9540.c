/* Decompiled from Speed.exe @ 004e9540 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e9540(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c2d54;
  FUN_0051bad0(&DAT_007449c8);
  if (param_1[3] == 0) {
LAB_004e959f:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x17e83cc);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e959f;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e959f;
  }
  FUN_004f6910(iVar1);
  if (param_1[3] == 0) {
LAB_004e95e6:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x98861bee);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e95e6;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e95e6;
  }
  FUN_004f6910(iVar1);
  if (param_1[3] != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004e9649;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0x98861bef);
  }
LAB_004e9649:
  FUN_004f6910(iVar1);
  iVar1 = DAT_0073578c;
  bVar2 = DAT_0073578c != 0;
  param_1[0x14] = DAT_006fb038;
  DAT_006fb038 = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x13] = 0x1b;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (bVar2) {
    FUN_004f5ed0(iVar1);
  }
  FUN_00414a10();
  ExceptionList = local_c;
  return param_1;
}

