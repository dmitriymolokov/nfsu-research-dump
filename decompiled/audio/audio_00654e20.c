/* Decompiled from Speed.exe @ 00654e20 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined2 * FUN_00654e20(int param_1,uint param_2)

{
  if ((param_2 & 0x71c) == 4) {
    return &DAT_00713f50 + param_1 * 10;
  }
  if ((param_2 & 0x71c) != 0x10) {
    return (undefined2 *)0x0;
  }
  return &DAT_00713f64 + param_1 * 10;
}

