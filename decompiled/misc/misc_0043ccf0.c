/* Decompiled from Speed.exe @ 0043ccf0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043ccf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c [9];
  undefined1 local_8 [4];
  
  FUN_00436e90(local_8,param_1 + 0x1e0);
  FUN_0057d160(param_4,0,0);
  FUN_00565da0("DUMMY_SKIN%d",param_4);
  FUN_00567c70();
  FUN_0057eff0();
  FUN_00565da0("DUMMY_WHEEL%d",param_4);
  FUN_00567c70();
  FUN_0057f010();
  for (local_3c = 0; local_3c < 0xb; local_3c = local_3c + 1) {
    FUN_00436e90(local_8,param_1 + 0x468);
    FUN_00424c60();
    FUN_004175a0();
    FUN_005488d0(1);
    FUN_00424c60();
    FUN_004175b0();
  }
  FUN_0057f2b0(1);
  FUN_00436e90(local_2c,param_1 + 0x9c);
  if (local_2c[0] == 0) {
    FUN_0057d340(param_2);
  }
  else {
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    while ((local_48 < 0x78 && (local_44 < local_2c[0]))) {
      if ((local_40 < 0xc) && (local_48 == *(int *)(&DAT_00700a28 + local_40 * 4))) {
        local_40 = local_40 + 1;
      }
      else {
        FUN_00436db0();
        FUN_00436d90();
        iVar1 = FUN_005491b0();
        if ((iVar1 < 0x1ffe) && (iVar1 = FUN_0057cd30(), iVar1 != 0)) {
          FUN_0057ea50();
        }
        local_44 = local_44 + 1;
      }
      local_48 = local_48 + 1;
    }
  }
  return;
}

