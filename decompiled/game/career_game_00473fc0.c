/* Decompiled from Speed.exe @ 00473fc0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_00473fc0(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(_DAT_006cc960 <= *(float *)(param_2 + 0x1c0));
  if (_DAT_006cc95c < *(float *)(param_2 + 0x1c0)) {
    uVar1 = 2;
  }
  return &DAT_006f0fc0 + uVar1 * 0x6c;
}

