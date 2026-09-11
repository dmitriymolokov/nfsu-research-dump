/* Decompiled from Speed.exe @ 005fede4 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool __fastcall FUN_005fede4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_8;
  
  uVar5 = 0;
  bVar4 = false;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar7 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + iVar7) + 0x28) = 0;
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar7 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar7) + 0x38) = 0;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x18) + local_8 * 4);
      if (*piVar2 != 0) {
        uVar5 = 0;
        if (piVar2[1] != 0) {
          do {
            piVar3 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(piVar2[2] + uVar5 * 4) * 4);
            piVar3[0xe] = piVar3[0xe] + 1;
            iVar7 = piVar3[1];
            while (iVar7 != -1) {
              piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar3 * 4) + 0x28);
              *piVar1 = *piVar1 + 1;
              piVar3 = *(int **)(*(int *)(param_1 + 0x14) + piVar3[1] * 4);
              piVar3[0xe] = piVar3[0xe] + 1;
              iVar7 = piVar3[1];
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)piVar2[1]);
        }
        uVar5 = 0;
        if (piVar2[3] != 0) {
          do {
            piVar3 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)(piVar2[4] + uVar5 * 4) * 4);
            piVar3[0xe] = piVar3[0xe] + 1;
            iVar7 = piVar3[1];
            while (iVar7 != -1) {
              piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar3 * 4) + 0x28);
              *piVar1 = *piVar1 + 1;
              piVar3 = *(int **)(*(int *)(param_1 + 0x14) + piVar3[1] * 4);
              piVar3[0xe] = piVar3[0xe] + 1;
              iVar7 = piVar3[1];
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)piVar2[3]);
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)(param_1 + 0xc));
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + uVar5 * 4);
      if (((*(uint *)(iVar7 + 4) & 0x200) != 0) && (*(int *)(iVar7 + 0x28) == 0)) {
        *(uint *)(iVar7 + 4) = *(uint *)(iVar7 + 4) & 0xfffffdff;
        bVar4 = true;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 4));
  }
  uVar5 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x14) + uVar5 * 4);
      if ((piVar2[1] == -1) &&
         (iVar7 = *(int *)(*(int *)(param_1 + 0x10) + *piVar2 * 4),
         (*(uint *)(iVar7 + 4) & 0x200) != 0)) {
        piVar2[0xe] = piVar2[0xe] + *(int *)(iVar7 + 0x28);
      }
      if (piVar2[0xe] == 0) {
        piVar2[7] = -1;
      }
      else {
        piVar2[7] = local_8;
        local_8 = local_8 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  iVar7 = 0;
  if (local_8 == *(int *)(param_1 + 8)) {
    bVar4 = !bVar4;
  }
  else {
    FUN_005fbe30();
    uVar5 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar6 = *(int *)(*(int *)(param_1 + 0x14) + uVar5 * 4);
        if (*(int *)(iVar6 + 0x38) == 0) {
          FUN_005f716a(1);
        }
        else {
          *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4) = iVar6;
          iVar7 = iVar7 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 8));
    }
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
    for (uVar5 = *(int *)(param_1 + 8) - iVar7 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    *(int *)(param_1 + 8) = iVar7;
    bVar4 = false;
  }
  return bVar4;
}

