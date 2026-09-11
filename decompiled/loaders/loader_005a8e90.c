/* Decompiled from Speed.exe @ 005a8e90 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005a9230) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005a8e90(int *param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  int *piVar16;
  undefined1 uVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined1 uStack_c5;
  int *piVar24;
  undefined1 uVar25;
  int iStack_b4;
  int iStack_a8;
  int iStack_a0;
  int iStack_9c;
  uint uStack_90;
  float local_8c [3];
  int *local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  uint auStack_6c [5];
  byte *pbStack_58;
  int aiStack_54 [3];
  undefined1 local_48 [20];
  int aiStack_34 [9];
  int *piStack_10;
  
  local_8c[0] = (float)param_1[1];
  piVar3 = (int *)param_1[0x6e];
  param_1 = (int *)*param_1;
  if (((param_1 == (int *)0x0) || (*(char *)((int)param_1 + 0x4a) != '\b')) || (DAT_007301d4 == 0))
  {
    return 0;
  }
  local_80 = param_1;
  (**(code **)(**(int **)(*param_1 + 0x18) + 0x4c))(*(int **)(*param_1 + 0x18),0,local_48,0);
  puVar22 = (undefined4 *)param_1[0x1d];
  iVar20 = param_1[0x11];
  sVar2 = *(short *)((int)param_1 + 0x46);
  iVar6 = FUN_00565b60(0x200000,0,0,8);
  pbVar7 = pbStack_58 + (int)*(short *)((int)param_1 + 0x46) * (int)(short)param_1[0x11];
  iVar8 = 0;
  iStack_b4 = 0;
  if (0 < iStack_a8) {
    piVar24 = piStack_10 + 0xb;
    do {
      if (piVar24[-5] != 0) {
        aiStack_34[iVar8] = piVar24[-2];
        aiStack_54[iVar8] = *piVar24;
      }
      iVar8 = iVar8 + 1;
      piVar24 = piVar24 + 0xd;
    } while (iVar8 < iStack_a8);
  }
  if (DAT_00733f4c == 0) {
    local_8c[0] = -0.5000152;
    local_8c[1] = -0.503891;
    local_8c[2] = -1.9921875;
    local_80 = (int *)0xbfff00ff;
    auStack_6c[0] = 0xffffffff;
    auStack_6c[1] = 0xffffffff;
    auStack_6c[2] = 0xffffffff;
    auStack_6c[3] = 0xffffffff;
    iVar20 = 0;
    do {
      iVar8 = *(int *)((int)local_8c + iVar20);
      iVar18 = 0;
      piVar24 = puVar22 + 2;
      do {
        if (piVar24[-2] == iVar8) break;
        if (piVar24[-1] == iVar8) {
          iVar18 = iVar18 + 1;
          break;
        }
        if (*piVar24 == iVar8) {
          iVar18 = iVar18 + 2;
          break;
        }
        if (piVar24[1] == iVar8) {
          iVar18 = iVar18 + 3;
          break;
        }
        if (piVar24[2] == iVar8) {
          iVar18 = iVar18 + 4;
          break;
        }
        if (piVar24[3] == iVar8) {
          iVar18 = iVar18 + 5;
          break;
        }
        if (piVar24[4] == iVar8) {
          iVar18 = iVar18 + 6;
          break;
        }
        if (piVar24[5] == iVar8) {
          iVar18 = iVar18 + 7;
          break;
        }
        iVar18 = iVar18 + 8;
        piVar24 = piVar24 + 8;
      } while (iVar18 < 0x100);
      if (iVar18 != 0x100) {
        *(int *)((int)auStack_6c + iVar20) = iVar18;
      }
      iVar20 = iVar20 + 4;
    } while (iVar20 < 0x10);
    puVar11 = &DAT_00733e28;
    for (iVar20 = 0x40; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    if (pbStack_58 < pbVar7) {
      iVar20 = 0;
      pbVar21 = pbStack_58;
      do {
        iVar8 = 0;
        do {
          if ((uint)*pbVar21 == auStack_6c[iVar8]) {
            *pbVar21 = (char)iVar8 + 1;
            iVar18 = (&DAT_00733f50)[iVar8];
            (&DAT_00733e28)[iVar8 * 0x10 + iVar18] = iVar20;
            (&DAT_00733f50)[iVar8] = iVar18 + 1;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 4);
        if (iVar8 == 4) {
          *pbVar21 = 0;
        }
        pbVar21 = pbVar21 + 1;
        iVar20 = iVar20 + 1;
      } while (pbVar21 < pbVar7);
    }
    DAT_00733f4c = 1;
  }
  else {
    uVar23 = (int)sVar2 * (int)(short)iVar20;
    pbVar21 = pbStack_58;
    for (uVar9 = uVar23 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      pbVar21[0] = 0;
      pbVar21[1] = 0;
      pbVar21[2] = 0;
      pbVar21[3] = 0;
      pbVar21 = pbVar21 + 4;
    }
    for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      *pbVar21 = 0;
      pbVar21 = pbVar21 + 1;
    }
  }
  *puVar22 = iStack_a0;
  puVar22[1] = piStack_10[2];
  puVar22[2] = piStack_10[3];
  puVar22[3] = piStack_10[4];
  puVar22[4] = piStack_10[5];
  piVar16 = piStack_10;
  piVar24 = piStack_10;
  for (pbVar21 = pbStack_58; pbVar21 < pbVar7; pbVar21 = pbVar21 + 1) {
    uStack_90 = puVar22[*pbVar21];
    bVar5 = false;
    iStack_a0 = 5;
    iStack_9c = 0;
    piStack_10 = piVar24;
    if (0 < iStack_a8) {
      piVar24 = piVar16 + 0xc;
      do {
        if (piVar24[-6] != 0) {
          pbVar4 = (byte *)aiStack_34[iStack_9c];
          bVar1 = *pbVar4;
          uVar9 = *(uint *)(piVar24[-2] + (uint)bVar1 * 4);
          uVar23 = *(uint *)(*piVar24 + (uint)*(byte *)aiStack_54[iStack_9c] * 4) & 0xff;
          if ((piVar24[2] != 0) && (uVar23 != 0)) {
            fStack_7c = (float)(uVar9 & 0xff) * _DAT_006cc970;
            fStack_78 = (float)(uVar9 >> 8 & 0xff) * _DAT_006cc970;
            uStack_70 = 0;
            fStack_74 = (float)(uVar9 >> 0x10 & 0xff) * _DAT_006cc970;
            uVar9 = FUN_005a8640(piVar24 + 3,&fStack_7c,3,1);
          }
          if (uVar23 < 0x80) {
            if (uVar23 != 0) {
              local_8c[0] = (float)uVar23 * _DAT_006cc7cc;
              if (_DAT_006cc7bc < local_8c[0]) {
                local_8c[0] = 1.0;
              }
              local_8c[1] = _DAT_006cc7bc - local_8c[0];
              auStack_6c[1] = uStack_90;
              auStack_6c[0] = uVar9;
              uStack_90 = FUN_005a8640(auStack_6c,local_8c,2,0);
              if (bVar5) {
                *(uint *)(iVar6 + -4 + iStack_b4 * 8) = uStack_90;
              }
              else {
                iVar20 = piVar24[-3];
                iVar8 = piVar3[0x11];
                *(uint *)(iVar6 + 4 + iStack_b4 * 8) = uStack_90;
                iStack_b4 = iStack_b4 + 1;
                *(short *)(iVar6 + -8 + iStack_b4 * 8) =
                     (short)(((int)pbVar4 - iVar20) % (int)(short)iVar8);
                *(short *)(iVar6 + -6 + iStack_b4 * 8) =
                     (short)(((int)pbVar4 - iVar20) / (int)(short)iVar8);
              }
              *pbVar21 = 0xff;
              bVar5 = true;
            }
          }
          else {
            *pbVar21 = (char)iStack_a0 + bVar1;
            uStack_90 = uVar9;
            if (bVar5) {
              iStack_b4 = iStack_b4 + -1;
              bVar5 = false;
            }
          }
          piVar16 = piStack_10;
          aiStack_54[iStack_9c] = aiStack_54[iStack_9c] + 1;
          iVar20 = piVar24[1];
          aiStack_34[iStack_9c] = (int)(pbVar4 + 1);
          iStack_a0 = iStack_a0 + iVar20;
        }
        iStack_9c = iStack_9c + 1;
        piVar24 = piVar24 + 0xd;
      } while (iStack_9c < iStack_a8);
    }
    piVar24 = piStack_10;
  }
  iVar20 = 5;
  if (0 < iStack_a8) {
    do {
      piVar16 = piVar24 + 0xd;
      if (piVar24[0xe] == 0) {
        iVar8 = 0;
        if (0 < *piVar16) {
          puVar11 = puVar22 + iVar20;
          do {
            *puVar11 = *(undefined4 *)(piVar24[10] + iVar8 * 4);
            iVar8 = iVar8 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar8 < *piVar16);
        }
      }
      else {
        iVar8 = 0;
        if (0 < *piVar16) {
          uStack_70 = 0;
          puVar11 = puVar22 + iVar20;
          do {
            uVar9 = *(uint *)(piVar24[10] + iVar8 * 4);
            fStack_7c = (float)(uVar9 & 0xff) * _DAT_006cc970;
            fStack_78 = (float)(uVar9 >> 8 & 0xff) * _DAT_006cc970;
            fStack_74 = (float)(uVar9 >> 0x10 & 0xff) * _DAT_006cc970;
            uVar10 = FUN_005a8640(piVar24 + 0xf,&fStack_7c,3,1);
            *puVar11 = uVar10;
            iVar8 = iVar8 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar8 < *piVar16);
        }
      }
      iVar20 = iVar20 + *piVar16;
      iStack_a8 = iStack_a8 + -1;
      piVar24 = piVar16;
    } while (iStack_a8 != 0);
  }
  if (iStack_b4 != 0) {
    iVar8 = 0xff - iVar20;
    if (iStack_b4 < iVar8) {
      iVar8 = 0;
      if (0 < iStack_b4) {
        puVar22 = puVar22 + iVar20;
        puVar11 = (undefined4 *)(iVar6 + 4);
        do {
          pbStack_58
          [(int)*(short *)(puVar11 + -1) +
           (int)*(short *)((int)puVar11 + -2) * (int)(short)piVar3[0x11]] =
               (char)iVar20 + (char)iVar8;
          *puVar22 = *puVar11;
          iVar8 = iVar8 + 1;
          puVar22 = puVar22 + 1;
          puVar11 = puVar11 + 2;
        } while (iVar8 < iStack_b4);
      }
    }
    else {
      if ((int)(-(uint)(DAT_007301d4 != 0) & 0x6300000) < iStack_b4 * 4) {
        iStack_b4 = 0;
      }
      iVar18 = FUN_00565b60(iStack_b4 * 4,0,0,8);
      if (0 < iStack_b4) {
        puVar15 = (undefined1 *)(iVar18 + 2);
        puVar12 = (undefined1 *)(iVar6 + 5);
        iVar18 = iStack_b4;
        do {
          puVar15[-2] = puVar12[-1];
          puVar15[-1] = *puVar12;
          *puVar15 = puVar12[1];
          puVar15[1] = puVar12[2];
          puVar12 = puVar12 + 8;
          puVar15 = puVar15 + 4;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      FUN_005a7b70(iVar8);
      FUN_005a81b0();
      FUN_005a7bf0();
      iVar18 = 0;
      if (0 < iVar8) {
        puVar15 = &DAT_00732334;
        puVar22 = puVar22 + iVar20;
        do {
          if (((int)puVar15 < 0x732334) || (DAT_006ee1e4 <= iVar18)) {
            uVar14 = 0;
            uStack_c5 = 0;
            uVar25 = 0;
            uVar17 = 0;
          }
          else {
            uStack_c5 = *puVar15;
            uVar14 = puVar15[4];
            uVar25 = puVar15[-4];
            uVar17 = puVar15[8];
          }
          puVar15 = puVar15 + 0x14;
          *puVar22 = CONCAT31(CONCAT21(CONCAT11(uVar17,uVar14),uStack_c5),uVar25);
          iVar18 = iVar18 + 1;
          puVar22 = puVar22 + 1;
        } while (iVar18 < iVar8);
      }
      FUN_005a7c30();
      if (0 < iStack_b4) {
        puVar15 = (undefined1 *)(iVar6 + 7);
        do {
          sVar2 = *(short *)(puVar15 + -7);
          iVar6 = (int)*(short *)(puVar15 + -5) * (int)(short)piVar3[0x11];
          if (pbStack_58[sVar2 + iVar6] == 0xff) {
            iVar18 = FUN_005a7d60(*(uint *)(puVar15 + -3) & 0xff,puVar15[-2],puVar15[-1],*puVar15);
            if (iVar18 < iVar8) {
              pbStack_58[sVar2 + iVar6] = (char)iVar20 + (char)iVar18;
            }
            else {
              pbStack_58[sVar2 + iVar6] = 0;
            }
          }
          puVar15 = puVar15 + 8;
          iStack_b4 = iStack_b4 + -1;
        } while (iStack_b4 != 0);
      }
      FUN_00565ce0();
    }
  }
  FUN_00565ce0();
  cVar19 = '\0';
  piVar24 = &DAT_00733e28;
  piVar16 = &DAT_00733f50;
  do {
    iVar20 = 0;
    if (0 < *piVar16) {
      piVar13 = piVar24;
      do {
        pbStack_58[*piVar13] = cVar19 + 1;
        iVar20 = iVar20 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar20 < *piVar16);
    }
    piVar16 = piVar16 + 1;
    piVar24 = piVar24 + 0x10;
    cVar19 = cVar19 + '\x01';
  } while ((int)piVar16 < 0x733f60);
  (**(code **)(**(int **)(*piVar3 + 0x18) + 0x50))(*(int **)(*piVar3 + 0x18),0);
  return 1;
}

