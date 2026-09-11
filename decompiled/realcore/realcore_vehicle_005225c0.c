/* Decompiled from Speed.exe @ 005225c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_005225c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar2 != 0) {
    iVar1 = FUN_0051cb70();
    iVar2 = iVar1 * **(int **)(iVar2 + 0x60) >> 0xf;
    *(int *)(param_1 + 0xa4) = iVar2;
    *(int *)(param_1 + 0xa8) = iVar2;
    return iVar2;
  }
  return 0;
}

