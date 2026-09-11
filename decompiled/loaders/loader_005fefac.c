/* spd-match: far pct=8.71 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_15/thiscall_tp_attempt2_005fefac */
#include "ghidra_compat.h"

float10 __cdecl fsin(float10);
float10 __cdecl fcos(float10);
float10 __cdecl log2(float10);
float10 __cdecl fpatan(float10, float10);

int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005fbec8(...);
int __cdecl FUN_00672e20(...);
int __cdecl FUN_00672eeb(...);
int __cdecl FUN_00673590(...);
int __cdecl FUN_00673890(...);
int __cdecl FUN_00673b70(...);
extern int _DAT_0069f3c8;
extern int _DAT_006ccaf8;
extern int _DAT_006ccb10;
extern int _DAT_006cce38;
extern void LAB_005ff08f(...);
extern void LAB_005ff0af(...);
extern void LAB_005ff0e7(...);
extern void LAB_005ff304(...);
extern void LAB_005ff3cb(...);
extern void LAB_005ff4c2(...);
extern void LAB_005ff64d(...);
extern void LAB_005ff660(...);

struct ThisCallBox {
  undefined4 FUN_005fefac(uint *param_2, uint param_3, int param_4);
};
undefined4 ThisCallBox::FUN_005fefac(uint *param_2, uint param_3, int param_4) {
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  float10 fVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  float10 fVar14;
  undefined8 uVar15;
  
  iVar7 = *(int *)(((int)this) + 0x14);
  iVar10 = *(int *)(*(int *)(iVar7 + param_4 * 4) + 0x1c);
  piVar1 = *(int **)(iVar7 + param_3 * 4);
  piVar9 = *(int **)(iVar7 + iVar10 * 4);
  if ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar1 * 4) + 4) & 1) == 0) {
    return 0;
  }
  uVar2 = piVar9[6];
  uVar3 = piVar1[6];
  uVar12 = uVar3 & 0x40;
  uVar13 = *param_2 & 0xff000000;
  if (uVar13 == 0x10000000) {
    piVar1[6] = uVar3 | uVar2 & 0x1f;
    goto LAB_005ff660;
  }
  uVar6 = uVar2 & 0x60 | uVar3;
  piVar1[6] = uVar6;
  if (((uVar3 & 0xe000000) == 0) &&
     ((((uVar13 == 0x11000000 || (uVar13 == 0x12000000)) || (uVar13 == 0x13000000)) ||
      ((uVar13 == 0x1c000000 || (uVar13 == 0x1d000000)))))) {
    piVar1[6] = piVar9[6] & 0xe000000U | uVar6;
  }
  uVar3 = 4;
  if (uVar13 == 0x11000000) {
    piVar1[6] = piVar1[6] | (uVar2 & 0x1f) >> 1 & 4 | (uVar2 & 4) << 1 | uVar2 & 0x13;
LAB_005ff0e7:
    uVar3 = *(uint *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar9 * 4) + 4);
    if ((-1 < (char)uVar3) || (piVar9[1] != -1)) {
      if ((uVar2 & 1) != 0) {
        if (uVar13 == 0x13000000) goto LAB_005ff3cb;
        if (uVar13 == 0x16000000) goto LAB_005ff660;
      }
      if (((uVar2 & 2) != 0) && (uVar13 == 0x13000000)) goto LAB_005ff3cb;
      if ((uVar2 & 8) != 0) {
        if (uVar13 == 0x15000000) {
          if (uVar12 != 0) {
            return 0;
          }
          if ((uVar2 & 4) != 0) {
            return 0;
          }
          FUN_005fbec8(((int)this),param_2[0xd],0xfa2,"indefinite logarithm");
          return 0;
        }
        if (uVar13 == 0x16000000) {
          if (uVar12 != 0) {
            return 0;
          }
          uVar15 = 0x69f34000000fa3;
          goto LAB_005ff0af;
        }
      }
      if (uVar12 != 0) {
        return 0;
      }
      if ((uVar3 & 2) == 0) {
        return 0;
      }
      if (((((uVar13 != 0x11000000) ||
            (puVar8 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar9[0xb] * 4),
            (*puVar8 & 0xff000000) != 0x11000000)) &&
           ((uVar13 != 0x12000000 ||
            (puVar8 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar9[0xb] * 4),
            (*puVar8 & 0xff000000) != 0x12000000)))) &&
          ((uVar13 != 0x14000000 ||
           (puVar8 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar9[0xb] * 4),
           (*puVar8 & 0xff000000) != 0x15000000)))) &&
         ((uVar13 != 0x15000000 ||
          (puVar8 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar9[0xb] * 4),
          (*puVar8 & 0xff000000) != 0x14000000)))) {
LAB_005ff4c2:
        if ((uVar13 == 0x16000000) &&
           (puVar8 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar9[0xb] * 4),
           (*puVar8 & 0xff000000) == 0x25000000)) {
          param_2 = (uint *)0x0;
          if (puVar8[3] != 0) {
            param_3 = puVar8[3] << 2;
            do {
              if (((*(int *)(puVar8[4] + (int)param_2 * 4) == iVar10) &&
                  (iVar7 = *(int *)(puVar8[2] + (int)param_2 * 4),
                  iVar7 == *(int *)(puVar8[2] + param_3))) &&
                 ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x14) + iVar7 * 4) + 0x18) & 4) != 0)) {
                piVar1[7] = *(int *)(*(int *)(*(int *)(((int)this) + 0x14) +
                                             *(int *)(puVar8[2] + (int)param_2 * 4) * 4) + 0x1c);
                return 0;
              }
              param_2 = (uint *)((int)param_2 + 1);
              param_3 = param_3 + 4;
            } while ((unsigned int)param_2 < puVar8[3]);
          }
        }
        if (uVar13 != 0x14000000) {
          return 0;
        }
        puVar8 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar9[0xb] * 4);
        if ((*puVar8 & 0xff000000) != 0x25000000) {
          return 0;
        }
        param_2 = (uint *)0x0;
        if (puVar8[3] != 0) {
          piVar9 = (int *)puVar8[4];
          do {
            if (*piVar9 == iVar10) break;
            param_2 = (uint *)((int)param_2 + 1);
            piVar9 = piVar9 + 1;
          } while ((unsigned int)param_2 < puVar8[3]);
        }
        param_3 = 0;
        iVar7 = (int)param_2 * 4;
        piVar9 = (int *)(puVar8[2] + iVar7);
        do {
          piVar11 = *(int **)(*(int *)(((int)this) + 0x14) + *piVar9 * 4);
          if (((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar11 * 4) + 4) & 2) != 0) &&
             (puVar4 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar11[0xb] * 4),
             (*puVar4 & 0xff000000) == 0x15000000)) {
            param_2 = (uint *)0x0;
            if (puVar4[3] != 0) {
              do {
                if (*(int *)(iVar7 + puVar4[4]) == *piVar9) break;
                param_2 = (uint *)((int)param_2 + 1);
              } while ((unsigned int)param_2 < puVar4[3]);
            }
            uVar2 = *(uint *)(*(int *)(*(int *)(((int)this) + 0x14) +
                                      *(int *)(puVar4[2] + (int)param_2 * 4) * 4) + 0x18);
            if (((uVar2 & 4) != 0) && ((uVar2 & 8) != 0)) goto LAB_005ff64d;
          }
          param_3 = param_3 + 1;
          piVar9 = piVar9 + puVar8[3];
          if (1 < param_3) {
            return 0;
          }
        } while( true );
      }
      param_2 = (uint *)0x0;
      if (puVar8[3] != 0) {
        piVar11 = (int *)puVar8[4];
        do {
          if (*piVar11 == iVar10) break;
          param_2 = (uint *)((int)param_2 + 1);
          piVar11 = piVar11 + 1;
        } while ((unsigned int)param_2 < puVar8[3]);
      }
      if (puVar8[3] <= (unsigned int)param_2) goto LAB_005ff4c2;
      iVar10 = *(int *)(*(int *)(*(int *)(((int)this) + 0x14) +
                                *(int *)(puVar8[2] + (int)param_2 * 4) * 4) + 0x1c);
      goto LAB_005ff660;
    }
    if (uVar13 < 0x17000001) {
      if (uVar13 == 0x17000000) {
        fVar14 = (float10)fsin((float10)*(double *)(piVar9 + 4));
      }
      else if (uVar13 == 0x11000000) {
        fVar14 = -(float10)*(double *)(piVar9 + 4);
      }
      else if (uVar13 == 0x12000000) {
        if ((uVar12 == 0) && (*(double *)(piVar9 + 4) == 0.0)) {
LAB_005ff3cb:
          fVar14 = (float10)0;
        }
        else {
          fVar14 = (float10)1 / (float10)*(double *)(piVar9 + 4);
        }
      }
      else if (uVar13 == 0x13000000) {
        iVar7 = FUN_00672eeb(*(undefined8 *)(piVar9 + 4));
        if (iVar7 == 0) goto LAB_005ff3cb;
        fVar14 = (float10)FUN_00673590(*(undefined8 *)(piVar9 + 4));
        fVar14 = (float10)*(double *)(piVar9 + 4) - fVar14;
      }
      else if (uVar13 == 0x14000000) {
        fVar14 = (float10)FUN_00673890();
      }
      else if (uVar13 == 0x15000000) {
        if ((uVar12 == 0) && (*(double *)(piVar9 + 4) == _DAT_006ccaf8)) {
          return 0;
        }
        if (*(double *)(piVar9 + 4) < 0.0) {
          uVar15 = 0x6a3fd400000fa2;
          goto LAB_005ff304;
        }
        fVar14 = (float10)log2((float10)*(double *)(piVar9 + 4));
        fVar5 = (float10)log2((float10)_DAT_006cce38);
        fVar14 = ((float10)0.6931471805599453 * fVar14) / ((float10)0.6931471805599453 * fVar5);
      }
      else {
        if (uVar13 != 0x16000000) {
          return 0;
        }
        if ((uVar12 == 0) && (*(double *)(piVar9 + 4) < 0.0)) {
          uVar15 = 0x69f34000000fa3;
LAB_005ff304:
          FUN_005fbec8(((int)this),param_2[0xd],uVar15);
          goto LAB_005ff3cb;
        }
        fVar14 = SQRT((float10)*(double *)(piVar9 + 4));
      }
    }
    else if (uVar13 == 0x18000000) {
      fVar14 = (float10)fcos((float10)*(double *)(piVar9 + 4));
    }
    else if (uVar13 == 0x19000000) {
      if ((uVar12 == 0) &&
         ((*(double *)(piVar9 + 4) < _DAT_0069f3c8 || (_DAT_006ccb10 < *(double *)(piVar9 + 4))))) {
        uVar15 = 0x6a3fa800000fa5;
        goto LAB_005ff304;
      }
      fVar14 = (float10)FUN_00673b70();
    }
    else if (uVar13 == 0x1a000000) {
      if ((uVar12 == 0) &&
         ((*(double *)(piVar9 + 4) < _DAT_0069f3c8 || (_DAT_006ccb10 < *(double *)(piVar9 + 4))))) {
        uVar15 = 0x6a3fbc00000fa6;
        goto LAB_005ff304;
      }
      fVar14 = (float10)FUN_00672e20();
    }
    else {
      if (uVar13 != 0x1b000000) {
        if ((uVar13 != 0x1c000000) && (uVar13 != 0x1d000000)) {
          return 0;
        }
        goto LAB_005ff3cb;
      }
      fVar14 = (float10)fpatan((float10)*(double *)(piVar9 + 4),(float10)1);
    }
  }
  else {
    if (uVar13 != 0x12000000) {
      uVar6 = 4;
      if (((uVar13 == 0x13000000) || (uVar6 = uVar3, uVar13 == 0x14000000)) ||
         (uVar13 == 0x16000000)) goto LAB_005ff08f;
      goto LAB_005ff0e7;
    }
    if (((uVar2 & 4) == 0) || ((uVar2 & 8) == 0)) {
      uVar6 = uVar2 & 0xc;
LAB_005ff08f:
      piVar1[6] = piVar1[6] | uVar6;
      goto LAB_005ff0e7;
    }
    uVar6 = uVar3;
    if (uVar12 != 0) goto LAB_005ff08f;
    uVar15 = 0x69f38c00000fa1;
LAB_005ff0af:
    FUN_005fbec8(((int)this),param_2[0xd],uVar15);
LAB_005ff64d:
    fVar14 = (float10)0;
  }
  iVar10 = FUN_005f74cf(*(undefined4 *)(((int)this) + 0x50),0,0,(double)fVar14);
LAB_005ff660:
  piVar1[7] = iVar10;
  return 0;
}
