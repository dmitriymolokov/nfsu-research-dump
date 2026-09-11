/* Decompiled from Speed.exe @ 004d1600 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d1600(undefined4 param_1,char param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004f68c0(0x20,"OptionName_%d",param_1);
  FUN_00414a60();
  iVar1 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    uVar2 = 1;
    FUN_004fd230(1);
    FUN_004f5f80(iVar1,uVar2);
  }
  FUN_004f68c0(0x20,"OptionNametext_%d",param_1);
  FUN_00414a60();
  if (param_2 != '\0') {
    FUN_004f68c0(0x20,"OptionData_%d",param_1);
    FUN_00414a60();
  }
  if (param_3 != '\0') {
    FUN_004f68c0(0x20,"SelectButton_%d",param_1);
    FUN_00414a60();
  }
  return;
}

