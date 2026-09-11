/* Decompiled from Speed.exe @ 00649930 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00649930(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_006499a0(0x14);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_00648d20(param_1,param_2);
  }
  if (local_10 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = local_10 + 8;
  }
  FUN_00649b70(local_14);
  return;
}

