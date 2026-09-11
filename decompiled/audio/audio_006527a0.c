/* Decompiled from Speed.exe @ 006527a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_006527a0(uint param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 >> 8 & 3;
  param_1 = param_1 & 0xff;
  if (uVar1 == 0) {
    return (uint)*(ushort *)(&DAT_006e9ce8 + param_1 * 2);
  }
  if (uVar1 == 1) {
    return (uint)*(ushort *)(&DAT_006e9ee8 + param_1 * -2);
  }
  if (uVar1 == 2) {
    return -(uint)*(ushort *)(&DAT_006e9ce8 + param_1 * 2);
  }
  return -(uint)*(ushort *)(&DAT_006e9ee8 + param_1 * -2);
}

