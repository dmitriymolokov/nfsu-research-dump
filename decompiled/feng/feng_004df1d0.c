/* Decompiled from Speed.exe @ 004df1d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004df1d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  bVar2 = DAT_006f0880 == 0;
  *param_1 = &PTR_FUN_006c3748;
  param_1[0x10] = 0;
  local_4 = 0;
  param_1[0x11] = 0;
  if (bVar2) {
    if (param_1[3] == 0) {
LAB_004df239:
      if (DAT_0073578c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004ef050(0x43d41f73);
      }
    }
    else {
      iVar1 = FUN_004f65d0();
      if (iVar1 == 0) goto LAB_004df239;
      iVar1 = FUN_004ffb70();
      if (iVar1 == 0) goto LAB_004df239;
    }
    FUN_004f6910(iVar1);
  }
  if (param_1[3] == 0) {
LAB_004df280:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xc4df3ff2);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004df280;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004df280;
  }
  FUN_004f6910(iVar1);
  if (param_1[3] == 0) {
LAB_004df2c7:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x13cf446d);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004df2c7;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004df2c7;
  }
  FUN_004f6970(iVar1);
  if (param_1[3] != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004df32a;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0x8c0bd743);
  }
LAB_004df32a:
  FUN_004f6970(iVar1);
  if (DAT_0073578c != 0) {
    FUN_004f5f80(DAT_0073578c,1);
    if (DAT_0073578c != 0) {
      FUN_004f5ed0(DAT_0073578c);
    }
  }
  FUN_00449f20(0x20);
  FUN_004f6850(local_2c);
  FUN_00414a10();
  FUN_00416bb0(0xeeeb248e);
  param_1[0x11] = DAT_0073ad3c;
  param_1[0x10] = DAT_0073ad3c;
  ExceptionList = local_c;
  return param_1;
}

