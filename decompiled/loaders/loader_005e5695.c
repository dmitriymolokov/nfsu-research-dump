/* Decompiled from Speed.exe @ 005e5695 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005e5695(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    if (param_1[0x13] == 0) {
      FUN_005b1f01(*param_1,param_1 + 4,0,"internal error: production failed");
      param_1[0x13] = 1;
    }
    param_1[0x14] = 1;
    param_2 = 0;
  }
  return param_2;
}

