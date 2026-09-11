/* Decompiled from Speed.exe @ 0062b120 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall FUN_0062b120(int param_1,int param_2)

{
  uint uVar1;
  
  *(int *)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (uint)*(ushort *)(param_2 + 8);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      (**(code **)(*DAT_0070d364 + 0x2c))(*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar1 * 4));
    }
    (**(code **)(*DAT_0070d364 + 0x18))(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

