/* Decompiled from Speed.exe @ 005fbbf5 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fbbf5(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  int local_414 [256];
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  FUN_005fb8ae();
  local_14 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + local_14 * 4);
      _free(*(void **)(iVar1 + 0x18));
      _free(*(void **)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      iVar3 = FUN_005f7a96();
      if (iVar3 == 0) {
        local_c = (int *)0x0;
        if (*(int *)(iVar1 + 0xc) != 0) {
          local_8 = *(int **)(iVar1 + 0xc);
          piVar5 = *(int **)(iVar1 + 0x10);
          do {
            piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *piVar5 * 4);
            if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar6 * 4) + 4) & 5) != 0) {
              local_c = (int *)((int)local_c + piVar6[0x10]);
            }
            piVar5 = piVar5 + 1;
            local_8 = (int *)((int)local_8 + -1);
          } while (local_8 != (int *)0x0);
        }
        pvVar4 = _malloc((int)local_c << 2);
        *(void **)(iVar1 + 0x20) = pvVar4;
        if (pvVar4 == (void *)0x0) {
          return 0x8007000e;
        }
        piVar5 = (int *)0x0;
        local_c = (int *)0x0;
        if (*(int *)(iVar1 + 0xc) != 0) {
          local_8 = *(int **)(iVar1 + 0x10);
          iVar3 = *(int *)(param_1 + 0x14);
          local_10 = *(int **)(iVar1 + 0xc);
          do {
            iVar2 = *(int *)(*(int *)(iVar3 + *local_8 * 4) + 4);
            piVar6 = local_c;
            while (local_c = piVar6, iVar2 != -1) {
              piVar5 = *(int **)(iVar3 + iVar2 * 4);
              if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4) + 4) & 2) != 0) &&
                 (piVar6 < (int *)0x100)) {
                local_c = (int *)((int)piVar6 + 1);
                local_414[(int)piVar6] = piVar5[0xb];
              }
              iVar2 = piVar5[1];
              piVar5 = local_c;
              piVar6 = local_c;
            }
            local_8 = local_8 + 1;
            local_10 = (int *)((int)local_10 + -1);
          } while (local_10 != (int *)0x0);
        }
        if (*(int *)(iVar1 + 4) != 0) {
          local_8 = *(int **)(iVar1 + 8);
          iVar3 = *(int *)(param_1 + 0x10);
          local_10 = *(int **)(iVar1 + 4);
          do {
            piVar6 = *(int **)(*(int *)(param_1 + 0x14) + *local_8 * 4);
            while( true ) {
              if (((*(byte *)(*(int *)(iVar3 + *piVar6 * 4) + 4) & 2) != 0) &&
                 (piVar5 < (int *)0x100)) {
                local_414[(int)piVar5] = piVar6[0xb];
                piVar5 = (int *)((int)piVar5 + 1);
              }
              if (piVar6[1] == -1) break;
              piVar6 = *(int **)(*(int *)(param_1 + 0x14) + piVar6[1] * 4);
            }
            local_8 = local_8 + 1;
            local_10 = (int *)((int)local_10 + -1);
          } while (local_10 != (int *)0x0);
          local_10 = (int *)0x0;
          local_c = piVar5;
        }
        if (piVar5 != (int *)0x0) {
          FUN_005f7e20(&LAB_005f7dd2,local_414,piVar5,0);
          piVar6 = (int *)0x1;
          local_8 = (int *)0x1;
          piVar5 = piVar6;
          if ((int *)0x1 < local_c) {
            do {
              if (local_414[(int)piVar6] != local_414[(int)piVar6 + -1]) {
                local_414[(int)piVar5] = local_414[(int)piVar6];
                piVar5 = (int *)((int)piVar5 + 1);
              }
              piVar6 = (int *)((int)piVar6 + 1);
              local_8 = piVar5;
            } while (piVar6 < local_c);
          }
          piVar5 = local_8;
          pvVar4 = _malloc((int)local_8 << 2);
          *(void **)(iVar1 + 0x18) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            return 0x8007000e;
          }
          local_10 = (int *)0x0;
          if (piVar5 != (int *)0x0) {
            do {
              iVar3 = *(int *)(*(int *)(param_1 + 0x18) + local_414[(int)local_10] * 4);
              *(int *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x14) * 4) =
                   local_414[(int)local_10];
              *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
              *(uint *)(*(int *)(iVar3 + 0x20) + *(int *)(iVar3 + 0x1c) * 4) = local_14;
              *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
              local_10 = (int *)((int)local_10 + 1);
            } while (local_10 < local_8);
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

