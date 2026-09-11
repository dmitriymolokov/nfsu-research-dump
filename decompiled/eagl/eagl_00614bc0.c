/* Decompiled from Speed.exe @ 00614bc0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00614bc0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_c;
  int *local_8;
  uint local_4;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  uVar2 = *puVar1 & 0xffffff;
  local_4 = 0;
  if (uVar2 != 0) {
    local_c = (int *)puVar1[2];
    local_8 = local_c + uVar2;
    do {
      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + *local_c * 4);
      piVar4 = *(int **)(*(int *)(param_1 + 0x14) + *local_8 * 4);
      if ((((*piVar5 != *piVar4) || (piVar5[1] != piVar4[1])) || (piVar5[2] != piVar4[2])) ||
         ((piVar5[3] != piVar4[3] || ((piVar4[8] ^ piVar5[8]) != 0x80000)))) {
        return 1;
      }
      local_4 = local_4 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_4 < uVar2);
  }
  *puVar1 = uVar2 | 0xf0000000;
  *(uint *)(*(int *)(param_1 + 0x98) + 4) = uVar2;
  if ((uVar2 != 0) &&
     (piVar5 = *(int **)(*(int *)(param_1 + 0x98) + 8),
     (*(byte *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar5 * 4) + 0x22) & 8) != 0)) {
    piVar4 = piVar5 + uVar2;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(char *)piVar5 = (char)*piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
      piVar5 = (int *)((int)piVar5 + 1);
    }
  }
  return 0;
}

