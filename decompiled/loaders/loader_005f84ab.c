/* spd-match: far pct=5.75 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_15/thiscall_tp_attempt2_005f84ab */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
static unsigned int __cdecl m375_popcount(unsigned int x) {
  unsigned int n = 0;
  while (x) {
    n += x & 1;
    x >>= 1;
  }
  return n;
}
#define POPCOUNT(x) m375_popcount((unsigned int)(x))
double __cdecl fpatan(double, double);

int __cdecl FUN_005f74cf(...);
extern int _DAT_0069f3c8;
extern int _DAT_006cc850;
extern int _DAT_006ccaf8;
extern int _DAT_006ccb10;
extern void LAB_005f8709(...);
extern void LAB_005f873f(...);
extern void LAB_005f8744(...);
extern void LAB_005f8747(...);
extern void LAB_005f877c(...);
extern void LAB_005f877e(...);
extern void LAB_005f87a9(...);
extern void LAB_005f87c7(...);
extern void LAB_005f88b7(...);
extern void LAB_005f8ac1(...);
extern void LAB_005f8acf(...);
extern void LAB_005f8b4f(...);
extern void LAB_005f8ba6(...);
extern void LAB_005f8cca(...);
extern void LAB_005f8ce4(...);
extern void LAB_005f8d91(...);
extern void LAB_005f8e7c(...);
extern void LAB_005f9195(...);
extern void LAB_005f9198(...);

