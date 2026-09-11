/* Decompiled from Speed.exe @ 005fb8ae */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005fb8ae(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_8;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0x10) + uVar6 * 4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar9 + 0x28) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x2c) = 0;
      *(undefined4 *)(iVar9 + 0x30) = 0;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0x14) + uVar6 * 4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar9 + 0x2c) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x30) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x34) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x38) = 0xffffffff;
      *(undefined4 *)(iVar9 + 0x3c) = 0;
      *(undefined4 *)(iVar9 + 0x40) = 0;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  local_14 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar6 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        iVar9 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + iVar9) + 0x10) = 0;
      } while (uVar6 < *(uint *)(param_1 + 4));
    }
    uVar6 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar5 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
        iVar9 = *(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4);
        if ((((*(uint *)(iVar9 + 4) & 0x20) == 0) && ((*(uint *)(iVar9 + 4) & 2) != 0)) &&
           (uVar7 = piVar5[2] + 1, *(uint *)(iVar9 + 0x10) < uVar7)) {
          *(uint *)(iVar9 + 0x10) = uVar7;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 8));
    }
    iVar9 = *(int *)(param_1 + 4);
    uVar6 = 0;
    if (iVar9 != 0) {
      piVar5 = *(int **)(param_1 + 0x10);
      do {
        uVar6 = uVar6 + *(int *)(*piVar5 + 0x10);
        piVar5 = piVar5 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    local_14 = _malloc(uVar6 << 4);
    if (local_14 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    puVar10 = local_14;
    for (iVar9 = (uVar6 & 0xfffffff) << 2; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar9 = 0;
    uVar6 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      do {
        iVar4 = *(int *)(iVar4 + uVar6 * 4);
        *(uint *)(iVar4 + 0x20) =
             -(uint)(*(int *)(iVar4 + 0x10) != 0) & (uint)(local_14 + iVar9 * 4);
        iVar4 = *(int *)(param_1 + 0x10);
        iVar9 = iVar9 + *(int *)(*(int *)(iVar4 + uVar6 * 4) + 0x10);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 4));
    }
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0x18) + uVar6 * 4);
      if ((iVar9 != 0) && (iVar4 = FUN_005f7a96(), iVar4 == 0)) {
        local_8 = 0;
        if (*(int *)(iVar9 + 4) != 0) {
          do {
            iVar4 = *(int *)(*(int *)(iVar9 + 8) + local_8 * 4);
            while (iVar4 != -1) {
              piVar5 = *(int **)(*(int *)(param_1 + 0x14) + iVar4 * 4);
              if (uVar6 < (uint)piVar5[0xe]) {
                piVar5[0xe] = uVar6;
              }
              piVar5[0x10] = piVar5[0x10] + 1;
              piVar5[0xf] = uVar6;
              if (piVar5[1] != -1) {
                iVar4 = *(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4);
                if (uVar6 < *(uint *)(iVar4 + 0x28)) {
                  *(uint *)(iVar4 + 0x28) = uVar6;
                }
                *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
                *(uint *)(iVar4 + 0x2c) = uVar6;
              }
              iVar4 = piVar5[1];
            }
            local_8 = local_8 + 1;
          } while (local_8 < *(uint *)(iVar9 + 4));
        }
        local_10 = 0;
        if (*(int *)(iVar9 + 0xc) != 0) {
          do {
            piVar5 = *(int **)(*(int *)(param_1 + 0x14) +
                              *(int *)(*(int *)(iVar9 + 0x10) + local_10 * 4) * 4);
            iVar4 = *(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4);
            piVar5[0xb] = uVar6;
            if ((*(int *)(param_1 + 0x40) != 0) && (iVar1 = *(int *)(iVar4 + 0x20), iVar1 != 0)) {
              iVar8 = (piVar5[3] + piVar5[2] * 4) * 4;
              iVar1 = *(int *)(iVar8 + iVar1);
              if (iVar1 != -1) {
                iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar1 * 4);
                uVar7 = *(uint *)(iVar1 + 0xc);
                local_8 = 0;
                if (uVar7 != 0) {
                  piVar2 = *(int **)(iVar1 + 0x10);
                  local_18 = piVar2;
                  do {
                    piVar3 = *(int **)(*(int *)(param_1 + 0x14) + *local_18 * 4);
                    if ((((*piVar5 == *piVar3) && (piVar5[1] == piVar3[1])) &&
                        (piVar5[2] == piVar3[2])) && (piVar5[3] == piVar3[3])) {
                      piVar5[0xc] = piVar2[local_8];
                      piVar3[0xd] = uVar6;
                      break;
                    }
                    local_8 = local_8 + 1;
                    local_18 = local_18 + 1;
                  } while (local_8 < uVar7);
                }
              }
              *(uint *)(iVar8 + *(int *)(iVar4 + 0x20)) = uVar6;
            }
            while (piVar5[1] != -1) {
              piVar5 = *(int **)(*(int *)(param_1 + 0x14) + piVar5[1] * 4);
              if (uVar6 < (uint)piVar5[0xe]) {
                piVar5[0xe] = uVar6;
              }
              piVar5[0x10] = piVar5[0x10] + 1;
              piVar5[0xf] = uVar6;
              if (piVar5[1] != -1) {
                iVar4 = *(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4);
                if (uVar6 < *(uint *)(iVar4 + 0x28)) {
                  *(uint *)(iVar4 + 0x28) = uVar6;
                }
                *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
                *(uint *)(iVar4 + 0x2c) = uVar6;
              }
            }
            local_10 = local_10 + 1;
          } while (local_10 < *(uint *)(iVar9 + 0xc));
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xc));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + uVar6 * 4);
      iVar9 = *(int *)(*(int *)(param_1 + 0x10) + *piVar5 * 4);
      if (piVar5[1] == -1) {
        if (*(uint *)(iVar9 + 0x28) < (uint)piVar5[0xe]) {
          piVar5[0xe] = *(uint *)(iVar9 + 0x28);
        }
        if ((uint)piVar5[0xf] < *(uint *)(iVar9 + 0x2c)) {
          piVar5[0xf] = *(uint *)(iVar9 + 0x2c);
        }
        piVar5[0x10] = piVar5[0x10] + *(int *)(iVar9 + 0x30);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0x14) + uVar6 * 4);
      if (*(int *)(iVar9 + 0x30) == -1) {
        *(undefined4 *)(iVar9 + 0x30) = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar9 + 0x30) * 4);
        if (*(int *)(iVar4 + 0x38) == *(int *)(iVar4 + 0x3c)) {
          *(int *)(iVar9 + 0x30) = *(int *)(iVar4 + 0x2c) + 1;
        }
        else {
          *(int *)(iVar9 + 0x30) = *(int *)(iVar4 + 0x3c);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  _free(local_14);
  return 0;
}

