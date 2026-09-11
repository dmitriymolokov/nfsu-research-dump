/* Decompiled from Speed.exe @ 004bdfb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004bdfb0(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x21d,*(undefined4 *)(param_1 + 0x168));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  (**(code **)(*(int *)(param_1 + 0xd0) + 0x10))();
  return;
}

