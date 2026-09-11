/* Decompiled from Speed.exe @ 005fb7cf */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall
FUN_005fb7cf(int param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_24 [4];
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar4 = param_3;
  local_c = param_1;
  if (param_5 != 0) {
    uVar5 = 0;
    if (param_4 != 0) {
      do {
        *(uint *)(param_3 + uVar5 * 4) = uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_4);
    }
    local_14 = 0;
    if (param_4 != 0) {
      do {
        piVar1 = (int *)(iVar4 + local_14 * 4);
        iVar3 = *piVar1;
        param_3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + param_2[iVar3] * 4) + 0xc);
        local_8 = local_14;
        local_14 = local_14 + 1;
        for (uVar5 = local_14; uVar5 < param_4; uVar5 = uVar5 + 1) {
          local_10 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                       param_2[*(int *)(iVar4 + uVar5 * 4)] * 4) + 0xc);
          if ((local_10 < param_3) || ((local_10 == param_3 && (uVar5 < local_8)))) {
            local_8 = uVar5;
            param_3 = local_10;
          }
        }
        piVar2 = (int *)(iVar4 + local_8 * 4);
        *piVar1 = *piVar2;
        *piVar2 = iVar3;
      } while (local_14 < param_4);
    }
  }
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      local_24[uVar5] = param_2[*(int *)(iVar4 + uVar5 * 4)];
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
    if (param_4 != 0) {
      puVar6 = local_24;
      for (; param_4 != 0; param_4 = param_4 - 1) {
        *param_2 = *puVar6;
        puVar6 = puVar6 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  return 0;
}

