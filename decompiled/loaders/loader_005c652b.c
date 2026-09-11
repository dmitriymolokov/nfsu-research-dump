/* Decompiled from Speed.exe @ 005c652b */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005c652b(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_005b1f01(param_1 + 4,param_1 + 0x60,0,"internal error: production failed");
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    param_2 = 0;
  }
  return param_2;
}