struct ThisCallBox {
  undefined4 FUN_005f84ab(uint *param_2, uint param_3, int param_4, int param_5);
};
undefined4 ThisCallBox::FUN_005f84ab(uint *param_2, uint param_3, int param_4, int param_5) {
  double dVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  float10 fVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  byte bVar22;
  ushort uVar21;
  float10 fVar23;
  undefined8 local_44;
  uint local_3c [5];
  uint local_28;
  uint local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int *local_8;
  
  local_c = *param_2;
  iVar8 = *(int *)(((uint)this) + 0x14);
  uVar19 = *(uint *)(*(int *)(iVar8 + param_4 * 4) + 0x1c);
  uVar13 = *(uint *)(*(int *)(iVar8 + param_5 * 4) + 0x1c);
  piVar10 = *(int **)(iVar8 + param_3 * 4);
  local_1c = *(int **)(iVar8 + uVar19 * 4);
  local_18 = *(int **)(iVar8 + uVar13 * 4);
  local_8 = piVar10;
  if ((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar10 * 4) + 4) & 1) == 0) {
    return 0;
  }
  uVar14 = local_1c[6];
  uVar18 = local_18[6];
  uVar9 = uVar14 & 0x1f;
  local_14 = uVar18 & 0x1f;
  local_10 = uVar9;
  uVar15 = piVar10[6];
  uVar12 = uVar18 & uVar14 & 0x20 | uVar15;
  local_20 = uVar15 & 0x40;
  piVar10[6] = uVar12;
  if (((uVar15 & 0xe000000) == 0) &&
     (((uVar15 = local_c & 0xff000000, uVar15 == 0x20000000 || (uVar15 == 0x21000000)) ||
      (uVar15 == 0x24000000)))) {
    uVar16 = local_18[6] | local_1c[6];
    uVar15 = 0x8000000;
    if ((((uVar16 & 0x8000000) != 0) || (uVar15 = 0x4000000, (uVar16 & 0x4000000) != 0)) ||
       (uVar15 = 0x2000000, (uVar16 & 0x2000000) != 0)) {
      piVar10[6] = uVar12 | uVar15;
    }
  }
  if ((((local_18[6] | local_1c[6]) & 0x40U) != 0) &&
     (((uVar15 = local_c & 0xff000000, uVar15 == 0x20000000 || (uVar15 == 0x21000000)) ||
      ((uVar15 == 0x24000000 || ((uVar15 == 0x25000000 || (uVar15 == 0x26000000)))))))) {
    piVar10[6] = piVar10[6] | 0x40;
  }
  local_c = local_c & 0xff000000;
  if (local_c == 0x20000000) {
    uVar15 = uVar9 | 8;
    uVar12 = uVar14 & 8;
LAB_005f873f:
    uVar12 = uVar15 & local_14 | uVar12;
LAB_005f8744:
    piVar10[6] = piVar10[6] | uVar12;
  }
  else {
    if (local_c == 0x21000000) {
      uVar15 = uVar9 | 4;
      uVar12 = uVar14 & 4;
      goto LAB_005f873f;
    }
    if ((local_c != 0x22000000) && (local_c != 0x23000000)) {
      if (local_c != 0x24000000) {
        if (local_c == 0x25000000) {
          piVar10[6] = piVar10[6] | local_14 & uVar9 & 3;
          if ((((uVar14 & 4) != 0) && ((uVar18 & 4) != 0)) ||
             (((uVar14 & 8) != 0 && ((uVar18 & 8) != 0)))) {
            piVar10[6] = piVar10[6] | 4;
          }
          if ((((uVar14 & 4) != 0) && ((uVar18 & 8) != 0)) ||
             (((uVar14 & 8) != 0 && ((uVar18 & 4) != 0)))) {
            piVar10[6] = piVar10[6] | 8;
          }
          if (local_1c == local_18) {
            piVar10[6] = piVar10[6] | 4;
          }
          else if (((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *local_1c * 4) + 4) & 2) == 0) ||
                  (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + local_1c[0xb] * 4),
                  (*puVar3 & 0xff000000) != 0x11000000)) {
            if (((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *local_18 * 4) + 4) & 2) != 0) &&
               ((puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + local_18[0xb] * 4),
                (*puVar3 & 0xff000000) == 0x11000000 && (uVar15 = 0, puVar3[3] != 0)))) {
              puVar6 = (uint *)puVar3[4];
              do {
                if (*puVar6 == uVar13) break;
                uVar15 = uVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar15 < puVar3[3]);
              if (uVar15 < puVar3[3]) {
                bVar20 = *(uint *)(puVar3[2] + uVar15 * 4) == uVar19;
                goto LAB_005f8709;
              }
            }
          }
          else {
            uVar15 = 0;
            if (puVar3[3] != 0) {
              puVar6 = (uint *)puVar3[4];
              do {
                if (*puVar6 == uVar19) break;
                uVar15 = uVar15 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar15 < puVar3[3]);
            }
            if (uVar15 < puVar3[3]) {
              bVar20 = *(uint *)(puVar3[2] + uVar15 * 4) == uVar13;
LAB_005f8709:
              if (bVar20) {
                piVar10[6] = piVar10[6] | 8;
              }
            }
          }
        }
        goto LAB_005f8747;
      }
      uVar12 = local_14 & uVar9 & 0xe;
      goto LAB_005f8744;
    }
    piVar10[6] = piVar10[6] | 0x2000017;
  }
LAB_005f8747:
  local_3c[4] = ((uint)this);
  if (local_20 == 0) {
    if (((uVar14 & 4) == 0) || ((uVar18 & 8) == 0)) {
LAB_005f87a9:
      if ((((uVar14 & 8) != 0) && ((uVar18 & 4) != 0)) &&
         ((uVar15 = uVar19, local_c == 0x20000000 || (uVar15 = uVar13, local_c == 0x21000000))))
      goto LAB_005f9198;
      goto LAB_005f87c7;
    }
    uVar15 = uVar13;
    if ((local_c == 0x20000000) || (uVar15 = uVar19, local_c == 0x21000000)) goto LAB_005f9198;
    if (local_c != 0x22000000) {
      if (local_c != 0x23000000) goto LAB_005f87a9;
      goto LAB_005f877c;
    }
    goto LAB_005f8cca;
  }
