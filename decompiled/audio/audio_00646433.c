/* Decompiled from Speed.exe @ 00646433 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void __thiscall
FUN_00646433(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *local_18;
  uint local_8;
  
  local_18 = (int *)FUN_00647b20(param_2 * 0x34 + 4);
  if (local_18 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    *local_18 = param_2;
    FUN_004010a0(local_18 + 1,0x34,param_2,FUN_006478e3);
    local_18 = local_18 + 1;
  }
  *param_1 = (int)local_18;
  param_1[1] = param_2;
  if (param_1[1] != 0) {
    FUN_006479f1(0);
  }
  for (local_8 = 0; local_8 < (uint)param_1[1]; local_8 = local_8 + 1) {
    FUN_00647984(param_3);
    FUN_00647999(param_4);
    FUN_006479af(param_5);
    FUN_006479c5(param_6);
    FUN_006479db(local_8);
  }
  return;
}

