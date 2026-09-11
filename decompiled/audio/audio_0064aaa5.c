/* Decompiled from Speed.exe @ 0064aaa5 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0064aaa5(int *param_1,undefined1 *param_2,int param_3)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *param_2 = (&DAT_00713848)[*param_1 >> 0x10 & 0x1ff];
    param_2[1] = (&DAT_00713848)[param_1[1] >> 0x10 & 0x1ff];
    param_2[2] = (&DAT_00713848)[param_1[2] >> 0x10 & 0x1ff];
    param_2[3] = (&DAT_00713848)[param_1[3] >> 0x10 & 0x1ff];
    param_2[4] = (&DAT_00713848)[param_1[4] >> 0x10 & 0x1ff];
    param_2[5] = (&DAT_00713848)[param_1[5] >> 0x10 & 0x1ff];
    param_2[6] = (&DAT_00713848)[param_1[6] >> 0x10 & 0x1ff];
    param_2[7] = (&DAT_00713848)[param_1[7] >> 0x10 & 0x1ff];
    param_1 = param_1 + 8;
    param_2 = param_2 + param_3;
  }
  return;
}

