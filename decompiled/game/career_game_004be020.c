/* Decompiled from Speed.exe @ 004be020 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004be020(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x21d,*(undefined4 *)(param_1 + 0x178));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  iVar1 = DAT_007356a8;
  if (DAT_007356a8 != 0) {
    *(undefined4 **)(DAT_007356a8 + 8) = &DAT_007588fc;
    FUN_0051cc10(iVar1);
    _DAT_006f8718 = DAT_00758914;
    _DAT_006f871c = FUN_00674898();
  }
  (**(code **)(*(int *)(param_1 + 0x130) + 0x10))();
  return;
}

