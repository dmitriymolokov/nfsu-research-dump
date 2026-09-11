/* Decompiled from Speed.exe @ 005e6299 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005e6299(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005e621b(1);
  if (-1 < iVar1) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c) * 4) = param_2;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    iVar1 = 0;
  }
  return iVar1;
}

