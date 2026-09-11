/* Decompiled from Speed.exe @ 00617c5c */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00617c5c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iStack_28;
  int local_24 [7];
  int *local_8;
  
  local_24[6] = **(uint **)(param_1 + 0x98);
  if ((local_24[6] & 0xff000000U) != 0x24000000) {
    return 1;
  }
  local_24[6] = local_24[6] & 0xffffff;
  piVar7 = (int *)(*(uint **)(param_1 + 0x98))[2];
  iVar3 = *(int *)(param_1 + 0x10);
  local_8 = piVar7 + local_24[6];
  iVar5 = *(int *)(param_1 + 0x14);
  if ((*(byte *)(*(int *)(iVar3 + **(int **)(iVar5 + *local_8 * 4) * 4) + 4) & 0x80) == 0) {
    if ((*(byte *)(*(int *)(iVar3 + **(int **)(iVar5 + *piVar7 * 4) * 4) + 4) & 0x80) == 0) {
      return 1;
    }
    local_24[5] = 1;
    piVar2 = piVar7;
  }
  else {
    local_24[5] = 0;
    piVar2 = local_8;
    local_8 = piVar7;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  local_24[4] = 0;
  if (local_24[6] != 0) {
    uVar6 = 0;
    local_24[3] = (int)piVar2 - (int)local_8;
    piVar7 = local_8;
    do {
      if (*(double *)(*(int *)(iVar5 + *(int *)(local_24[3] + (int)piVar7) * 4) + 0x10) !=
          _DAT_006a68a8) {
        return 1;
      }
      iVar4 = *(int *)(iVar5 + *piVar7 * 4);
      if ((((*(byte *)(iVar4 + 0x21) & 2) == 0) && ((*(byte *)(iVar4 + 0x18) & 4) == 0)) &&
         ((*(byte *)(param_1 + 0x92) & 2) != 0)) {
        *(undefined4 *)(param_1 + 0xf0) = 1;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < (uint)local_24[6]);
  }
  iVar4 = **(int **)(iVar5 + **(int **)(*(int *)(param_1 + 0x98) + 0x10) * 4);
  if (iVar4 == *(int *)(param_1 + 0x60)) {
    iVar3 = FUN_0061742a(0x20000,0,local_8,0x20000,0);
    if (*(int *)(param_1 + 0xf0) == 2) {
      FUN_005fbf37(param_1,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34),0x125d,
                   "_bias opportunity missed because source was not clamped 0 to 1");
      return iVar3;
    }
    return iVar3;
  }
  if (iVar4 == *(int *)(param_1 + 0x5c)) {
    iVar4 = FUN_006157c4(local_24[6] | 0x24000000,*(int *)(param_1 + 0x98),local_24,2);
    if (iVar4 != 0) {
      return iVar4;
    }
    local_24[5] = local_24[local_24[5]];
    if (local_24[5] != 0) {
      local_8 = (int *)0x0;
      if (local_24[6] != 0) {
        piVar7 = *(int **)(local_24[5] + 8);
        do {
          piVar2 = *(int **)(iVar5 + *piVar7 * 4);
          if ((((*(byte *)((int)piVar2 + 0x22) & 0xf) != 0) ||
              ((*(byte *)(*(int *)(iVar3 + *piVar2 * 4) + 5) & 1) != 0)) ||
             (((*(byte *)((int)piVar2 + 0x21) & 2) == 0 && ((*(byte *)(piVar2 + 6) & 4) == 0))))
          break;
          local_24[3] = 0;
          local_8 = (int *)((int)local_8 + 1);
          piVar7 = piVar7 + 1;
        } while (local_8 < (uint)local_24[6]);
      }
      uVar6 = local_24[3];
      if (local_8 != (int *)local_24[6]) {
        local_8 = (int *)0x0;
        if (local_24[6] != 0) {
          piVar7 = (int *)(*(int *)(local_24[5] + 8) + local_24[6] * 4);
          do {
            piVar2 = *(int **)(iVar5 + *piVar7 * 4);
            if ((((*(byte *)((int)piVar2 + 0x22) & 0xf) != 0) ||
                ((*(byte *)(*(int *)(iVar3 + *piVar2 * 4) + 5) & 1) != 0)) ||
               (((*(byte *)((int)piVar2 + 0x21) & 2) == 0 && ((*(byte *)(piVar2 + 6) & 4) == 0))))
            break;
            local_8 = (int *)((int)local_8 + 1);
            piVar7 = piVar7 + 1;
          } while (local_8 < (uint)local_24[6]);
        }
        uVar6 = local_24[6];
        if (local_8 == (int *)local_24[6]) {
          return 1;
        }
      }
      local_8 = (int *)0x0;
      if (local_24[6] != 0) {
        iVar3 = uVar6 << 2;
        do {
          puVar1 = *(undefined4 **)
                    (*(int *)(param_1 + 0x14) + *(int *)(iVar3 + *(int *)(local_24[5] + 8)) * 4);
          iVar5 = FUN_005f74cf(*puVar1,puVar1[2],puVar1[3],*(undefined8 *)(puVar1 + 4));
          (&iStack_28)[(int)local_8] = iVar5;
          if (iVar5 == -1) {
            return -0x7ff8fff2;
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4);
          *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar3 + *(int *)(local_24[5] + 8));
          *(undefined4 *)(iVar4 + 0x2c) = puVar1[0xb];
          *(undefined4 *)(iVar4 + 0x34) = puVar1[0xd];
          *(undefined4 *)(iVar4 + 0x38) = puVar1[0xe];
          *(undefined4 *)(iVar4 + 0x3c) = puVar1[0xe];
          *(uint *)(iVar4 + 0x20) = puVar1[8] | 0x20000;
          *(int *)(iVar3 + *(int *)(local_24[5] + 8)) = iVar5;
          *(undefined4 *)(*(int *)(local_24[5] + 0x10) + (int)local_8 * 4) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + 0x10) + (int)local_8 * 4);
          local_8 = (int *)((int)local_8 + 1);
          iVar3 = iVar3 + 4;
        } while (local_8 < (uint)local_24[6]);
      }
      **(undefined4 **)(param_1 + 0x98) = 0;
      return 0;
    }
  }
  return 1;
}

