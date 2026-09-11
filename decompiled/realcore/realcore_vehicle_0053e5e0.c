/* Decompiled from Speed.exe @ 0053e5e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __thiscall FUN_0053e5e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x8b) == '\0') && (*(int *)(param_1 + 0x9c) != 0)) &&
     (iVar1 = FUN_0053e400(param_3,*(int *)(param_1 + 0x9c),0), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}

