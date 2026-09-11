/* spd-match: far pct=2.44 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

extern int DAT_006cc7a4;
extern int DAT_006e58d8;
extern int _DAT_006a7eb0;
extern void LAB_0062c7b7(...);
extern void LAB_0062ca41(...);

struct ThisCallBox {
  undefined4 FUN_0062c300(float param_2, uint param_3, int param_4);
};
undefined4 ThisCallBox::FUN_0062c300(float param_2, uint param_3, int param_4) {
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  undefined2 uVar8;
  uint3 uVar7;
  uint uVar6;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  byte *pbVar13;
  ushort *puVar14;
  ushort *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  ushort uVar23;
  float local_80;
  ushort *local_7c;
  byte *local_78;
  int local_74;
  int local_68;
  int local_64;
  uint local_60;
  byte local_50 [80];
  
  if (param_4 != *(int *)(((int)this) + 0x28)) {
    *(undefined4 *)(((int)this) + 0x10) = 0xffffffff;
    *(undefined4 *)(((int)this) + 0x1c) = 0xffffffff;
    *(int *)(((int)this) + 0x28) = param_4;
  }
  iVar2 = *(int *)(((int)this) + 0xc);
  if (param_2 < DAT_006cc7a4) {
    fVar4 = param_2 + _DAT_006a7eb0;
  }
  else {
    fVar4 = param_2 - _DAT_006a7eb0;
  }
  local_60 = (uint)ROUND(fVar4);
  puVar15 = *(ushort **)(iVar2 + 8);
  if (puVar15 == (ushort *)0x0) {
    if ((int)local_60 < 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = local_60;
      if ((int)(uint)*(ushort *)(iVar2 + 0xc) <= (int)local_60) {
        uVar18 = *(ushort *)(iVar2 + 0xc) - 1;
      }
    }
  }
  else if ((int)local_60 < (int)(uint)*puVar15) {
    uVar18 = 0;
  }
  else {
    if (*(int *)(((int)this) + 0x10) < 1) {
      iVar20 = 0;
    }
    else {
      iVar20 = *(int *)(((int)this) + 0x10) + -1;
    }
    puVar14 = puVar15 + iVar20;
    if ((int)local_60 < (int)(uint)puVar15[iVar20]) {
      for (; (0 < iVar20 && ((int)local_60 < (int)(uint)*puVar14)); puVar14 = puVar14 + -1) {
        iVar20 = iVar20 + -1;
      }
    }
    else {
      while ((iVar20 < (int)(*(ushort *)(iVar2 + 0xc) - 2) &&
             (puVar14 = puVar14 + 1, (int)(uint)*puVar14 <= (int)local_60))) {
        iVar20 = iVar20 + 1;
      }
    }
    uVar18 = iVar20 + 1;
  }
  bVar1 = *(byte *)(iVar2 + 0x10);
  uVar6 = *(uint *)(((int)this) + 0x10);
  uVar19 = 0x7fffffff >> (0x1f - bVar1 & 0x1f);
  uVar12 = (int)uVar18 >> (bVar1 & 0x1f);
  uVar9 = uVar19 & uVar18;
  uVar17 = (uint)*(ushort *)(iVar2 + 0xe);
  iVar20 = iVar2 + (((1 << (bVar1 & 0x1f)) + 1) * uVar17 + 1 & 0xfffffffe) * uVar12 + 0x14 +
           uVar17 * 0xc;
  iVar10 = 0;
  if (uVar17 != 0) {
    do {
      local_50[iVar10] = (byte)(*(ushort *)(*(int *)(iVar2 + 4) + iVar10 * 2) / 0xc);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar17);
  }
  if (((int)uVar6 <= (int)uVar18) || (bVar5 = true, DAT_006e58d8 != '\0')) {
    bVar5 = false;
  }
  if (uVar18 == *(uint *)(((int)this) + 0x1c)) {
    uVar3 = *(undefined4 *)(((int)this) + 0x18);
    *(undefined4 *)(((int)this) + 0x18) = *(undefined4 *)(((int)this) + 0x24);
    *(undefined4 *)(((int)this) + 0x24) = uVar3;
    *(undefined4 *)(((int)this) + 0x10) = *(undefined4 *)(((int)this) + 0x1c);
    *(undefined4 *)(((int)this) + 0x1c) = 0xffffffff;
  }
  else {
    if (((uVar6 == 0xffffffff) || (uVar12 != (int)uVar6 >> (bVar1 & 0x1f))) || (bVar5)) {
      iVar10 = 0;
      if (uVar17 != 0) {
        iVar21 = 0;
        do {
          if ((*(uint *)(param_4 + ((int)(uint)local_50[iVar10] >> 5) * 4) &
              1 << (local_50[iVar10] & 0x1f)) != 0) {
            pfVar11 = (float *)(*(int *)(((int)this) + 0x2c) + iVar21);
            *(float *)(*(int *)(((int)this) + 0x18) + iVar10 * 4) =
                 (float)*(ushort *)(iVar20 + iVar10 * 2) * pfVar11[1] + *pfVar11;
          }
          iVar10 = iVar10 + 1;
          iVar21 = iVar21 + 0x10;
        } while (iVar10 < (int)(uint)*(ushort *)(iVar2 + 0xe));
      }
      uVar6 = 0;
    }
    else {
      uVar6 = uVar6 & uVar19;
    }
    if ((int)uVar6 < (int)uVar9) {
      uVar19 = (uint)*(ushort *)(iVar2 + 0xe);
      pbVar22 = (byte *)((uVar6 + 2) * uVar19 + iVar20);
      local_78 = local_50 + -(int)pbVar22;
      local_74 = uVar9 - uVar6;
      do {
        iVar20 = 0;
        if (uVar19 != 0) {
          iVar10 = 0;
          pbVar13 = pbVar22;
          do {
            if ((*(uint *)(param_4 + ((int)(uint)pbVar13[(int)local_78] >> 5) * 4) &
                1 << (pbVar13[(int)local_78] & 0x1f)) != 0) {
              iVar21 = *(int *)(((int)this) + 0x2c) + iVar10;
              pfVar11 = (float *)(*(int *)(((int)this) + 0x18) + iVar20 * 4);
              *pfVar11 = (float)*pbVar13 * *(float *)(iVar21 + 0xc) + *(float *)(iVar21 + 8) +
                         *pfVar11;
            }
            uVar19 = (uint)*(ushort *)(iVar2 + 0xe);
            iVar20 = iVar20 + 1;
            iVar10 = iVar10 + 0x10;
            pbVar13 = pbVar13 + 1;
          } while (iVar20 < (int)uVar19);
        }
        pbVar22 = pbVar22 + uVar17;
        local_78 = local_78 + -uVar17;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    else if ((int)uVar9 < (int)uVar6) {
      uVar19 = (uint)*(ushort *)(iVar2 + 0xe);
      pbVar22 = (byte *)((uVar6 + 1) * uVar19 + iVar20);
      if ((int)uVar9 <= (int)(uVar6 - 1)) {
        local_78 = local_50 + -(int)pbVar22;
        local_74 = ((uVar6 - 1) - uVar9) + 1;
        do {
          iVar20 = 0;
          if (uVar19 != 0) {
            iVar10 = 0;
            pbVar13 = pbVar22;
            do {
              if ((*(uint *)(param_4 + ((int)(uint)pbVar13[(int)local_78] >> 5) * 4) &
                  1 << (pbVar13[(int)local_78] & 0x1f)) != 0) {
                iVar21 = *(int *)(((int)this) + 0x2c) + iVar10;
                pfVar11 = (float *)(*(int *)(((int)this) + 0x18) + iVar20 * 4);
                *pfVar11 = *pfVar11 -
                           ((float)*pbVar13 * *(float *)(iVar21 + 0xc) + *(float *)(iVar21 + 8));
              }
              uVar19 = (uint)*(ushort *)(iVar2 + 0xe);
              iVar20 = iVar20 + 1;
              iVar10 = iVar10 + 0x10;
              pbVar13 = pbVar13 + 1;
            } while (iVar20 < (int)uVar19);
          }
          pbVar22 = pbVar22 + -uVar17;
          local_78 = local_78 + uVar17;
          local_74 = local_74 + -1;
        } while (local_74 != 0);
      }
    }
  }
  *(uint *)(((int)this) + 0x10) = uVar18;
  puVar15 = *(ushort **)(iVar2 + 8);
  iVar20 = uVar18 + 1;
  local_80 = 1.0;
  uVar8 = (undefined2)((uint)((int)this) >> 0x10);
  if (puVar15 == (ushort *)0x0) {
    fVar4 = (float)(int)local_60;
    uVar6 = CONCAT22(uVar8,(ushort)(param_2 < fVar4) << 8 |
                           (ushort)(NAN(param_2) || NAN(fVar4)) << 10 |
                           (ushort)(param_2 == fVar4) << 0xe);
    if (param_2 != fVar4) {
      uVar7 = (uint3)(uVar6 >> 8);
      local_80 = param_2 - fVar4;
LAB_0062c7b7:
      uVar6 = CONCAT31(uVar7,1);
    }
  }
  else if (uVar18 == 0) {
    uVar7 = (uint3)(CONCAT22(uVar8,(ushort)(param_2 < DAT_006cc7a4) << 8 |
                                   (ushort)(NAN(param_2) || NAN(DAT_006cc7a4)) << 10 |
                                   (ushort)(param_2 == DAT_006cc7a4) << 0xe) >> 8);
    if (param_2 == DAT_006cc7a4) {
      uVar6 = (uint)uVar7 << 8;
    }
    else {
      uVar6 = CONCAT31(uVar7,1);
      local_80 = param_2 / (float)*puVar15;
    }
  }
  else {
    fVar4 = (float)puVar15[uVar18 - 1];
    uVar23 = (ushort)(param_2 < fVar4) << 8 | (ushort)(NAN(param_2) || NAN(fVar4)) << 10 |
             (ushort)(param_2 == fVar4) << 0xe;
    uVar6 = (uint)uVar23;
    if (param_2 != fVar4) {
      uVar7 = (uint3)(byte)(uVar23 >> 8);
      local_80 = (param_2 - fVar4) / ((float)puVar15[uVar18] - fVar4);
      goto LAB_0062c7b7;
    }
  }
  local_7c = *(ushort **)(iVar2 + 4);
  if (((char)uVar6 == '\0') || (uVar6 = *(ushort *)(iVar2 + 0xc) - 1, (int)uVar6 <= (int)uVar18)) {
    iVar20 = 0;
    if (*(short *)(iVar2 + 0xe) != 0) {
      do {
        if ((*(uint *)(param_4 + ((int)(uint)local_50[iVar20] >> 5) * 4) &
            1 << (local_50[iVar20] & 0x1f)) != 0) {
          *(undefined4 *)(param_3 + (uint)local_7c[iVar20] * 4) =
               *(undefined4 *)(*(int *)(((int)this) + 0x18) + iVar20 * 4);
        }
        uVar6 = (uint)*(ushort *)(iVar2 + 0xe);
        iVar20 = iVar20 + 1;
      } while (iVar20 < (int)uVar6);
    }
  }
  else {
    uVar18 = (uint)*(ushort *)(iVar2 + 0xe);
    uVar6 = iVar20 >> (bVar1 & 0x1f);
    iVar10 = iVar2 + (((1 << (*(byte *)(iVar2 + 0x10) & 0x1f)) + 1) * uVar18 + 1 & 0xfffffffe) *
                     uVar6 + 0x14 + uVar18 * 0xc;
    if (iVar20 == *(int *)(((int)this) + 0x1c)) {
      iVar20 = 0;
      if (uVar18 != 0) {
        do {
          uVar6 = (int)(uint)local_50[iVar20] >> 5;
          if ((*(uint *)(param_4 + uVar6 * 4) & 1 << (local_50[iVar20] & 0x1f)) != 0) {
            *(float *)(param_3 + (uint)*local_7c * 4) =
                 (*(float *)(*(int *)(((int)this) + 0x24) + iVar20 * 4) -
                 *(float *)(*(int *)(((int)this) + 0x18) + iVar20 * 4)) * local_80 +
                 *(float *)(*(int *)(((int)this) + 0x18) + iVar20 * 4);
            uVar6 = param_3;
          }
          local_7c = local_7c + 1;
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)(uint)*(ushort *)(iVar2 + 0xe));
      }
    }
    else {
      if (uVar6 == uVar12) {
        pbVar22 = (byte *)((uVar9 + 2) * uVar18 + iVar10);
        uVar6 = 0;
        if (uVar18 != 0) {
          iVar10 = -(int)pbVar22;
          local_64 = 0;
          do {
            if ((*(uint *)(param_4 + ((int)(uint)pbVar22[(int)(local_50 + iVar10)] >> 5) * 4) &
                1 << (pbVar22[(int)(local_50 + iVar10)] & 0x1f)) != 0) {
              iVar21 = *(int *)(((int)this) + 0x2c) + local_64;
              *(float *)(*(int *)(((int)this) + 0x24) + uVar6 * 4) =
                   (float)*pbVar22 * *(float *)(iVar21 + 0xc) + *(float *)(iVar21 + 8) +
                   *(float *)(*(int *)(((int)this) + 0x18) + uVar6 * 4);
              pfVar11 = (float *)(*(int *)(((int)this) + 0x18) + uVar6 * 4);
              *(float *)(param_3 + (uint)*local_7c * 4) =
                   (*(float *)(*(int *)(((int)this) + 0x24) + uVar6 * 4) - *pfVar11) * local_80 +
                   *pfVar11;
            }
            local_64 = local_64 + 0x10;
            local_7c = local_7c + 1;
            uVar6 = uVar6 + 1;
            pbVar22 = pbVar22 + 1;
          } while ((int)uVar6 < (int)(uint)*(ushort *)(iVar2 + 0xe));
        }
      }
      else {
        uVar6 = 0;
        if (uVar18 != 0) {
          iVar21 = 0;
          do {
            if ((*(uint *)(param_4 + ((int)(uint)local_50[uVar6] >> 5) * 4) &
                1 << (local_50[uVar6] & 0x1f)) != 0) {
              pfVar11 = (float *)(*(int *)(((int)this) + 0x2c) + iVar21);
              *(float *)(*(int *)(((int)this) + 0x24) + uVar6 * 4) =
                   (float)*(ushort *)(iVar10 + uVar6 * 2) * pfVar11[1] + *pfVar11;
              pfVar11 = (float *)(*(int *)(((int)this) + 0x18) + uVar6 * 4);
              *(float *)(param_3 + (uint)*local_7c * 4) =
                   (*(float *)(*(int *)(((int)this) + 0x24) + uVar6 * 4) - *pfVar11) * local_80 +
                   *pfVar11;
            }
            local_7c = local_7c + 1;
            uVar6 = uVar6 + 1;
            iVar21 = iVar21 + 0x10;
          } while ((int)uVar6 < (int)(uint)*(ushort *)(iVar2 + 0xe));
          *(int *)(((int)this) + 0x1c) = iVar20;
          goto LAB_0062ca41;
        }
      }
      *(int *)(((int)this) + 0x1c) = iVar20;
    }
  }
LAB_0062ca41:
  iVar20 = CONCAT31((int3)(uVar6 >> 8),*(char *)(iVar2 + 0x11));
  if (*(char *)(iVar2 + 0x11) != '\0') {
    bVar1 = *(byte *)(iVar2 + 0x10);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xe);
    puVar15 = (ushort *)
              (iVar2 + (((1 << (bVar1 & 0x1f)) + 1) * uVar6 + 1 & 0xfffffffe) *
                       (uint)(*(ushort *)(iVar2 + 0xc) >> (bVar1 & 0x1f)) + 0x14 + uVar6 * 0xc);
    uVar18 = 0x7fffffffU >> (0x1f - bVar1 & 0x1f) & (uint)*(ushort *)(iVar2 + 0xc);
    puVar14 = puVar15;
    if (uVar18 != 0) {
      puVar14 = (ushort *)((uVar18 + 1) * uVar6 + 1 + (int)puVar15 & 0xfffffffe);
    }
    if (*(short *)(iVar2 + 0xe) == 0) {
      puVar14 = (ushort *)((int)puVar14 + 1U & 0xfffffffe);
    }
    if (uVar18 != 0) {
      puVar15 = (ushort *)((uVar18 + 1) * uVar6 + 1 + (int)puVar15 & 0xfffffffe);
    }
    if (*(short *)(iVar2 + 0xe) == 0) {
      puVar15 = (ushort *)((int)puVar15 + 1U & 0xfffffffe);
    }
    puVar16 = (undefined4 *)((int)puVar15 + (uint)*(byte *)(iVar2 + 0x11) * 2 + 3 & 0xfffffffc);
    local_68 = 0;
    iVar20 = 0;
    if (*(byte *)(iVar2 + 0x11) != 0) {
      do {
        uVar23 = *puVar14;
        uVar18 = uVar23 / 0xc;
        puVar14 = puVar14 + 1;
        if ((*(uint *)(param_4 + ((int)uVar18 >> 5) * 4) & 1 << ((byte)uVar18 & 0x1f)) != 0) {
          *(undefined4 *)(param_3 + (uint)uVar23 * 4) = *puVar16;
        }
        puVar16 = puVar16 + 1;
        iVar20 = local_68 + 1;
        local_68 = iVar20;
      } while (iVar20 < (int)(uint)*(byte *)(iVar2 + 0x11));
    }
  }
  return CONCAT31((int3)((uint)iVar20 >> 8),1);
}
