/* Decompiled from Speed.exe @ 00638f20 */
/* Module: Loader */
/* Ghidra DecompileModule */


undefined4 FUN_00638f20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (0x22b < param_1) {
    if (param_1 < 0x115d) {
      if (param_1 == 0x115c) {
        return 0x6d;
      }
      if (param_1 == 0x235) {
        return 0x78;
      }
      if (param_1 == 0x378) {
        return 0x7f;
      }
      if (param_1 == 0x613) {
        return 0x7e;
      }
    }
    else if (param_1 == 0x1a0a) {
      uVar1 = 0x66;
    }
    else {
      if (param_1 == 0x22b8) {
        return 0x7d;
      }
      if (param_1 == 0x200f12) {
        return 0x6a;
      }
    }
    return uVar1;
  }
  if (param_1 != 0x22b) {
    if (0x10 < param_1) {
      if (param_1 == 0x18) {
        return 0x7f;
      }
      if (param_1 != 0x20) {
        if (param_1 != 0x1e4) {
          return 0;
        }
        return 0x68;
      }
      return 0x7d;
    }
    if (param_1 == 0x10) {
      return 0x78;
    }
    if (param_1 == 4) {
      return 0x79;
    }
    if (param_1 == 8) {
      return 0x7b;
    }
    if (param_1 != 0xf) {
      return uVar1;
    }
  }
  return 0x7e;
}

