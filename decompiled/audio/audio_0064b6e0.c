/* Decompiled from Speed.exe @ 0064b6e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0064b6e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_1 + 10);
  if (uVar4 != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + 8);
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xc);
  if (uVar4 != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x18) + 8);
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xe);
  if (uVar4 != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (piVar1 == DAT_00713c60) {
    DAT_00713c60 = (int *)*DAT_00713c60;
  }
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar1;
  }
  if (*piVar1 != 0) {
    *(int **)(*piVar1 + 4) = piVar2;
  }
  return 0;
}

