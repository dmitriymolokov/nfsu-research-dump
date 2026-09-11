/* Decompiled from Speed.exe @ 00666da0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00666da0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = *puVar2;
    FUN_00447030(puVar2);
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  FUN_00447030(*(undefined4 *)(param_1 + 0x40));
  FUN_00447030(param_1);
  return;
}

