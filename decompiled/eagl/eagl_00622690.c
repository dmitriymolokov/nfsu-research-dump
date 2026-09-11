/* Decompiled from Speed.exe @ 00622690 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __thiscall FUN_00622690(undefined4 param_1,int param_2,int param_3,int param_4)

{
  if (param_2 != 0) {
    param_4 = param_4 - param_3;
    do {
      FUN_00643ec0(param_3,param_1,param_4 + param_3);
      param_3 = param_3 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

