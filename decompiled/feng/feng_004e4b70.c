/* Decompiled from Speed.exe @ 004e4b70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004e4b70(byte param_1)

{
  uint uVar1;
  
  if (param_1 < 0xb) {
    uVar1 = 1 << (param_1 * '\x03' + 1 & 0x1f) & DAT_00760288;
  }
  else {
    uVar1 = 1 << ((param_1 - 0xb) * '\x03' + 1 & 0x1f) & DAT_0076028c;
  }
  if (uVar1 == 0) {
    if (param_1 < 0xb) {
      uVar1 = 1 << (param_1 * '\x03' + 2 & 0x1f) & DAT_00760288;
    }
    else {
      uVar1 = 1 << ((param_1 - 0xb) * '\x03' + 2 & 0x1f) & DAT_0076028c;
    }
    if (uVar1 == 0) {
      if (param_1 != 10) {
        if (param_1 < 0xb) {
          uVar1 = 1 << ((param_1 + 1) * '\x03' & 0x1f) & DAT_00760288;
        }
        else {
          uVar1 = 1 << ((param_1 - 10) * '\x03' & 0x1f) & DAT_0076028c;
        }
        if (uVar1 != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

