/* Decompiled from Speed.exe @ 004e8020 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e8020(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x911ab365) {
    if (param_1 == 0x911ab364) {
      iVar1 = FUN_004b2330();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x9c) = 0;
      }
      FUN_00504890(0);
      FUN_00504390();
      iVar1 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        iVar2 = FUN_004f3f90(&DAT_00746104);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
          FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
          return;
        }
      }
    }
    else {
      if (param_1 == 0xc407210) {
        FUN_004e7e00();
        return;
      }
      if (param_1 == 0x12345555) {
        FUN_004e7eb0();
        return;
      }
      if (param_1 == 0x12346666) {
        FUN_004e7f60();
        return;
      }
    }
  }
  else if ((param_1 == 0x9120409e) || (param_1 == 0xb5971bf1)) {
    FUN_004e7d70();
  }
  else if (param_1 == 0xc98356ba) {
    FUN_004f89d0();
    FUN_004f7d30();
    return;
  }
  return;
}

