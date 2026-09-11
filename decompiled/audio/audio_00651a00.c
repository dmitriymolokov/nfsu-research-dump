/* Decompiled from Speed.exe @ 00651a00 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00651a00(byte param_1,uint *param_2,uint *param_3)

{
  if ((param_1 & 4) != 0) {
    *param_2 = 0;
    *param_3 = (uint)DAT_00713d9e;
    return;
  }
  if ((param_1 & 0x10) != 0) {
    *param_2 = (uint)DAT_00713d9e;
    *param_3 = (int)DAT_00713ee8;
  }
  return;
}

