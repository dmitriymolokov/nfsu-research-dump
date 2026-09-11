/* Decompiled from Speed.exe @ 005c5acd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005c5acd(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x1c) = param_2;
  if (*(int *)(param_1 + 0x60) != 0xc) {
    piVar1 = (int *)(*(int *)(param_1 + 0x54) + 0x1c);
    *piVar1 = *piVar1 + -1;
  }
  if (param_3 != 0) {
    *(int *)(*(int *)(param_1 + 0x54) + 0x18) = param_3;
  }
  return 0;
}

