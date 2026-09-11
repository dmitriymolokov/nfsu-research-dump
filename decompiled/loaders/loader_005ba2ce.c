/* Decompiled from Speed.exe @ 005ba2ce */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005ba2ce(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x40) == 0) {
      FUN_005ba278(param_1,0,0,"internal error: production failed!");
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x44) = 1;
  }
  return param_2;
}

