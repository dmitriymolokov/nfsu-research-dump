/* Decompiled from Speed.exe @ 0066ba50 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0066ba50(int param_1,undefined4 *param_2,uint param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x80) != 3) {
    return -2;
  }
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + 0xa4);
  if ((iVar2 + iVar3) % iVar1 == *(int *)(param_1 + 0xac)) {
    return 0;
  }
  if (iVar3 + -0xb < (int)param_3) {
    return -6;
  }
  if (param_3 == 0) {
    return (((iVar1 - *(int *)(param_1 + 0xac)) + iVar2) % iVar1) / iVar3 + 1;
  }
  iVar2 = *(int *)(param_1 + 0xb0) + iVar2;
  *(uint *)(iVar2 + 4) = param_3;
  puVar5 = (undefined4 *)(iVar2 + 9);
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  if ((param_4 & 1) != 0) {
    *(char *)(iVar2 + 8) = *(char *)(param_1 + 0xbc) + '@';
    *(uint *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1U & 0x3f;
    FUN_0066b150();
    return 1;
  }
  *(char *)(iVar2 + 8) = *(char *)(param_1 + 0xc4) + -0x80;
  *(uint *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1U & 0x3f;
  iVar3 = FUN_0066b740();
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return iVar3;
}

