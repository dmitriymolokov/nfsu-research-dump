/* Decompiled from Speed.exe @ 005b2d02 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005b2d02(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(int *)(*(int *)(param_1 + 0x10) + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return 0;
}

