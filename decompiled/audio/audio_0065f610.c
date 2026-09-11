/* Decompiled from Speed.exe @ 0065f610 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_0065f610(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) == 0)) {
    *(undefined4 *)(param_1 + 8) = param_4;
    *(int *)(param_1 + 0xa0) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    return 0;
  }
  return 0xffffffff;
}

