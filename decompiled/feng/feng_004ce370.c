/* Decompiled from Speed.exe @ 004ce370 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ce370(void)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int unaff_EBX;
  
  if ((((DAT_0073578c != 0) && (FUN_004f5f80(DAT_0073578c,1), DAT_0073578c != 0)) &&
      (FUN_004f5f80(DAT_0073578c,1), DAT_0073578c != 0)) &&
     (FUN_004f5f80(DAT_0073578c,1), DAT_0073578c != 0)) {
    FUN_004f5f80(DAT_0073578c,1);
  }
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x1aec7d09);
    }
  }
  FUN_004f6970(iVar1);
  iVar1 = extraout_EDX;
  if (((*(int *)(unaff_EBX + 0xc) == 0) ||
      (iVar2 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar2 == 0)) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x1aec7d0a);
    }
  }
  FUN_004f6970(iVar2);
  iVar1 = extraout_EDX_00;
  if (((*(int *)(unaff_EBX + 0xc) == 0) ||
      (iVar2 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar2 == 0)) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x1aec7d0b);
    }
  }
  FUN_004f6970(iVar2);
  iVar1 = extraout_EDX_01;
  if (((*(int *)(unaff_EBX + 0xc) == 0) ||
      (iVar2 = FUN_004f65d0(), iVar1 = DAT_0073578c, iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar1 = DAT_0073578c, iVar2 == 0)) {
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x1aec7d0c);
    }
  }
  FUN_004f6970(iVar2);
  *(undefined1 **)(unaff_EBX + 0x44) = &LAB_004cdc40;
  *(undefined1 **)(unaff_EBX + 0x48) = &LAB_004cdcf0;
  *(undefined1 **)(unaff_EBX + 0x4c) = &LAB_004cdca0;
  *(undefined1 **)(unaff_EBX + 0x50) = &LAB_004cddb0;
  *(undefined4 *)(unaff_EBX + 0x58) = 1;
  *(undefined4 *)(unaff_EBX + 100) = 2;
  *(undefined4 *)(unaff_EBX + 0x60) = 3;
  *(undefined4 *)(unaff_EBX + 0x68) = 4;
  FUN_004f68c0(0x20,"OptionName_%1d",1);
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  FUN_004cda80(unaff_EBX);
  FUN_004cdb60(unaff_EBX);
  FUN_004f68c0(0x20,"OptionName_%1d",*(undefined4 *)(unaff_EBX + 0x68));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  return;
}

