/* spd-match: far pct=6.50 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_06/attempt4_r06_recipe */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif
long __cdecl __ftol(void);

int __cdecl FUN_005d91c9(...);
int __cdecl FUN_005d9413(...);
int __cdecl FUN_005d9cc7(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d9fa1(...);
int __cdecl FUN_005da405(...);
int __cdecl FUN_005dbae8(...);
int __cdecl FUN_005dc68d(...);
int __cdecl FUN_005dca6a(...);
int __cdecl FUN_005e1f75(...);
int __cdecl FUN_005e49cf(...);
int __cdecl FUN_005f7478(...);
int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005f7616(...);
int __cdecl FUN_005f762c(...);
int __cdecl FUN_005f7c63(...);
extern int DAT_0069ed74;
extern int _DAT_0069f210;
extern void LAB_005e2b5e(...);
extern void LAB_005e2bc0(...);
extern void LAB_005e2d3a(...);
extern void LAB_005e2d64(...);
extern void LAB_005e2dc6(...);
extern void LAB_005e2f75(...);
extern void LAB_005e2f7e(...);
extern void LAB_005e2f88(...);
extern void LAB_005e3041(...);
extern void LAB_005e3164(...);
extern void LAB_005e351c(...);
extern void LAB_005e36db(...);
extern void LAB_005e3762(...);
extern void LAB_005e3a4f(...);
extern void LAB_005e3bc1(...);
extern void LAB_005e41ad(...);
extern void LAB_005e4479(...);
extern void LAB_005e4661(...);
extern void LAB_005e48ee(...);
extern void LAB_005e490c(...);
extern void LAB_005e4915(...);
extern void LAB_005e4917(...);
extern void LAB_005e4925(...);

struct ThisCallBox {
  int FUN_005e2a38(uint *param_2, uint *param_3);
};
int ThisCallBox::FUN_005e2a38(uint *param_2, uint *param_3) {
  byte *pbVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  size_t _Size;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  char *pcVar20;
  uint *local_a4;
  uint *local_a0;
  undefined4 local_9c;
  uint uStack_98;
  uint local_94;
  uint *local_90;
  uint *local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  uint *local_78;
  int local_74;
  uint *local_70 [10];
  uint local_48 [2];
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  if (param_2 == (uint *)0x0) {
    if (param_3 != (uint *)0x0) {
      return -0x7fffbffb;
    }
    return 0;
  }
  if (*(int *)((int)param_2 + 4) != 0xc) {
    return -0x7fffbffb;
  }
  local_8 = (uint *)(*(int *)((int)param_2 + 0x14) * *(int *)((int)param_2 + 0x18));
  puVar12 = *(uint **)((int)param_2 + 0x20);
  local_c = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_14 = (uint *)0x0;
  local_28 = (uint *)0x0;
  local_30 = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_8c = (uint *)0x0;
  local_90 = (uint *)0x0;
  if ((puVar12 != (uint *)0x0) && (puVar12[1] == 0xc)) {
    local_c = (uint *)(puVar12[6] * puVar12[5]);
    local_10 = puVar12;
  }
  puVar12 = *(uint **)((int)param_2 + 0x24);
  if ((puVar12 != (uint *)0x0) && (puVar12[1] == 0xc)) {
    local_2c = (uint *)(puVar12[6] * puVar12[5]);
    local_20 = puVar12;
  }
  if (((local_10 != (uint *)0x0) && (local_14 = (unsigned int *)_malloc((int)local_c << 2), local_14 == (uint *)0x0)
      ) || ((local_20 != (uint *)0x0 &&
            (local_28 = (unsigned int *)_malloc((int)local_2c << 2), local_28 == (uint *)0x0)))) {
LAB_005e4661:
    FUN_005d9de1(((int)this),param_2,0);
    iVar3 = -0x7ff8fff2;
    goto LAB_005e4925;
  }
  if (*(int *)((int)param_2 + 0x28) == 0) {
    if ((local_20 != (uint *)0x0) && (iVar3 = FUN_005e2a38(local_20, (uint *)0), iVar3 < 0)) goto LAB_005e4925;
    if (local_10 != (uint *)0x0) {
      uVar17 = CONCAT44(local_14,local_10);
LAB_005e2b5e:
      iVar3 = FUN_005e2a38((uint *)uVar17, (uint *)0);
      if (iVar3 < 0) goto LAB_005e4925;
    }
  }
  else {
    if ((local_10 != (uint *)0x0) && (iVar3 = FUN_005e2a38(local_10, (uint *)0), iVar3 < 0)) goto LAB_005e4925;
    if (local_20 != (uint *)0x0) {
      uVar17 = CONCAT44(local_28,local_20);
      goto LAB_005e2b5e;
    }
  }
  puVar12 = local_8;
  puVar5 = param_3;
  switch(*(undefined4 *)((int)param_2 + 0x1c)) {
  case 0:
  case 1:
    if (local_10 == (uint *)0x0) {
      iVar3 = FUN_005e49cf(*(undefined4 *)((int)param_2 + 0x20),param_3,local_8);
      goto LAB_005e2f88;
    }
    if (param_3 != (uint *)0x0) {
      if (local_c == (uint *)0x1) {
        puVar12 = (uint *)0x0;
        if (local_8 != (uint *)0x0) {
          do {
            param_3[(int)puVar12] = *local_14;
            puVar12 = (uint *)((int)puVar12 + 1);
          } while (puVar12 < local_8);
        }
      }
      else {
        puVar9 = local_8;
        puVar12 = local_14;
        if ((local_8 == local_c) ||
           ((uVar10 = *(uint *)((int)param_2 + 0x14), uVar10 == 1 && (local_8 < local_c))))
        goto code_r0x005e41b9;
        if ((local_10[5] < uVar10) || (local_10[6] < *(uint *)((int)param_2 + 0x18))) break;
        uVar13 = 0;
        if (uVar10 != 0) {
          do {
            iVar15 = local_10[6] * uVar13;
            iVar3 = *(int *)((int)param_2 + 0x18);
            iVar8 = iVar3 * uVar13;
            uVar13 = uVar13 + 1;
            puVar12 = local_14 + iVar15;
            puVar5 = param_3 + iVar8;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar5 = puVar5 + 1;
            }
          } while (uVar13 < *(uint *)((int)param_2 + 0x14));
        }
      }
      goto LAB_005e2bc0;
    }
    goto LAB_005e490c;
  case 2:
    if (local_10 != (uint *)0x0) {
      local_c = (uint *)((int)local_8 << 2);
      local_28 = (unsigned int *)_malloc((size_t)local_c);
      if (local_28 == (uint *)0x0) goto LAB_005e4661;
      puVar5 = (uint *)0x0;
      if (puVar12 != (uint *)0x0) {
        do {
          local_28[(int)puVar5] = *(uint *)(((int)this) + 0x20);
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (puVar5 < puVar12);
      }
LAB_005e2dc6:
      iVar3 = FUN_005d9fa1(param_2,(uint)local_8 & 0xffffff | 0x24000000,local_14,local_14,local_28,
                           0);
      if (iVar3 < 0) goto LAB_005e4925;
      if (param_3 != (uint *)0x0) {
        puVar12 = local_14;
        puVar5 = param_3;
        for (uVar10 = (uint)local_c >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar10 = (uint)local_c & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(char *)puVar5 = (char)*puVar12;
          puVar12 = (uint *)((int)puVar12 + 1);
          puVar5 = (uint *)((int)puVar5 + 1);
        }
        goto LAB_005e2bc0;
      }
      goto LAB_005e490c;
    }
    break;
  case 3:
    if (local_10 != (uint *)0x0) {
      local_c = (uint *)((int)local_8 << 2);
      local_28 = (unsigned int *)_malloc((size_t)local_c);
      if (local_28 != (uint *)0x0) {
        puVar5 = (uint *)0x0;
        if (puVar12 != (uint *)0x0) {
          do {
            local_28[(int)puVar5] = *(uint *)(((int)this) + 0x28);
            puVar5 = (uint *)((int)puVar5 + 1);
          } while (puVar5 < puVar12);
        }
        goto LAB_005e2dc6;
      }
      goto LAB_005e4661;
    }
    break;
  case 4:
    if (local_10 != (uint *)0x0) {
      if (param_3 == (uint *)0x0) goto LAB_005e490c;
      local_30 = (unsigned int *)_malloc((int)local_8 * 0xc);
      if (local_30 == (uint *)0x0) goto LAB_005e4661;
      uVar10 = 0;
      puVar5 = local_30;
      do {
        local_70[uVar10] = puVar5;
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + (int)puVar12;
      } while (uVar10 < 3);
      iVar3 = FUN_005d91c9(local_70[0],local_8);
      if ((((iVar3 < 0) || (iVar3 = FUN_005d91c9(local_70[1],local_8), iVar3 < 0)) ||
          (iVar3 = FUN_005d91c9(local_70[2],local_8), iVar3 < 0)) ||
         (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)) goto LAB_005e4925;
      local_c = (uint *)((uint)local_8 & 0xffffff);
      local_10 = (uint *)((uint)local_c | 0x11000000);
      iVar3 = FUN_005d9fa1(param_2,local_10,local_70[0],local_14,0,0);
      if ((iVar3 < 0) ||
         (iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x21000000,local_70[1],local_14,local_70[0],4
                              ), iVar3 < 0)) goto LAB_005e4925;
      iVar3 = FUN_005d9fa1(param_2,local_10,local_70[2],local_70[1],0,8);
      puVar12 = local_70[2];
      puVar9 = local_c;
joined_r0x005e3326:
      local_c = puVar9;
      if (iVar3 < 0) goto LAB_005e4925;
LAB_005e2f75:
      uVar18 = CONCAT44(0x2000017,local_70[1]);
      puVar9 = (uint *)((uint)puVar9 | 0x23000000);
LAB_005e2f7e:
      iVar3 = FUN_005d9fa1(param_2,puVar9,param_3,puVar12,uVar18);
      goto LAB_005e2f88;
    }
    break;
  case 5:
    if (local_10 != (uint *)0x0) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        if (iVar3 < 0) goto LAB_005e4925;
        uVar18 = 0;
        puVar9 = (uint *)((uint)local_8 & 0xffffff | 0x11000000);
        puVar12 = local_14;
        goto LAB_005e2f7e;
      }
      goto LAB_005e490c;
    }
    break;
  case 6:
    if (local_10 != (uint *)0x0) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        puVar12 = local_14;
