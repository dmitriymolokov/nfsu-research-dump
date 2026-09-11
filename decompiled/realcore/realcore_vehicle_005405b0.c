/* Decompiled from Speed.exe @ 005405b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005405b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  iVar2 = *(int *)(iVar1 + 0x14 + *(int *)(param_1 + 4));
  *(int *)(param_1 + 8) = iVar1 + 0x10;
  *(int *)(param_1 + 0xc) = iVar2 + 0x10;
  return;
}

