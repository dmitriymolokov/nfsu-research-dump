/* Decompiled from Speed.exe @ 00614d56 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00614d56(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(iVar1 + param_2 * 4);
  if ((*(int *)(iVar2 + 0x3c) == *(int *)(iVar2 + 0x38)) &&
     (uVar6 = 0xffffffff, *(int *)(iVar2 + 0x2c) != -1)) {
    puVar3 = *(uint **)(*(int *)(param_1 + 0x18) + *(int *)(iVar2 + 0x2c) * 4);
    if ((*puVar3 & 0xff000000) == 0x24000000) {
      local_8 = 0;
      if (puVar3[3] != 0) {
        piVar4 = (int *)puVar3[4];
        do {
          if (*piVar4 == param_2) {
            uVar6 = local_8;
          }
          local_8 = local_8 + 1;
          piVar4 = piVar4 + 1;
        } while (local_8 < puVar3[3]);
        if (uVar6 != 0xffffffff) {
          piVar4 = (int *)(puVar3[2] + uVar6 * 4);
          piVar7 = (int *)(puVar3[2] + (uVar6 + (*puVar3 & 0xffffff)) * 4);
          piVar5 = piVar4;
          if (((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar1 + *piVar7 * 4) * 4)
                           + 4) & 0x80) != 0) ||
               (piVar5 = piVar7, piVar7 = piVar4,
               (*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar1 + *piVar4 * 4) * 4) +
                         4) & 0x80) != 0)) &&
              (*(double *)(*(int *)(iVar1 + *piVar7 * 4) + 0x10) == _DAT_006ccb10)) &&
             ((*(uint *)(*(int *)(iVar1 + *piVar5 * 4) + 0x20) & 0xf0000) == 0x80000)) {
            *param_4 = *piVar5;
            *param_3 = (int)puVar3;
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