LAB_005f87c7:
  iVar8 = *(int *)(((uint)this) + 0x10);
  uVar18 = *(uint *)(*(int *)(iVar8 + *local_1c * 4) + 4);
  uVar15 = uVar18 & 0x80;
  local_28 = uVar18;
  if ((((uVar15 == 0) || (local_1c[1] != -1)) ||
      ((*(byte *)(*(int *)(iVar8 + *local_18 * 4) + 4) & 0x80) == 0)) || (local_18[1] != -1)) {
    if ((local_20 != 0) ||
       (((uVar15 == 0 || (local_1c[1] != -1)) &&
        (((*(byte *)(*(int *)(iVar8 + *local_18 * 4) + 4) & 0x80) == 0 || (local_18[1] != -1)))))) {
      if (local_1c == local_18) {
        uVar15 = uVar19;
        if ((local_c == 0x20000000) || (local_c == 0x21000000)) goto LAB_005f9198;
        if (local_c == 0x22000000) {
          bVar20 = local_20 == 0;
LAB_005f8ce4:
          if (!bVar20) {
            return 0;
          }
          goto LAB_005f8cca;
        }
        if (local_c == 0x23000000) {
          if (local_20 != 0) {
            return 0;
          }
          goto LAB_005f877c;
        }
        if ((local_c == 0x25000000) && ((uVar14 & 1) != 0)) goto LAB_005f9198;
      }
      if (local_20 != 0) {
        return 0;
      }
      if (local_c == 0x24000000) {
        if (((*(byte *)(*(int *)(iVar8 + *local_18 * 4) + 4) & 2) != 0) &&
           (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + local_18[0xb] * 4),
           (*puVar3 & 0xff000000) == 0x11000000)) {
          uVar14 = puVar3[3];
          uVar15 = 0;
          if (uVar14 != 0) {
            puVar6 = (uint *)puVar3[4];
            do {
              if (*puVar6 == uVar13) break;
              uVar15 = uVar15 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar15 < uVar14);
          }
          if ((uVar15 < uVar14) && (uVar19 == *(uint *)(puVar3[2] + uVar15 * 4))) goto LAB_005f8cca;
        }
        if (((uVar18 & 2) != 0) &&
           (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + local_1c[0xb] * 4),
           (*puVar3 & 0xff000000) == 0x11000000)) {
          uVar14 = puVar3[3];
          uVar15 = 0;
          if (uVar14 != 0) {
            puVar6 = (uint *)puVar3[4];
            do {
              if (*puVar6 == uVar19) break;
              uVar15 = uVar15 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar15 < uVar14);
          }
          if ((uVar15 < uVar14) && (uVar13 == *(uint *)(puVar3[2] + uVar15 * 4))) goto LAB_005f8cca;
        }
        local_1c = (int *)0x0;
        do {
          local_10 = uVar19;
          local_20 = uVar13;
          if (((uint)local_1c & 4) != 0) {
            local_10 = uVar13;
            local_20 = uVar19;
          }
          if (((uint)local_1c & 2) == 0) {
LAB_005f8d91:
            iVar8 = *(int *)(((uint)this) + 0x14);
            piVar2 = *(int **)(iVar8 + local_10 * 4);
            if (((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar2 * 4) + 4) & 2) != 0) &&
               (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4),
               (*puVar3 & 0xff000000) == 0x24000000)) {
              uVar14 = puVar3[3];
              uVar15 = 0;
              if (uVar14 != 0) {
                puVar6 = (uint *)puVar3[4];
                do {
                  if (local_10 == *puVar6) {
                    uVar18 = puVar3[2];
                    if (((uint)local_1c & 1) == 0) {
                      iVar17 = *(int *)(uVar18 + (uVar14 + uVar15) * 4);
                      iVar7 = *(int *)(uVar18 + uVar15 * 4);
                    }
                    else {
                      iVar17 = *(int *)(uVar18 + uVar15 * 4);
                      iVar7 = *(int *)(uVar18 + (uVar14 + uVar15) * 4);
                    }
                    local_28 = *(uint *)(*(int *)(iVar8 + iVar17 * 4) + 0x1c);
                    local_44 = (ulonglong)*(uint *)(*(int *)(iVar8 + iVar7 * 4) + 0x1c) << 0x20;
                    uVar18 = local_28;
                    break;
                  }
                  uVar15 = uVar15 + 1;
                  puVar6 = puVar6 + 1;
                  uVar18 = local_28;
                } while (uVar15 < uVar14);
              }
              if (((uint)local_1c & 2) == 0) {
                piVar2 = *(int **)(iVar8 + uVar18 * 4);
                if (((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar2 * 4) + 4) & 2) == 0) ||
                   (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4),
                   (*puVar3 & 0xff000000) != 0x11000000)) goto LAB_005f8e7c;
                uVar14 = 0;
                if (puVar3[3] != 0) {
                  puVar6 = (uint *)puVar3[4];
                  do {
                    if (uVar18 == *puVar6) {
                      uVar18 = *(uint *)(*(int *)(iVar8 + *(int *)(puVar3[2] + uVar14 * 4) * 4) +
                                        0x1c);
                      local_28 = uVar18;
                      break;
                    }
                    uVar14 = uVar14 + 1;
                    puVar6 = puVar6 + 1;
                  } while (uVar14 < puVar3[3]);
                }
              }
              if (local_20 == uVar18) {
                piVar10[7] = (*(unsigned int *)((unsigned char *)&(local_44) + 4));
                return 0;
              }
            }
          }
          else {
            piVar2 = *(int **)(*(int *)(((uint)this) + 0x14) + local_20 * 4);
            if (((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar2 * 4) + 4) & 2) != 0) &&
               (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4),
               (*puVar3 & 0xff000000) == 0x11000000)) {
              local_18 = (int *)0x0;
              if (puVar3[3] != 0) {
                puVar6 = (uint *)puVar3[4];
                do {
                  if (local_20 == *puVar6) {
                    local_20 = *(uint *)(*(int *)(*(int *)(((uint)this) + 0x14) +
                                                 *(int *)(puVar3[2] + (int)local_18 * 4) * 4) + 0x1c
                                        );
                    break;
                  }
                  local_18 = (int *)((int)local_18 + 1);
                  puVar6 = puVar6 + 1;
                } while (local_18 < (int *)puVar3[3]);
              }
              goto LAB_005f8d91;
            }
          }
