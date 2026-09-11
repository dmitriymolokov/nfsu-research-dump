/* Decompiled from Speed.exe @ 005119b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_005119b0(int param_1,uint param_2)

{
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (param_2 == 0xc407210) {
        if (*(char *)(*(int *)(param_1 + 0x58) + 0x18) != '\0') {
          return;
        }
        DAT_00735750 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 8);
        FUN_00504320(*(undefined4 *)(param_1 + 0xc));
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 != 0x911ab364) {
        return;
      }
      FUN_00507020(param_1);
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 != 0xc98356ba) {
      return;
    }
    FUN_004f89d0();
    DAT_00735e84 = 1;
    DAT_006fb02c = 0;
    DAT_0074810c = DAT_0073ad3c;
    FUN_004f7d30();
    return;
  }
  FUN_00511810();
  return;
}

