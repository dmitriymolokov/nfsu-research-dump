/* Decompiled from Speed.exe @ 005fc0d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fc0d0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint local_10;
  uint local_8;
  
  uVar6 = 0;
  bVar2 = false;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar6 * 4);
      *(undefined4 *)(iVar5 + 0x28) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x24) = 0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + uVar6 * 4);
      *(undefined4 *)(iVar5 + 0x38) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x2c) = 0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
      iVar3 = FUN_005f7a96();
      if (iVar3 == 0) {
        local_8 = 0;
        if (*(int *)(iVar5 + 4) != 0) {
          do {
            iVar3 = *(int *)(*(int *)(iVar5 + 8) + local_8 * 4);
            while( true ) {
              piVar4 = *(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4);
              if (uVar6 < (uint)piVar4[0xe]) {
                piVar4[0xe] = uVar6;
              }
              if (piVar4[1] == -1) break;
              iVar3 = *(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4);
              if (uVar6 < *(uint *)(iVar3 + 0x28)) {
                *(uint *)(iVar3 + 0x28) = uVar6;
              }
              iVar3 = piVar4[1];
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(uint *)(iVar5 + 4));
        }
        local_8 = 0;
        if (*(int *)(iVar5 + 0xc) != 0) {
          do {
            piVar4 = *(int **)(*(int *)(param_1 + 0x14) +
                              *(int *)(*(int *)(iVar5 + 0x10) + local_8 * 4) * 4);
            if (uVar6 < (uint)piVar4[0xb]) {
              piVar4[0xb] = uVar6;
            }
            if (piVar4[1] != -1) {
              iVar3 = *(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4);
              if (uVar6 < *(uint *)(iVar3 + 0x24)) {
                *(uint *)(iVar3 + 0x24) = uVar6;
              }
              while( true ) {
                piVar4 = *(int **)(*(int *)(param_1 + 0x14) + piVar4[1] * 4);
                if (uVar6 < (uint)piVar4[0xe]) {
                  piVar4[0xe] = uVar6;
                }
                if (piVar4[1] == -1) break;
                iVar3 = *(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4);
                if (uVar6 < *(uint *)(iVar3 + 0x28)) {
                  *(uint *)(iVar3 + 0x28) = uVar6;
                }
              }
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(uint *)(iVar5 + 0xc));
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xc));
  }
  local_10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0x14) + local_10 * 4);
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + *piVar4 * 4);
      if (*(uint *)(iVar5 + 0x28) < (uint)piVar4[0xe]) {
        piVar4[0xe] = *(uint *)(iVar5 + 0x28);
      }
      if (*(uint *)(iVar5 + 0x24) < (uint)piVar4[0xb]) {
        piVar4[0xb] = *(uint *)(iVar5 + 0x24);
      }
      uVar6 = *(uint *)(iVar5 + 4);
      if ((((uVar6 & 8) == 0) && (uVar1 = piVar4[0xe], uVar1 != 0xffffffff)) &&
         (uVar1 <= (uint)piVar4[0xb])) {
        iVar5 = piVar4[0x11];
        if (((iVar5 == 0) || (*(int *)(iVar5 + 4) != 5)) ||
           ((iVar3 = *(int *)(iVar5 + 0x14), iVar3 == 0 || (*(int *)(iVar3 + 4) != 2)))) {
          FUN_005fbec8(param_1,0,0,
                       "internal error: argument used without having been initialized (A%u)",
                       local_10);
        }
        else if (*(int *)(iVar5 + 0x28) == 0) {
          FUN_005fbec8(param_1,*(undefined4 *)
                                (*(int *)(*(int *)(param_1 + 0x18) + uVar1 * 4) + 0x34),4000,
                       "variable \'%s\' used without having been completely initialized",
                       *(undefined4 *)(iVar3 + 0x18));
          *(undefined4 *)(iVar5 + 0x28) = 1;
        }
LAB_005fc30f:
        bVar2 = true;
      }
      else {
        if (((uVar6 & 0x10) != 0) && (piVar4[0xb] == -1)) {
          pcVar7 = "internal error: output argument was never initialized (A%u)";
LAB_005fc304:
          FUN_005fbec8(param_1,0,0,pcVar7,local_10);
          goto LAB_005fc30f;
        }
        if (((uVar6 & 2) == 0) && (piVar4[0xb] != -1)) {
          pcVar7 = "internal error: cannot write to argument pool (A%u)";
          goto LAB_005fc304;
        }
        if (((uVar6 & 5) == 0) && (piVar4[0xe] != -1)) {
          pcVar7 = "internal error: cannot read from argument pool (A%u)";
          goto LAB_005fc304;
        }
        if ((((*(int *)(param_1 + 0x3c) != 0) && ((uVar6 & 0x90) == 0)) && (piVar4[0xe] == -1)) &&
           (((uVar6 & 8) != 0 || ((piVar4[0xb] != -1 && (iVar5 = FUN_005f7b57(), iVar5 == 0)))))) {
          pcVar7 = "internal error: argument was never used (A%u)";
          goto LAB_005fc304;
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(uint *)(param_1 + 8));
    if (bVar2) {
      return 0x80004005;
    }
  }
  return 0;
}