joined_r0x005e42c1:
        if (iVar3 < 0) goto LAB_005e4925;
        uVar18 = 0;
        puVar9 = (uint *)((uint)local_8 & 0xffffff | 0x10000000);
        goto LAB_005e2f7e;
      }
      goto LAB_005e490c;
    }
    break;
  case 7:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        if (iVar3 < 0) goto LAB_005e4925;
        puVar9 = (uint *)((uint)local_8 & 0xffffff);
        puVar12 = local_28;
LAB_005e3762:
        uVar18 = ZEXT48(puVar12);
        puVar9 = (uint *)((uint)puVar9 | 0x25000000);
        puVar12 = local_14;
        goto LAB_005e2f7e;
      }
      goto LAB_005e490c;
    }
    break;
  case 8:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        local_30 = (unsigned int *)_malloc((int)local_8 << 2);
        if (local_30 != (uint *)0x0) {
          iVar3 = FUN_005d91c9(local_30,local_8);
          if ((iVar3 < 0) || (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)) goto LAB_005e4925;
          local_c = (uint *)((uint)local_8 & 0xffffff);
          iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x12000000,local_30,local_28,0,0);
          puVar9 = local_c;
          puVar12 = local_30;
          if (iVar3 < 0) goto LAB_005e4925;
          goto LAB_005e3762;
        }
        goto LAB_005e4661;
      }
      goto LAB_005e490c;
    }
    break;
  case 9:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        puVar5 = (unsigned int *)_malloc((int)local_8 * 0xc);
        local_30 = puVar5;
        if (puVar5 != (uint *)0x0) {
          uVar10 = 0;
          do {
            local_70[uVar10] = puVar5;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + (int)puVar12;
          } while (uVar10 < 3);
          uVar10 = 0;
          do {
            uVar17 = FUN_005d91c9(local_70[uVar10],local_8);
            iVar3 = (int)uVar17;
            if (iVar3 < 0) goto LAB_005e4925;
            uVar10 = (int)((ulonglong)uVar17 >> 0x20) + 1;
          } while (uVar10 < 3);
          iVar3 = FUN_005d91c9(param_3,local_8);
          if (iVar3 < 0) goto LAB_005e4925;
          local_c = (uint *)((uint)local_8 & 0xffffff);
          iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x12000000,local_70[0],local_28,0,0);
          if (iVar3 < 0) goto LAB_005e4925;
          local_1c = (uint *)((uint)local_c | 0x25000000);
          iVar3 = FUN_005d9fa1(param_2,local_1c,local_70[1],local_14,local_70[0],0);
          if ((iVar3 < 0) ||
             (iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x13000000,local_70[2],local_70[1],0,4),
             iVar3 < 0)) goto LAB_005e4925;
          uVar18 = ZEXT48(local_70[2]);
          puVar9 = local_1c;
          puVar12 = local_28;
          goto LAB_005e2f7e;
        }
        goto LAB_005e4661;
      }
      goto LAB_005e490c;
    }
    break;
  case 10:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        if (iVar3 < 0) goto LAB_005e4925;
        puVar9 = (uint *)((uint)local_8 & 0xffffff);
        puVar12 = local_28;
