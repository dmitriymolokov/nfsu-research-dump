/* Decompiled from Speed.exe @ 0050d010 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_0050d010(int param_1,uint param_2)

{
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (param_2 == 0xc407210) {
        DAT_0073573c = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
        DAT_00735740 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
        FUN_0050ced0();
        return;
      }
      if (param_2 != 0x911ab364) {
        return;
      }
      FUN_0050cf30(param_1);
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 != 0xc98356ba) {
      return;
    }
    FUN_004f89d0();
    FUN_004f7d30();
    return;
  }
  FUN_0050cd90();
  return;
}

