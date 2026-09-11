/* Decompiled from Speed.exe @ 004603d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004603d0(int param_1,int param_2)

{
  FUN_0045e970(param_2);
  (**(code **)(*(int *)(param_1 + 0x250) + 4))();
  if ((DAT_0073608c != 0) && (0xf < *(ushort *)(param_2 + 0x420))) {
    *(ushort *)(param_2 + 0x1d0) = *(ushort *)(param_2 + 0x420);
  }
  *(undefined4 *)(param_2 + 0x1e4) = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_2 + 0x430);
  *(undefined4 *)(param_2 + 0x1dc) = *(undefined4 *)(param_2 + 0x42c);
  return;
}

