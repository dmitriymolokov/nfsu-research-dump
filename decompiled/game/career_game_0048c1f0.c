/* Decompiled from Speed.exe @ 0048c1f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_0048c1f0(undefined4 *param_1)

{
  bool bVar1;
  
  FUN_004834e0();
  bVar1 = DAT_00735f5c == 0;
  *param_1 = &PTR_LAB_006c7f80;
  if (bVar1) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
  }
  return param_1;
}

