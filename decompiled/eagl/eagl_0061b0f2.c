/* Decompiled from Speed.exe @ 0061b0f2 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0061b0f2(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *local_c;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x98);
  local_c = *(int **)(iVar4 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 100) == **(int **)(iVar1 + *local_c * 4)) {
    uVar6 = 0x2e;
  }
  else {
    if (((*(byte *)(param_1 + 0x34) & 8) == 0) && ((*(byte *)(param_1 + 0x92) & 8) == 0)) {
      local_8 = 0;
      if (*(int *)(iVar4 + 0xc) != 0) {
        iVar5 = *(int *)(iVar4 + 8) - (int)local_c;
        do {
          piVar2 = *(int **)(iVar1 + *local_c * 4);
          piVar3 = *(int **)(iVar1 + *(int *)(iVar5 + (int)local_c) * 4);
          if ((((*piVar2 != *piVar3) || (piVar2[1] != piVar3[1])) || (piVar2[2] != piVar3[2])) ||
             ((piVar2[3] != piVar3[3] || (piVar2[8] != piVar3[8])))) break;
          local_8 = local_8 + 1;
          local_c = local_c + 1;
        } while (local_8 < *(uint *)(iVar4 + 0xc));
      }
      if (local_8 == *(uint *)(iVar4 + 0xc)) {
        return 0;
      }
    }
    local_8 = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x14) +
                        *(int *)(*(int *)(iVar4 + 0x10) + local_8 * 4) * 4);
        if ((*(uint *)(iVar1 + 0x18) & 0xe000000) == 0) {
          *(uint *)(iVar1 + 0x18) =
               *(uint *)(*(int *)(*(int *)(param_1 + 0x14) +
                                 *(int *)(*(int *)(iVar4 + 8) + local_8 * 4) * 4) + 0x18) &
               0xe000000 | *(uint *)(iVar1 + 0x18);
        }
        local_8 = local_8 + 1;
        iVar4 = *(int *)(param_1 + 0x98);
      } while (local_8 < *(uint *)(iVar4 + 0xc));
    }
    uVar6 = 1;
  }
  uVar6 = FUN_0061aea7(uVar6);
  return uVar6;
}

