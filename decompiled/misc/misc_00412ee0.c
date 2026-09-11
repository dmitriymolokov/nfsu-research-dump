/* Decompiled from Speed.exe @ 00412ee0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00412ee0(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) &&
      ((int *)param_1[0xf] <= param_2)) &&
     ((param_2 <= (int *)(param_1[0x10] + -8) && (*param_2 != -2)))) {
    *param_2 = -2;
    FUN_00411b70(param_2[1]);
    FUN_0063f190(param_1 + 1);
    iVar1 = param_1[0x12];
    if (iVar1 == 2) {
      param_1[0x12] = 1;
    }
    FUN_0063f1a0(param_1 + 1);
    if (iVar1 == 2) {
      if (param_1[0x18] != 0) {
        FUN_00412160(param_1,param_1[0x14]);
        return;
      }
      FUN_00412160(param_1,param_1[0x13]);
    }
  }
  return;
}

