/* Decompiled from Speed.exe @ 0066da20 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066da20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    FUN_00447030(puVar2);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  FUN_00447030(*(undefined4 *)(param_1 + 0x14));
  FUN_00447030(param_1);
  return;
}

