/* Decompiled from Speed.exe @ 004852a0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


undefined4 * __fastcall FUN_004852a0(undefined4 *param_1)

{
  undefined4 unaff_EDI;
  bool bVar1;
  
  FUN_004834e0();
  bVar1 = DAT_00735f5c == 0;
  *param_1 = &PTR_LAB_006c7e10;
  param_1[0xb] = unaff_EDI;
  if (bVar1) {
    *(undefined4 *)(param_1[7] + 0x280) = unaff_EDI;
    *(undefined4 *)(param_1[7] + 0x284) = 0;
  }
  return param_1;
}

