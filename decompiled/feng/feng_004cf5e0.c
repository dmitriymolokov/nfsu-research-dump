/* Decompiled from Speed.exe @ 004cf5e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004cf5e0(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"%s%1d",param_1 + 0x42c,*(undefined4 *)(param_1 + 0x37c));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  (**(code **)(*(int *)(param_1 + 0x198) + 0x10))();
  return;
}

