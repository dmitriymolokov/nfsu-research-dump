/* Decompiled from Speed.exe @ 005964c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005964c0(undefined4 *param_1)

{
  byte *pbVar1;
  
  *param_1 = &PTR_FUN_006b8a90;
  if (*(int *)(&DAT_0072a008 + *(short *)(param_1[0x18] + 4) * 4) != 0) {
    pbVar1 = (byte *)(*(short *)(param_1[0x18] + 6) * 0x30 +
                      *(int *)(*(int *)(&DAT_0072a008 + *(short *)(param_1[0x18] + 4) * 4) + 0x20) +
                     0xe);
    *pbVar1 = *pbVar1 | 0x10;
  }
  *(undefined4 *)(param_1[0x18] + 0xc) = 0;
  DAT_00736020 = DAT_00736020 + -1;
  *param_1 = &PTR_FUN_006c8720;
  DAT_0073600c = DAT_0073600c + -1;
  FUN_00468410();
  return;
}

