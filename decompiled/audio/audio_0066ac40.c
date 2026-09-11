/* Decompiled from Speed.exe @ 0066ac40 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0066ac40(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  uint uVar5;
  DWORD *pDVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 0x80) != 4) {
    return -2;
  }
  iVar4 = *(int *)(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_1 + 0xac);
  if ((iVar1 + iVar4) % iVar2 == *(int *)(param_1 + 0xb4)) {
    return 0;
  }
  if (iVar4 + -8 < (int)param_3) {
    return -6;
  }
  if (param_3 == 0) {
    return (((iVar2 - *(int *)(param_1 + 0xb4)) + iVar1) % iVar2) / iVar4 + 1;
  }
  pDVar6 = (DWORD *)(*(int *)(param_1 + 0xb8) + iVar1);
  *(short *)(pDVar6 + 1) = (short)param_3;
  puVar7 = (undefined4 *)((int)pDVar6 + 6);
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DVar3 = GetTickCount();
  *pDVar6 = DVar3;
  *(int *)(param_1 + 0xb0) =
       (*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xb0)) % *(int *)(param_1 + 0xac);
  FUN_0066a910(*(undefined4 *)(param_1 + 0x6c),0,param_1);
  iVar4 = (((*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xb4)) + *(int *)(param_1 + 0xb0)) %
          *(int *)(param_1 + 0xac)) / *(int *)(param_1 + 0xa8);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  return iVar4;
}