LAB_005e3041:
        uVar18 = ZEXT48(puVar12);
        puVar9 = (uint *)((uint)puVar9 | 0x24000000);
        puVar12 = local_14;
        goto LAB_005e2f7e;
      }
      goto LAB_005e490c;
    }
    break;
  case 0xb:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        local_30 = (unsigned int *)_malloc((int)local_8 << 2);
        if (local_30 != (uint *)0x0) {
          iVar3 = FUN_005d91c9(local_30,local_8);
          if ((iVar3 < 0) || (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)) goto LAB_005e4925;
          local_c = (uint *)((uint)local_8 & 0xffffff);
          iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x11000000,local_30,local_28,0,0);
          puVar9 = local_c;
          puVar12 = local_30;
          if (iVar3 < 0) goto LAB_005e4925;
          goto LAB_005e3041;
        }
        goto LAB_005e4661;
      }
      goto LAB_005e490c;
    }
    break;
  case 0xc:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        puVar12 = local_14;
        puVar5 = local_28;
joined_r0x005e314b:
        if (iVar3 < 0) goto LAB_005e4925;
        puVar9 = (uint *)((uint)local_8 & 0xffffff);
LAB_005e3164:
        uVar18 = CONCAT44(0x2000017,puVar5);
        puVar9 = (uint *)((uint)puVar9 | 0x22000000);
        goto LAB_005e2f7e;
      }
      goto LAB_005e490c;
    }
    break;
  case 0xd:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        puVar12 = local_28;
        puVar5 = local_14;
        goto joined_r0x005e314b;
      }
      goto LAB_005e490c;
    }
    break;
  case 0xe:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        local_70[1] = local_14;
        puVar12 = local_28;
joined_r0x005e31d5:
        if (iVar3 < 0) goto LAB_005e4925;
        puVar9 = (uint *)((uint)local_8 & 0xffffff);
        goto LAB_005e2f75;
      }
      goto LAB_005e490c;
    }
    break;
  case 0xf:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        local_70[1] = local_28;
        puVar12 = local_14;
        goto joined_r0x005e31d5;
      }
      goto LAB_005e490c;
    }
    break;
  case 0x10:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        local_30 = (unsigned int *)_malloc((int)local_8 * 0x14);
        if (local_30 != (uint *)0x0) {
          uVar10 = 0;
          puVar5 = local_30;
          do {
            local_48[uVar10 - 1] = (uint)puVar5;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + (int)puVar12;
          } while (uVar10 < 5);
          iVar3 = FUN_005d91c9(local_30,(int)local_8 * 5);
          if ((iVar3 < 0) || (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)) goto LAB_005e4925;
          local_c = (uint *)((uint)local_8 & 0xffffff);
          local_10 = (uint *)((uint)local_c | 0x11000000);
          iVar3 = FUN_005d9fa1(param_2,local_10,local_70[9],local_28,0,0);
          if ((iVar3 < 0) ||
             (((iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x24000000,local_48[0],local_14,
                                     local_70[9],0), iVar3 < 0 ||
               (iVar3 = FUN_005d9fa1(param_2,local_10,local_48[1],local_48[0],0,0), iVar3 < 0)) ||
              (iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x21000000,local_40,local_48[0],
                                    local_48[1],4), iVar3 < 0)))) goto LAB_005e4925;
          iVar3 = FUN_005d9fa1(param_2,local_10,local_3c,local_40,0,8);
          local_70[1] = local_40;
          puVar12 = local_3c;
          puVar9 = local_c;
          goto joined_r0x005e3326;
        }
        goto LAB_005e4661;
      }
      goto LAB_005e490c;
    }
    break;
  case 0x11:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        local_30 = (unsigned int *)_malloc((int)local_8 * 0x14);
        if (local_30 == (uint *)0x0) goto LAB_005e4661;
        uVar10 = 0;
        puVar5 = local_30;
        do {
          local_48[uVar10 - 1] = (uint)puVar5;
          uVar10 = uVar10 + 1;
          puVar5 = puVar5 + (int)puVar12;
        } while (uVar10 < 5);
        iVar3 = FUN_005d91c9(local_30,(int)local_8 * 5);
        if ((iVar3 < 0) || (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)) goto LAB_005e4925;
        local_c = (uint *)((uint)local_8 & 0xffffff);
        local_10 = (uint *)((uint)local_c | 0x11000000);
        iVar3 = FUN_005d9fa1(param_2,local_10,local_70[9],local_28,0,0);
        if ((iVar3 < 0) ||
           (iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x24000000,local_48[0],local_14,local_70[9]
                                 ,0), iVar3 < 0)) goto LAB_005e4925;
LAB_005e351c:
        iVar3 = FUN_005d9fa1(param_2,local_10,local_48[1],local_48[0],0);
        if (iVar3 < 0) goto LAB_005e4925;
        uVar10 = (uint)local_c | 0x21000000;
        puVar12 = (uint *)local_48[0];
