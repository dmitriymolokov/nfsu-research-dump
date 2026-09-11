/* Decompiled from Speed.exe @ 0065f350 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_0065f350(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 != (char *)0x0) && (*(int *)(param_1 + 0xd54) == 0)) {
    *(undefined4 *)(param_1 + 0xd54) = param_4;
    *(undefined4 *)(param_1 + 0xd58) = param_3;
    *(undefined4 *)(param_1 + 0xd44) = 0;
    *(char **)(param_1 + 0xd48) = param_2;
    if (*(int *)(param_1 + 0xd64) == 1) {
      *(uint *)(param_1 + 0xd60) = (uint)(*param_2 == -0x12);
      FUN_0065e920(param_2 + 1,param_1,*(undefined4 *)(param_1 + 0xd5c));
      return 0;
    }
    FUN_0065e920(param_2,param_1,*(undefined4 *)(param_1 + 0xd5c));
    return 0;
  }
  return 0xffffffff;
}

