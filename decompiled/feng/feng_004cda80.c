/* Decompiled from Speed.exe @ 004cda80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004cda80(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_004f68c0(0x20,"OptionName_%1d",*(undefined4 *)(param_1 + 0x60));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  if (DAT_007361b4 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(DAT_007361b4 + 8);
  }
  if (*(int *)(DAT_007361f0 + 0x1c) == iVar1) {
    uVar2 = 0;
  }
  else {
    if (DAT_007361b8 == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(DAT_007361b8 + 8);
    }
    uVar2 = (uint)(*(int *)(DAT_007361f0 + 0x1c) == iVar1);
  }
  if (((&DAT_007361b4)[uVar2] != 0) && (*(int *)((&DAT_007361b4)[uVar2] + 0x58) != 0)) {
    FUN_004fd230(0xff606060);
    FUN_00415510();
    iVar1 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      uVar3 = 0;
      FUN_004fd230(0);
      FUN_004f5f80(iVar1,uVar3);
    }
  }
  return;
}

