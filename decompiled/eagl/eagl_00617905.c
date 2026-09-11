/* Decompiled from Speed.exe @ 00617905 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00617905(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  int local_108 [4];
  int aiStack_f8 [4];
  int local_e8 [32];
  undefined1 local_68 [64];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  uVar7 = **(uint **)(param_1 + 0x98) & 0xffffff;
  piVar8 = (int *)0x0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 1;
  local_20 = 2;
  local_1c = 3;
  local_8 = 0;
  iVar4 = FUN_006139d8(*(uint **)(param_1 + 0x98),&DAT_006a6158,local_68,&local_14,local_108,
                       &local_28,uVar7);
  if (iVar4 != 0) {
    iVar4 = FUN_006139d8(*(undefined4 *)(param_1 + 0x98),&DAT_006a61b8,local_68,&local_14,local_108,
                         &local_28,uVar7);
    local_8 = 1;
    if (iVar4 != 0) {
      local_8 = 0;
      iVar4 = FUN_006139d8(*(undefined4 *)(param_1 + 0x98),&DAT_006a6218,local_68,&local_14,
                           local_108,&local_28,uVar7);
      if (iVar4 != 0) {
        iVar4 = FUN_006139d8(*(undefined4 *)(param_1 + 0x98),&DAT_006a6278,local_68,&local_14,
                             local_108,&local_28,uVar7);
        local_8 = 1;
        if (iVar4 != 0) {
          local_8 = 0;
          goto LAB_00617c47;
        }
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        do {
          if (local_108[uVar5] != aiStack_f8[uVar5]) {
            return 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      if (*(int *)(param_1 + 0xf4) == -1) {
        iVar4 = FUN_005f7478(&DAT_0069ecd8,0x189,1,4);
        *(int *)(param_1 + 0x104) = iVar4;
        if (iVar4 == -1) {
          return -0x7ff8fff2;
        }
        iVar4 = FUN_005f74cf(iVar4,0,0,_DAT_006cce38);
        *(int *)(param_1 + 0xf4) = iVar4;
        if (iVar4 == -1) {
          return -0x7ff8fff2;
        }
      }
      uVar5 = 0;
      local_10 = 1;
      if (uVar7 != 0) {
        iVar4 = *(int *)(param_1 + 0xf4);
        do {
          local_108[uVar5] = iVar4;
          if (local_e8[uVar5] != local_e8[0]) {
            local_10 = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar7);
      }
      piVar8 = *(int **)(*(int *)(param_1 + 0x14) + local_e8[0] * 4);
      if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar8 * 4) + 4) & 0x80) != 0) &&
         (uVar5 = 0, local_10 != 0)) {
        local_c = (int *)(param_1 + 0xf8);
        do {
          if ((*local_c == -1) ||
             (*(double *)(*(int *)(*(int *)(param_1 + 0x14) + *local_c * 4) + 0x10) ==
              *(double *)(piVar8 + 4))) break;
          local_c = local_c + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
        if (uVar5 != 3) {
          piVar1 = (int *)(param_1 + 0xf8 + uVar5 * 4);
          if (*piVar1 == -1) {
            iVar4 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x104),0,uVar5 + 1,
                                 *(undefined8 *)(piVar8 + 4));
            *piVar1 = iVar4;
            if (iVar4 == -1) {
              return -0x7ff8fff2;
            }
          }
          if (uVar7 != 0) {
            iVar4 = *piVar1;
            piVar8 = local_e8;
            for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
              *piVar8 = iVar4;
              piVar8 = piVar8 + 1;
            }
          }
        }
      }
    }
  }
  pvVar6 = _malloc(0x38);
  if (pvVar6 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_005f7709();
  }
  if (piVar8 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  if (local_8 == 0) {
    uVar5 = uVar7 | 0xf5000000;
  }
  else {
    uVar5 = uVar7 | 0xf6000000;
  }
  local_c = piVar8;
  local_8 = FUN_005f7760(uVar5,uVar7 * 3,uVar7,0);
  if ((-1 < (int)local_8) && (local_8 = FUN_005f7a42(), -1 < (int)local_8)) {
    local_8 = 0;
    if (uVar7 != 0) {
      local_10 = uVar7 << 3;
      local_18 = uVar7 << 2;
      do {
        uVar5 = local_8;
        iVar3 = local_10;
        iVar2 = local_18;
        iVar4 = local_8 * 4;
        local_8 = local_8 + 1;
        *(undefined4 *)(iVar4 + piVar8[4]) =
             *(undefined4 *)(iVar4 + *(int *)(*(int *)(param_1 + 0x98) + 0x10));
        *(int *)(iVar4 + piVar8[2]) = local_108[uVar5];
        iVar4 = local_e8[uVar5];
        local_18 = local_18 + 4;
        *(int *)(iVar2 + local_c[2]) = aiStack_f8[uVar5];
        local_10 = local_10 + 4;
        *(int *)(iVar3 + local_c[2]) = iVar4;
        piVar8 = local_c;
      } while (local_8 < uVar7);
    }
    iVar4 = FUN_006149ee(piVar8,local_68,local_14);
    return iVar4;
  }
LAB_00617c47:
  if (piVar8 != (int *)0x0) {
    FUN_005f7186();
  }
  return local_8;
}

