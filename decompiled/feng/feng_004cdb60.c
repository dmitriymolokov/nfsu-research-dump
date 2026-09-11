/* Decompiled from Speed.exe @ 004cdb60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004cdb60(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_0043a2e0();
  if (cVar2 != '\0') {
    uVar1 = (&DAT_006fa5b4)[*(int *)(param_1 + 100)];
    if ((((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
        (iVar3 = FUN_004ffb70(), iVar3 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar1);
    }
    iVar3 = DAT_0073578c;
    FUN_004f75b0(0xff606060);
    if (iVar3 != 0) {
      FUN_004f5f80(iVar3,0);
    }
  }
  FUN_004f68c0(0x20,"OptionName_%1d",*(undefined4 *)(param_1 + 100));
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar3);
  return;
}

