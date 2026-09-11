/* Decompiled from Speed.exe @ 004d2700 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d2700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f6850(iVar1);
  FUN_004d1600(1,1,0);
  FUN_004f68c0(0x20,"OptionName_%d",2);
  FUN_00414a60();
  iVar1 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar2 = 1;
    FUN_004fd230(1);
    FUN_004f5f80(iVar1,uVar2);
  }
  FUN_004f68c0(0x20,"OptionNametext_%d",2);
  FUN_00414a60();
  FUN_004d16d0(param_1,0);
  FUN_004d16d0(param_1,1);
  (**(code **)(*(int *)(param_1 + 0x6c) + 0xc))(1);
  *(undefined4 *)(param_1 + 0x3ac) = 2;
  *(code **)(param_1 + 0x44) = FUN_004cfec0;
  FUN_004cfdb0();
  *(undefined1 **)(param_1 + 0x40) = &LAB_004cfe10;
  *(undefined4 *)(param_1 + 0x3a0) = 1;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  FUN_004cfd00(1);
  return;
}

