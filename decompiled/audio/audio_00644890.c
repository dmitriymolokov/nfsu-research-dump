/* Decompiled from Speed.exe @ 00644890 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void fn_00644890(int param_1,float *param_2,float param_3,float *param_4)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_4 = param_3 * *param_2;
      param_4[1] = param_3 * param_2[1];
      param_4[2] = param_3 * param_2[2];
      param_2 = param_2 + 3;
      param_4 = param_4 + 3;
    } while (param_1 != 0);
  }
  return;
}

