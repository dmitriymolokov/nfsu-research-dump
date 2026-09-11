/* Decompiled from Speed.exe @ 005fe888 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005fe888(int param_1)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_c = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      piVar9 = *(int **)(*(int *)(param_1 + 0x14) + local_c * 4);
      if ((*(int *)(param_1 + 0x4c) != *piVar9) && (piVar12 = piVar9 + 1, *piVar12 != -1)) {
        if (!bVar3) {
          FUN_005fb8ae();
          bVar3 = true;
        }
        iVar7 = *piVar12;
        iVar14 = *(int *)(*(int *)(param_1 + 0x14) + iVar7 * 4);
        piVar13 = piVar12;
        if ((*(int *)(iVar14 + 0x2c) != -1) && (iVar6 = FUN_005f7aa3(), iVar6 != 0)) {
          iVar14 = *(int *)(*(int *)(param_1 + 0x18) + *(int *)(iVar14 + 0x2c) * 4);
          uVar10 = 0;
          if (*(uint *)(iVar14 + 0xc) != 0) {
            piVar13 = *(int **)(iVar14 + 0x10);
            do {
              if (*piVar13 == iVar7) break;
              uVar10 = uVar10 + 1;
              piVar13 = piVar13 + 1;
            } while (uVar10 < *(uint *)(iVar14 + 0xc));
          }
          piVar13 = (int *)(*(int *)(iVar14 + 8) + uVar10 * 4);
        }
        local_10 = *(int **)(param_1 + 0x14);
        piVar1 = (int *)local_10[*piVar13];
        uVar10 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar1 * 4) + 4);
        if (((char)uVar10 < '\0') && (piVar1[1] == -1)) {
          iVar7 = __ftol();
          local_8 = 0;
          uVar10 = iVar7 + piVar9[2];
          if (*(uint *)(param_1 + 8) != 0) {
            do {
              if ((((local_8 != local_c) && (piVar13 = (int *)*local_10, *piVar13 == *piVar9)) &&
                  (piVar13[1] == -1)) && ((piVar13[2] == uVar10 && (piVar13[3] == piVar9[3])))) {
                if (!bVar4) {
                  FUN_005fbe17();
                  bVar4 = true;
                }
                piVar9[7] = local_8;
                break;
              }
              local_8 = local_8 + 1;
              local_10 = local_10 + 1;
            } while (local_8 < *(uint *)(param_1 + 8));
          }
          if (local_8 == *(uint *)(param_1 + 8)) {
            *piVar12 = -1;
            piVar9[2] = uVar10;
            if (*(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar9 * 4) + 8) <= uVar10) {
              FUN_005fbec8(param_1,piVar9[0x11],0xfa7,"array index out of bounds");
              return 0x80004005;
            }
          }
        }
        else {
          if (((uVar10 & 2) == 0) ||
             ((piVar1[0xb] == -1 ||
              (puVar2 = *(uint **)(*(int *)(param_1 + 0x18) + piVar1[0xb] * 4),
              (*puVar2 & 0xff000000) != 0x24000000)))) goto LAB_005feb56;
          uVar10 = puVar2[3];
          uVar11 = 0;
          if (uVar10 != 0) {
            piVar9 = (int *)puVar2[4];
            do {
              if (*piVar9 == *piVar13) break;
              uVar11 = uVar11 + 1;
              piVar9 = piVar9 + 1;
            } while (uVar11 < uVar10);
          }
          iVar14 = *(int *)(puVar2[2] + uVar11 * 4);
          iVar6 = *(int *)(puVar2[2] + (uVar10 + uVar11) * 4);
          piVar9 = (int *)local_10[iVar6];
          piVar1 = (int *)local_10[iVar14];
          if (((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar1 * 4) + 4) & 0x80) == 0) ||
               (piVar1[1] != -1)) || ((piVar1[6] & 4U) == 0)) ||
             (((piVar1[6] & 2U) == 0 && ((*(byte *)(piVar9 + 6) & 2) == 0)))) {
            if ((((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar9 * 4) + 4) & 0x80) == 0) ||
                ((piVar9[1] != -1 || ((piVar9[6] & 4U) == 0)))) ||
               (((*(byte *)(piVar1 + 6) & 2) == 0 && ((piVar9[6] & 2U) == 0)))) goto LAB_005feb56;
            iVar8 = __ftol();
          }
          else {
            iVar8 = __ftol();
            iVar14 = iVar6;
          }
          if (*piVar13 == *piVar12) {
            uVar10 = 0;
            if (*(int *)(param_1 + 8) != 0) {
              do {
                iVar6 = *(int *)(*(int *)(param_1 + 0x14) + uVar10 * 4);
                if (iVar7 == *(int *)(iVar6 + 4)) {
                  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + iVar8;
                  *(int *)(iVar6 + 4) = iVar14;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(uint *)(param_1 + 8));
            }
          }
          else {
            uVar10 = 0;
            if (*(int *)(param_1 + 8) != 0) {
              do {
                iVar6 = *(int *)(*(int *)(param_1 + 0x14) + uVar10 * 4);
                if (iVar7 == *(int *)(iVar6 + 4)) {
                  piVar9 = (int *)(iVar6 + 8);
                  *piVar9 = *piVar9 + iVar8;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < *(uint *)(param_1 + 8));
            }
            *piVar13 = iVar14;
          }
        }
        bVar5 = true;
      }
LAB_005feb56:
      local_c = local_c + 1;
    } while (local_c < *(uint *)(param_1 + 8));
    if (bVar5) {
      if (bVar4) {
        FUN_005fbe30();
      }
      return 0;
    }
  }
  return 1;
}

