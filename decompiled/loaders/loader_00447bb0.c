/* Decompiled from Speed.exe @ 00447bb0 */
/* Module: Loader */
/* Ghidra DecompileModule */


void FUN_00447bb0(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = (int *)((int)param_1 + param_1[1] + 8)) {
    if (*param_1 < 0) {
      DAT_007360f0 = DAT_007360f0 + 1;
      FUN_00447bb0(param_1 + 2,param_1[1] + 8 + (int)param_1);
      DAT_007360f0 = DAT_007360f0 + -1;
    }
  }
  return;
}

