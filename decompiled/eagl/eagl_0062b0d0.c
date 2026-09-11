/* Decompiled from Speed.exe @ 0062b0d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_0062b0d0(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_006a7e08;
  if (param_1[4] != 0) {
    uVar1 = (uint)*(ushort *)(param_1[3] + 8);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      (**(code **)(*DAT_0070d364 + 0x2c))(*(undefined4 *)(param_1[4] + uVar1 * 4));
    }
    (**(code **)(*DAT_0070d364 + 0x18))(param_1[4]);
  }
  FUN_00628ed0();
  return;
}

