/* spd-match: far pct=4.74 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_02/attempt4_c2520_pass_a */
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

int __cdecl FUN_005ba1d9();
int __cdecl FUN_005baec2();
int __cdecl FUN_005bb002();
int __cdecl FUN_005bcdf7();
int __cdecl FUN_005bcf1c();
int __cdecl FUN_005bcf79();
int __cdecl FUN_005bd234();
int __cdecl FUN_0067381a();
extern int _DAT_006ccaf8;
extern void LAB_005bf5c4(void);
extern void LAB_005bf5f1(void);
extern void LAB_005bfa79(void);
extern void LAB_005bfb76(void);
extern void LAB_005bfb7b(void);
extern void LAB_005bfb81(void);
extern void LAB_005bfc2e(void);
extern void LAB_005bfc62(void);
extern void LAB_005bfc6b(void);
extern void LAB_005bfc76(void);
extern void LAB_005bfcc8(void);

int FUN_005bf509(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double *pdVar9;
  int iVar10;
  bool bVar11;
  byte bVar12;
  float10 fVar13;
  undefined8 uVar14;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  iVar10 = (int)param_1;
  if ((param_1 == (undefined4 *)0x0) || (*(int *)((int)param_1 + 4) != 0xc)) {
    return -0x7fffbffb;
  }
  uVar7 = *(int *)((int)param_1 + 0x14) * *(int *)((int)param_1 + 0x18);
  iVar2 = FUN_005baec2(*(undefined4 *)((int)param_1 + 0x10),param_2);
  uVar4 = (uint)local_18;
  if (uVar7 - iVar2 != 0) {
    return -0x7fffbffb;
  }
  iVar2 = *(int *)((int)param_1 + 0x1c);
  if (1 < iVar2) {
    if (iVar2 < 4) {
      return -0x7fffbffb;
    }
    if (0x13 < iVar2) {
      if (iVar2 < 0x16) {
        return -0x7fffbffb;
      }
      if (iVar2 == 0x19) {
        return -0x7fffbffb;
      }
      if (iVar2 == 0x1a) {
        iVar10 = FUN_005bd234(param_1,param_2);
        return iVar10;
      }
      if (iVar2 == 0x1b) {
        return -0x7fffbffb;
      }
    }
  }
  uVar8 = *(uint *)((int)param_1 + 0x20);
  local_2c = 0;
  *(double *)&local_20 = (double)(__int64)(ulonglong)(uint)local_20;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_18 = (double)(__int64)(ulonglong)(uint)local_18;
  local_24 = 0;
  uVar6 = 0;
  if ((uVar8 != 0) && (*(int *)(uVar8 + 4) == 0xc)) {
    iVar2 = *(int *)(uVar8 + 0x18) * *(int *)(uVar8 + 0x14);
    local_18 = (double)(__int64)CONCAT44(iVar2,uVar4);
    local_2c = uVar8;
    local_c = (undefined4 *)_malloc(iVar2 * 0x10);
    uVar6 = uVar8;
    if (local_c != (undefined4 *)0x0) goto LAB_005bf5c4;
LAB_005bf5f1:
    iVar2 = -0x7ff8fff2;
    goto LAB_005bfcc8;
  }
LAB_005bf5c4:
  uVar4 = *(uint *)((int)param_1 + 0x24);
  uVar8 = 0;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 4) == 0xc)) {
    local_24 = *(int *)(uVar4 + 0x18) * *(int *)(uVar4 + 0x14);
    *(double *)&local_20 = (double)(__int64)CONCAT44(uVar4,(uint)local_20);
    local_10 = (undefined4 *)_malloc(local_24 * 0x10);
    uVar8 = uVar4;
    if (local_10 == (undefined4 *)0x0) goto LAB_005bf5f1;
  }
  if (*(int *)((int)param_1 + 0x28) == 0) {
    uVar4 = uVar6;
    if ((uVar8 != 0) && (iVar2 = FUN_005bf509(param_1, param_2), iVar2 < 0)) goto LAB_005bfcc8;
  }
  else {
    uVar4 = uVar8;
    if (uVar6 != 0) {
      iVar2 = FUN_005bf509(param_1, param_2);
      if (iVar2 < 0) goto LAB_005bfcc8;
      uVar4 = (*(undefined4 *)((char *)&(local_20) + 4));
    }
  }
  if ((uVar4 != 0) && (iVar2 = FUN_005bf509(param_1, param_2), iVar2 < 0)) goto LAB_005bfcc8;
  puVar5 = local_c;
  iVar2 = *(int *)((int)param_1 + 0x1c);
  if (iVar2 < 0) {
LAB_005bfa79:
    local_28 = 0;
    if ((*(undefined4 *)((char *)&(local_18) + 4)) != 0) {
      do {
        uVar14 = FUN_005bb002(puVar5 + 2,puVar5,(int)param_1 + 0x30);
        puVar5 = (undefined4 *)((ulonglong)uVar14 >> 0x20);
        iVar2 = (int)uVar14;
        if (iVar2 < 0) goto LAB_005bfcc8;
        local_28 = local_28 + 1;
        *puVar5 = 3;
        puVar5 = puVar5 + 4;
      } while (local_28 < (*(undefined4 *)((char *)&(local_18) + 4)));
    }
    local_28 = 0;
    if (local_24 != 0) {
      puVar5 = local_10;
      do {
        uVar14 = FUN_005bb002(puVar5 + 2,puVar5,(int)param_1 + 0x30);
        puVar5 = (undefined4 *)((ulonglong)uVar14 >> 0x20);
        iVar2 = (int)uVar14;
        if (iVar2 < 0) goto LAB_005bfcc8;
        local_28 = local_28 + 1;
        *puVar5 = 3;
        puVar5 = puVar5 + 4;
        uVar6 = local_2c;
      } while (local_28 < local_24);
    }
    if (((uVar6 != 0) && ((*(undefined4 *)((char *)&(local_18) + 4)) != uVar7)) ||
       (((*(undefined4 *)((char *)&(local_20) + 4)) != 0 && (local_24 != uVar7)))) goto switchD_005bfb69_default;
    local_24 = 0;
    if (uVar7 != 0) {
      local_2c = (int)local_c - (int)local_10;
      local_28 = param_2 - (int)local_10;
      pdVar9 = (double *)(local_10 + 2);
      do {
        if (local_c == (undefined4 *)0x0) {
          fVar13 = (float10)0;
        }
        else {
          fVar13 = (float10)*(double *)((int)pdVar9 + local_2c);
        }
        local_18 = (double)fVar13;
        if (local_10 == (undefined4 *)0x0) {
          *(double *)&local_20 = 0.0;
        }
        else {
          *(double *)&local_20 = *pdVar9;
        }
        switch(*(undefined4 *)((int)param_1 + 0x1c)) {
        case 4:
          bVar12 = (byte)((ushort)((ushort)(NAN(fVar13) || NAN((float10)_DAT_006ccaf8)) << 10) >> 8)
                   | (byte)((ushort)((ushort)(fVar13 == (float10)_DAT_006ccaf8) << 0xe) >> 8);
          goto LAB_005bfb76;
        case 5:
          fVar13 = -fVar13;
          break;
        case 6:
          break;
        case 7:
          fVar13 = fVar13 * (float10)(__int64)local_20;
          break;
        case 8:
          if (*(double *)&local_20 == 0.0) {
            FUN_005ba1d9(local_8,(int)param_1 + 0x30,0xbd9,"division by zero");
            fVar13 = (float10)(__int64)local_18;
          }
          fVar13 = fVar13 / (float10)(__int64)local_20;
          break;
        case 9:
          if (*(double *)&local_20 == 0.0) {
            FUN_005ba1d9(local_8,(int)param_1 + 0x30,0xbd9,"division by zero");
          }
          fVar13 = (float10)FUN_0067381a();
          break;
        case 10:
          fVar13 = fVar13 + (float10)(__int64)local_20;
          break;
        case 0xb:
          fVar13 = fVar13 - (float10)(__int64)local_20;
          break;
        case 0xc:
          bVar11 = (float10)(__int64)local_20 <= fVar13;
          goto LAB_005bfb7b;
        case 0xd:
          bVar11 = (float10)(__int64)local_20 < fVar13;
          goto LAB_005bfc2e;
        case 0xe:
          bVar11 = fVar13 < (float10)(__int64)*(double *)&local_20 == (fVar13 == (float10)(__int64)local_20);
          goto LAB_005bfb7b;
        case 0xf:
          bVar11 = (float10)(__int64)local_20 <= fVar13;
LAB_005bfc2e:
          if (!bVar11) goto LAB_005bfb81;
          goto LAB_005bfc76;
        case 0x10:
          bVar12 = (byte)((ushort)((ushort)(NAN(fVar13) || NAN((float10)(__int64)local_20)) << 10) >> 8) |
                   (byte)((ushort)((ushort)(fVar13 == (float10)(__int64)local_20) << 0xe) >> 8);
LAB_005bfb76:
          bVar11 = (POPCOUNT(bVar12) & 1U) == 0;
LAB_005bfb7b:
          if (bVar11) {
LAB_005bfb81:
            fVar13 = (float10)0;
          }
          else {
LAB_005bfc76:
            fVar13 = (float10)1;
          }
          break;
        case 0x11:
          bVar12 = (byte)((ushort)((ushort)(NAN(fVar13) || NAN((float10)(__int64)local_20)) << 10) >> 8) |
                   (byte)((ushort)((ushort)(fVar13 == (float10)(__int64)local_20) << 0xe) >> 8);
LAB_005bfc6b:
          if ((POPCOUNT(bVar12) & 1U) == 0) goto LAB_005bfc76;
          goto LAB_005bfb81;
        case 0x12:
          if (fVar13 != (float10)_DAT_006ccaf8) {
LAB_005bfc62:
            bVar12 = (byte)((ushort)((ushort)(NAN(local_20) || NAN(_DAT_006ccaf8)) << 10) >> 8) |
                     (byte)((ushort)((ushort)(*(double *)&local_20 == _DAT_006ccaf8) << 0xe) >> 8);
            goto LAB_005bfc6b;
          }
          goto LAB_005bfb81;
        case 0x13:
          if (fVar13 == (float10)_DAT_006ccaf8) goto LAB_005bfc62;
          goto LAB_005bfc76;
        default:
          goto switchD_005bfb69_default;
        }
        local_24 = local_24 + 1;
        *(double *)((int)pdVar9 + local_28) = (double)fVar13;
        pdVar9 = pdVar9 + 2;
      } while (local_24 < uVar7);
    }
    local_2c = 0;
    if (uVar7 != 0) {
      do {
        iVar2 = FUN_005bcf79(param_2,*(undefined8 *)(param_2 + 8),(int)param_1 + 0x30);
        if (iVar2 < 0) goto LAB_005bfcc8;
        local_2c = local_2c + 1;
        param_2 = param_2 + 0x10;
      } while (local_2c < uVar7);
    }
  }
  else if (iVar2 < 2) {
    if (uVar6 == 0) {
      iVar10 = *(int *)((int)param_1 + 0x20);
      if (iVar10 == 0) {
switchD_005bfb69_default:
        iVar2 = -0x7fffbffb;
        goto LAB_005bfcc8;
      }
      if (*(int *)(iVar10 + 4) == 0xd) {
        if (*(int *)(iVar10 + 0x10) == 6) goto switchD_005bfb69_default;
        iVar2 = FUN_005bcdf7(param_2,(int *)(iVar10 + 0x10),(int)param_1 + 0x30);
        if (iVar2 < 0) goto LAB_005bfcc8;
      }
      else {
        if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 1)) goto switchD_005bfb69_default;
        do {
          iVar2 = *(int *)(iVar10 + 8);
          if (iVar2 != 0) {
            if (*(int *)(iVar2 + 4) == 0xd) {
              if (*(int *)(iVar2 + 0x10) == 6) goto switchD_005bfb69_default;
              iVar2 = FUN_005bcdf7(param_2,(int *)(iVar2 + 0x10),(int)param_1 + 0x30);
              if (iVar2 < 0) goto LAB_005bfcc8;
              param_2 = param_2 + 0x10;
            }
            else if ((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0xc)) {
              iVar2 = FUN_005bf509(param_1, param_2);
              if (iVar2 < 0) goto LAB_005bfcc8;
              param_2 = param_2 + *(int *)(*(int *)(iVar10 + 8) + 0x18) *
                                  *(int *)(*(int *)(iVar10 + 8) + 0x14) * 0x10;
            }
          }
          iVar10 = *(int *)(iVar10 + 0xc);
        } while (iVar10 != 0);
      }
    }
    else if ((*(undefined4 *)((char *)&(local_18) + 4)) == 1) {
      local_24 = 0;
      if (uVar7 != 0) {
        do {
          iVar2 = FUN_005bcdf7(param_2,local_c,(int)param_1 + 0x30);
          if (iVar2 < 0) goto LAB_005bfcc8;
          local_24 = local_24 + 1;
          param_2 = param_2 + 0x10;
        } while (local_24 < uVar7);
      }
    }
    else if (((uVar7 == (*(undefined4 *)((char *)&(local_18) + 4))) ||
             (puVar1 = (uint *)((int)param_1 + 0x14), *(uint *)(uVar6 + 0x14) < *puVar1)) ||
            (uVar4 = *(uint *)((int)param_1 + 0x18), *(uint *)(uVar6 + 0x18) < uVar4)) {
      local_24 = 0;
      if (uVar7 != 0) {
        *(double *)&local_20 = (double)(__int64)CONCAT44((int)param_1 + 0x30,(uint)local_20);
        iVar10 = param_2;
        do {
          iVar2 = FUN_005bcdf7(iVar10,(int)puVar5 + (iVar10 - param_2),(*(undefined4 *)((char *)&(local_20) + 4)));
          if (iVar2 < 0) goto LAB_005bfcc8;
          local_24 = local_24 + 1;
          iVar10 = iVar10 + 0x10;
        } while (local_24 < uVar7);
      }
    }
    else {
      param_1 = (undefined4 *)0x0;
      if (*puVar1 != 0) {
        do {
          uVar7 = 0;
          if (uVar4 != 0) {
            do {
              iVar2 = FUN_005bcdf7((uVar4 * (int)param_1 + uVar7) * 0x10 + param_2,
                                   local_c + (*(int *)(local_2c + 0x18) * (int)param_1 + uVar7) * 4,
                                   iVar10 + 0x30);
              if (iVar2 < 0) goto LAB_005bfcc8;
              uVar4 = *(uint *)(iVar10 + 0x18);
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar4);
          }
          param_1 = (undefined4 *)((int)param_1 + 1);
        } while (param_1 < *(uint *)(iVar10 + 0x14));
      }
    }
  }
  else if (iVar2 == 0x16) {
    iVar10 = (int)param_1 + 0x30;
    *(double *)&local_20 = (double)(__int64)CONCAT44(iVar10,(uint)local_20);
    iVar2 = FUN_005bcf1c(&local_2c,local_10,iVar10);
    if (iVar2 < 0) goto LAB_005bfcc8;
    if ((*(undefined4 *)((char *)&(local_18) + 4)) <= local_2c * uVar7) {
      FUN_005ba1d9(local_8,iVar10,0xbd6,"array index out of bounds");
      goto switchD_005bfb69_default;
    }
    local_24 = 0;
    if (uVar7 != 0) {
      puVar5 = local_c + local_2c * uVar7 * 4;
      do {
        iVar2 = FUN_005bcdf7(param_2,puVar5,(*(undefined4 *)((char *)&(local_20) + 4)));
        if (iVar2 < 0) goto LAB_005bfcc8;
        local_24 = local_24 + 1;
        puVar5 = puVar5 + 4;
        param_2 = param_2 + 0x10;
      } while (local_24 < uVar7);
    }
  }
  else if (iVar2 == 0x17) {
    iVar10 = *(int *)((int)param_1 + 0x24);
    if (*(int *)(iVar10 + 4) == 0xd) {
      iVar2 = FUN_005bcf1c(&local_2c,iVar10 + 0x10,(int)param_1 + 0x30);
      if (iVar2 < 0) goto LAB_005bfcc8;
      local_24 = 0;
      if (uVar7 != 0) {
        puVar5 = local_c + local_2c * 4;
        do {
          iVar2 = FUN_005bcdf7(param_2,puVar5,(int)param_1 + 0x30);
          if (iVar2 < 0) goto LAB_005bfcc8;
          local_24 = local_24 + 1;
          param_2 = param_2 + 0x10;
          puVar5 = puVar5 + 4;
        } while (local_24 < uVar7);
      }
    }
    else {
      if (*(int *)(iVar10 + 4) != 1) goto switchD_005bfb69_default;
      local_24 = 0;
      if (uVar7 != 0) {
        do {
          iVar2 = FUN_005bcf1c(&local_2c,*(int *)(iVar10 + 8) + 0x10,(int)param_1 + 0x30);
          if ((iVar2 < 0) ||
             (iVar2 = FUN_005bcdf7(param_2,local_c + local_2c * 4,(int)param_1 + 0x30), iVar2 < 0))
          goto LAB_005bfcc8;
          local_24 = local_24 + 1;
          param_2 = param_2 + 0x10;
          iVar10 = *(int *)(iVar10 + 0xc);
        } while (local_24 < uVar7);
      }
    }
  }
  else {
    if (iVar2 != 0x18) goto LAB_005bfa79;
    local_24 = 0;
    if ((*(undefined4 *)((char *)&(local_18) + 4)) != 0) {
      iVar10 = (int)param_1 + 0x30;
      param_1 = local_10 + uVar7 * 4;
      local_2c = (int)local_c - (int)local_10;
      local_28 = param_2 - (int)local_10;
      puVar5 = local_10;
      do {
        iVar2 = FUN_005bb002(&local_20,local_2c + (int)puVar5,iVar10);
        if (iVar2 < 0) goto LAB_005bfcc8;
        puVar3 = puVar5;
        if (*(double *)&local_20 == _DAT_006ccaf8) {
          puVar3 = param_1;
        }
        iVar2 = FUN_005bcdf7(local_28 + (int)puVar5,puVar3,iVar10);
        if (iVar2 < 0) goto LAB_005bfcc8;
        local_24 = local_24 + 1;
        param_1 = param_1 + 4;
        puVar5 = puVar5 + 4;
      } while (local_24 < (*(undefined4 *)((char *)&(local_18) + 4)));
    }
  }
  iVar2 = 0;
LAB_005bfcc8:
  _free(local_10);
  _free(local_c);
  return iVar2;
}
