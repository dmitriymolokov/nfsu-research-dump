/* Decompiled from Speed.exe @ 00509060 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_00509060(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_44;
  char *local_40;
  char *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688fbf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c0224;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar1 = param_1 + 0x1d;
  param_1[0x12] = &DAT_006b9172;
  *puVar1 = puVar1;
  param_1[0x1e] = puVar1;
  puVar1 = param_1 + 0x20;
  param_1[0x1f] = 0;
  param_1[0x11] = &PTR_FUN_006c01fc;
  *puVar1 = puVar1;
  param_1[0x21] = puVar1;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = &DAT_006b9172;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = param_1 + 0x34;
  *puVar1 = puVar1;
  param_1[0x35] = puVar1;
  puVar1 = param_1 + 0x37;
  param_1[0x36] = 0;
  param_1[0x28] = &PTR_FUN_006c01fc;
  *puVar1 = puVar1;
  param_1[0x38] = puVar1;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = &DAT_006b9172;
  puVar1 = param_1 + 0x4b;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *puVar1 = puVar1;
  param_1[0x4c] = puVar1;
  param_1[0x4d] = 0;
  param_1[0x3f] = &PTR_FUN_006c01fc;
  puVar1 = param_1 + 0x4e;
  *puVar1 = puVar1;
  param_1[0x4f] = puVar1;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_8 = 3;
  FUN_00495f00(0x87ad2b6c);
  FUN_00495f00(0x371711c);
  FUN_00495f00(0xab0a1361);
  local_44 = param_1[3];
  local_38 = &DAT_006b9172;
  local_34 = &DAT_006b9172;
  local_40 = "Bar1_Bottom_b";
  local_3c = "Bar1_Top_b";
  local_30 = 0xc;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0x3f55c28f;
  local_20 = 0;
  local_1c = 0;
  (**(code **)(param_1[0x11] + 0x18))(&local_44);
  local_40 = "Bar2_Bottom_b";
  local_3c = "Bar2_Top_b";
  (**(code **)(param_1[0x28] + 0x18))(&local_44);
  local_40 = "Bar3_Bottom_b";
  local_3c = "Bar3_Top_b";
  (**(code **)(param_1[0x3f] + 0x18))(&local_44);
  param_1[0x10] = 0;
  if (DAT_00745e4c == 0) {
    param_1[0x10] = &DAT_00745720;
    uVar3 = 0x38eb5d03;
  }
  else if (DAT_00745e4c == 1) {
    param_1[0x10] = DAT_00735e6c;
    uVar3 = 0x8bc92e99;
  }
  else {
    if (DAT_00745e4c != 2) goto LAB_005092fe;
    param_1[0x10] = DAT_00735e6c + 0x720;
    uVar3 = 0x6bd4fb68;
  }
  FUN_00495f00(uVar3);
LAB_005092fe:
  FUN_00509570(param_1);
  FUN_00509af0();
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar2 + 0x18));
  }
  if (((DAT_00745e4c == 0) && (iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0)) &&
     ((*(int *)(iVar2 + 0x18) != 0 && (*(int **)(iVar2 + 0x14) != (int *)0x0)))) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x1122aacc,0,0,*(int *)(iVar2 + 0x18));
  }
  ExceptionList = local_10;
  return param_1;
}

