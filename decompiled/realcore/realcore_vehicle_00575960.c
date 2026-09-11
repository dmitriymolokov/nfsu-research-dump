/* Decompiled from Speed.exe @ 00575960 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00575960(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = param_2;
  for (iVar1 = 0xac; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00575a10(param_1);
  FUN_00575a90(param_1,param_3);
  FUN_00575b30();
  iVar1 = *(int *)(param_3 + 0x20);
  if ((0 < iVar1) && (iVar1 < 4)) {
    iVar1 = iVar1 + 0x6f;
    param_2[0x9d] = param_1[iVar1 * 4];
    param_2[0x9f] = param_1[iVar1 * 4 + 2];
    param_2[0x9e] = param_1[iVar1 * 4 + 1];
  }
  if (*(int *)(param_3 + 0x4c) != 0) {
    param_2[0x9d] = (float)param_1[0x20b] + (float)param_2[0x9d];
  }
  FUN_00575bc0(param_3);
  FUN_00576360(param_1,param_2,param_3);
  FUN_00576250();
  return;
}

