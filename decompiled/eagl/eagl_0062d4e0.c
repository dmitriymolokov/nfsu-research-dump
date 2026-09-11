/* Decompiled from Speed.exe @ 0062d4e0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0062d4e0(int param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  float *pfVar18;
  undefined4 *puVar19;
  uint uVar20;
  ushort *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 *puVar27;
  int iVar28;
  ushort *puVar29;
  float local_8c;
  ushort *local_88;
  byte *local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_6c;
  byte abStack_50 [80];
  
  if (param_4 != *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(int *)(param_1 + 0x28) = param_4;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  if (param_2 < DAT_006cc7a4) {
    fVar1 = param_2 + _DAT_006a7eb0;
  }
  else {
    fVar1 = param_2 - _DAT_006a7eb0;
  }
  local_6c = (uint)ROUND(fVar1);
  puVar21 = *(ushort **)(iVar9 + 8);
  if (puVar21 == (ushort *)0x0) {
    if ((int)local_6c < 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = local_6c;
      if ((int)(uint)*(ushort *)(iVar9 + 0xc) <= (int)local_6c) {
        uVar24 = *(ushort *)(iVar9 + 0xc) - 1;
      }
    }
  }
  else if ((int)local_6c < (int)(uint)*puVar21) {
    uVar24 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(param_1 + 0x10) + -1;
    }
    puVar29 = puVar21 + iVar15;
    if ((int)local_6c < (int)(uint)puVar21[iVar15]) {
      for (; (0 < iVar15 && ((int)local_6c < (int)(uint)*puVar29)); puVar29 = puVar29 + -1) {
        iVar15 = iVar15 + -1;
      }
    }
    else {
      while ((iVar15 < (int)(*(ushort *)(iVar9 + 0xc) - 2) &&
             (puVar29 = puVar29 + 1, (int)(uint)*puVar29 <= (int)local_6c))) {
        iVar15 = iVar15 + 1;
      }
    }
    uVar24 = iVar15 + 1;
  }
  bVar5 = *(byte *)(iVar9 + 0x10);
  uVar20 = *(uint *)(param_1 + 0x10);
  uVar25 = 0x7fffffff >> (0x1f - bVar5 & 0x1f);
  iVar12 = (int)uVar24 >> (bVar5 & 0x1f);
  uVar13 = uVar25 & uVar24;
  uVar26 = (uint)*(ushort *)(iVar9 + 0xe);
  iVar15 = iVar9 + (((1 << (bVar5 & 0x1f)) + 1) * uVar26 * 3 + 1 & 0xfffffffe) * iVar12 + 0x14 +
           uVar26 * 0x24;
  iVar17 = 0;
  if (uVar26 != 0) {
    do {
      abStack_50[iVar17] = (byte)(*(ushort *)(*(int *)(iVar9 + 4) + iVar17 * 2) / 0xc);
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)uVar26);
  }
  if (((int)uVar20 <= (int)uVar24) || (bVar11 = true, DAT_006e58d8 != '\0')) {
    bVar11 = false;
  }
  if (uVar24 == *(uint *)(param_1 + 0x1c)) {
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar10;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  else {
    if (((uVar20 == 0xffffffff) || (iVar12 != (int)uVar20 >> (bVar5 & 0x1f))) || (bVar11)) {
      iVar17 = 0;
      if (uVar26 != 0) {
        iVar28 = 0;
        local_80 = (byte *)0x0;
        puVar21 = (ushort *)(iVar15 + 4);
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[iVar17] >> 5) * 4) &
              1 << (abStack_50[iVar17] & 0x1f)) != 0) {
            pfVar18 = (float *)(*(int *)(param_1 + 0x18) + iVar28);
            pfVar16 = (float *)(*(int *)(param_1 + 0x2c) + (int)local_80);
            *pfVar18 = (float)puVar21[-2] * pfVar16[3] + *pfVar16;
            pfVar18[1] = (float)puVar21[-1] * pfVar16[4] + pfVar16[1];
            pfVar18[2] = (float)*puVar21 * pfVar16[5] + pfVar16[2];
          }
          iVar17 = iVar17 + 1;
          local_80 = (byte *)((int)local_80 + 0x30);
          iVar28 = iVar28 + 0x10;
          puVar21 = puVar21 + 3;
        } while (iVar17 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
      uVar20 = 0;
    }
    else {
      uVar20 = uVar20 & uVar25;
    }
    if ((int)uVar20 < (int)uVar13) {
      uVar25 = (uint)*(ushort *)(iVar9 + 0xe);
      iVar15 = iVar15 + (uVar20 + 2) * uVar25 * 3;
      local_78 = uVar13 - uVar20;
      do {
        iVar17 = 0;
        if (uVar25 != 0) {
          iVar28 = 0;
          local_80 = (byte *)0x0;
          pbVar22 = (byte *)(iVar15 + 2);
          do {
            if ((*(uint *)(param_4 + ((int)(uint)abStack_50[iVar17] >> 5) * 4) &
                1 << (abStack_50[iVar17] & 0x1f)) != 0) {
              iVar14 = *(int *)(param_1 + 0x2c) + (int)local_80;
              bVar6 = pbVar22[-1];
              bVar7 = *pbVar22;
              fVar1 = *(float *)(iVar14 + 0x28);
              fVar2 = *(float *)(iVar14 + 0x1c);
              fVar3 = *(float *)(iVar14 + 0x2c);
              fVar4 = *(float *)(iVar14 + 0x20);
              pfVar16 = (float *)(*(int *)(param_1 + 0x18) + iVar28);
              *pfVar16 = (float)pbVar22[-2] * *(float *)(iVar14 + 0x24) + *(float *)(iVar14 + 0x18)
                         + *pfVar16;
              *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar28) =
                   (float)bVar6 * fVar1 + fVar2 + *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar28);
              *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar28) =
                   (float)bVar7 * fVar3 + fVar4 + *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar28);
            }
            uVar25 = (uint)*(ushort *)(iVar9 + 0xe);
            iVar17 = iVar17 + 1;
            local_80 = (byte *)((int)local_80 + 0x30);
            pbVar22 = pbVar22 + 3;
            iVar28 = iVar28 + 0x10;
          } while (iVar17 < (int)uVar25);
        }
        iVar15 = iVar15 + uVar26 * 3;
        local_78 = local_78 + -1;
      } while (local_78 != 0);
    }
    else if ((int)uVar13 < (int)uVar20) {
      uVar25 = (uint)*(ushort *)(iVar9 + 0xe);
      if ((int)uVar13 <= (int)(uVar20 - 1)) {
        pbVar22 = (byte *)(iVar15 + (uVar20 + 1) * uVar25 * 3 + 2);
        local_80 = (byte *)(((uVar20 - 1) - uVar13) + 1);
        do {
          iVar15 = 0;
          if (uVar25 != 0) {
            iVar17 = 0;
            local_7c = 0;
            pbVar23 = pbVar22;
            do {
              if ((*(uint *)(param_4 + ((int)(uint)abStack_50[iVar15] >> 5) * 4) &
                  1 << (abStack_50[iVar15] & 0x1f)) != 0) {
                iVar28 = *(int *)(param_1 + 0x2c) + local_7c;
                bVar6 = pbVar23[-1];
                bVar7 = *pbVar23;
                fVar1 = *(float *)(iVar28 + 0x28);
                fVar2 = *(float *)(iVar28 + 0x1c);
                fVar3 = *(float *)(iVar28 + 0x2c);
                fVar4 = *(float *)(iVar28 + 0x20);
                pfVar16 = (float *)(*(int *)(param_1 + 0x18) + iVar17);
                *pfVar16 = *pfVar16 -
                           ((float)pbVar23[-2] * *(float *)(iVar28 + 0x24) +
                           *(float *)(iVar28 + 0x18));
                *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar17) =
                     *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar17) -
                     ((float)bVar6 * fVar1 + fVar2);
                pfVar16 = (float *)(*(int *)(param_1 + 0x18) + 8 + iVar17);
                *pfVar16 = *pfVar16 - ((float)bVar7 * fVar3 + fVar4);
              }
              uVar25 = (uint)*(ushort *)(iVar9 + 0xe);
              iVar15 = iVar15 + 1;
              local_7c = local_7c + 0x30;
              pbVar23 = pbVar23 + 3;
              iVar17 = iVar17 + 0x10;
            } while (iVar15 < (int)uVar25);
          }
          pbVar22 = pbVar22 + uVar26 * -3;
          local_80 = (byte *)((int)local_80 + -1);
        } while (local_80 != (byte *)0x0);
      }
    }
  }
  *(uint *)(param_1 + 0x10) = uVar24;
  puVar21 = *(ushort **)(iVar9 + 8);
  iVar15 = uVar24 + 1;
  local_8c = 1.0;
  if (puVar21 == (ushort *)0x0) {
    bVar11 = false;
    if (param_2 == (float)(int)local_6c) goto LAB_0062da74;
    local_8c = param_2 - (float)(int)local_6c;
  }
  else {
    if (uVar24 == 0) {
      if (param_2 == DAT_006cc7a4) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
        local_8c = param_2 / (float)*puVar21;
      }
      goto LAB_0062da74;
    }
    fVar1 = (float)puVar21[uVar24 - 1];
    bVar11 = false;
    if (param_2 == fVar1) goto LAB_0062da74;
    local_8c = (param_2 - fVar1) / ((float)puVar21[uVar24] - fVar1);
  }
  bVar11 = true;
LAB_0062da74:
  puVar21 = *(ushort **)(iVar9 + 4);
  if ((bVar11) && ((int)uVar24 < (int)(*(ushort *)(iVar9 + 0xc) - 1))) {
    uVar24 = (uint)*(ushort *)(iVar9 + 0xe);
    iVar28 = iVar15 >> (bVar5 & 0x1f);
    iVar17 = iVar9 + (((1 << (*(byte *)(iVar9 + 0x10) & 0x1f)) + 1) * uVar24 * 3 + 1 & 0xfffffffe) *
                     iVar28 + 0x14 + uVar24 * 0x24;
    if (iVar15 == *(int *)(param_1 + 0x1c)) {
      local_88 = (ushort *)0x0;
      if (uVar24 != 0) {
        iVar15 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[(int)local_88] >> 5) * 4) &
              1 << (abStack_50[(int)local_88] & 0x1f)) != 0) {
            pfVar16 = (float *)(*(int *)(param_1 + 0x18) + iVar15);
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + iVar15) - *pfVar16) * local_8c + *pfVar16;
            *(float *)(param_3 + 4 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 4 + iVar15) -
                 *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar15)) * local_8c +
                 *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar15);
            *(float *)(param_3 + 8 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 8 + iVar15) -
                 *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar15)) * local_8c +
                 *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar15);
          }
          puVar21 = puVar21 + 1;
          local_88 = (ushort *)((int)local_88 + 1);
          iVar15 = iVar15 + 0x10;
        } while ((int)local_88 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
    }
    else if (iVar28 == iVar12) {
      local_88 = (ushort *)0x0;
      if (uVar24 != 0) {
        iVar12 = 0;
        local_80 = (byte *)(iVar17 + (uVar13 + 2) * uVar24 * 3 + 2);
        local_74 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[(int)local_88] >> 5) * 4) &
              1 << (abStack_50[(int)local_88] & 0x1f)) != 0) {
            iVar17 = *(int *)(param_1 + 0x2c) + local_74;
            fVar1 = (float)local_80[-2] * *(float *)(iVar17 + 0x24) + *(float *)(iVar17 + 0x18);
            fVar2 = (float)local_80[-1] * *(float *)(iVar17 + 0x28) + *(float *)(iVar17 + 0x1c);
            fVar3 = (float)*local_80 * *(float *)(iVar17 + 0x2c) + *(float *)(iVar17 + 0x20);
            *(int *)(param_1 + 0x1c) = iVar15;
            *(float *)(iVar12 + *(int *)(param_1 + 0x24)) =
                 fVar1 + *(float *)(*(int *)(param_1 + 0x18) + iVar12);
            *(float *)(*(int *)(param_1 + 0x24) + 4 + iVar12) =
                 fVar2 + *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar12);
            *(float *)(*(int *)(param_1 + 0x24) + 8 + iVar12) =
                 fVar3 + *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar12);
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 fVar1 * local_8c + *(float *)(*(int *)(param_1 + 0x18) + iVar12);
            *(float *)(param_3 + 4 + (uint)*puVar21 * 4) =
                 fVar2 * local_8c + *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar12);
            *(float *)(param_3 + 8 + (uint)*puVar21 * 4) =
                 fVar3 * local_8c + *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar12);
          }
          local_80 = local_80 + 3;
          puVar21 = puVar21 + 1;
          local_88 = (ushort *)((int)local_88 + 1);
          local_74 = local_74 + 0x30;
          iVar12 = iVar12 + 0x10;
        } while ((int)local_88 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
    }
    else {
      local_88 = (ushort *)0x0;
      if (uVar24 != 0) {
        iVar12 = 0;
        puVar29 = (ushort *)(iVar17 + 4);
        local_74 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)abStack_50[(int)local_88] >> 5) * 4) &
              1 << (abStack_50[(int)local_88] & 0x1f)) != 0) {
            pfVar16 = (float *)(*(int *)(param_1 + 0x2c) + local_74);
            pfVar18 = (float *)(*(int *)(param_1 + 0x24) + iVar12);
            *pfVar18 = (float)puVar29[-2] * pfVar16[3] + *pfVar16;
            pfVar18[1] = (float)puVar29[-1] * pfVar16[4] + pfVar16[1];
            pfVar18[2] = (float)*puVar29 * pfVar16[5] + pfVar16[2];
            *(int *)(param_1 + 0x1c) = iVar15;
            *(float *)(param_3 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + iVar12) -
                 *(float *)(*(int *)(param_1 + 0x18) + iVar12)) * local_8c +
                 *(float *)(*(int *)(param_1 + 0x18) + iVar12);
            *(float *)(param_3 + 4 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 4 + iVar12) -
                 *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar12)) * local_8c +
                 *(float *)(*(int *)(param_1 + 0x18) + 4 + iVar12);
            *(float *)(param_3 + 8 + (uint)*puVar21 * 4) =
                 (*(float *)(*(int *)(param_1 + 0x24) + 8 + iVar12) -
                 *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar12)) * local_8c +
                 *(float *)(*(int *)(param_1 + 0x18) + 8 + iVar12);
          }
          local_74 = local_74 + 0x30;
          puVar21 = puVar21 + 1;
          puVar29 = puVar29 + 3;
          local_88 = (ushort *)((int)local_88 + 1);
          iVar12 = iVar12 + 0x10;
        } while ((int)local_88 < (int)(uint)*(ushort *)(iVar9 + 0xe));
      }
    }
  }
  else {
    iVar15 = 0;
    if (*(short *)(iVar9 + 0xe) != 0) {
      iVar12 = 0;
      do {
        if ((*(uint *)(param_4 + ((int)(uint)abStack_50[iVar15] >> 5) * 4) &
            1 << (abStack_50[iVar15] & 0x1f)) != 0) {
          puVar19 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar12);
          puVar27 = (undefined4 *)(param_3 + (uint)puVar21[iVar15] * 4);
          *puVar27 = *puVar19;
          puVar27[1] = puVar19[1];
          puVar27[2] = puVar19[2];
        }
        iVar15 = iVar15 + 1;
        iVar12 = iVar12 + 0x10;
      } while (iVar15 < (int)(uint)*(ushort *)(iVar9 + 0xe));
    }
  }
  bVar5 = *(byte *)(iVar9 + 0x11);
  if (bVar5 != 0) {
    local_88 = (ushort *)FUN_0062d170();
    iVar15 = FUN_0062d170();
    puVar27 = (undefined4 *)(iVar15 + 3 + (uint)bVar5 * 2 & 0xfffffffc);
    local_6c = 0;
    if (bVar5 != 0) {
      do {
        uVar8 = *local_88;
        local_88 = local_88 + 1;
        uVar24 = uVar8 / 0xc;
        if ((*(uint *)(param_4 + ((int)uVar24 >> 5) * 4) & 1 << ((byte)uVar24 & 0x1f)) != 0) {
          *(undefined4 *)(param_3 + (uint)uVar8 * 4) = *puVar27;
          *(undefined4 *)(param_3 + (uint)(ushort)(uVar8 + 1) * 4) = puVar27[1];
          *(undefined4 *)(param_3 + (uint)(ushort)(uVar8 + 2) * 4) = puVar27[2];
        }
        puVar27 = puVar27 + 3;
        local_6c = local_6c + 1;
      } while ((int)local_6c < (int)(uint)*(byte *)(iVar9 + 0x11));
    }
  }
  return 1;
}

