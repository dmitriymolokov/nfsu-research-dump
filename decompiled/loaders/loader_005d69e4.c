/* Decompiled from Speed.exe @ 005d69e4 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005d69e4(undefined4 *param_1)

{
  byte bVar1;
  byte extraout_AH;
  
  bVar1 = FUN_005d6900();
  if (((bVar1 & 0x20) != 0) && ((char)bVar1 < '\0')) {
    *param_1 = FUN_005f4cfb;
    param_1[1] = &LAB_005f3f47;
    param_1[2] = &LAB_005f4fbc;
    param_1[3] = &LAB_005f0197;
    param_1[5] = FUN_005f4d50;
    param_1[6] = FUN_005f3fb8;
    param_1[7] = FUN_005f401f;
    param_1[8] = &LAB_005f503e;
    param_1[9] = FUN_005f4d89;
    param_1[10] = thunk_FUN_005f42ad;
    param_1[0xb] = &LAB_005f03c9;
    param_1[0xc] = &LAB_005f53e6;
    param_1[0xd] = &LAB_005f5429;
    param_1[0xe] = FUN_005f4504;
    param_1[0xf] = FUN_005f468c;
    param_1[0x10] = &LAB_005f509d;
    param_1[0x11] = &LAB_005f4ded;
    param_1[0x12] = &LAB_005f3f2b;
    param_1[0x13] = &LAB_005eecbc;
    param_1[0x14] = &LAB_005eed55;
    param_1[0x15] = FUN_005f55cb;
    param_1[0x16] = &LAB_005f550d;
    param_1[0x17] = FUN_005eedb2;
    param_1[0x18] = &LAB_005eedf6;
    param_1[0x19] = &LAB_005ef227;
    param_1[0x1a] = &LAB_005f0498;
    param_1[0x1b] = &LAB_005f04e8;
    param_1[0x1c] = &LAB_005f05d3;
    param_1[0x1d] = FUN_005ef2ec;
    param_1[0x1e] = &LAB_005f06af;
    param_1[0x1f] = &LAB_005f0712;
    param_1[0x20] = &LAB_005f0770;
    param_1[0x21] = &LAB_005f07c9;
    param_1[0x22] = &LAB_005f562f;
    param_1[0x23] = FUN_005ef358;
    param_1[0x24] = FUN_005ef48f;
    param_1[0x25] = &LAB_005f0810;
    param_1[0x26] = &LAB_005f08b8;
    param_1[0x27] = FUN_005f0a3f;
    param_1[0x28] = FUN_005f1bd7;
    param_1[0x29] = &LAB_005f1d7c;
    param_1[0x2a] = FUN_005f22b0;
    param_1[0x2b] = FUN_005ef51c;
    param_1[0x2c] = &LAB_005ef5ae;
    param_1[0x36] = &LAB_005f51cf;
    param_1[0x33] = &LAB_005f407e;
    param_1[0x30] = &LAB_005f4e85;
    param_1[0x2e] = &LAB_005f4ece;
    param_1[0x34] = &LAB_005f5240;
    param_1[0x31] = &LAB_005f40ef;
    param_1[0x37] = FUN_005ef612;
    param_1[0x38] = &LAB_005ef6b9;
    param_1[0x35] = &LAB_005f5308;
    param_1[0x2f] = &LAB_005f4f11;
    param_1[0x32] = &LAB_005f41c3;
    param_1[4] = &LAB_005f37ff;
    param_1[0x2d] = FUN_005ef75e;
    param_1[0x3a] = FUN_005f4a40;
    param_1[0x39] = &LAB_005f4b80;
    if (((extraout_AH & 1) != 0) && ((extraout_AH & 2) != 0)) {
      param_1[0xf] = FUN_005f48b2;
      param_1[0x12] = FUN_005f351d;
      param_1[0x26] = &LAB_005f098a;
      param_1[0x27] = FUN_005f23c9;
      param_1[0x18] = &LAB_005ef012;
    }
  }
  if ((bVar1 & 0x40) != 0) {
    param_1[0x3e] = &LAB_005ee680;
    param_1[0x3f] = &LAB_005ee720;
    param_1[0x40] = &LAB_005eea40;
    param_1[0x3b] = &LAB_005ee000;
    param_1[0x3c] = &LAB_005ee260;
    param_1[0x3d] = &LAB_005ee4c0;
    param_1[0x41] = &LAB_005edf40;
    param_1[0x44] = &LAB_005ede80;
  }
  return;
}

