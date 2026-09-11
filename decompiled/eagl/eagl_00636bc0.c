/* spd-match: far pct=2.07 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int _param_5;

struct ThisCallBox {
  undefined4 FUN_00636bc0(undefined4 param_2, int param_3, int param_4, char param_5, int param_6, float param_7);
};
undefined4 ThisCallBox::FUN_00636bc0(undefined4 param_2, int param_3, int param_4, char param_5, int param_6, float param_7) {
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ushort *puVar17;
  uint uVar18;
  byte *pbVar19;
  
  if (param_4 != *(int *)(((int)this) + 0x14)) {
    *(int *)(((int)this) + 0x14) = param_4;
  }
  iVar8 = *(int *)(((int)this) + 0xc);
  uVar12 = (uint)*(byte *)(iVar8 + 0x16);
  iVar9 = *(int *)(iVar8 + 0xc);
  iVar1 = iVar8 + 0x18 + uVar12 * param_6 * 8;
  if ((param_5 == '\0') || ((int)(*(ushort *)(iVar8 + 0x14) - 1) <= param_6)) {
    _param_5 = 0;
    if (uVar12 != 0) {
      puVar11 = (ushort *)(iVar1 + 4);
      do {
        uVar18 = (uint)*(byte *)(_param_5 + iVar9);
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (*(byte *)(_param_5 + iVar9) & 0x1f)
            ) != 0) {
          *(uint *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((puVar11[-2] & 0xffff8000) << 1 | puVar11[-2] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((puVar11[-1] & 0xffff8000) << 1 | puVar11[-1] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 1) * 4) =
               ((*puVar11 & 0xffff8000) << 1 | *puVar11 & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 2) * 4) =
               ((puVar11[1] & 0xffff8000) << 1 | puVar11[1] & 0x7fff) << 0xf;
        }
        _param_5 = _param_5 + 1;
        puVar11 = puVar11 + 4;
      } while (_param_5 < (int)uVar12);
    }
  }
  else {
    iVar2 = iVar8 + 0x18 + (param_6 + 1) * uVar12 * 8;
    _param_5 = 0;
    if (3 < uVar12) {
      puVar17 = (ushort *)(iVar1 + 0x1e);
      puVar11 = (ushort *)(iVar2 + 0xe);
      pbVar19 = (byte *)(iVar9 + 1);
      do {
        uVar18 = (uint)pbVar19[-1];
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (pbVar19[-1] & 0x1f)) != 0) {
          fVar13 = (float)(((puVar17[-0xf] & 0xffff8000) << 1 | puVar17[-0xf] & 0x7fff) << 0xf);
          fVar14 = (float)(((puVar17[-0xe] & 0xffff8000) << 1 | puVar17[-0xe] & 0x7fff) << 0xf);
          fVar15 = (float)(((puVar17[-0xd] & 0xffff8000) << 1 | puVar17[-0xd] & 0x7fff) << 0xf);
          fVar16 = (float)(((puVar17[-0xc] & 0xffff8000) << 1 | puVar17[-0xc] & 0x7fff) << 0xf);
          uVar5 = puVar11[-6];
          uVar6 = puVar11[-5];
          uVar7 = puVar11[-4];
          *(float *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((float)(((puVar11[-7] & 0xffff8000) << 1 | puVar11[-7] & 0x7fff) << 0xf) - fVar13) *
               param_7 + fVar13;
          *(float *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar14) * param_7 +
               fVar14;
          *(float *)(param_3 + 0x18 + uVar18 * 0x30) =
               ((float)(((uVar6 & 0xffff8000) << 1 | uVar6 & 0x7fff) << 0xf) - fVar15) * param_7 +
               fVar15;
          *(float *)(param_3 + 0x1c + uVar18 * 0x30) =
               ((float)(((uVar7 & 0xffff8000) << 1 | uVar7 & 0x7fff) << 0xf) - fVar16) * param_7 +
               fVar16;
        }
        uVar18 = (uint)*pbVar19;
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (*pbVar19 & 0x1f)) != 0) {
          fVar13 = (float)(((puVar17[-0xb] & 0xffff8000) << 1 | puVar17[-0xb] & 0x7fff) << 0xf);
          fVar14 = (float)(((puVar17[-10] & 0xffff8000) << 1 | puVar17[-10] & 0x7fff) << 0xf);
          uVar10 = (uint)*(ushort *)((iVar1 - iVar2) + (int)puVar11);
          fVar15 = (float)(((puVar17[-9] & 0xffff8000) << 1 | puVar17[-9] & 0x7fff) << 0xf);
          fVar16 = (float)(((uVar10 & 0xffff8000) << 1 | uVar10 & 0x7fff) << 0xf);
          uVar5 = puVar11[-2];
          uVar6 = puVar11[-1];
          uVar7 = *puVar11;
          *(float *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((float)(((puVar11[-3] & 0xffff8000) << 1 | puVar11[-3] & 0x7fff) << 0xf) - fVar13) *
               param_7 + fVar13;
          *(float *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar14) * param_7 +
               fVar14;
          *(float *)(param_3 + 0x18 + uVar18 * 0x30) =
               ((float)(((uVar6 & 0xffff8000) << 1 | uVar6 & 0x7fff) << 0xf) - fVar15) * param_7 +
               fVar15;
          *(float *)(param_3 + 0x1c + uVar18 * 0x30) =
               ((float)(((uVar7 & 0xffff8000) << 1 | uVar7 & 0x7fff) << 0xf) - fVar16) * param_7 +
               fVar16;
        }
        uVar18 = (uint)pbVar19[1];
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (pbVar19[1] & 0x1f)) != 0) {
          fVar13 = (float)(((puVar17[-7] & 0xffff8000) << 1 | puVar17[-7] & 0x7fff) << 0xf);
          fVar14 = (float)(((puVar17[-6] & 0xffff8000) << 1 | puVar17[-6] & 0x7fff) << 0xf);
          fVar15 = (float)(((puVar17[-5] & 0xffff8000) << 1 | puVar17[-5] & 0x7fff) << 0xf);
          fVar16 = (float)(((puVar17[-4] & 0xffff8000) << 1 | puVar17[-4] & 0x7fff) << 0xf);
          uVar5 = puVar11[2];
          uVar6 = puVar11[3];
          uVar7 = puVar11[4];
          *(float *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((float)(((puVar11[1] & 0xffff8000) << 1 | puVar11[1] & 0x7fff) << 0xf) - fVar13) *
               param_7 + fVar13;
          *(float *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar14) * param_7 +
               fVar14;
          *(float *)(param_3 + 0x18 + uVar18 * 0x30) =
               ((float)(((uVar6 & 0xffff8000) << 1 | uVar6 & 0x7fff) << 0xf) - fVar15) * param_7 +
               fVar15;
          *(float *)(param_3 + 0x1c + uVar18 * 0x30) =
               ((float)(((uVar7 & 0xffff8000) << 1 | uVar7 & 0x7fff) << 0xf) - fVar16) * param_7 +
               fVar16;
        }
        uVar18 = (uint)pbVar19[2];
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (pbVar19[2] & 0x1f)) != 0) {
          fVar13 = (float)(((puVar17[-3] & 0xffff8000) << 1 | puVar17[-3] & 0x7fff) << 0xf);
          fVar14 = (float)(((puVar17[-2] & 0xffff8000) << 1 | puVar17[-2] & 0x7fff) << 0xf);
          fVar15 = (float)(((puVar17[-1] & 0xffff8000) << 1 | puVar17[-1] & 0x7fff) << 0xf);
          fVar16 = (float)(((*puVar17 & 0xffff8000) << 1 | *puVar17 & 0x7fff) << 0xf);
          uVar5 = puVar11[6];
          uVar6 = puVar11[7];
          uVar7 = puVar11[8];
          *(float *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((float)(((puVar11[5] & 0xffff8000) << 1 | puVar11[5] & 0x7fff) << 0xf) - fVar13) *
               param_7 + fVar13;
          *(float *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar14) * param_7 +
               fVar14;
          *(float *)(param_3 + 0x18 + uVar18 * 0x30) =
               ((float)(((uVar6 & 0xffff8000) << 1 | uVar6 & 0x7fff) << 0xf) - fVar15) * param_7 +
               fVar15;
          *(float *)(param_3 + 0x1c + uVar18 * 0x30) =
               ((float)(((uVar7 & 0xffff8000) << 1 | uVar7 & 0x7fff) << 0xf) - fVar16) * param_7 +
               fVar16;
        }
        pbVar19 = pbVar19 + 4;
        _param_5 = _param_5 + 4;
        puVar11 = puVar11 + 0x10;
        puVar17 = puVar17 + 0x10;
      } while ((int)(pbVar19 + (2 - iVar9)) < (int)uVar12);
    }
    if (_param_5 < (int)uVar12) {
      puVar11 = (ushort *)(iVar1 + 2 + _param_5 * 8);
      puVar17 = (ushort *)(iVar2 + 6 + _param_5 * 8);
      do {
        uVar18 = (uint)*(byte *)(_param_5 + iVar9);
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (*(byte *)(_param_5 + iVar9) & 0x1f)
            ) != 0) {
          fVar13 = (float)(((puVar11[-1] & 0xffff8000) << 1 | puVar11[-1] & 0x7fff) << 0xf);
          fVar14 = (float)(((*puVar11 & 0xffff8000) << 1 | *puVar11 & 0x7fff) << 0xf);
          uVar10 = (uint)*(ushort *)((iVar1 - iVar2) + (int)puVar17);
          fVar15 = (float)(((puVar11[1] & 0xffff8000) << 1 | puVar11[1] & 0x7fff) << 0xf);
          fVar16 = (float)(((uVar10 & 0xffff8000) << 1 | uVar10 & 0x7fff) << 0xf);
          uVar5 = puVar17[-2];
          uVar6 = puVar17[-1];
          uVar7 = *puVar17;
          *(float *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((float)(((puVar17[-3] & 0xffff8000) << 1 | puVar17[-3] & 0x7fff) << 0xf) - fVar13) *
               param_7 + fVar13;
          *(float *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((float)(((uVar5 & 0xffff8000) << 1 | uVar5 & 0x7fff) << 0xf) - fVar14) * param_7 +
               fVar14;
          *(float *)(param_3 + 0x18 + uVar18 * 0x30) =
               ((float)(((uVar6 & 0xffff8000) << 1 | uVar6 & 0x7fff) << 0xf) - fVar15) * param_7 +
               fVar15;
          *(float *)(param_3 + 0x1c + uVar18 * 0x30) =
               ((float)(((uVar7 & 0xffff8000) << 1 | uVar7 & 0x7fff) << 0xf) - fVar16) * param_7 +
               fVar16;
        }
        _param_5 = _param_5 + 1;
        puVar11 = puVar11 + 4;
        puVar17 = puVar17 + 4;
      } while (_param_5 < (int)uVar12);
    }
  }
  uVar12 = (uint)*(byte *)(iVar8 + 0x17);
  if (uVar12 != 0) {
    bVar3 = *(byte *)(iVar8 + 0x16);
    iVar1 = *(int *)(iVar8 + 0xc);
    puVar11 = (ushort *)(iVar8 + 0x18 + (uint)*(ushort *)(iVar8 + 0x14) * (uint)bVar3 * 8);
    _param_5 = 0;
    if (uVar12 != 0) {
      do {
        bVar4 = *(byte *)(iVar1 + (uint)bVar3 + _param_5);
        uVar18 = (uint)bVar4;
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << (bVar4 & 0x1f)) != 0) {
          *(uint *)(param_3 + 0x10 + uVar18 * 0x30) =
               ((*puVar11 & 0xffff8000) << 1 | *puVar11 & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + uVar18 * 0x30) =
               ((puVar11[1] & 0xffff8000) << 1 | puVar11[1] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 1) * 4) =
               ((puVar11[2] & 0xffff8000) << 1 | puVar11[2] & 0x7fff) << 0xf;
          *(uint *)(param_3 + 0x14 + (uVar18 * 0xc + 2) * 4) =
               ((puVar11[3] & 0xffff8000) << 1 | puVar11[3] & 0x7fff) << 0xf;
          puVar11 = puVar11 + 4;
        }
        _param_5 = _param_5 + 1;
      } while (_param_5 < (int)uVar12);
    }
  }
  return 1;
}