LAB_005f8e7c:
          local_1c = (int *)((int)local_1c + 1);
        } while (local_1c < (int *)0x8);
      }
      if (local_c == 0x25000000) {
        local_3c[0] = uVar19;
        local_3c[1] = uVar13;
        local_20 = 0;
        local_24 = 0;
        local_3c[3] = 0;
        local_3c[2] = 0;
        local_28 = 0;
        do {
          iVar8 = *(int *)((int)local_3c + local_28);
          piVar2 = *(int **)(*(int *)(((uint)this) + 0x14) + iVar8 * 4);
          bVar22 = *(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar2 * 4) + 4);
          while ((bVar22 & 2) != 0) {
            puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4);
            if ((*puVar3 & 0xff000000) == 0x11000000) {
              puVar6 = &local_24;
            }
            else {
              if ((*puVar3 & 0xff000000) != 0x12000000) break;
              puVar6 = local_3c + 2;
            }
            *(uint *)((int)puVar6 + local_28) = (uint)(*(uint *)((int)puVar6 + local_28) == 0);
            local_3c[4] = puVar3[3];
            uVar14 = 0;
            if (local_3c[4] != 0) {
              piVar10 = (int *)puVar3[4];
              do {
                if (*piVar10 == iVar8) {
                  iVar8 = *(int *)(puVar3[2] + uVar14 * 4);
                  break;
                }
                uVar14 = uVar14 + 1;
                piVar10 = piVar10 + 1;
              } while (uVar14 < local_3c[4]);
            }
            if (local_3c[4] <= uVar14) {
              return 0x80004005;
            }
            piVar2 = *(int **)(*(int *)(((uint)this) + 0x14) + iVar8 * 4);
            piVar10 = local_8;
            bVar22 = *(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar2 * 4) + 4);
          }
          *(int *)((int)local_3c + local_28) = iVar8;
          local_28 = local_28 + 4;
        } while (local_28 < 8);
        if ((local_3c[0] == local_3c[1]) && (local_3c[2] != local_3c[3])) {
          if (local_24 == local_20) goto LAB_005f877c;
          fVar23 = (float10)_DAT_0069f3c8;
          goto LAB_005f877e;
        }
      }
      iVar8 = *(int *)(((uint)this) + 0x14);
      piVar2 = *(int **)(iVar8 + uVar19 * 4);
      if ((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar2 * 4) + 4) & 2) == 0) {
        return 0;
      }
      piVar4 = *(int **)(iVar8 + uVar13 * 4);
      if ((*(byte *)(*(int *)(*(int *)(((uint)this) + 0x10) + *piVar4 * 4) + 4) & 2) == 0) {
        return 0;
      }
      if (((local_c == 0x25000000) || (local_c == 0x22000000)) || (local_c == 0x23000000)) {
        puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4);
        puVar6 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar4[0xb] * 4);
        if (((*puVar3 & 0xff000000) == 0x11000000) && ((*puVar6 & 0xff000000) == 0x11000000)) {
          local_20 = 0;
          if (param_2[3] != 0) {
            piVar10 = (int *)param_2[4];
            do {
              if (param_3 == *piVar10) break;
              local_20 = local_20 + 1;
              piVar10 = piVar10 + 1;
            } while (local_20 < param_2[3]);
          }
          param_3 = 0;
          if (puVar3[3] != 0) {
            puVar11 = (uint *)puVar3[4];
            do {
              if (uVar19 == *puVar11) break;
              param_3 = param_3 + 1;
              puVar11 = puVar11 + 1;
            } while (param_3 < puVar3[3]);
          }
          uVar19 = 0;
          if (puVar6[3] != 0) {
            puVar11 = (uint *)puVar6[4];
            do {
              if (uVar13 == *puVar11) break;
              uVar19 = uVar19 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar19 < puVar6[3]);
          }
          if (local_c == 0x25000000) {
            iVar17 = *(int *)(puVar3[2] + param_3 * 4);
            iVar7 = *(int *)(puVar6[2] + uVar19 * 4);
          }
          else {
            iVar17 = *(int *)(puVar6[2] + uVar19 * 4);
            iVar7 = *(int *)(puVar3[2] + param_3 * 4);
          }
          *(undefined4 *)(param_2[2] + local_20 * 4) =
               *(undefined4 *)(*(int *)(iVar8 + iVar17 * 4) + 0x1c);
          *(undefined4 *)(param_2[2] + (param_2[3] + local_20) * 4) =
               *(undefined4 *)(*(int *)(*(int *)(((uint)this) + 0x14) + iVar7 * 4) + 0x1c);
          return 0;
        }
      }
      if (((local_c == 0x22000000) && ((local_14 & 1) != 0)) &&
         (puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4),
         (*puVar3 & 0xff000000) == 0x11000000)) {
        param_2 = (uint *)0x0;
        if (puVar3[3] != 0) {
          puVar6 = (uint *)puVar3[4];
          do {
            if (*puVar6 == uVar19) break;
            param_2 = (uint *)((int)param_2 + 1);
            puVar6 = puVar6 + 1;
          } while ((unsigned int)param_2 < puVar3[3]);
        }
        uVar15 = uVar13;
        if (*(uint *)(puVar3[2] + (int)param_2 * 4) == uVar13) goto LAB_005f9198;
      }
      if (local_c != 0x25000000) {
        return 0;
      }
      if (uVar19 != uVar13) {
        return 0;
      }
      puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4);
      if ((*puVar3 & 0xff000000) != 0x16000000) {
        return 0;
      }
      uVar13 = 0;
      if (puVar3[3] == 0) {
        return 0;
      }
      puVar6 = (uint *)puVar3[4];
      while (*puVar6 != uVar19) {
        uVar13 = uVar13 + 1;
        puVar6 = puVar6 + 1;
        if (puVar3[3] <= uVar13) {
          return 0;
        }
      }
      iVar8 = *(int *)(iVar8 + *(int *)(puVar3[2] + uVar13 * 4) * 4);
