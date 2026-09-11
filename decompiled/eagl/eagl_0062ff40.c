/* Decompiled from Speed.exe @ 0062ff40 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0062ff40(ushort *param_1,float *param_2)

{
  *param_2 = (float)(*param_1 >> 4) * _DAT_006a8310 - _DAT_006cc7bc;
  param_2[1] = (float)(param_1[1] >> 4) * _DAT_006a8310 - _DAT_006cc7bc;
  param_2[2] = (float)(param_1[2] >> 4) * _DAT_006a8310 - _DAT_006cc7bc;
  param_2[3] = (float)((((byte)*param_1 & 0xf) * 0x10 + ((byte)param_1[1] & 0xf)) * 0x10 +
                      ((byte)param_1[2] & 0xf)) * _DAT_006a8310 - _DAT_006cc7bc;
  return;
}