LAB_005e36db:
        iVar3 = FUN_005d9fa1(param_2,uVar10,local_40,puVar12,CONCAT44(4,local_48[1]));
        if ((iVar3 < 0) ||
           (iVar3 = FUN_005d9fa1(param_2,local_10,local_3c,local_40,0,8), puVar9 = local_c,
           puVar12 = local_3c, puVar5 = local_40, iVar3 < 0)) goto LAB_005e4925;
        goto LAB_005e3164;
      }
      goto LAB_005e490c;
    }
    break;
  case 0x12:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        local_30 = (unsigned int *)_malloc((int)local_8 << 4);
        if (local_30 != (uint *)0x0) {
          uVar10 = 0;
          puVar5 = local_30;
          do {
            local_48[uVar10] = (uint)puVar5;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + (int)puVar12;
          } while (uVar10 < 4);
          iVar3 = FUN_005d91c9(local_48[0],local_8);
          if ((((iVar3 < 0) || (iVar3 = FUN_005d91c9(local_48[1],local_8), iVar3 < 0)) ||
              (iVar3 = FUN_005d91c9(local_40,local_8), iVar3 < 0)) ||
             ((iVar3 = FUN_005d91c9(local_3c,local_8), iVar3 < 0 ||
              (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)))) goto LAB_005e4925;
          local_c = (uint *)((uint)local_8 & 0xffffff);
          iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x25000000,local_48[0],local_14,local_28,0);
          if (iVar3 < 0) goto LAB_005e4925;
          local_10 = (uint *)((uint)local_c | 0x11000000);
          goto LAB_005e351c;
        }
        goto LAB_005e4661;
      }
      goto LAB_005e490c;
    }
    break;
  case 0x13:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 != (uint *)0x0) {
        local_30 = (unsigned int *)_malloc((int)local_8 * 0x18);
        if (local_30 != (uint *)0x0) {
          uVar10 = 0;
          puVar5 = local_30;
          do {
            local_70[uVar10 + 8] = puVar5;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + (int)puVar12;
          } while (uVar10 < 6);
          iVar3 = FUN_005d91c9(local_70[8],local_8);
          if ((((iVar3 < 0) || (iVar3 = FUN_005d91c9(local_70[9],local_8), iVar3 < 0)) ||
              (iVar3 = FUN_005d91c9(local_48[0],local_8), iVar3 < 0)) ||
             (((iVar3 = FUN_005d91c9(local_48[1],local_8), iVar3 < 0 ||
               (iVar3 = FUN_005d91c9(local_40,local_8), iVar3 < 0)) ||
              ((iVar3 = FUN_005d91c9(local_3c,local_8), iVar3 < 0 ||
               (iVar3 = FUN_005d91c9(param_3,local_8), iVar3 < 0)))))) goto LAB_005e4925;
          local_c = (uint *)((uint)local_8 & 0xffffff);
          local_10 = (uint *)((uint)local_c | 0x11000000);
          iVar3 = FUN_005d9fa1(param_2,local_10,local_70[8],local_14,0,0);
          if (iVar3 < 0) goto LAB_005e4925;
          local_1c = (uint *)((uint)local_c | 0x21000000);
          iVar3 = FUN_005d9fa1(param_2,local_1c,local_70[9],local_14,local_70[8],4);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_005d9fa1(param_2,local_10,local_48[0],local_28,0,0), iVar3 < 0)) ||
             (iVar3 = FUN_005d9fa1(param_2,local_1c,local_48[1],local_28,local_48[0],4), iVar3 < 0))
          goto LAB_005e4925;
          uVar10 = (uint)local_c | 0x24000000;
          puVar12 = local_70[9];
          goto LAB_005e36db;
        }
        goto LAB_005e4661;
      }
      goto LAB_005e490c;
    }
    break;
  case 0x14:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (local_8 != (uint *)0x0) {
        piVar4 = (int *)FUN_005f762c();
        if ((piVar4 != (int *)0x0) && (*(int *)(*(int *)(((int)this) + 8) + 0x4c) == *piVar4))
        goto LAB_005e2d3a;
LAB_005e2d64:
        puVar9 = local_8;
        puVar12 = local_14;
        if (param_3 == (uint *)0x0) goto LAB_005e490c;
code_r0x005e41b9:
        for (; puVar9 != (uint *)0x0; puVar9 = (uint *)((int)puVar9 + -1)) {
          *puVar5 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar5 = puVar5 + 1;
        }
      }
      goto LAB_005e2bc0;
    }
    break;
  case 0x15:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (local_8 != (uint *)0x0) {
LAB_005e2d3a:
        iVar3 = FUN_005d9fa1(param_2,(uint)local_8 & 0xffffff | 0x10000000,local_14,local_28,0,0);
        if (iVar3 < 0) goto LAB_005e4925;
        goto LAB_005e2d64;
      }
      goto LAB_005e2bc0;
    }
    break;
  case 0x16:
    if (local_20 != (uint *)0x0) {
      if (local_c != (uint *)0x0) {
        iVar3 = FUN_005d9413(*local_28,local_70 + 1);
        if (iVar3 < 0) {
          if (local_8 == local_c) goto LAB_005e2d64;
          iVar3 = FUN_005dc68d(local_10[4],local_14,local_c);
          puVar12 = local_14;
          if (iVar3 < 0) goto LAB_005e4925;
          local_88 = 1;
          local_18 = (uint *)0x0;
          if (local_c != (uint *)0x0) {
            do {
              FUN_005f762c();
              iVar3 = FUN_005f7616();
              if ((*(byte *)(iVar3 + 4) & 0x20) == 0) {
                local_88 = 0;
                break;
              }
              local_18 = (uint *)((int)local_18 + 1);
            } while (local_18 < local_c);
          }
          local_34 = (uint *)0x1;
          local_74 = 1;
          if (local_88 == 0) {
            local_34 = (uint *)0x1;
            local_74 = 0;
LAB_005e3a4f:
            if ((local_34 == (uint *)0x0) && (local_74 == 0)) {
LAB_005e3bc1:
              FUN_005d9de1(((int)this),param_2,0xdac);
              iVar3 = -0x7fffbfff;
              goto LAB_005e4925;
            }
          }
          else {
            local_38 = local_8;
            if (local_8 < local_c) {
              local_24 = puVar12;
              do {
                local_18 = (uint *)FUN_005f762c();
                puVar5 = (uint *)FUN_005f762c();
                if (((*local_18 != *puVar5) || (local_18[2] != puVar5[2])) ||
                   (local_18[1] != puVar5[1])) {
                  local_34 = (uint *)0x0;
                }
                if ((*local_18 != *puVar5) || (local_18[3] != puVar5[3])) {
                  local_74 = 0;
                }
                local_38 = (uint *)((int)local_38 + 1);
                local_24 = local_24 + 1;
              } while (local_38 < local_c);
              goto LAB_005e3a4f;
            }
          }
          local_7c = 0xffffffff;
          local_20 = (uint *)0x1;
          if (local_34 == (uint *)0x0) {
            local_1c = (uint *)FUN_005f762c();
            iVar3 = FUN_005f762c();
            local_7c = local_1c[1];
            local_20 = (uint *)(*(int *)(iVar3 + 8) - local_1c[2]);
            local_18 = (uint *)0x0;
            if (local_c != (uint *)0x0) {
              do {
                piVar4 = (int *)FUN_005f762c();
                if ((piVar4[1] != local_7c) ||
                   ((*(byte *)(*(int *)(*(int *)(*(int *)(((int)this) + 8) + 0x10) + *piVar4 * 4) + 5) &
                    2) == 0)) goto LAB_005e3bc1;
                local_18 = (uint *)((int)local_18 + 1);
              } while (local_18 < local_c);
            }
            local_18 = (uint *)((int)local_8 * 2);
            if (local_18 < local_c) {
              local_38 = puVar12 + (int)local_8;
              local_24 = puVar12;
              do {
                uStack_98 = FUN_005f762c();
                local_1c = (uint *)FUN_005f762c();
                local_94 = FUN_005f762c();
                if (local_1c[2] - *(int *)(uStack_98 + 8) != *(int *)(local_94 + 8) - local_1c[2])
                goto LAB_005e3bc1;
                local_18 = (uint *)((int)local_18 + 1);
                local_24 = local_24 + 1;
                local_38 = local_38 + 1;
              } while (local_18 < local_c);
            }
            local_18 = (uint *)0x1;
            if ((uint *)0x1 < local_8) {
              local_24 = puVar12 + (int)local_8 + 1;
              do {
                local_1c = (uint *)FUN_005f762c();
                iVar3 = FUN_005f762c();
                if (local_20 != (uint *)(*(int *)(iVar3 + 8) - local_1c[2])) goto LAB_005e3bc1;
                local_18 = (uint *)((int)local_18 + 1);
                local_24 = local_24 + 1;
              } while (local_18 < local_8);
            }
          }
          else if (local_88 == 0) {
            local_20 = (uint *)((uint)local_c / (uint)local_8 + 3 >> 2);
          }
          if (param_3 != (uint *)0x0) {
            if ((local_20 == (uint *)0x1) && ((*(byte *)(*(int *)(((int)this) + 8) + 0x92) & 0x80) != 0)
               ) {
              local_70[3] = (uint *)*local_28;
            }
            else {
              dVar2 = (double)(int)local_20;
              if ((int)local_20 < 0) {
                dVar2 = dVar2 + _DAT_0069f210;
              }
              local_1c = (uint *)FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                                              dVar2);
              local_84 = 0xffffffff;
              local_80 = 0xffffffff;
              local_74 = -1;
              local_70[3] = (uint *)0xffffffff;
              iVar3 = FUN_005d9fa1(param_2,0x13000001,&local_84,local_28,0,4);
              if ((((iVar3 < 0) ||
                   (iVar3 = FUN_005d9fa1(param_2,0x11000001,&local_80,&local_84,0,8), iVar3 < 0)) ||
                  (iVar3 = FUN_005d9fa1(param_2,0x24000001,&local_74,&local_80,local_28,2),
                  iVar3 < 0)) ||
                 (iVar3 = FUN_005d9fa1(param_2,0x25000001,local_70 + 3,&local_74,&local_1c,2),
                 iVar3 < 0)) goto LAB_005e4925;
            }
            if (local_7c != 0xffffffff) {
              puVar6 = (undefined4 *)FUN_005f762c();
              *puVar6 = *(undefined4 *)(*(int *)(((int)this) + 8) + 0x60);
              local_84 = 0xffffffff;
              local_80 = 0xffffffff;
              local_74 = -1;
              local_a4 = (uint *)0xffffffff;
              iVar3 = FUN_005d9fa1(param_2,0x13000001,&local_84,&local_7c,0,4);
              if (((iVar3 < 0) ||
                  (iVar3 = FUN_005d9fa1(param_2,0x11000001,&local_80,&local_84,0,8), iVar3 < 0)) ||
                 ((iVar3 = FUN_005d9fa1(param_2,0x24000001,&local_74,&local_80,&local_7c,2),
                  iVar3 < 0 ||
                  (iVar3 = FUN_005d9fa1(param_2,0x24000001,&local_a4,&local_74,local_70 + 3,0),
                  iVar3 < 0)))) goto LAB_005e4925;
              local_70[3] = local_a4;
            }
            if (*(int *)(*(int *)(((int)this) + 8) + 0x74) == 0) {
              local_38 = local_70[3];
            }
            else {
              local_38 = (uint *)0xffffffff;
              iVar3 = FUN_005d9fa1(param_2,0x10000001,&local_38,local_70 + 3,0,
                                   -((uint *)0x1 < local_20) & 2);
              if (iVar3 < 0) goto LAB_005e4925;
              puVar6 = (undefined4 *)FUN_005f762c();
              *puVar6 = *(undefined4 *)(*(int *)(((int)this) + 8) + 100);
            }
            local_20 = (uint *)((uint)local_c / (uint)local_8);
            if (local_34 == (uint *)0x0) {
              local_18 = (uint *)0x0;
              if (local_8 != (uint *)0x0) {
                local_78 = (uint *)((int)param_3 - (int)local_14);
                local_34 = local_14;
                do {
                  puVar6 = (undefined4 *)((int)local_78 + (int)local_34);
                  uVar7 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x60),0,0,0);
                  *puVar6 = uVar7;
                  local_1c = (uint *)FUN_005f762c();
                  iVar3 = FUN_005f762c();
                  if (iVar3 == 0) goto LAB_005e4661;
                  FUN_005f7c63();
                  *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
                  *(uint **)(iVar3 + 4) = local_38;
                  *(undefined4 *)(iVar3 + 0x18) = 0x1f;
                  if (local_20 != (uint *)0x0) {
                    local_24 = local_34;
                    local_2c = local_20;
                    do {
                      iVar8 = FUN_005f762c();
                      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) & *(uint *)(iVar8 + 0x18);
                      local_24 = local_24 + (int)local_8;
                      local_2c = (uint *)((int)local_2c + -1);
                    } while (local_2c != (uint *)0x0);
                  }
                  local_18 = (uint *)((int)local_18 + 1);
                  local_34 = local_34 + 1;
                } while (local_18 < local_8);
              }
            }
            else {
              iVar3 = FUN_005d91c9(param_3,local_8);
              puVar12 = local_20;
              if (iVar3 < 0) goto LAB_005e4925;
              local_30 = (unsigned int *)_malloc((int)local_20 << 3);
              if (local_30 == (uint *)0x0) goto LAB_005e4661;
              local_1c = local_30 + (int)puVar12;
              local_2c = (uint *)0x0;
              if (local_8 != (uint *)0x0) {
                local_78 = (uint *)((int)param_3 - (int)local_14);
                local_34 = local_14;
                do {
                  puVar12 = local_20;
                  local_18 = (uint *)0x1f;
                  if (local_88 == 0) {
                    local_70[4] = (uint *)0x0;
                    if (local_20 != (uint *)0x0) {
                      local_10 = local_34;
                      do {
                        iVar3 = FUN_005f762c();
                        local_18 = (uint *)((uint)local_18 & *(uint *)(iVar3 + 0x18));
                        local_30[(int)local_70[4]] = *local_10;
                        local_10 = local_10 + (int)local_8;
                        local_70[4] = (uint *)((int)local_70[4] + 1);
                      } while (local_70[4] < local_20);
                    }
                  }
                  else {
                    local_48[0] = 0;
                    local_48[1] = 0;
                    local_40 = (uint *)0x0;
                    local_3c = (uint *)0x0;
                    if (local_20 != (uint *)0x0) {
                      local_c = (uint *)((int)local_8 << 2);
                      local_70[4] = local_20;
                      puVar12 = local_34;
                      do {
                        iVar3 = FUN_005f762c();
                        local_18 = (uint *)((uint)local_18 & *(uint *)(iVar3 + 0x18));
                        uVar10 = *puVar12;
                        puVar12 = (uint *)((int)puVar12 + (int)local_c);
                        local_70[4] = (uint *)((int)local_70[4] + -1);
                        local_30[*(int *)(iVar3 + 0xc)] = uVar10;
                        local_48[*(int *)(iVar3 + 0xc)] = 1;
                      } while (local_70[4] != (uint *)0x0);
                    }
                    puVar12 = (uint *)0x0;
                    iVar3 = (int)local_48 - (int)local_30;
                    local_24 = (uint *)((int)local_30 - (int)local_48);
                    local_10 = (uint *)0x0;
                    puVar5 = local_30;
                    do {
                      if (*(int *)(iVar3 + (int)puVar5) != 0) {
                        *(uint *)((int)local_48 + (int)(local_24 + (int)puVar12)) = *puVar5;
                        local_48[(int)puVar12] = (uint)local_10;
                        puVar12 = (uint *)((int)puVar12 + 1);
                      }
                      local_10 = (uint *)((int)local_10 + 1);
                      puVar5 = puVar5 + 1;
                    } while (local_10 < (uint *)0x4);
                  }
                  local_94 = (int)puVar12 + 3U >> 2;
                  puVar5 = (uint *)0x4;
                  if (puVar12 < (uint *)0x4) {
                    puVar5 = puVar12;
                  }
                  uStack_98 = FUN_005f7478(&DAT_0069ed74,0x3a9,local_94 * (int)local_20,puVar5);
                  if (uStack_98 == 0xffffffff) goto LAB_005e4661;
                  local_24 = (uint *)0x0;
                  if (local_20 != (uint *)0x0) {
                    local_c = (uint *)((int)local_8 << 2);
                    local_70[4] = (uint *)0x0;
                    local_a0 = local_34;
                    do {
                      local_70[2] = (uint *)FUN_005f762c();
                      local_10 = (uint *)0x0;
                      if (puVar12 != (uint *)0x0) {
                        do {
                          if (local_88 == 0) {
                            bVar16 = local_24 == local_10;
                          }
                          else {
                            bVar16 = local_48[(int)local_10] == local_70[2][3];
                          }
                          if (bVar16) {
                            uVar17 = 0x3ff0000000000000;
                          }
                          else {
                            uVar17 = 0;
                          }
                          iVar3 = FUN_005f74cf(uStack_98,((uint)local_10 >> 2) + (int)local_70[4],
                                               (uint)local_10 & 3,uVar17);
                          if (iVar3 == -1) goto LAB_005e4661;
                          local_10 = (uint *)((int)local_10 + 1);
                        } while (local_10 < puVar12);
                      }
                      local_a0 = (uint *)((int)local_a0 + (int)local_c);
                      local_24 = (uint *)((int)local_24 + 1);
                      local_70[4] = (uint *)((int)local_70[4] + local_94);
                    } while (local_24 < local_20);
                  }
                  local_10 = (uint *)0x0;
                  if (puVar12 != (uint *)0x0) {
                    do {
                      uVar10 = FUN_005f74cf(uStack_98,(uint)local_10 >> 2,(uint)local_10 & 3,0);
                      local_1c[(int)local_10] = uVar10;
                      iVar3 = FUN_005f762c();
                      if (iVar3 == 0) goto LAB_005e4661;
                      local_10 = (uint *)((int)local_10 + 1);
                      *(uint **)(iVar3 + 4) = local_38;
                      *(undefined4 *)(iVar3 + 0x18) = 0x2000017;
                    } while (local_10 < puVar12);
                  }
                  iVar3 = FUN_005d9fa1(param_2,(uint)puVar12 & 0xffffff | 0x30000000,
                                       (int)local_78 + (int)local_34,local_30,local_1c,local_18);
                  if (iVar3 < 0) goto LAB_005e4925;
                  local_2c = (uint *)((int)local_2c + 1);
                  local_34 = local_34 + 1;
                } while (local_2c < local_8);
              }
            }
            goto LAB_005e2bc0;
          }
          goto LAB_005e490c;
        }
        iVar3 = __ftol();
        puVar12 = (uint *)(iVar3 * (int)local_8);
        if (puVar12 < local_c) {
          if (param_3 != (uint *)0x0) goto LAB_005e41ad;
          goto LAB_005e490c;
        }
      }
      lVar19 = 0x69f64400000db0;
      goto LAB_005e4917;
    }
    break;
  case 0x17:
    if ((local_10 != (uint *)0x0) && (iVar3 = *(int *)((int)param_2 + 0x24), iVar3 != 0)) {
      if (*(int *)(iVar3 + 4) == 0xd) {
        if (*(int *)(iVar3 + 0x10) != 2) break;
        if (param_3 != (uint *)0x0) {
          puVar12 = *(uint **)(iVar3 + 0x18);
LAB_005e41ad:
          puVar9 = local_8;
          puVar12 = local_14 + (int)puVar12;
          goto code_r0x005e41b9;
        }
      }
      else {
        if (*(int *)(iVar3 + 4) != 1) break;
        if (param_3 != (uint *)0x0) {
          puVar12 = (uint *)0x0;
          if (local_8 != (uint *)0x0) {
            do {
              param_3[(int)puVar12] = local_14[*(int *)(*(int *)(iVar3 + 8) + 0x18)];
              iVar3 = *(int *)(iVar3 + 0xc);
              puVar12 = (uint *)((int)puVar12 + 1);
            } while (puVar12 < local_8);
          }
          goto LAB_005e2bc0;
        }
      }
      goto LAB_005e490c;
    }
    break;
  case 0x18:
    if ((local_10 != (uint *)0x0) && (local_20 != (uint *)0x0)) {
      if (param_3 == (uint *)0x0) goto LAB_005e490c;
      local_30 = (unsigned int *)_malloc((int)local_8 << 4);
      if (local_30 == (uint *)0x0) goto LAB_005e4661;
      uVar10 = 0;
      puVar5 = local_30;
      do {
        local_48[uVar10] = (uint)puVar5;
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + (int)puVar12;
      } while (uVar10 < 4);
      local_24 = (uint *)0x0;
      if (puVar12 != (uint *)0x0) {
        local_2c = local_28 + (int)puVar12;
        local_70[2] = (uint *)((int)local_14 - (int)local_28);
        local_1c = (uint *)(local_48[0] - (int)local_28);
        puVar12 = local_28;
        do {
          iVar3 = FUN_005d9413(*(undefined4 *)((int)local_70[2] + (int)puVar12),&local_9c);
          if (iVar3 < 0) break;
          if ((double)(__int64)CONCAT44(uStack_98,local_9c) == 0.0) {
            uVar10 = *local_2c;
          }
          else {
            uVar10 = *puVar12;
          }
          local_24 = (uint *)((int)local_24 + 1);
          local_2c = local_2c + 1;
          *(uint *)((int)local_1c + (int)puVar12) = uVar10;
          puVar12 = puVar12 + 1;
        } while (local_24 < local_8);
      }
      if (local_24 == local_8) {
        iVar3 = FUN_005d91c9(param_3,local_8);
        puVar12 = (uint *)local_48[0];
        goto joined_r0x005e42c1;
      }
      iVar3 = FUN_005d91c9(local_48[0],local_8);
      if ((((iVar3 < 0) || (iVar3 = FUN_005d91c9(local_48[1],local_8), iVar3 < 0)) ||
          (iVar3 = FUN_005d91c9(local_40,local_8), iVar3 < 0)) ||
         (iVar3 = FUN_005d91c9(local_3c,local_8), iVar3 < 0)) goto LAB_005e4925;
      local_c = (uint *)((uint)local_8 & 0xffffff);
      local_10 = (uint *)((uint)local_c | 0x11000000);
      iVar3 = FUN_005d9fa1(param_2,local_10,local_48[0],local_14,0,0);
      if (((iVar3 < 0) ||
          (iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x21000000,local_48[1],local_14,local_48[0],
                                4), iVar3 < 0)) ||
         ((iVar3 = FUN_005d9fa1(param_2,local_10,local_40,local_48[1],0,8), iVar3 < 0 ||
          (iVar3 = FUN_005d9fa1(param_2,(uint)local_c | 0x22000000,local_3c,local_40,local_48[1],
                                0x2000017), iVar3 < 0)))) goto LAB_005e4925;
      iVar3 = FUN_005dbae8(param_2,param_3,local_28 + (int)local_8,local_28,local_3c,local_8);
      goto LAB_005e2f88;
    }
    break;
  case 0x19:
    iVar3 = FUN_005d9cc7(*(undefined4 *)((int)param_2 + 0x20),local_70 + 2);
    if (iVar3 != 0) {
      *(int *)(((int)this) + 0x30) = *(int *)(((int)this) + 0x30) + 1;
      iVar3 = FUN_005e1f75(local_70[2],iVar3,*(undefined4 *)((int)param_2 + 0x24),param_3,0,0);
      *(int *)(((int)this) + 0x30) = *(int *)(((int)this) + 0x30) + -1;
      goto LAB_005e2f88;
    }
    FUN_005d9de1(((int)this),param_2,0xdb6,"function \'%s\' missing implementation");
    break;
  case 0x1a:
    iVar3 = FUN_005dca6a(param_2);
