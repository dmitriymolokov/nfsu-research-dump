/* spd-match: far pct=2.24 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141934Z_w0_tp1 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00629350(...);
int __cdecl FUN_00631180(...);
int __cdecl FUN_00631210(...);
int __cdecl FUN_00631280(...);
int __cdecl FUN_00631410(...);
int __cdecl FUN_00631580(...);
extern int DAT_006cc7a4;
extern int DAT_006e58d8;
extern int _DAT_006a8374;
extern int _DAT_006a8378;
extern int _DAT_006cc7bc;
extern void LAB_006323d6(...);
extern void LAB_0063269a(...);

struct ThisCallBox {
  undefined4 FUN_00631e10(float param_2, int param_3, int param_4);
};
undefined4 ThisCallBox::FUN_00631e10(float param_2, int param_3, int param_4) {
  undefined4 *puVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ushort *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_44;
  int local_3c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00631580();
  iVar6 = *(int *)(((int)this) + 0xc);
  iVar23 = iVar6;
  if (*(char *)(iVar6 + 6) == '\0') goto LAB_0063269a;
  uVar9 = FUN_00629350(param_2);
  puVar7 = *(ushort **)(iVar6 + 8);
  if (puVar7 == (ushort *)0x0) {
    if ((int)uVar9 < 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = uVar9;
      if ((int)(uint)*(ushort *)(iVar6 + 4) <= (int)uVar9) {
        uVar19 = *(ushort *)(iVar6 + 4) - 1;
      }
    }
  }
  else if ((int)uVar9 < (int)(uint)*puVar7) {
    uVar19 = 0;
  }
  else {
    if (*(int *)(((int)this) + 0x1c) < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(((int)this) + 0x1c) + -1;
    }
    puVar16 = puVar7 + iVar12;
    if ((int)uVar9 < (int)(uint)puVar7[iVar12]) {
      for (; (0 < iVar12 && ((int)uVar9 < (int)(uint)*puVar16)); puVar16 = puVar16 + -1) {
        iVar12 = iVar12 + -1;
      }
    }
    else {
      while ((iVar12 < (int)(*(ushort *)(iVar6 + 4) - 2) &&
             (puVar16 = puVar16 + 1, (int)(uint)*puVar16 <= (int)uVar9))) {
        iVar12 = iVar12 + 1;
      }
    }
    uVar19 = iVar12 + 1;
  }
  bVar3 = *(byte *)(iVar6 + 0x10);
  uVar17 = 0x7fffffff >> (0x1f - bVar3 & 0x1f);
  uVar10 = uVar17 & uVar19;
  iVar21 = (int)uVar19 >> (bVar3 & 0x1f);
  uVar11 = *(uint *)(((int)this) + 0x1c);
  iVar13 = *(int *)(((int)this) + 0x18) * iVar21 + *(int *)(((int)this) + 0x14);
  iVar12 = *(int *)(iVar6 + 0xc);
  if (((int)uVar19 < (int)uVar11) && (DAT_006e58d8 == '\0')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if ((((uVar11 == 0xffffffff) || (iVar21 != (int)uVar11 >> (bVar3 & 0x1f))) || (uVar10 == 0)) ||
     (bVar8)) {
    iVar18 = 0;
    if (*(char *)(iVar6 + 6) != '\0') {
      iVar22 = 0;
      do {
        if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar18 + iVar12) >> 5) * 4) &
            1 << (*(byte *)(iVar18 + iVar12) & 0x1f)) != 0) {
          FUN_00631280(*(int *)(((int)this) + 0x24) + iVar22);
        }
        iVar18 = iVar18 + 1;
        iVar22 = iVar22 + 0x10;
      } while (iVar18 < (int)(uint)*(byte *)(iVar6 + 6));
    }
    uVar11 = 0;
  }
  else {
    uVar11 = uVar11 & uVar17;
  }
  if ((int)uVar11 < (int)uVar10) {
    uVar17 = (uint)*(byte *)(iVar6 + 6);
    pbVar20 = (byte *)(iVar13 + (uVar11 + 2) * uVar17 * 3);
    local_3c = uVar10 - uVar11;
    do {
      iVar18 = 0;
      if (uVar17 != 0) {
        iVar22 = 0;
        do {
          if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar18 + iVar12) >> 5) * 4) &
              1 << (*(byte *)(iVar18 + iVar12) & 0x1f)) != 0) {
            FUN_00631180(&local_18);
            pfVar14 = (float *)(iVar22 + *(int *)(((int)this) + 0x24));
            fVar2 = (float)pbVar20[1] * local_8 * ((int)_DAT_006a8378);
            local_20 = (float)pbVar20[2] * local_4 * ((int)_DAT_006a8378) + local_10;
            *pfVar14 = (float)(*pbVar20 >> 1) * local_c * ((int)_DAT_006a8374) + local_18 + *pfVar14;
            pfVar14 = (float *)(iVar22 + 4 + *(int *)(((int)this) + 0x24));
            *pfVar14 = fVar2 + local_14 + *pfVar14;
            pfVar14 = (float *)(iVar22 + 8 + *(int *)(((int)this) + 0x24));
            *pfVar14 = local_20 + *pfVar14;
          }
          uVar17 = (uint)*(byte *)(iVar6 + 6);
          pbVar20 = pbVar20 + 3;
          iVar18 = iVar18 + 1;
          iVar22 = iVar22 + 0x10;
        } while (iVar18 < (int)uVar17);
      }
      local_3c = local_3c + -1;
    } while (local_3c != 0);
    pbVar20 = (byte *)(iVar13 + (uVar10 + 1) * (uint)*(byte *)(iVar6 + 6) * 3);
    iVar13 = 0;
    if (*(byte *)(iVar6 + 6) != 0) {
      iVar18 = 0;
      do {
        if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar13 + iVar12) >> 5) * 4) &
            1 << (*(byte *)(iVar13 + iVar12) & 0x1f)) != 0) {
          fVar2 = *(float *)(*(int *)(((int)this) + 0x24) + 8 + iVar18);
          pfVar14 = (float *)(*(int *)(((int)this) + 0x24) + iVar18);
          bVar4 = *pbVar20;
          fVar2 = fVar2 * fVar2 + pfVar14[1] * pfVar14[1] + *pfVar14 * *pfVar14;
          if (fVar2 <= _DAT_006cc7bc) {
            fVar2 = ((int)_DAT_006cc7bc) - fVar2;
            pfVar14[3] = SQRT(fVar2);
            if ((bVar4 & 1) != 0) {
              pfVar14[3] = -SQRT(fVar2);
            }
          }
          else {
            pfVar14[3] = 0.0;
            fVar2 = ((int)_DAT_006cc7bc) / SQRT(fVar2);
            *pfVar14 = fVar2 * *pfVar14;
            pfVar14[1] = fVar2 * pfVar14[1];
            pfVar14[2] = fVar2 * pfVar14[2];
          }
        }
        pbVar20 = pbVar20 + 3;
        iVar13 = iVar13 + 1;
        iVar18 = iVar18 + 0x10;
      } while (iVar13 < (int)(uint)*(byte *)(iVar6 + 6));
    }
  }
  else if ((int)uVar10 < (int)uVar11) {
    pbVar20 = (byte *)((uVar11 + 2) * (uint)*(byte *)(iVar6 + 6) * 3 + -3 + iVar13);
    if ((int)uVar10 <= (int)(uVar11 - 1)) {
      local_3c = ((uVar11 - 1) - uVar10) + 1;
      do {
        iVar18 = *(byte *)(iVar6 + 6) - 1;
        if (-1 < iVar18) {
          iVar22 = iVar18 * 0x10;
          do {
            if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar12 + iVar18) >> 5) * 4) &
                1 << (*(byte *)(iVar12 + iVar18) & 0x1f)) != 0) {
              FUN_00631180(&local_18);
              pfVar14 = (float *)(iVar22 + *(int *)(((int)this) + 0x24));
              fVar2 = (float)pbVar20[1] * local_8 * ((int)_DAT_006a8378);
              local_20 = (float)pbVar20[2] * local_4 * ((int)_DAT_006a8378) + local_10;
              *pfVar14 = *pfVar14 - ((float)(*pbVar20 >> 1) * local_c * ((int)_DAT_006a8374) + local_18);
              *(float *)(iVar22 + 4 + *(int *)(((int)this) + 0x24)) =
                   *(float *)(iVar22 + 4 + *(int *)(((int)this) + 0x24)) - (fVar2 + local_14);
              pfVar14 = (float *)(iVar22 + 8 + *(int *)(((int)this) + 0x24));
              *pfVar14 = *pfVar14 - local_20;
            }
            pbVar20 = pbVar20 + -3;
            iVar18 = iVar18 + -1;
            iVar22 = iVar22 + -0x10;
          } while (-1 < iVar18);
        }
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    pbVar20 = (byte *)(iVar13 + (uVar10 + 1) * (uint)*(byte *)(iVar6 + 6) * 3);
    iVar13 = 0;
    if (*(byte *)(iVar6 + 6) != 0) {
      iVar18 = 0;
      do {
        if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar13 + iVar12) >> 5) * 4) &
            1 << (*(byte *)(iVar13 + iVar12) & 0x1f)) != 0) {
          FUN_00631210(*pbVar20 & 1,*(int *)(((int)this) + 0x24) + iVar18);
        }
        pbVar20 = pbVar20 + 3;
        iVar13 = iVar13 + 1;
        iVar18 = iVar18 + 0x10;
      } while (iVar13 < (int)(uint)*(byte *)(iVar6 + 6));
    }
  }
  *(uint *)(((int)this) + 0x1c) = uVar19;
  puVar7 = *(ushort **)(iVar6 + 8);
  iVar13 = 0;
  if (puVar7 == (ushort *)0x0) {
    if (param_2 != (float)(int)uVar9) {
      param_2 = param_2 - (float)(int)uVar9;
      goto LAB_006323d6;
    }
  }
  else if (uVar19 == 0) {
    if (param_2 != DAT_006cc7a4) {
      param_2 = param_2 / (float)*puVar7;
LAB_006323d6:
      if ((int)uVar19 < (int)(*(ushort *)(iVar6 + 4) - 1)) {
        iVar23 = (int)(uVar19 + 1) >> (bVar3 & 0x1f);
        if (iVar23 == iVar21) {
          pbVar20 = (byte *)(*(int *)(((int)this) + 0x18) * iVar23 + *(int *)(((int)this) + 0x14) +
                            (uVar10 + 2) * (uint)*(byte *)(iVar6 + 6) * 3);
          local_3c = 0;
          iVar23 = 0;
          if (*(byte *)(iVar6 + 6) != 0) {
            local_44 = 0;
            do {
              if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(local_3c + iVar12) >> 5) * 4) &
                  1 << (*(byte *)(local_3c + iVar12) & 0x1f)) != 0) {
                FUN_00631180(&local_18);
                pfVar14 = (float *)(*(int *)(((int)this) + 0x24) + local_44);
                local_28 = (float)(*pbVar20 >> 1) * local_c * ((int)_DAT_006a8374) + local_18 + *pfVar14;
                local_24 = (float)pbVar20[1] * local_8 * ((int)_DAT_006a8378) + local_14 + pfVar14[1];
                local_20 = (float)pbVar20[2] * local_4 * ((int)_DAT_006a8378) + local_10 + pfVar14[2];
                fVar2 = local_28 * local_28 + local_24 * local_24 + local_20 * local_20;
                if (fVar2 <= _DAT_006cc7bc) {
                  local_1c = SQRT(((int)_DAT_006cc7bc) - fVar2);
                  if ((*pbVar20 & 1) != 0) {
                    local_1c = -local_1c;
                  }
                }
                else {
                  local_1c = 0.0;
                  fVar2 = ((int)_DAT_006cc7bc) / SQRT(fVar2);
                  local_28 = local_28 * fVar2;
                  local_24 = local_24 * fVar2;
                  local_20 = fVar2 * local_20;
                }
                FUN_00631410(param_2);
              }
              local_44 = local_44 + 0x10;
              pbVar20 = pbVar20 + 3;
              local_3c = local_3c + 1;
              iVar23 = local_3c;
            } while (local_3c < (int)(uint)*(byte *)(iVar6 + 6));
          }
        }
        else {
          iVar13 = 0;
          iVar23 = CONCAT31((int3)((uint)iVar21 >> 8),*(char *)(iVar6 + 6));
          if (*(char *)(iVar6 + 6) != '\0') {
            do {
              if ((*(uint *)(param_3 + ((int)(uint)*(byte *)(iVar13 + iVar12) >> 5) * 4) &
                  1 << (*(byte *)(iVar13 + iVar12) & 0x1f)) != 0) {
                FUN_00631280(&local_28);
                FUN_00631410(param_2);
              }
              iVar13 = iVar13 + 1;
              iVar23 = iVar6;
            } while (iVar13 < (int)(uint)*(byte *)(iVar6 + 6));
          }
        }
        goto LAB_0063269a;
      }
    }
  }
  else {
    fVar2 = (float)puVar7[uVar19 - 1];
    if (param_2 != fVar2) {
      param_2 = (param_2 - fVar2) / ((float)puVar7[uVar19] - fVar2);
      goto LAB_006323d6;
    }
  }
  if (*(char *)(iVar6 + 6) != '\0') {
    iVar21 = 0;
    do {
      bVar3 = *(byte *)(iVar13 + iVar12);
      if ((*(uint *)(param_3 + ((int)(uint)bVar3 >> 5) * 4) & 1 << (bVar3 & 0x1f)) != 0) {
        puVar15 = (undefined4 *)(*(int *)(((int)this) + 0x24) + iVar21);
        puVar1 = (undefined4 *)((uint)bVar3 * 0x30 + 0x10 + param_4);
        *puVar1 = *puVar15;
        puVar1[1] = puVar15[1];
        puVar1[2] = puVar15[2];
        puVar1[3] = puVar15[3];
      }
      iVar13 = iVar13 + 1;
      iVar21 = iVar21 + 0x10;
    } while (iVar13 < (int)(uint)*(byte *)(iVar6 + 6));
  }
LAB_0063269a:
  cVar5 = *(char *)(iVar6 + 7);
  iVar23 = CONCAT31((int3)((uint)iVar23 >> 8),cVar5);
  if (cVar5 != '\0') {
    iVar12 = *(int *)(iVar6 + 0xc);
    iVar13 = 0;
    if (cVar5 != '\0') {
      do {
        bVar3 = *(byte *)(iVar13 + iVar12);
        if ((*(uint *)(param_3 + ((int)(uint)bVar3 >> 5) * 4) & 1 << (bVar3 & 0x1f)) != 0) {
          FUN_00631280((uint)*(byte *)(*(int *)(((int)this) + 0x28) + iVar13) * 0x30 + 0x10 + param_4);
        }
        iVar13 = iVar13 + 1;
        iVar23 = iVar6;
      } while (iVar13 < (int)(uint)*(byte *)(iVar6 + 7));
    }
  }
  *(undefined4 *)(((int)this) + 0x1c) = 0xffffffff;
  return CONCAT31((int3)((uint)iVar23 >> 8),1);
}
