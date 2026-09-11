/* Decompiled from Speed.exe @ 006236d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_006236d0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
      *param_1 = 4;
    }
    else {
      param_1[iVar1] = 1;
    }
    param_1[iVar1 + 8] = 1;
    param_1[iVar1 + 0x10] = 2;
    param_1[iVar1 + 0x18] = 1;
    if (iVar1 == 0) {
      param_1[0x20] = 2;
    }
    else {
      param_1[iVar1 + 0x20] = 1;
    }
    param_1[iVar1 + 0x28] = 1;
    param_1[iVar1 + 0x30] = 2;
    param_1[iVar1 + 0x38] = 1;
    param_1[iVar1 + 0x40] = 1;
    param_1[iVar1 + 0x48] = 0;
    param_1[iVar1 + 0x50] = 0;
    param_1[iVar1 + 0x58] = 0;
    param_1[iVar1 + 0x60] = 0;
    param_1[iVar1 + 0x68] = iVar1;
    param_1[iVar1 + 0x70] = 0;
    param_1[iVar1 + 0x78] = 0;
    param_1[iVar1 + 0x80] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  param_1[0x88] = 0;
  return;
}

