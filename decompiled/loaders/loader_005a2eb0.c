/* Decompiled from Speed.exe @ 005a2eb0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005a2eb0(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x1c))();
  if (param_1[0x1629] == 7) {
    FUN_005a2d70();
  }
  if (param_1[0x1619] != 0) {
    piVar1 = (int *)(param_1[0x1619] + 0xb0c);
    param_1[0x1619] = -(uint)(piVar1 < param_1 + param_1[0x161a] * 0x2c3 + 1) & (uint)piVar1;
    return;
  }
  param_1[0x1619] = 0;
  return;
}

