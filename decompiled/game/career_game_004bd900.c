/* Decompiled from Speed.exe @ 004bd900 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004bd900(undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *local_30;
  char *local_2c;
  char *local_28;
  undefined1 *local_24;
  void *local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688aeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c56c8;
  param_1[0x1c] = &PTR_LAB_006cbe74;
  param_1[0x1d] = &DAT_006b9172;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = &PTR_LAB_006cbe74;
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
  param_1[0x34] = &PTR_LAB_006cbe74;
  param_1[0x35] = &DAT_006b9172;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = &PTR_LAB_006cbe74;
  param_1[0x41] = &DAT_006b9172;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = &PTR_LAB_006cbe74;
  param_1[0x4d] = &DAT_006b9172;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  iVar4 = *(int *)(DAT_007361f0 + 0x1c);
  local_4 = 5;
  if (iVar4 == 0) {
    param_2 = 1;
  }
  else if (iVar4 == 1) {
    param_2 = 2;
  }
  else if (iVar4 == 2) {
    param_2 = 4;
  }
  else {
    param_2 = (iVar4 != 3) - 1 & 8;
  }
  iVar4 = FUN_004f65d0();
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 0x1c) = param_2;
  }
  local_30 = (char *)param_1[3];
  local_18 = (float)DAT_0078a3fb;
  local_2c = "SliderBase_2";
  local_28 = "Slider_2";
  local_24 = &DAT_006b9172;
  local_14 = 0x42800000;
  local_10 = 0x41200000;
  local_1c = 255.0;
  local_20 = (void *)0x0;
  (**(code **)(param_1[0x28] + 8))(&local_30);
  local_1c = (float)DAT_0078a3fa;
  local_30 = "SliderBase_1";
  local_2c = "Slider_1";
  (**(code **)(param_1[0x1c] + 8))(&stack0xffffffcc);
  local_20 = DAT_007588fc;
  local_30 = "Slider_4";
  local_2c = "";
  local_1c = 0.1;
  local_18 = 10.0;
  local_24 = (undefined1 *)0x3f800000;
  local_28 = (char *)0x0;
  (**(code **)(param_1[0x34] + 8))(&stack0xffffffc8);
  local_24 = (undefined1 *)DAT_00758904;
  (**(code **)(param_1[0x40] + 8))(&stack0xffffffc4);
  local_28 = (char *)DAT_00758900;
  (**(code **)(param_1[0x4c] + 8))(&stack0xffffffc0);
  pcVar1 = (char *)((int)param_1 + 0x21d);
  *pcVar1 = 'O';
  pcVar5 = pcVar1;
  do {
    cVar2 = pcVar5[(int)("OptionNametext_" + (1 - (int)pcVar1))];
    pcVar5 = pcVar5 + 1;
    *pcVar5 = cVar2;
  } while (cVar2 != '\0');
  *(bool *)(param_1 + 0x10) = DAT_0078a3f6 == '\x05';
  iVar4 = (int)DAT_0078a3f6;
  param_1[0x7b] = 1;
  param_1[0x58] = 1;
  param_1[0x11] = iVar4;
  *(undefined1 *)(param_1 + 0x87) = 0;
  puVar6 = param_1 + 0x8d;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
    if ((DAT_0073578c == 0) || (iVar3 = *(int *)(DAT_0073578c + 8), iVar3 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004fd1e0(iVar3 + 0xdc);
      if (iVar4 == 0) {
        iVar4 = FUN_004fd1e0(iVar3 + 0xec);
      }
    }
  }
  param_1[0xad] = iVar4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_004c0b60(param_1);
  ExceptionList = local_20;
  return param_1;
}

