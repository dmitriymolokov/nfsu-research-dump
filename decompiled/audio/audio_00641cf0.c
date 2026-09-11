/* Decompiled from Speed.exe @ 00641cf0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00641cf0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  FUN_0063f190(param_1 + 6);
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[3];
    *param_2 = 0;
    *param_1 = *param_1 + 1;
    param_1[3] = (int)param_2;
    if (puVar1 == (undefined4 *)0x0) {
      param_1[2] = (int)param_2;
    }
    else {
      *puVar1 = param_2;
    }
    param_1[1] = param_1[1] | 1;
  }
  FUN_0063f1a0(param_1 + 6);
  return;
}

