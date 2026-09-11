/* Decompiled from Speed.exe @ 0052c560 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_0052c560(int param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(int *)(param_1 + 0x7f0) + 0xc))();
  (**(code **)(*(int *)(param_1 + 0xc80) + 0xc))();
  if (*(int *)(param_1 + 0x1738) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1738) + 0x20) + 0x24))();
  }
  if (*(int *)(param_1 + 0x173c) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x173c) + 0x20) + 0x24))();
  }
  (**(code **)(*(int *)(param_1 + 0x3b0) + 0x24))();
  (**(code **)(*(int *)(param_1 + 0x5d0) + 0x24))();
  (**(code **)(*(int *)(param_1 + 0x1500) + 0x24))();
  if (*(int *)(param_1 + 0x1254) != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x1254) + 0x20) + 0x24))();
  }
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