LAB_005f9195:
      uVar15 = *(uint *)(iVar8 + 0x1c);
      goto LAB_005f9198;
    }
    if ((uVar15 == 0) || (local_1c[1] != -1)) {
      dVar1 = *(double *)(local_18 + 4);
      param_2 = (uint *)uVar19;
    }
    else {
      dVar1 = *(double *)(local_1c + 4);
      uVar9 = local_14;
      param_2 = (uint *)uVar13;
    }
    fVar23 = (float10)dVar1;
    if (local_c == 0x20000000) {
      if (((float10)_DAT_006ccb10 <= fVar23) && ((uVar9 & 1) != 0)) goto LAB_005f8ba6;
      if (fVar23 < (float10)_DAT_006ccaf8 == (fVar23 == (float10)_DAT_006ccaf8)) {
        return 0;
      }
      if ((uVar9 & 4) == 0) {
        return 0;
      }
    }
    else if (local_c == 0x21000000) {
      if ((fVar23 < (float10)_DAT_006ccb10) || ((uVar9 & 1) == 0)) {
        if (fVar23 < (float10)_DAT_006ccaf8 == (fVar23 == (float10)_DAT_006ccaf8)) {
          return 0;
        }
        uVar9 = uVar9 & 4;
LAB_005f8acf:
        if (uVar9 == 0) {
          return 0;
        }
LAB_005f8ba6:
        piVar10[7] = (int)param_2;
        return 0;
      }
    }
    else {
      if (local_c == 0x22000000) {
        fVar5 = (float10)_DAT_006ccaf8;
        if (param_2 == (uint *)uVar13) {
          if ((fVar23 < fVar5) && ((uVar9 & 4) != 0)) {
LAB_005f877c:
            fVar23 = (float10)1;
            goto LAB_005f877e;
          }
          if (((fVar23 < (float10)_DAT_006ccaf8) || ((uVar9 & 8) == 0)) &&
             ((fVar23 < (float10)_DAT_006ccb10 || ((uVar9 & 1) == 0)))) {
            bVar22 = (byte)((ushort)((ushort)(NAN(fVar23) || NAN((float10)_DAT_006ccaf8)) << 10) >>
                           8) |
                     (byte)((ushort)((ushort)(fVar23 == (float10)_DAT_006ccaf8) << 0xe) >> 8);
LAB_005f8ac1:
            if ((POPCOUNT(bVar22) & 1U) == 0) {
              return 0;
            }
            uVar9 = uVar9 & 1;
            goto LAB_005f8acf;
          }
        }
        else if ((fVar23 < fVar5 == (fVar23 == fVar5)) || ((uVar9 & 4) == 0)) {
          if ((fVar23 <= (float10)_DAT_006ccaf8) || ((uVar9 & 8) == 0)) {
            uVar21 = (ushort)(fVar23 < (float10)_DAT_006ccb10) << 8 |
                     (ushort)(fVar23 == (float10)_DAT_006ccb10) << 0xe;
LAB_005f8b4f:
            if (uVar21 != 0) {
              return 0;
            }
            if ((uVar9 & 1) == 0) {
              return 0;
            }
          }
          goto LAB_005f877c;
        }
      }
      else {
        if (local_c != 0x23000000) {
          if (local_c == 0x24000000) {
            if (fVar23 != (float10)_DAT_006ccaf8) {
              return 0;
            }
            goto LAB_005f8ba6;
          }
          if (local_c != 0x25000000) {
            if (local_c != 0x26000000) {
              return 0;
            }
            if (fVar23 != (float10)_DAT_006ccaf8) {
              return 0;
            }
            bVar20 = param_2 == (uint *)uVar19;
            goto LAB_005f8ce4;
          }
          if (fVar23 == (float10)_DAT_006ccaf8) goto LAB_005f8cca;
          if (fVar23 == (float10)_DAT_006ccb10) goto LAB_005f8ba6;
          if (fVar23 != (float10)_DAT_006cc850) {
            return 0;
          }
          piVar2 = *(int **)(*(int *)(((uint)this) + 0x14) + (int)param_2 * 4);
          if ((*(byte *)(*(int *)(iVar8 + *piVar2 * 4) + 4) & 2) == 0) {
            return 0;
          }
          puVar3 = *(uint **)(*(int *)(((uint)this) + 0x18) + piVar2[0xb] * 4);
          if ((*puVar3 & 0xff000000) != 0x24000000) {
            return 0;
          }
          uVar19 = puVar3[3];
          uVar13 = 0;
          if (uVar19 != 0) {
            puVar6 = (uint *)puVar3[4];
            do {
              if ((uint *)*puVar6 == param_2) break;
              uVar13 = uVar13 + 1;
              puVar6 = puVar6 + 1;
            } while (uVar13 < uVar19);
          }
          if (uVar19 <= uVar13) {
            return 0;
          }
          iVar8 = *(int *)(puVar3[2] + uVar13 * 4);
          if (iVar8 != *(int *)(puVar3[2] + (uVar19 + uVar13) * 4)) {
            return 0;
          }
          iVar8 = *(int *)(*(int *)(((uint)this) + 0x14) + iVar8 * 4);
          goto LAB_005f9195;
        }
        fVar5 = (float10)_DAT_006ccaf8;
        if (param_2 == (uint *)uVar13) {
          if ((fVar23 >= fVar5) || ((uVar9 & 4) == 0)) {
            if ((fVar23 < (float10)_DAT_006ccaf8) || ((uVar9 & 8) == 0)) {
              uVar21 = (ushort)(fVar23 < (float10)_DAT_006ccb10) << 8;
              goto LAB_005f8b4f;
            }
            goto LAB_005f877c;
          }
        }
        else {
          if ((fVar23 < fVar5 != (fVar23 == fVar5)) && ((uVar9 & 4) != 0)) goto LAB_005f877c;
          if (((fVar23 <= (float10)_DAT_006ccaf8) || ((uVar9 & 8) == 0)) &&
             ((fVar23 <= (float10)_DAT_006ccb10 || ((uVar9 & 1) == 0)))) {
            bVar22 = (byte)((ushort)((ushort)(NAN(fVar23) || NAN((float10)_DAT_006ccb10)) << 10) >>
                           8) |
                     (byte)((ushort)((ushort)(fVar23 == (float10)_DAT_006ccb10) << 0xe) >> 8);
            goto LAB_005f8ac1;
          }
        }
      }
LAB_005f8cca:
      fVar23 = (float10)0;
    }
  }
  else {
    fVar23 = (float10)*(double *)(local_1c + 4);
    dVar1 = *(double *)(local_18 + 4);
    if (local_c == 0x20000000) {
      if ((float10)dVar1 <= fVar23) {
LAB_005f88b7:
        fVar23 = (float10)dVar1;
      }
    }
    else {
      if (local_c != 0x21000000) {
        if (local_c == 0x22000000) {
          if (fVar23 < (float10)dVar1) goto LAB_005f877c;
        }
        else {
          if (local_c != 0x23000000) {
            if (local_c == 0x24000000) {
              fVar23 = fVar23 + (float10)dVar1;
            }
            else if (local_c == 0x25000000) {
              fVar23 = fVar23 * (float10)dVar1;
            }
            else {
              if (local_c != 0x26000000) {
                return 0;
              }
              fVar23 = (float10)fpatan(fVar23,(float10)dVar1);
            }
            goto LAB_005f877e;
          }
          if ((float10)dVar1 <= fVar23) goto LAB_005f877c;
        }
        goto LAB_005f8cca;
      }
      if (fVar23 < (float10)dVar1) goto LAB_005f88b7;
    }
  }
LAB_005f877e:
  uVar15 = FUN_005f74cf(*(undefined4 *)(((uint)this) + 0x50),0,0,(double)fVar23);
  piVar10 = local_8;
LAB_005f9198:
  piVar10[7] = uVar15;
  return 0;
}
