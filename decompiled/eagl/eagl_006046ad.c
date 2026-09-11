/* Decompiled from Speed.exe @ 006046ad */
/* Module: EAGL */
/* Ghidra DecompileModule */


undefined4 __fastcall FUN_006046ad(int param_1)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  uint local_8;
  
  puVar2 = *(uint **)(param_1 + 0x98);
  if (((*puVar2 & 0xff000000) == 0x10000000) && ((*(uint *)(param_1 + 0x30) & 0xffff) < 0x104)) {
    uVar5 = *puVar2 & 0xffffff;
    iVar6 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)puVar2[2] * 4);
    piVar3 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)puVar2[4] * 4);
    if ((*(int *)(iVar6 + 0x20) == 0) &&
       ((((*(byte *)((int)piVar3 + 0x21) & 2) != 0 && (*(char *)(iVar6 + 0x50) == '\x03')) &&
        (*piVar3 == *(int *)(param_1 + 0x60))))) {
      local_c = 0;
      if (uVar5 != 0) {
        do {
          iVar6 = local_c * 4;
          pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x14) +
                                    *(int *)(iVar6 + *(int *)(*(int *)(param_1 + 0x98) + 8)) * 4) +
                           0x21);
          *pbVar1 = *pbVar1 | 2;
          for (uVar7 = *(uint *)(param_1 + 0x94); uVar7 < *(uint *)(param_1 + 0xc);
              uVar7 = uVar7 + 1) {
            iVar4 = *(int *)(*(int *)(param_1 + 0x18) + uVar7 * 4);
            local_8 = 0;
            if (*(int *)(iVar4 + 4) != 0) {
              do {
                piVar3 = (int *)(*(int *)(iVar4 + 8) + local_8 * 4);
                if (*piVar3 == *(int *)(iVar6 + *(int *)(*(int *)(param_1 + 0x98) + 0x10))) {
                  *piVar3 = *(int *)(iVar6 + *(int *)(*(int *)(param_1 + 0x98) + 8));
                }
                local_8 = local_8 + 1;
              } while (local_8 < *(uint *)(iVar4 + 4));
            }
          }
          local_c = local_c + 1;
        } while (local_c < uVar5);
      }
      **(undefined4 **)(param_1 + 0x98) = 0;
    }
  }
  return 0;
}

