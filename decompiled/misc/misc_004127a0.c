/* Decompiled from Speed.exe @ 004127a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004127a0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  if ((((((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) &&
        (0 < param_2)) && (param_2 <= param_1[0xb])) &&
      ((((param_2 != param_1[0xb] || (param_3 == 0 && param_4 == 0)) &&
        ((0 < param_5 || ((param_5 == -1 || (param_5 == -2)))))) && (param_5 <= param_1[0xd])))) &&
     (param_1[0x12] == 0)) {
    piVar1 = (int *)(param_1[10] + -0xc + param_2 * 0xc);
    *piVar1 = param_3;
    piVar1[1] = param_4;
    piVar1[2] = param_5;
  }
  return;
}

