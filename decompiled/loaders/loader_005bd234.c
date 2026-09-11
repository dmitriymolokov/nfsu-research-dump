/* spd-match: far pct=5.25 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_02/attempt5_bd234 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
#ifndef SUB84
#define SUB84(x,n) ((unsigned int)((unsigned __int64)(x) >> (n)))
#endif
long __cdecl __ftol(void);
int __cdecl __isnan(double);
double __cdecl fpatan(double, double);
double __cdecl fcos(double);
double __cdecl fsin(double);
double __cdecl fptan(double);
double __cdecl log2(double);

int __cdecl FUN_005ba1d9(...);
int __cdecl FUN_005bb002(...);
int __cdecl FUN_005bcf79(...);
int __cdecl FUN_005bf509(...);
int __cdecl FUN_00672e20(...);
int __cdecl FUN_00672eeb(...);
int __cdecl FUN_00672f2e(...);
int __cdecl FUN_00673590(...);
int __cdecl FUN_006736c0(...);
int __cdecl FUN_006737f8(...);
int __cdecl FUN_00673802(...);
int __cdecl FUN_00673809(...);
int __cdecl FUN_0067381a(...);
int __cdecl FUN_00673890(...);
int __cdecl FUN_00673b1c(...);
int __cdecl FUN_00673b70(...);
extern int _DAT_0069f330;
extern int _DAT_0069f338;
extern int _DAT_0069f358;
extern int _DAT_0069f3a0;
extern int _DAT_0069f3c8;
extern int _DAT_006ccaf8;
extern int _DAT_006ccb08;
extern int _DAT_006ccb10;
extern int _DAT_006cce38;
extern void LAB_005bd84a(...);
extern void LAB_005bd87d(...);
extern void LAB_005bdf24(...);
extern void LAB_005be2b3(...);
extern void LAB_005be491(...);
extern void LAB_005be4b7(...);
extern void LAB_005be4c0(...);

struct ThisCallBox {
  int FUN_005bd234(int param_2, double *param_3);
};
int ThisCallBox::FUN_005bd234(int param_2, double *param_3) {
  double *pdVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  double *pdVar15;
  int iVar16;
  double *pdVar17;
  double *pdVar18;
  int iVar19;
  float10 fVar20;
  undefined8 uVar21;
  uint local_68 [13];
  double local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  double *local_1c;
  double *local_18;
  double *local_14;
  double *local_10;
  undefined4 local_c;
  double *local_8;
  
  iVar19 = (int)param_3;
  local_c = ((undefined4)this);
  if (param_2 == 0) {
    if (param_3 != (double *)0x0) {
      return -0x7fffbffb;
    }
    return 0;
  }
  if (*(int *)(param_2 + 4) != 0xc) {
    return -0x7fffbffb;
  }
  local_8 = (double *)(*(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x18));
  if (*(int *)(param_2 + 0x1c) != 0x1a) {
    return -0x7fffbffb;
  }
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[0xc] = *(int *)(param_2 + 0x24);
  local_18 = *(double **)(*(int *)(param_2 + 0x24) + 8);
  local_68[10] = 0;
  local_68[0xb] = 0;
  if (local_18 != (double *)0x0) {
    local_10 = (double *)0x0;
    do {
      pdVar15 = local_10;
      iVar10 = *(int *)(local_18 + 1);
      if ((iVar10 != 0) && (*(int *)(iVar10 + 4) == 0xc)) {
        uVar8 = *(int *)(iVar10 + 0x18) * *(int *)(iVar10 + 0x14);
        puVar2 = (uint *)((int)local_68 + (int)local_10);
        *puVar2 = uVar8;
        *(int *)((int)(local_68 + 4) + (int)pdVar15) = iVar10;
        puVar9 = (unsigned int *)_malloc(uVar8 * 0x10);
        *(undefined4 **)((int)(local_68 + 8) + (int)local_10) = puVar9;
        if (puVar9 == (undefined4 *)0x0) {
          iVar10 = -0x7ff8fff2;
          goto LAB_005be4c0;
        }
        iVar10 = FUN_005bf509(*(int *)((int)(local_68 + 4) + (int)pdVar15),puVar9);
        if (iVar10 < 0) goto LAB_005be4c0;
        local_14 = (double *)0x0;
        if (*puVar2 != 0) {
          local_34 = (double)(__int64)CONCAT44(param_2 + 0x30,(undefined4)local_34);
          puVar14 = puVar9 + 2;
          do {
            uVar21 = FUN_005bb002(puVar14,puVar9,(*(undefined4 *)((char *)&(local_34) + 4)));
            iVar10 = (int)uVar21;
            if (iVar10 < 0) goto LAB_005be4c0;
            local_14 = (double *)((int)local_14 + 1);
            *puVar9 = 3;
            puVar9 = puVar9 + 4;
            puVar14 = (undefined4 *)((int)((ulonglong)uVar21 >> 0x20) + 0x10);
          } while (local_14 < (double *)*puVar2);
        }
      }
      puVar9 = (undefined4 *)((int)local_18 + 0xc);
      local_10 = (double *)((int)local_10 + 4);
      local_18 = (double *)*puVar9;
    } while ((double *)*puVar9 != (double *)0x0);
  }
  dVar3 = _DAT_006ccaf8;
  dVar4 = _DAT_0069f330;
  uVar8 = local_68[0xc];
  pdVar15 = local_8;
  switch(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x20) + 8) + 0x18)) {
  case 0:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        *pdVar17 = ABS(*(double *)((local_68[8] - (int)param_3) + (int)pdVar17));
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 1:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      iVar10 = (int)param_3 - local_68[8];
      param_3 = local_8;
      do {
        if ((*pdVar17 < _DAT_0069f3c8) || (_DAT_006ccb10 < *pdVar17)) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbfe,"indefinite acos");
        }
        fVar20 = (float10)FUN_00672e20();
        *(double *)(iVar10 + (int)pdVar17) = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 2:
    pdVar17 = (double *)0x0;
    *(undefined8 *)((int)param_3 + 8) = 0x3ff0000000000000;
    if (local_8 != (double *)0x0) {
      pdVar18 = (double *)(local_68[8] + 8);
      do {
        if (*pdVar18 == _DAT_006ccaf8) {
          dVar4 = 0.0;
          goto LAB_005bd84a;
        }
        pdVar17 = (double *)((int)pdVar17 + 1);
        pdVar18 = pdVar18 + 2;
      } while (pdVar17 < local_8);
    }
    break;
  case 3:
    pdVar17 = (double *)0x0;
    *(undefined8 *)((int)param_3 + 8) = 0;
    if (local_8 != (double *)0x0) {
      pdVar18 = (double *)(local_68[8] + 8);
      do {
        if (*pdVar18 != _DAT_006ccaf8) {
          dVar4 = 1.0;
          goto LAB_005bd84a;
        }
        pdVar17 = (double *)((int)pdVar17 + 1);
        pdVar18 = pdVar18 + 2;
      } while (pdVar17 < local_8);
    }
    break;
  case 4:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      iVar10 = (int)param_3 - local_68[8];
      param_3 = local_8;
      do {
        if ((*pdVar17 < _DAT_0069f3c8) || (_DAT_006ccb10 < *pdVar17)) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbff,"indefinite asin");
        }
        fVar20 = (float10)FUN_00673b70();
        *(double *)((int)pdVar17 + iVar10) = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 5:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        fVar20 = (float10)fpatan((float10)*(double *)((int)pdVar17 + (local_68[8] - (int)param_3)),
                                 (float10)1);
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 6:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[9] + 8);
      pdVar18 = local_8;
      do {
        fVar20 = (float10)fpatan((float10)*(double *)((local_68[8] - local_68[9]) + (int)pdVar17),
                                 (float10)*pdVar17);
        *(double *)(((int)param_3 - local_68[9]) + (int)pdVar17) = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 7:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      iVar10 = local_68[8] - (int)param_3;
      param_3 = local_8;
      do {
        uVar21 = *(undefined8 *)((int)pdVar17 + iVar10);
        fVar20 = (float10)FUN_006736c0((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 8:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[10] + 8);
      local_10 = (double *)(local_68[8] - local_68[10]);
      local_1c = local_8;
      do {
        pdVar18 = (double *)((int)(local_68[8] - local_68[10]) + (int)pdVar17);
        if (*(double *)((local_68[9] - local_68[10]) + (int)pdVar17) <= *pdVar18) {
          if (*pdVar18 <= *pdVar17) {
            dVar4 = *pdVar18;
          }
          else {
            dVar4 = *pdVar17;
          }
        }
        else {
          dVar4 = *(double *)((local_68[9] - local_68[10]) + (int)pdVar17);
        }
        *(double *)(((int)param_3 - local_68[10]) + (int)pdVar17) = dVar4;
        pdVar17 = pdVar17 + 2;
        local_1c = (double *)((int)local_1c + -1);
      } while (local_1c != (double *)0x0);
    }
    break;
  default:
    goto switchD_005bd37f_caseD_9;
  case 10:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        fVar20 = (float10)fcos((float10)*(double *)((int)pdVar17 + (local_68[8] - (int)param_3)));
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0xb:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      param_3 = local_8;
      do {
        fVar20 = (float10)FUN_00673802();
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0xc:
    *(double *)((int)param_3 + 8) =
         *(double *)(local_68[8] + 0x18) * *(double *)(local_68[9] + 0x28) -
         *(double *)(local_68[8] + 0x28) * *(double *)(local_68[9] + 0x18);
    *(double *)((int)param_3 + 0x18) =
         *(double *)(local_68[8] + 0x28) * *(double *)(local_68[9] + 8) -
         *(double *)(local_68[9] + 0x28) * *(double *)(local_68[8] + 8);
    *(double *)((int)param_3 + 0x28) =
         *(double *)(local_68[9] + 0x18) * *(double *)(local_68[8] + 8) -
         *(double *)(local_68[8] + 0x18) * *(double *)(local_68[9] + 8);
    break;
  case 0xd:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      pdVar17 = local_8;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 2;
        pdVar17 = (double *)((int)pdVar17 + -1);
      } while (pdVar17 != (double *)0x0);
    }
    break;
  case 0xe:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      pdVar17 = local_8;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 2;
        pdVar17 = (double *)((int)pdVar17 + -1);
      } while (pdVar17 != (double *)0x0);
    }
    break;
  case 0xf:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        *pdVar17 = *(double *)((int)pdVar17 + (local_68[8] - (int)param_3)) * _DAT_0069f3a0;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x10:
    iVar10 = *(int *)(local_68[4] + 0x14);
    if (iVar10 == 1) {
      dVar4 = *(double *)(local_68[8] + 8);
    }
    else if (iVar10 == 2) {
      dVar4 = *(double *)(local_68[8] + 0x38) * *(double *)(local_68[8] + 8) -
              *(double *)(local_68[8] + 0x28) * *(double *)(local_68[8] + 0x18);
    }
    else {
      if (iVar10 != 3) {
        if (iVar10 == 4) {
          dVar4 = *(double *)(local_68[8] + 0xa8) * *(double *)(local_68[8] + 0xf8) -
                  *(double *)(local_68[8] + 0xb8) * *(double *)(local_68[8] + 0xe8);
          dVar6 = *(double *)(local_68[8] + 0xf8) * *(double *)(local_68[8] + 0x98) -
                  *(double *)(local_68[8] + 0xd8) * *(double *)(local_68[8] + 0xb8);
          dVar7 = *(double *)(local_68[8] + 0x98) * *(double *)(local_68[8] + 0xe8) -
                  *(double *)(local_68[8] + 0xa8) * *(double *)(local_68[8] + 0xd8);
          dVar5 = *(double *)(local_68[8] + 0xf8) * *(double *)(local_68[8] + 0x88) -
                  *(double *)(local_68[8] + 0xb8) * *(double *)(local_68[8] + 200);
          dVar3 = *(double *)(local_68[8] + 0xe8) * *(double *)(local_68[8] + 0x88) -
                  *(double *)(local_68[8] + 0xa8) * *(double *)(local_68[8] + 200);
          local_34 = *(double *)(local_68[8] + 0xd8) * *(double *)(local_68[8] + 0x88) -
                     *(double *)(local_68[8] + 0x98) * *(double *)(local_68[8] + 200);
          *(double *)((int)param_3 + 8) =
               ((local_34 * *(double *)(local_68[8] + 0x78) +
                (dVar6 * *(double *)(local_68[8] + 0x48) - dVar5 * *(double *)(local_68[8] + 0x58)))
                * *(double *)(local_68[8] + 0x28) +
               ((dVar7 * *(double *)(local_68[8] + 0x78) +
                (dVar4 * *(double *)(local_68[8] + 0x58) - dVar6 * *(double *)(local_68[8] + 0x68)))
                * *(double *)(local_68[8] + 8) -
               (dVar3 * *(double *)(local_68[8] + 0x78) +
               (dVar4 * *(double *)(local_68[8] + 0x48) - dVar5 * *(double *)(local_68[8] + 0x68)))
               * *(double *)(local_68[8] + 0x18))) -
               (local_34 * *(double *)(local_68[8] + 0x68) +
               (dVar7 * *(double *)(local_68[8] + 0x48) - dVar3 * *(double *)(local_68[8] + 0x58)))
               * *(double *)(local_68[8] + 0x38);
          break;
        }
        goto switchD_005bd37f_caseD_9;
      }
      dVar4 = (*(double *)(local_68[8] + 0x38) * *(double *)(local_68[8] + 0x78) -
              *(double *)(local_68[8] + 0x48) * *(double *)(local_68[8] + 0x68)) *
              *(double *)(local_68[8] + 0x28) +
              ((*(double *)(local_68[8] + 0x88) * *(double *)(local_68[8] + 0x48) -
               *(double *)(local_68[8] + 0x58) * *(double *)(local_68[8] + 0x78)) *
               *(double *)(local_68[8] + 8) -
              (*(double *)(local_68[8] + 0x38) * *(double *)(local_68[8] + 0x88) -
              *(double *)(local_68[8] + 0x58) * *(double *)(local_68[8] + 0x68)) *
              *(double *)(local_68[8] + 0x18));
    }
    goto LAB_005bd84a;
  case 0x11:
    dVar4 = 0.0;
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[9] + 8);
      pdVar18 = local_8;
      dVar4 = 0.0;
      do {
        dVar3 = *(double *)((int)pdVar17 + (local_68[8] - local_68[9])) - *pdVar17;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
        dVar4 = dVar3 * dVar3 + dVar4;
      } while (pdVar18 != (double *)0x0);
    }
    goto LAB_005bd87d;
  case 0x12:
    *(undefined8 *)((int)param_3 + 8) = 0;
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      pdVar18 = local_8;
      do {
        pdVar1 = (double *)((local_68[9] - local_68[8]) + (int)pdVar17);
        dVar4 = *pdVar17;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
        *(double *)((int)param_3 + 8) = *pdVar1 * dVar4 + *(double *)((int)param_3 + 8);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x13:
    *(undefined8 *)((int)param_3 + 8) = 0x3ff0000000000000;
    *(double *)((int)param_3 + 0x18) =
         *(double *)(local_68[9] + 0x18) * *(double *)(local_68[8] + 0x18);
    *(undefined8 *)((int)param_3 + 0x28) = *(undefined8 *)(local_68[8] + 0x28);
    *(undefined8 *)((int)param_3 + 0x38) = *(undefined8 *)(local_68[9] + 0x38);
    break;
  case 0x14:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      param_3 = local_8;
      do {
        fVar20 = (float10)FUN_00673b1c();
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x15:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      param_3 = local_8;
      do {
        fVar20 = (float10)FUN_00673890();
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x16:
    dVar4 = 0.0;
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[9] + 8);
      pdVar18 = local_8;
      do {
        pdVar1 = (double *)((local_68[10] - local_68[9]) + (int)pdVar17);
        dVar3 = *pdVar17;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
        dVar4 = *pdVar1 * dVar3 + dVar4;
      } while (pdVar18 != (double *)0x0);
      if (local_8 != (double *)0x0) {
        pdVar17 = (double *)(local_68[8] + 8);
        pdVar18 = local_8;
        do {
          dVar3 = *pdVar17;
          if (_DAT_006ccaf8 <= dVar4) {
            dVar3 = -dVar3;
          }
          *(double *)((int)pdVar17 + ((int)param_3 - local_68[8])) = dVar3;
          pdVar17 = pdVar17 + 2;
          pdVar18 = (double *)((int)pdVar18 + -1);
        } while (pdVar18 != (double *)0x0);
      }
    }
    break;
  case 0x17:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      iVar10 = local_68[8] - (int)param_3;
      param_3 = local_8;
      do {
        uVar21 = *(undefined8 *)((int)pdVar17 + iVar10);
        fVar20 = (float10)FUN_00673590((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x18:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[9];
      pdVar17 = (double *)(local_68[9] + 8);
      local_1c = local_8;
      do {
        if (*pdVar17 == 0.0) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd9,"division by zero");
        }
        fVar20 = (float10)FUN_0067381a();
        *(double *)(iVar10 + (int)pdVar17) = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        local_1c = (double *)((int)local_1c + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (local_1c != (double *)0x0);
    }
    break;
  case 0x19:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      iVar10 = (int)param_3 - local_68[8];
      param_3 = local_8;
      do {
        iVar16 = FUN_00672eeb(SUB84(*pdVar17,0),(int)((ulonglong)*pdVar17 >> 0x20));
        if (iVar16 == 0) {
          fVar20 = (float10)0;
        }
        else {
          fVar20 = (float10)FUN_00673590(SUB84(*pdVar17,0),(int)((ulonglong)*pdVar17 >> 0x20));
          fVar20 = (float10)*pdVar17 - fVar20;
        }
        *(double *)((int)pdVar17 + iVar10) = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x1b:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      pdVar17 = local_8;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 2;
        pdVar17 = (double *)((int)pdVar17 + -1);
      } while (pdVar17 != (double *)0x0);
    }
    break;
  case 0x1c:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      iVar10 = local_68[8] - (int)param_3;
      param_3 = local_8;
      do {
        uVar21 = *(undefined8 *)((int)puVar12 + iVar10);
        iVar16 = FUN_00672eeb((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        if (iVar16 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0x3ff0000000000000;
        }
        *puVar12 = uVar21;
        puVar12 = puVar12 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x1d:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      iVar10 = local_68[8] - (int)param_3;
      param_3 = local_8;
      do {
        uVar21 = *(undefined8 *)((int)puVar12 + iVar10);
        iVar16 = FUN_00672eeb((int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
        if (iVar16 == 0) {
          uVar21 = 0x3ff0000000000000;
        }
        else {
          uVar21 = 0;
        }
        *puVar12 = uVar21;
        puVar12 = puVar12 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x1e:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      iVar10 = local_68[8] - (int)param_3;
      param_3 = local_8;
      do {
        iVar16 = __isnan(*(double *)((int)puVar12 + iVar10));
        if (iVar16 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0x3ff0000000000000;
        }
        *puVar12 = uVar21;
        puVar12 = puVar12 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x1f:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[8];
      pdVar17 = (double *)(local_68[8] + 8);
      local_1c = local_8;
      do {
        fVar20 = (float10)FUN_00673890();
        *(double *)((int)pdVar17 + iVar10) = (double)(fVar20 * (float10)*pdVar17);
        pdVar17 = pdVar17 + 2;
        local_1c = (double *)((int)local_1c + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (local_1c != (double *)0x0);
    }
    break;
  case 0x20:
    dVar4 = 0.0;
    if (local_8 != (double *)0x0) {
      pdVar18 = (double *)(local_68[8] + 8);
      pdVar17 = local_8;
      do {
        dVar3 = *pdVar18;
        pdVar18 = pdVar18 + 2;
        pdVar17 = (double *)((int)pdVar17 + -1);
        dVar4 = dVar3 * dVar3 + dVar4;
      } while (pdVar17 != (double *)0x0);
    }
LAB_005bd87d:
    dVar4 = SQRT(dVar4);
LAB_005bd84a:
    *(double *)((int)param_3 + 8) = dVar4;
    break;
  case 0x21:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      iVar10 = (int)param_3 - local_68[8];
      param_3 = local_8;
      do {
        pdVar18 = (double *)((local_68[10] - local_68[8]) + (int)pdVar17);
        *(double *)((int)pdVar17 + iVar10) =
             (*(double *)((int)pdVar18 + (local_68[9] - local_68[10])) - *pdVar17) * *pdVar18 +
             *pdVar17;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x22:
    *(undefined8 *)((int)param_3 + 8) = 0x3ff0000000000000;
    *(undefined8 *)((int)param_3 + 0x18) = 0;
    *(undefined8 *)((int)param_3 + 0x28) = 0;
    *(undefined8 *)((int)param_3 + 0x38) = 0x3ff0000000000000;
    if ((_DAT_006ccaf8 < *(double *)(local_68[8] + 8)) &&
       (*(undefined8 *)((int)param_3 + 0x18) = *(undefined8 *)(local_68[8] + 8),
       _DAT_006ccaf8 < *(double *)(local_68[9] + 8))) {
      fVar20 = (float10)FUN_00673890();
      *(double *)((int)param_3 + 0x28) = (double)fVar20;
      uVar8 = local_68[0xc];
      pdVar15 = local_8;
    }
    break;
  case 0x23:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[8];
      pdVar17 = (double *)(local_68[8] + 8);
      local_1c = local_8;
      do {
        if (*pdVar17 < _DAT_006ccaf8 != (*pdVar17 == _DAT_006ccaf8)) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd8,"infinite/indefinite log");
          pdVar15 = local_8;
        }
        fVar20 = (float10)log2((float10)*pdVar17);
        *(double *)((int)pdVar17 + iVar10) = (double)((float10)0.6931471805599453 * fVar20);
        pdVar17 = pdVar17 + 2;
        local_1c = (double *)((int)local_1c + -1);
        uVar8 = local_68[0xc];
      } while (local_1c != (double *)0x0);
    }
    break;
  case 0x24:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[8];
      pdVar17 = (double *)(local_68[8] + 8);
      fVar20 = (float10)log2((float10)_DAT_006ccb08);
      local_34 = (double)((float10)0.6931471805599453 * fVar20);
      local_1c = local_8;
      do {
        if (*pdVar17 < _DAT_006ccaf8 != (*pdVar17 == _DAT_006ccaf8)) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd8,"infinite/indefinite log");
          pdVar15 = local_8;
        }
        fVar20 = (float10)log2((float10)*pdVar17);
        *(double *)(iVar10 + (int)pdVar17) =
             (double)(((float10)0.6931471805599453 * fVar20) / (float10)local_34);
        pdVar17 = pdVar17 + 2;
        local_1c = (double *)((int)local_1c + -1);
        uVar8 = local_68[0xc];
      } while (local_1c != (double *)0x0);
    }
    break;
  case 0x25:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[8];
      pdVar17 = (double *)(local_68[8] + 8);
      fVar20 = (float10)log2((float10)_DAT_006cce38);
      local_34 = (double)((float10)0.6931471805599453 * fVar20);
      local_1c = local_8;
      do {
        if (*pdVar17 < _DAT_006ccaf8 != (*pdVar17 == _DAT_006ccaf8)) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd8,"infinite/indefinite log");
          pdVar15 = local_8;
        }
        fVar20 = (float10)log2((float10)*pdVar17);
        *(double *)(iVar10 + (int)pdVar17) =
             (double)(((float10)0.6931471805599453 * fVar20) / (float10)local_34);
        pdVar17 = pdVar17 + 2;
        local_1c = (double *)((int)local_1c + -1);
        uVar8 = local_68[0xc];
      } while (local_1c != (double *)0x0);
    }
    break;
  case 0x26:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[9] + 8);
      iVar10 = (int)param_3 - local_68[9];
      param_3 = local_8;
      do {
        if (*(double *)((local_68[8] - local_68[9]) + (int)pdVar17) <= *pdVar17) {
          dVar4 = *pdVar17;
        }
        else {
          dVar4 = *(double *)((local_68[8] - local_68[9]) + (int)pdVar17);
        }
        *(double *)(iVar10 + (int)pdVar17) = dVar4;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x27:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[9] + 8);
      iVar10 = (int)param_3 - local_68[9];
      param_3 = local_8;
      do {
        if (*pdVar17 <= *(double *)((local_68[8] - local_68[9]) + (int)pdVar17)) {
          dVar4 = *pdVar17;
        }
        else {
          dVar4 = *(double *)((local_68[8] - local_68[9]) + (int)pdVar17);
        }
        *(double *)(iVar10 + (int)pdVar17) = dVar4;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        *pdVar17 = *(double *)((local_68[9] - (int)param_3) + (int)pdVar17) *
                   *(double *)(local_68[8] + 8);
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x2c:
  case 0x2f:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        *pdVar17 = *(double *)((int)pdVar17 + (local_68[8] - (int)param_3)) *
                   *(double *)(local_68[9] + 8);
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
    iVar10 = *(int *)(local_68[4] + 0x14);
    local_24 = *(int *)(local_68[4] + 0x18);
    if (*(int *)(*(int *)(local_68[5] + 0x10) + 0x10) == 1) {
      iVar16 = *(int *)(local_68[5] + 0x18);
      local_20 = *(int *)(local_68[5] + 0x14);
    }
    else {
      iVar16 = *(int *)(local_68[5] + 0x14);
      local_20 = *(int *)(local_68[5] + 0x18);
    }
    if ((local_24 == iVar16) && (local_20 * iVar10 - (int)local_8 == 0)) {
      if (iVar10 != 0) {
        local_1c = (double *)(local_68[8] + 8);
        local_10 = (double *)((int)param_3 + 8);
        local_34 = (double)(__int64)CONCAT44(iVar10,(undefined4)local_34);
        do {
          if (local_20 != 0) {
            local_18 = (double *)(local_68[9] + 8);
            local_14 = local_10;
            local_2c = local_20;
            do {
              dVar4 = 0.0;
              if (local_24 != 0) {
                param_3 = local_18;
                pdVar17 = local_1c;
                local_28 = local_24;
                do {
                  dVar3 = *param_3;
                  param_3 = param_3 + local_20 * 2;
                  dVar5 = *pdVar17;
                  pdVar17 = pdVar17 + 2;
                  local_28 = local_28 + -1;
                  dVar4 = dVar3 * dVar5 + dVar4;
                } while (local_28 != 0);
              }
              local_18 = local_18 + 2;
              *local_14 = dVar4;
              local_14 = local_14 + 2;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          local_10 = local_10 + local_20 * 2;
          local_1c = local_1c + local_24 * 2;
          iVar10 = (*(undefined4 *)((char *)&(local_34) + 4)) + -1;
          local_34 = (double)(__int64)CONCAT44(iVar10,(undefined4)local_34);
        } while (iVar10 != 0);
      }
      break;
    }
    goto switchD_005bd37f_caseD_9;
  case 0x33:
    dVar4 = 0.0;
    if (local_8 == (double *)0x0) {
LAB_005bdf24:
      dVar4 = 0.0;
    }
    else {
      pdVar17 = (double *)(local_68[8] + 8);
      pdVar18 = local_8;
      do {
        dVar3 = *pdVar17;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
        dVar4 = dVar3 * dVar3 + dVar4;
      } while (pdVar18 != (double *)0x0);
      if (dVar4 == _DAT_006ccaf8) goto LAB_005bdf24;
      dVar4 = _DAT_006ccb10 / SQRT(dVar4);
    }
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        *pdVar17 = dVar4 * *(double *)((int)pdVar17 + (local_68[8] - (int)param_3));
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x34:
    if (local_8 != (double *)0x0) {
      iVar16 = (int)param_3 - local_68[9];
      iVar10 = local_68[9] + 8;
      local_34 = (double)(__int64)CONCAT44(local_8,(undefined4)local_34);
      do {
        fVar20 = (float10)FUN_00673890();
        *(double *)(iVar10 + iVar16) = (double)fVar20;
        iVar11 = FUN_00672f2e((double)fVar20);
        if ((0 < iVar11) && (iVar11 < 3)) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd8,"indefinite power");
        }
        iVar10 = iVar10 + 0x10;
        iVar11 = (*(undefined4 *)((char *)&(local_34) + 4)) + -1;
        local_34 = (double)(__int64)CONCAT44(iVar11,(undefined4)local_34);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (iVar11 != 0);
    }
    break;
  case 0x35:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        *pdVar17 = *(double *)((int)pdVar17 + (local_68[8] - (int)param_3)) * _DAT_0069f358;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x36:
    dVar4 = 0.0;
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      local_34 = (double)(__int64)CONCAT44(local_8,(undefined4)local_34);
      do {
        pdVar18 = (double *)((int)pdVar17 + (local_68[9] - local_68[8]));
        dVar3 = *pdVar17;
        pdVar17 = pdVar17 + 2;
        iVar10 = (*(undefined4 *)((char *)&(local_34) + 4)) + -1;
        local_34 = (double)(__int64)CONCAT44(iVar10,(undefined4)local_34);
        dVar4 = *pdVar18 * dVar3 + dVar4;
      } while (iVar10 != 0);
      if (local_8 != (double *)0x0) {
        pdVar17 = (double *)(local_68[9] + 8);
        pdVar18 = local_8;
        do {
          *(double *)(((int)param_3 - local_68[9]) + (int)pdVar17) =
               *(double *)((local_68[8] - local_68[9]) + (int)pdVar17) -
               (dVar4 * *pdVar17 + dVar4 * *pdVar17);
          pdVar17 = pdVar17 + 2;
          pdVar18 = (double *)((int)pdVar18 + -1);
        } while (pdVar18 != (double *)0x0);
      }
    }
    break;
  case 0x37:
    dVar4 = *(double *)(local_68[10] + 8);
    dVar3 = 0.0;
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      local_34 = (double)(__int64)CONCAT44(local_8,(undefined4)local_34);
      do {
        pdVar18 = (double *)((int)pdVar17 + (local_68[9] - local_68[8]));
        dVar5 = *pdVar17;
        pdVar17 = pdVar17 + 2;
        iVar10 = (*(undefined4 *)((char *)&(local_34) + 4)) + -1;
        local_34 = (double)(__int64)CONCAT44(iVar10,(undefined4)local_34);
        dVar3 = *pdVar18 * dVar5 + dVar3;
      } while (iVar10 != 0);
    }
    dVar5 = (_DAT_006ccb10 - dVar3 * dVar3) * dVar4 * dVar4;
    if (_DAT_006ccaf8 <= dVar5) {
      if (local_8 != (double *)0x0) {
        pdVar17 = (double *)(local_68[9] + 8);
        pdVar18 = local_8;
        do {
          *(double *)(((int)param_3 - local_68[9]) + (int)pdVar17) =
               dVar4 * *(double *)((local_68[8] - local_68[9]) + (int)pdVar17) -
               (dVar3 * dVar4 + SQRT(dVar5)) * *pdVar17;
          pdVar17 = pdVar17 + 2;
          pdVar18 = (double *)((int)pdVar18 + -1);
        } while (pdVar18 != (double *)0x0);
      }
    }
    else if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      pdVar17 = local_8;
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 2;
        pdVar17 = (double *)((int)pdVar17 + -1);
      } while (pdVar17 != (double *)0x0);
    }
    break;
  case 0x38:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      param_3 = local_8;
      do {
        iVar10 = __ftol();
        local_34 = (double)(__int64)CONCAT44(iVar10,(undefined4)local_34);
        *pdVar17 = (double)iVar10;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x39:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[8];
      pdVar17 = (double *)(local_68[8] + 8);
      local_34 = (double)(__int64)CONCAT44(local_8,(undefined4)local_34);
      do {
        if (*pdVar17 < _DAT_006ccaf8) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd7,"imaginary square root");
          pdVar15 = local_8;
        }
        if (*pdVar17 == 0.0) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd9,"division by zero");
          pdVar15 = local_8;
        }
        *(double *)((int)pdVar17 + iVar10) = _DAT_006ccb10 / SQRT(*pdVar17);
        pdVar17 = pdVar17 + 2;
        iVar16 = (*(undefined4 *)((char *)&(local_34) + 4)) + -1;
        local_34 = (double)(__int64)CONCAT44(iVar16,(undefined4)local_34);
        uVar8 = local_68[0xc];
      } while (iVar16 != 0);
    }
    break;
  case 0x3a:
    if (local_8 != (double *)0x0) {
      puVar12 = (undefined8 *)((int)param_3 + 8);
      iVar10 = local_68[8] - (int)param_3;
      pdVar17 = local_8;
      do {
        if (_DAT_006ccaf8 <= *(double *)((int)puVar12 + iVar10)) {
          if (*(double *)((int)puVar12 + iVar10) <= _DAT_006ccb10) {
            uVar21 = *(undefined8 *)((int)puVar12 + iVar10);
          }
          else {
            uVar21 = 0x3ff0000000000000;
          }
        }
        else {
          uVar21 = 0;
        }
        *puVar12 = uVar21;
        puVar12 = puVar12 + 2;
        pdVar17 = (double *)((int)pdVar17 + -1);
      } while (pdVar17 != (double *)0x0);
    }
    break;
  case 0x3b:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        dVar4 = _DAT_0069f3c8;
        if (dVar3 <= *(double *)((int)pdVar17 + (local_68[8] - (int)param_3))) {
          if (*(double *)((int)pdVar17 + (local_68[8] - (int)param_3)) <= dVar3) {
            dVar4 = 0.0;
          }
          else {
            dVar4 = 1.0;
          }
        }
        *pdVar17 = dVar4;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x3c:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        fVar20 = (float10)fsin((float10)*(double *)((int)pdVar17 + (local_68[8] - (int)param_3)));
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x3e:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      param_3 = local_8;
      do {
        fVar20 = (float10)FUN_006737f8();
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x3f:
    if (local_8 != (double *)0x0) {
      local_10 = (double *)(local_68[8] - local_68[10]);
      pdVar17 = (double *)(local_68[10] + 8);
      iVar10 = (int)param_3 - local_68[10];
      param_3 = local_8;
      do {
        if (*(double *)((int)pdVar17 + (int)local_10) <= *pdVar17) {
          if (*(double *)((int)pdVar17 + (local_68[9] - local_68[10])) <= *pdVar17) {
            uVar21 = 0x3ff0000000000000;
            goto LAB_005be2b3;
          }
          dVar4 = (*pdVar17 - *(double *)((int)pdVar17 + (int)local_10)) /
                  (*(double *)((int)pdVar17 + (local_68[9] - local_68[10])) -
                  *(double *)((int)pdVar17 + (int)local_10));
          dVar3 = dVar4 * dVar4 * dVar4;
          *(double *)((int)pdVar17 + iVar10) = _DAT_0069f338 * dVar4 * dVar4 - (dVar3 + dVar3);
        }
        else {
          uVar21 = 0;
LAB_005be2b3:
          *(undefined8 *)((int)pdVar17 + iVar10) = uVar21;
        }
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x40:
    if (local_8 != (double *)0x0) {
      iVar10 = (int)param_3 - local_68[8];
      pdVar17 = (double *)(local_68[8] + 8);
      local_34 = (double)(__int64)CONCAT44(local_8,(undefined4)local_34);
      do {
        if (*pdVar17 < _DAT_006ccaf8) {
          FUN_005ba1d9(local_c,param_2 + 0x30,0xbd7,"imaginary square root");
          pdVar15 = local_8;
        }
        *(double *)(iVar10 + (int)pdVar17) = SQRT(*pdVar17);
        pdVar17 = pdVar17 + 2;
        iVar16 = (*(undefined4 *)((char *)&(local_34) + 4)) + -1;
        local_34 = (double)(__int64)CONCAT44(iVar16,(undefined4)local_34);
        uVar8 = local_68[0xc];
      } while (iVar16 != 0);
    }
    break;
  case 0x41:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)(local_68[8] + 8);
      iVar10 = (int)param_3 - local_68[8];
      param_3 = local_8;
      do {
        if (*(double *)((int)pdVar17 + (local_68[9] - local_68[8])) < *pdVar17) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0x3ff0000000000000;
        }
        *(undefined8 *)(iVar10 + (int)pdVar17) = uVar21;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x42:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      pdVar18 = local_8;
      do {
        fVar20 = (float10)fptan((float10)*(double *)((int)pdVar17 + (local_68[8] - (int)param_3)));
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        pdVar18 = (double *)((int)pdVar18 + -1);
      } while (pdVar18 != (double *)0x0);
    }
    break;
  case 0x43:
    if (local_8 != (double *)0x0) {
      pdVar17 = (double *)((int)param_3 + 8);
      param_3 = local_8;
      do {
        fVar20 = (float10)FUN_00673809();
        *pdVar17 = (double)fVar20;
        pdVar17 = pdVar17 + 2;
        param_3 = (double *)((int)param_3 + -1);
        uVar8 = local_68[0xc];
        pdVar15 = local_8;
      } while (param_3 != (double *)0x0);
    }
    break;
  case 0x54:
    local_10 = (double *)0x0;
    if (*(int *)(local_68[4] + 0x18) != 0) {
      uVar13 = *(uint *)(local_68[4] + 0x14);
      do {
        param_3 = (double *)0x0;
        if (uVar13 != 0) {
          do {
            iVar10 = *(int *)(local_68[4] + 0x18) * (int)param_3;
            iVar16 = *(int *)(param_2 + 0x18) * (int)local_10 + (int)param_3;
            param_3 = (double *)((int)param_3 + 1);
            *(undefined8 *)(iVar16 * 0x10 + 8 + iVar19) =
                 *(undefined8 *)((int)(iVar10 + (int)local_10) * 0x10 + 8 + local_68[8]);
            uVar13 = *(uint *)(local_68[4] + 0x14);
          } while ((unsigned int)(uintptr_t)param_3 < uVar13);
        }
        local_10 = (double *)((int)local_10 + 1);
      } while (local_10 < *(double **)(local_68[4] + 0x18));
    }
    break;
  case 0x55:
    *(double *)((int)param_3 + 8) = *(double *)(local_68[8] + 0x28) * _DAT_0069f330;
    *(double *)((int)param_3 + 0x18) = *(double *)(local_68[8] + 0x18) * dVar4;
    *(double *)((int)param_3 + 0x28) = *(double *)(local_68[8] + 8) * dVar4;
    *(double *)((int)param_3 + 0x38) = *(double *)(local_68[8] + 0x38) * dVar4;
  }
  do {
    uVar8 = *(int *)(uVar8 + 0xc);
    if (uVar8 == 0) {
      param_3 = (double *)0x0;
      if (pdVar15 == (double *)0x0) goto LAB_005be4b7;
      goto LAB_005be491;
    }
  } while (*(int *)(uVar8 + 8) == 0);
switchD_005bd37f_caseD_9:
  iVar10 = -0x7fffbffb;
LAB_005be4c0:
  uVar8 = 0;
  do {
    _free((void *)local_68[uVar8 + 8]);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  return iVar10;
  while( true ) {
    param_3 = (double *)((int)param_3 + 1);
    iVar19 = iVar19 + 0x10;
    if (local_8 <= param_3) break;
LAB_005be491:
    iVar10 = FUN_005bcf79(iVar19,(int)*(undefined8 *)(iVar19 + 8),
                          (int)((ulonglong)*(undefined8 *)(iVar19 + 8) >> 0x20),param_2 + 0x30);
    if (iVar10 < 0) goto LAB_005be4c0;
  }
LAB_005be4b7:
  iVar10 = 0;
  goto LAB_005be4c0;
}
