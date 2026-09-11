/* Decompiled from Speed.exe @ 004be660 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004be660(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x21d,*(undefined4 *)(param_1 + 0x184));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  (**(code **)(*(int *)(param_1 + 0x70) + 0x10))();
  return;
}