LAB_005e2f88:
    if (iVar3 < 0) goto LAB_005e4925;
LAB_005e2bc0:
    if (param_3 != (uint *)0x0) {
      _Size = (int)local_8 << 2;
      local_8c = (unsigned int *)_malloc(_Size);
      if ((local_8c == (uint *)0x0) || (local_90 = (unsigned int *)_malloc(_Size), local_90 == (uint *)0x0))
      goto LAB_005e4661;
      FUN_005da405(*(undefined4 *)((int)param_2 + 0x10),local_8c);
      local_20 = (uint *)0x0;
      local_70[3] = (uint *)0x0;
      local_78 = (uint *)0x0;
      if (local_8 != (uint *)0x0) {
        local_70[4] = (uint *)((int)param_3 - (int)local_8c);
        local_2c = (uint *)((int)local_8c - (int)local_90);
        local_34 = local_90;
        do {
          pbVar1 = (byte *)((int)local_2c + (int)local_34);
          piVar4 = (int *)FUN_005f762c();
          if (piVar4 == (int *)0x0) {
            pcVar20 = "internal error: result register invalid";
            goto LAB_005e4915;
          }
          iVar3 = *(int *)(*(int *)(((int)this) + 8) + 0x4c);
          if (iVar3 == *piVar4) {
LAB_005e4479:
            *local_34 = 0;
          }
          else if (((*pbVar1 & 1) == 0) || ((*(byte *)(piVar4 + 6) & 1) != 0)) {
            if ((iVar3 == *piVar4) || (((*pbVar1 & 2) == 0 || ((*(byte *)(piVar4 + 6) & 2) != 0))))
            goto LAB_005e4479;
            local_70[3] = (uint *)((int)local_70[3] + 1);
            *local_34 = 2;
          }
          else {
            local_20 = (uint *)((int)local_20 + 1);
            *local_34 = 1;
          }
          local_78 = (uint *)((int)local_78 + 1);
          local_34 = local_34 + 1;
        } while (local_78 < local_8);
        if (local_20 != (uint *)0x0) {
          if (local_30 != (uint *)0x0) {
            _free(local_30);
          }
          puVar12 = local_20;
          local_30 = (unsigned int *)_malloc((int)local_20 << 4);
          if (local_30 == (uint *)0x0) goto LAB_005e4661;
          uVar10 = 0;
          puVar5 = local_30;
          do {
            local_48[uVar10] = (uint)puVar5;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + (int)puVar12;
          } while (uVar10 < 4);
          iVar3 = FUN_005d91c9(local_48[1],local_20);
          if (((iVar3 < 0) || (iVar3 = FUN_005d91c9(local_40,local_20), iVar3 < 0)) ||
             (iVar3 = FUN_005d91c9(local_3c,local_20), iVar3 < 0)) goto LAB_005e4925;
          local_2c = (uint *)local_48[0];
          local_18 = (uint *)((int)local_90 - (int)param_3);
          local_1c = local_8;
          puVar12 = param_3;
          do {
            FUN_005f762c();
            if (*(int *)((int)local_18 + (int)puVar12) == 1) {
              *local_2c = *puVar12;
              local_2c = local_2c + 1;
            }
            puVar12 = puVar12 + 1;
            local_1c = (uint *)((int)local_1c + -1);
          } while (local_1c != (uint *)0x0);
          local_1c = (uint *)((uint)local_20 & 0xffffff);
          local_70[2] = (uint *)((uint)local_1c | 0x11000000);
          iVar3 = FUN_005d9fa1(param_2,local_70[2],local_48[1],local_48[0],0,0);
          if (((iVar3 < 0) ||
              (iVar3 = FUN_005d9fa1(param_2,(uint)local_1c | 0x21000000,local_40,local_48[0],
                                    local_48[1],4), iVar3 < 0)) ||
             ((iVar3 = FUN_005d9fa1(param_2,local_70[2],local_3c,local_40,0,8), iVar3 < 0 ||
              (iVar3 = FUN_005d9fa1(param_2,(uint)local_1c | 0x22000000,local_48[0],local_3c,
                                    local_40,0x2000017), iVar3 < 0)))) goto LAB_005e4925;
          local_2c = (uint *)local_48[0];
          local_1c = local_8;
          puVar12 = param_3;
          do {
            FUN_005f762c();
            if (*(int *)((int)puVar12 + (int)local_18) == 1) {
              uVar10 = *local_2c;
              local_2c = local_2c + 1;
              *puVar12 = uVar10;
            }
            puVar12 = puVar12 + 1;
            local_1c = (uint *)((int)local_1c + -1);
          } while (local_1c != (uint *)0x0);
        }
        if (local_70[3] != (uint *)0x0) {
          if (local_30 != (uint *)0x0) {
            _free(local_30);
          }
          puVar12 = local_70[3];
          local_30 = (unsigned int *)_malloc((int)local_70[3] * 0x24);
          if (local_30 == (uint *)0x0) goto LAB_005e4661;
          uVar10 = 0;
          puVar5 = local_30;
          do {
            local_70[uVar10 + 5] = puVar5;
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + (int)puVar12;
          } while (uVar10 < 9);
          local_2c = local_70[5];
          local_18 = (uint *)((int)local_90 - (int)param_3);
          local_1c = local_8;
          puVar12 = param_3;
          do {
            FUN_005f762c();
            puVar5 = local_2c;
            if (*(int *)((int)puVar12 + (int)local_18) == 2) {
              local_2c = local_2c + 1;
              *puVar5 = *puVar12;
            }
            puVar12 = puVar12 + 1;
            local_1c = (uint *)((int)local_1c + -1);
          } while (local_1c != (uint *)0x0);
          uVar10 = 1;
          do {
            uVar17 = FUN_005d91c9(local_70[uVar10 + 5],local_70[3]);
            iVar3 = (int)uVar17;
            if (iVar3 < 0) goto LAB_005e4925;
            uVar10 = (int)((ulonglong)uVar17 >> 0x20) + 1;
          } while (uVar10 < 9);
          local_24 = (uint *)((uint)local_70[3] & 0xffffff);
          iVar3 = FUN_005d9fa1(param_2,(uint)local_24 | 0x13000000,local_70[6],local_70[5],0,0x14);
          if (iVar3 < 0) goto LAB_005e4925;
          local_1c = (uint *)((uint)local_24 | 0x11000000);
          iVar3 = FUN_005d9fa1(param_2,local_1c,local_70[7],local_70[6],0,0x18);
          if (iVar3 < 0) goto LAB_005e4925;
          uStack_98 = (uint)local_24 | 0x24000000;
          iVar3 = FUN_005d9fa1(param_2,uStack_98,local_70[8],local_70[7],local_70[5],2);
          if ((iVar3 < 0) ||
             (iVar3 = FUN_005d9fa1(param_2,local_1c,local_70[9],local_70[5],0,0), iVar3 < 0))
          goto LAB_005e4925;
          local_70[2] = (uint *)((uint)local_24 | 0x22000000);
          iVar3 = FUN_005d9fa1(param_2,local_70[2],local_48[0],local_70[5],local_70[9],0x2000017);
          if (((iVar3 < 0) ||
              (((iVar3 = FUN_005d9fa1(param_2,local_1c,local_48[1],local_70[6],0,0), iVar3 < 0 ||
                (iVar3 = FUN_005d9fa1(param_2,local_70[2],local_40,local_48[1],local_70[6],0x2000017
                                     ), iVar3 < 0)) ||
               (iVar3 = FUN_005d9fa1(param_2,(uint)local_24 | 0x25000000,local_3c,local_48[0],
                                     local_40,0x2000017), iVar3 < 0)))) ||
             (iVar3 = FUN_005d9fa1(param_2,uStack_98,local_70[5],local_70[8],local_3c,2), iVar3 < 0)
             ) goto LAB_005e4925;
          param_2 = local_70[5];
          local_1c = local_8;
          puVar12 = param_3;
          do {
            FUN_005f762c();
            if (*(int *)((int)puVar12 + (int)local_18) == 2) {
              uVar10 = *param_2;
              param_2 = param_2 + 1;
              *puVar12 = uVar10;
            }
            puVar12 = puVar12 + 1;
            local_1c = (uint *)((int)local_1c + -1);
          } while (local_1c != (uint *)0x0);
        }
        if (local_8 != (uint *)0x0) {
          local_70[4] = (uint *)((int)param_3 - (int)local_8c);
          param_3 = local_8;
          puVar12 = local_8c;
          do {
            local_1c = puVar12;
            iVar3 = FUN_005f762c();
            uVar10 = *puVar12;
            uVar13 = *(uint *)(iVar3 + 0x18);
            *(uint *)(iVar3 + 0x18) = uVar10 & 0xf1ffffff | uVar13;
            uVar14 = *puVar12 & 0xe000000;
            uVar11 = uVar13 & 0xe000000;
            if ((uVar13 & 0xe000000) == 0) {
              uVar11 = uVar14;
            }
            if (*(int *)(iVar3 + 0x40) == 0) {
              if (uVar14 <= uVar11) {
LAB_005e48ee:
                uVar11 = uVar14;
              }
            }
            else if (uVar11 <= uVar14) goto LAB_005e48ee;
            puVar12 = local_1c + 1;
            param_3 = (uint *)((int)param_3 + -1);
            *(uint *)(iVar3 + 0x18) = uVar10 & 0xf1ffffff | uVar13 & 0xf1ffffff | uVar11;
            local_1c = puVar12;
          } while (param_3 != (uint *)0x0);
        }
      }
    }
LAB_005e490c:
    iVar3 = 0;
    goto LAB_005e4925;
  default:
    pcVar20 = "internal error: unrecognized expression";
LAB_005e4915:
    lVar19 = ZEXT48(pcVar20) << 0x20;
    param_2 = (uint *)0x0;
LAB_005e4917:
    FUN_005d9de1(((int)this),param_2,lVar19);
  }
  iVar3 = -0x7fffbffb;
LAB_005e4925:
  _free(local_14);
  _free(local_28);
  _free(local_30);
  _free(local_8c);
  _free(local_90);
  return iVar3;
}
