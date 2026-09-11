/* Decompiled from Speed.exe @ 004bdf40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004bdf40(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x21d,*(undefined4 *)(param_1 + 0x164));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  (**(code **)(*(int *)(param_1 + 0x100) + 0x10))();
  return;
}

