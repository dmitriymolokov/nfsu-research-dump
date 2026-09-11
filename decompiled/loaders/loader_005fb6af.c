/* Decompiled from Speed.exe @ 005fb6af */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005fb6af(int param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_8;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + uVar5 * 4);
      uVar6 = *(uint *)(iVar7 + 4);
      if (((uVar6 & param_3) == param_3) && ((param_4 & uVar6) == 0)) {
        *(undefined4 *)(iVar7 + 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x14) + uVar5 * 4);
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + *piVar2 * 4);
      if ((((*(uint *)(iVar7 + 4) & param_3) == param_3) && ((param_4 & *(uint *)(iVar7 + 4)) == 0))
         && (uVar6 = piVar2[2] + 1, *(uint *)(iVar7 + 8) <= uVar6)) {
        *(uint *)(iVar7 + 8) = uVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  uVar5 = 0;
  iVar7 = 0;
  bVar4 = false;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + uVar5 * 4);
      uVar6 = *(uint *)(iVar3 + 4);
      if (((uVar6 & param_3) == param_3) && ((param_4 & uVar6) == 0)) {
        *(int *)(iVar3 + 0x10) = iVar7;
        *(int *)(iVar3 + 0x18) = param_2;
        if ((uVar6 & 0x200) != 0) {
          bVar4 = true;
        }
        iVar7 = iVar7 + *(int *)(iVar3 + 8);
        *(undefined4 *)(iVar3 + 8) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x14) + local_8 * 4);
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + *piVar2 * 4);
      if (((*(uint *)(iVar3 + 4) & param_3) == param_3) && ((param_4 & *(uint *)(iVar3 + 4)) == 0))
      {
        *piVar2 = *(int *)(iVar3 + 0x18);
        piVar2[2] = piVar2[2] + *(int *)(iVar3 + 0x10);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 8));
  }
  *(int *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x10)) + 8) = iVar7;
  if (bVar4) {
    pbVar1 = (byte *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x10)) + 5);
    *pbVar1 = *pbVar1 | 2;
  }
  return 0;
}

