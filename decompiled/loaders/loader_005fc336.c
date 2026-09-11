/* Decompiled from Speed.exe @ 005fc336 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005fc336(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *local_20;
  int *local_1c;
  uint local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar8 = 0;
  local_14 = (void *)0x0;
  FUN_005fb8ae();
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4);
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4) + 4) & 0x10) == 0) {
        piVar5[7] = uVar8;
      }
      else {
        iVar3 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),0,0,0);
        piVar5[7] = iVar3;
        if (iVar3 == -1) goto LAB_005fc59a;
        local_8 = local_8 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 8));
    if (local_8 != 0) {
      FUN_005fbe30();
      local_14 = _malloc(local_8 << 2);
      if (local_14 == (void *)0x0) {
LAB_005fc59a:
        local_1c = (int *)0x8007000e;
        goto LAB_005fc410;
      }
      uVar8 = 0;
      local_8 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) +
                                 **(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4) * 4) + 4) & 0x10)
              != 0) {
            *(uint *)((int)local_14 + local_8 * 4) = uVar8;
            local_8 = local_8 + 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 8));
      }
      FUN_005f7e20(FUN_005f7d7e,local_14,local_8,param_1);
      local_18 = 0;
      if (local_8 != 0) {
        do {
          piVar5 = (int *)((int)local_14 + local_18 * 4);
          piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *piVar5 * 4);
          local_10 = 1;
          local_1c = piVar5;
          uVar8 = local_18;
          while (uVar8 = uVar8 + 1, uVar8 < local_8) {
            local_1c = local_1c + 1;
            piVar1 = *(int **)(*(int *)(param_1 + 0x14) + *local_1c * 4);
            if (((*piVar6 != *piVar1) || (piVar6[1] != piVar1[1])) || (piVar6[2] != piVar1[2]))
            break;
            local_10 = local_10 + 1;
          }
          iVar3 = FUN_005f752b(local_10 & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
          if (iVar3 == -1) goto LAB_005fc59a;
          iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar3 * 4);
          local_c = 0;
          local_20 = piVar5;
          if (local_10 != 0) {
            do {
              iVar7 = *(int *)(*(int *)(param_1 + 0x14) + *local_20 * 4);
              iVar2 = *(int *)(iVar7 + 0x1c);
              iVar7 = *(int *)(iVar7 + 0x2c);
              while (iVar7 != -1) {
                iVar7 = *(int *)(*(int *)(param_1 + 0x18) + iVar7 * 4);
                if (((*(int *)(iVar7 + 0x34) != 0) && (*(int *)(*(int *)(iVar7 + 0x34) + 4) == 0xc))
                   && (local_1c = (int *)FUN_005f7a42(), (int)local_1c < 0)) goto LAB_005fc410;
                iVar4 = FUN_005f7aa3();
                if (iVar4 == 0) break;
                uVar8 = 0;
                if (*(uint *)(iVar7 + 0xc) != 0) {
                  piVar6 = *(int **)(iVar7 + 0x10);
                  do {
                    if (iVar2 == *piVar6) break;
                    uVar8 = uVar8 + 1;
                    piVar6 = piVar6 + 1;
                  } while (uVar8 < *(uint *)(iVar7 + 0xc));
                }
                iVar2 = *(int *)(*(int *)(iVar7 + 8) + uVar8 * 4);
                iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4) + 0x2c);
              }
              if (*(int *)(iVar3 + 0x34) != 0) break;
              local_c = local_c + 1;
              local_20 = local_20 + 1;
            } while (local_c < local_10);
          }
          local_c = 0;
          if (local_10 != 0) {
            do {
              iVar7 = local_c * 4;
              local_c = local_c + 1;
              *(undefined4 *)(iVar7 + *(int *)(iVar3 + 8)) =
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar5 * 4) + 0x1c);
              *(int *)(iVar7 + *(int *)(iVar3 + 0x10)) = *piVar5;
              piVar5 = piVar5 + 1;
            } while (local_c < local_10);
          }
          local_18 = local_18 + local_10;
        } while (local_18 < local_8);
      }
    }
  }
  local_1c = (int *)0x0;
LAB_005fc410:
  _free(local_14);
  return (int)local_1c;
}

