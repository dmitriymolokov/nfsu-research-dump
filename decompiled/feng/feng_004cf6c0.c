/* Decompiled from Speed.exe @ 004cf6c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004cf6c0(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x42c,*(undefined4 *)(param_1 + 900));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  (**(code **)(*(int *)(param_1 + 0x210) + 0x10))();
  return;
}

