/* Decompiled from Speed.exe @ 004bba40 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_004bba40(undefined4 param_1,undefined4 param_2)

{
  undefined1 in_AL;
  int iVar1;
  int unaff_EBX;
  
  *(undefined1 *)(unaff_EBX + 0x48) = in_AL;
  if (*(int *)(unaff_EBX + 0xc) == 0) {
LAB_004bba66:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xf4734a97);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004bba66;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004bba66;
  }
  FUN_004f6910(iVar1);
  if (*(int *)(unaff_EBX + 0xc) == 0) {
LAB_004bbaad:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x3b8ed302);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004bbaad;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004bbaad;
  }
  FUN_004f6910(iVar1);
  if (*(int *)(unaff_EBX + 0xc) == 0) {
LAB_004bbaf4:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x790c04e1);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004bbaf4;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004bbaf4;
  }
  FUN_004f6910(iVar1);
  if (*(int *)(unaff_EBX + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004bbb57;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0xa3989aac);
  }
LAB_004bbb57:
  FUN_004f6910(iVar1);
  FUN_004ad7b0(param_1);
  FUN_004ad7b0(param_1);
  FUN_004ad7b0(param_2);
  FUN_004ad7b0(param_2);
  *(undefined4 *)(unaff_EBX + 0x4c) = 0;
  *(undefined4 *)(unaff_EBX + 0x50) = 0;
  if (*(int *)(unaff_EBX + 0x40) != 0) {
    FUN_00546060();
  }
  if (*(int *)(unaff_EBX + 0x44) != 0) {
    FUN_00546060();
  }
  *(undefined4 *)(unaff_EBX + 0x44) = param_2;
  *(undefined4 *)(unaff_EBX + 0x40) = param_1;
  *(int *)(unaff_EBX + 0x54) = *(int *)(unaff_EBX + 0x54) + 1;
  FUN_0053e9e0(&DAT_00740420,&param_2,1,FUN_004bb5c0,unaff_EBX,0);
  *(int *)(unaff_EBX + 0x54) = *(int *)(unaff_EBX + 0x54) + 1;
  param_2 = *(undefined4 *)(unaff_EBX + 0x40);
  FUN_0053e9e0(&DAT_00740420,&param_2,1,FUN_004bb5c0,unaff_EBX,0);
  return;
}

