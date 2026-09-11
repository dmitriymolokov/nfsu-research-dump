/* Decompiled from Speed.exe @ 005b60cd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b60cd(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  
  if ((param_3 != (uint *)0x0) && (iVar1 = FUN_005b4c4b(param_2), iVar1 != 0)) {
    *param_3 = *(uint *)(*(int *)(*(int *)(iVar1 + 4) + 0x2c) + 0x1c) >> 7 & 1;
    return 0;
  }
  return 0x80004005;
}

