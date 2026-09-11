/* Decompiled from Speed.exe @ 00440d30 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


undefined4 FUN_00440d30(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_28;
  FUN_005677d0(param_4);
  local_34 = 0x497423f0;
  local_38 = 0;
  if (0 < *(int *)(param_1 + 0x2a0)) {
    do {
      cVar1 = FUN_00440560(&local_34,param_2,param_3,&local_20,&local_30,0);
      if (cVar1 != '\0') {
        return 1;
      }
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(param_1 + 0x2a0));
  }
  return 0;
}

