/* Decompiled from Speed.exe @ 00650f60 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00650f60(uint *param_1,uint param_2)

{
  DAT_00713f78 = param_1;
  param_1[2] = param_2;
  DAT_00713f78[1] = (int)param_1 + (param_2 - 8);
  *DAT_00713f78 = (uint)(param_1 + 6);
  *DAT_00713f78 = *DAT_00713f78 + 0xf;
  *DAT_00713f78 = *DAT_00713f78 & 0xfffffff0;
  DAT_00713f78[3] = param_2 - 0x2f;
  DAT_00713f78[4] = param_2 - 0xf;
  return;
}

