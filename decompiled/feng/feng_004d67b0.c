/* Decompiled from Speed.exe @ 004d67b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004d67b0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 < 0xb5971bf2) {
    if (param_2 != 0xb5971bf1) {
      if (param_2 == 0x911ab364) {
        FUN_004c96c0(0x1122aabb);
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 != 0x9120409e) {
        return;
      }
    }
    uVar1 = *(uint *)(param_3 + 0x10);
    if (uVar1 < 0x9f6a8ddd) {
      if (uVar1 == 0x9f6a8ddc) {
        FUN_004d6a30(param_2);
        return;
      }
      if (uVar1 == 0x1b150b3c) {
        FUN_004d6b40(param_2);
        return;
      }
      if (uVar1 == 0x503362a9) {
        FUN_004d6ab0(param_2);
        return;
      }
    }
    else {
      if (uVar1 == 0xe21f6cf5) {
        FUN_004d6a70(param_2);
        return;
      }
      if (uVar1 == 0xf59a33db) {
        FUN_004d6af0();
        return;
      }
    }
  }
  else if (param_2 == 0xc98356ba) {
    FUN_004d6690(param_1);
  }
  return;
}

