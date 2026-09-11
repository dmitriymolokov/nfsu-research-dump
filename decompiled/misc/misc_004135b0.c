/* Decompiled from Speed.exe @ 004135b0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004135b0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006cbf14;
  _DAT_00777cc0 = 4;
  local_4 = 0;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xcaaccd3b);
    }
  }
  DAT_0071b7cc = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xcaaccd3c);
    }
  }
  DAT_0071b7d0 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xcaaccd3d);
    }
  }
  _DAT_0071b7d4 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xcaaccd3e);
    }
  }
  _DAT_0071b7d8 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xcaaccd3f);
    }
  }
  _DAT_0071b7dc = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xcaaccd40);
    }
  }
  _DAT_0071b7e0 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xdbeeae54);
    }
  }
  DAT_0071b7e4 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x200030ea);
    }
  }
  _DAT_0071b7e8 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xc2998e98);
    }
  }
  _DAT_0071b7ec = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x4b2b49a7);
    }
  }
  _DAT_0071b7f0 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x4d807248);
    }
  }
  _DAT_0071b7f4 = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x4fd59ae9);
    }
  }
  _DAT_0071b7f8 = iVar3;
  iVar4 = FUN_004fd230();
  iVar3 = (&DAT_0071b7e4)[DAT_00736344];
  for (iVar6 = *(int *)(iVar3 + 0x4c); (iVar6 != 0 && (*(int *)(iVar6 + 0x30) != iVar4));
      iVar6 = *(int *)(iVar6 + 4)) {
  }
  *(int *)(iVar3 + 0x54) = iVar6;
  if (iVar6 != 0) {
    FUN_004ff030(iVar3);
  }
  *(undefined4 *)(*(int *)(iVar3 + 0x54) + 0x10) = 0;
  FUN_00414680();
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_00413a70(param_1,0);
  pcVar5 = PTR_s_PC_JoyPad_Config_fng_00700ffc;
  do {
    cVar1 = pcVar5[param_1[3] - (int)PTR_s_PC_JoyPad_Config_fng_00700ffc];
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if ((cVar1 == '\0') || (cVar2 == '\0')) break;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    if (DAT_0073578c == 0) goto LAB_004139b3;
    uVar7 = 0;
  }
  else {
    if (DAT_0073578c == 0) goto LAB_004139b3;
    uVar7 = 1;
  }
  FUN_004f5f80(DAT_0073578c,uVar7);
LAB_004139b3:
  iVar6 = DAT_0073578c;
  iVar3 = param_1[3];
  uVar7 = FUN_004fd230();
  if (((((iVar3 == 0) || (iVar3 = FUN_004f65d0(), iVar6 = DAT_0073578c, iVar3 == 0)) ||
       (iVar3 = FUN_004ffb70(), iVar6 = DAT_0073578c, iVar3 == 0)) &&
      ((iVar6 == 0 || (iVar3 = FUN_004ef050(uVar7), iVar3 == 0)))) || (*(int *)(iVar3 + 0x18) != 2))
  {
    iVar3 = 0;
  }
  param_1[0x23] = iVar3;
  *(undefined1 *)(param_1 + 0x22) = 0;
  DAT_00736340 = DAT_00736340 + 1;
  ExceptionList = local_c;
  return param_1;
}

