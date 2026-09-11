/* Decompiled from Speed.exe @ 00670940 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00670940(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) {
    return 0xfffffff9;
  }
  iVar1 = *(int *)(param_1 + 0x1928);
  while (iVar1 != 0) {
    Sleep(0);
    iVar1 = *(int *)(param_1 + 0x1928);
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0xd0));
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0xd0));
  if ((int)param_3 <= (int)uVar4) {
    uVar4 = param_3;
  }
  puVar5 = puVar2 + 4;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *puVar5;
    puVar5 = puVar5 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = puVar2[1];
  }
  return *puVar2;
}

