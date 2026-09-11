/* Decompiled from Speed.exe @ 004b8d50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b8d50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004f68c0(0x20,"Option%dText",param_1);
  iVar1 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar2 = 1;
    FUN_004fd230(1);
    FUN_004f5f80(iVar1,uVar2);
  }
  FUN_00414a60();
  FUN_004f68c0(0x20,"Option%dData",param_1);
  FUN_00414a60();
  FUN_004f68c0(0x20,"Option%dTextString",param_1);
  FUN_00414a60();
  FUN_004f68c0(0x20,"Option%d_Arrow_L",param_1);
  FUN_00414a60();
  FUN_004f68c0(0x20,"Option%d_arrow_r",param_1);
  FUN_00414a60();
  FUN_004f68c0(0x20,"Option%d_Arrow_L_Button",param_1);
  FUN_00414a60();
  FUN_004f68c0(0x20,"Option%d_Arrow_R_Button",param_1);
  FUN_00414a60();
  return;
}

