/* Decompiled from Speed.exe @ 004c2630 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004c2630(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_EDX;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar1 = DAT_007361f0;
  *param_1 = &PTR_FUN_006c56b8;
  param_1[0x10] = 0;
  iVar1 = *(int *)(iVar1 + 0x1c);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else {
    uVar2 = (iVar1 != 3) - 1 & 8;
  }
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = uVar2;
  }
  iVar1 = DAT_0073578c;
  bVar3 = DAT_0073578c != 0;
  DAT_00777cb8 = 0xffffffff;
  param_1[0x10] = DAT_0073ad3c;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  if (bVar3) {
    uVar4 = 0;
    FUN_004fd230(0);
    FUN_004f5f80(iVar1,uVar4);
  }
  FUN_00414a10();
  FUN_00414a10();
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    if (((param_1[3] == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
       (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
      if (DAT_0073578c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004ef050(0xcda0a66d);
      }
    }
    FUN_004f6970(iVar1);
    if (extraout_EDX == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    uVar4 = 1;
    iVar1 = extraout_EDX;
  }
  else {
    iVar1 = param_1[3];
    uVar4 = FUN_004fd230();
    if (((iVar1 == 0) ||
        ((iVar1 = FUN_004f65d0(), iVar1 == 0 || (iVar1 = FUN_004ffb70(), iVar1 == 0)))) &&
       (DAT_0073578c != 0)) {
      FUN_004ef050(uVar4);
    }
    iVar1 = DAT_0073578c;
    FUN_004f75b0(0xff404040);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    uVar4 = 0;
    FUN_004fd230(0);
    FUN_004f5f80(iVar1,uVar4);
    if (DAT_0073578c == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    uVar4 = 0;
    iVar1 = DAT_0073578c;
  }
  FUN_004f5f80(iVar1,uVar4);
  ExceptionList = local_c;
  return param_1;
}

