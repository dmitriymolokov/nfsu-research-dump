/* Decompiled from Speed.exe @ 0064a71f */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0064a71f(byte *param_1,int param_2,int *param_3,int param_4)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    *param_3 = ((uint)*param_1 + param_4) * 0x10000;
    param_3[1] = ((uint)param_1[1] + param_4) * 0x10000;
    param_3[2] = ((uint)param_1[2] + param_4) * 0x10000;
    param_3[3] = ((uint)param_1[3] + param_4) * 0x10000;
    param_3[4] = ((uint)param_1[4] + param_4) * 0x10000;
    param_3[5] = ((uint)param_1[5] + param_4) * 0x10000;
    param_3[6] = ((uint)param_1[6] + param_4) * 0x10000;
    param_3[7] = ((uint)param_1[7] + param_4) * 0x10000;
    param_1 = param_1 + param_2;
    param_3 = param_3 + 0x10;
  }
  return;
}

