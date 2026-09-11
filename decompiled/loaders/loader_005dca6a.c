/* spd-match: far pct=7.18 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_11/buckets/p11_dca6a/attempt10_bisect_final */
#include "ghidra_compat.h"

int __cdecl FUN_005d814c(...);
int __cdecl FUN_005d8188(...);
int __cdecl FUN_005d91c9(...);
int __cdecl FUN_005d99dd(...);
int __cdecl FUN_005d9ac5(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d9e57(...);
int __cdecl FUN_005d9fa1(...);
int __cdecl FUN_005da7de(...);
int __cdecl FUN_005dad99(...);
int __cdecl FUN_005db2b5(...);
int __cdecl FUN_005dbae8(...);
int __cdecl FUN_005dc68d(...);
int __cdecl FUN_005e2a38(...);
int __cdecl FUN_005f74cf(...);
extern int _DAT_0069f330;
extern int _DAT_0069f338;
extern int _DAT_0069f358;
extern int _DAT_0069f3a0;
extern int _DAT_006a0da8;
extern int _DAT_006cc850;
extern int _DAT_006ccb08;
extern int _DAT_006ccb10;
extern int _DAT_006cce38;
extern char stack0xffffffbc;
extern void LAB_005dcf99(...);
extern void LAB_005dcfd5(...);
extern void LAB_005dd058(...);
extern void LAB_005dd115(...);
extern void LAB_005dd6a0(...);
extern void LAB_005dec59(...);
extern void LAB_005df2b2(...);
extern void LAB_005df8d1(...);
extern void LAB_005df947(...);
extern void LAB_005dff6c(...);
extern void LAB_005e019c(...);
extern void LAB_005e01bb(...);
extern void LAB_005e0738(...);
extern void LAB_005e09fb(...);
extern void LAB_005e0c0f(...);
extern void LAB_005e0e4c(...);
extern void LAB_005e1186(...);
extern void LAB_005e127e(...);
extern void LAB_005e12dc(...);
extern void LAB_005e151b(...);
extern void LAB_005e1525(...);
extern void LAB_005e1de6(...);

int __cdecl printf(const char *, ...);
#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif
#ifndef SUB43
#define SUB43(a,b) ((unsigned int)(a)&0x00FFFFFFu)
#endif

double __cdecl log(double);
static double log2(double x) { return log(x) / 0.6931471805599453; }

struct ThisCallBox {
  int FUN_005dca6a(void *param_2, void *param_3);
};
int ThisCallBox::FUN_005dca6a(void *param_2, void *param_3) {
  void *pppppiVar1;
  float10 fVar2;
  float10 fVar3;
  undefined3 uVar4;
  void *pvVar5;
  int iVar6;
  void *pppppiVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  void *ppppppiVar10;
  void *pppppppiVar11;
  uint uVar12;
  void *ppppppiVar13;
  size_t _Size;
  void *pppppppiVar14;
  int iVar15;
  int *piVar16;
  void *pppppppiVar17;
  uint uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 local_1e8 [3];
  undefined1 local_1dc [12];
  undefined1 local_1d0 [12];
  undefined1 local_1c4 [12];
  undefined4 local_1b8 [3];
  undefined1 local_1ac [12];
  undefined1 local_1a0 [12];
  undefined1 local_194 [12];
  undefined4 local_188 [3];
  undefined1 local_17c [12];
  undefined1 local_170 [12];
  undefined1 local_164 [12];
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  void *local_144;
  void *local_140;
  void *local_13c;
  void *local_138;
  void *local_134;
  void *local_130;
  void *local_12c;
  void *local_128;
  void *local_124;
  void *local_120;
  void *local_11c;
  void *local_118;
  void *local_114;
  void *local_110;
  void *local_10c;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  int local_100 [2];
  void *local_f8 [3];
  int local_ec [3];
  void *local_e0;
  uint local_dc;
  int local_d8;
  undefined4 *local_d4;
  int local_d0;
  int local_cc;
  void *local_c8;
  void *local_c4;
  void *local_c0;
  void *local_bc;
  int *local_b8;
  void *local_b4;
  void *local_b0;
  void *local_ac;
  void *local_a8;
  void *local_a4 [9];
  void *local_80;
  void *local_7c;
  void *local_78;
  void *local_74;
  int local_70;
  void *local_6c;
  void *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  void *local_58;
  void *local_54 [4];
  unsigned int local_44;
  unsigned int local_40;
  unsigned int local_3c;
  void *local_38;
  int *local_34;
  void *local_30;
  void *local_2c [2];
  void *local_24;
  void *local_20;
  void *local_1c;
  void *local_18;
  void *local_14;
  unsigned int local_10;
  void *local_c;
  unsigned int local_8;
  
  if (param_2 == (void *)0x0) {
    if (param_3 != (void *)0x0) {
      return -0x7fffbffb;
    }
    return 0;
  }
  if (*(int *)((int)param_2 + 4) != 0xc) {
    return -0x7fffbffb;
  }
  local_154 = *(int *)((int)param_2 + 0x24);
  local_8 = (unsigned int)(*(int *)((int)param_2 + 0x14) * *(int *)((int)param_2 + 0x18));
  if (*(int *)((int)param_2 + 0x1c) != 0x1a) {
    return -0x7fffbffb;
  }
  local_158 = *(undefined4 *)(((int)this) + 0x1c);
  local_20 = (void *)0x0;
  local_1c = (void *)0x0;
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_bc = (void *)0x0;
  local_b8 = (int *)0x0;
  local_b4 = (void *)0x0;
  local_b0 = (void *)0x0;
  ((void **)local_54)[0] = (void *)0x0;
  ((void **)local_54)[1] = (void *)0x0;
  ((void **)local_54)[2] = (void *)0x0;
  ((void **)local_54)[3] = (void *)0x0;
  local_40 = *(unsigned int *)(local_154 + 8);
  local_c = (void *)0x0;
  if (local_40 != 0) {
    iVar15 = 0;
    do {
      ppppppiVar10 = ((void **)local_40)[2];
      if (ppppppiVar10 != (void *)0x0) {
        pppppiVar7 = ((void **)ppppppiVar10)[6];
        pppppiVar1 = ((void **)ppppppiVar10)[5];
        *(int *)((int)&local_bc + iVar15) = (int)pppppiVar7 * (int)pppppiVar1;
        *(void **)((int)&local_20 + iVar15) = ppppppiVar10;
        pvVar5 = _malloc((int)pppppiVar7 * (int)pppppiVar1 * 4);
        *(void **)((int)local_54 + iVar15) = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_005e12dc;
        iVar6 = FUN_005e2a38();
        if (iVar6 < 0) goto LAB_005e1de6;
      }
      local_40 = (unsigned int)((void **)local_40)[3];
      iVar15 = iVar15 + 4;
    } while (local_40 != 0);
  }
  pppppppiVar14 = (void *)local_8;
  ppppppiVar10 = local_bc;
  pppppppiVar11 = param_3;
  uVar4 = (undefined3)(unsigned int)local_8;
  switch(*(undefined4 *)(*(int *)(*(int *)((int)param_2 + 0x20) + 8) + 0x18)) {
  case 0:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 2);
        pppppppiVar11 = (void *)local_8;
        if (local_c != (void *)0x0) {
          iVar6 = FUN_005d91c9(local_c,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,pppppppiVar11), iVar6 < 0))
          goto LAB_005e1de6;
          uVar18 = (uint)pppppppiVar11 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x11000000,local_c,((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = CONCAT44(4,local_c);
          pppppppiVar17 = (void *)(uVar18 | 0x21000000);
          pppppppiVar11 = param_3;
          pppppppiVar14 = ((void **)local_54)[0];
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 1:
    if ((void *)local_20 == (void *)0x0) break;
    if (param_3 == (void *)0x0) goto LAB_005dd6a0;
    iVar6 = FUN_005d91c9(param_3,local_8);
    if (iVar6 < 0) goto LAB_005e1de6;
    lVar21 = CONCAT44(local_8,param_3);
    pppppppiVar11 = (void *)0x0;
LAB_005dcfd5:
    iVar6 = FUN_005dad99(param_2,((void **)local_54)[0],pppppppiVar11,lVar21);
    goto LAB_005e1525;
  case 2:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        if (local_bc == (void *)1) {
          *(void **)param_3 = (void *)0xffffffff;
          local_40 = 0xffffffff;
          local_38 = (void *)0xffffffff;
          iVar6 = FUN_005d9fa1(param_2,0x11000001,&local_40,((void **)local_54)[0],0,0);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,0x21000001,&local_38,((void **)local_54)[0],&local_40,4), iVar6 < 0)
             ) goto LAB_005e1de6;
          pppppppiVar17 = (void *)&local_38;
          pppppppiVar14 = (void *)&local_40;
          pppppppiVar11 = param_3;
        }
        else {
          if (local_bc != (void *)2) {
            pppppppiVar11 = _malloc((int)local_bc << 4);
            local_c = pppppppiVar11;
            if (pppppppiVar11 != (void *)0x0) {
              uVar18 = 0;
              do {
                (&local_20)[uVar18] = (void *)pppppppiVar11;
                uVar18 = uVar18 + 1;
                pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)ppppppiVar10);
              } while (uVar18 < 4);
              iVar6 = FUN_005d91c9(local_20,ppppppiVar10);
              if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_1c,ppppppiVar10), iVar6 < 0)) ||
                  (iVar6 = FUN_005d91c9(local_18,ppppppiVar10), iVar6 < 0)) ||
                 (iVar6 = FUN_005d91c9(local_14,ppppppiVar10), iVar6 < 0)) goto LAB_005e1de6;
              local_40 = (unsigned int)CONCAT13(0x11,(int3)ppppppiVar10);
              local_3c = 0xffffffff;
              local_64 = (void *)0xffffffff;
              *(void **)param_3 = (void *)0xffffffff;
              local_38 = (void *)((uint)(unsigned int)ppppppiVar10 & 0xffffff);
              iVar6 = FUN_005d9fa1(param_2,local_40,local_20,((void **)local_54)[0],0,0);
              if ((((iVar6 < 0) ||
                   (iVar6 = FUN_005d9fa1(param_2,(uint)ppppppiVar10 & 0xffffff | 0x21000000,local_1c
                                         ,((void **)local_54)[0],local_20,4), iVar6 < 0)) ||
                  ((iVar6 = FUN_005d9fa1(param_2,local_40,local_18,local_1c,0,8), iVar6 < 0 ||
                   ((iVar6 = FUN_005d9fa1(param_2,(uint)(unsigned int)local_38 | 0x23000000,local_14,local_18,
                                          local_1c,0x2000017), iVar6 < 0 ||
                    (iVar6 = FUN_005d9fa1(param_2,(uint)(unsigned int)local_38 | 0x30000000,&local_3c,local_14,
                                          local_14,6), iVar6 < 0)))))) ||
                 (iVar6 = FUN_005d9fa1(param_2,0x11000001,&local_64,&local_3c,0,10), iVar6 < 0))
              goto LAB_005e1de6;
              uVar20 = CONCAT44(0x2000017,&local_3c);
              pppppppiVar17 = (void *)0x23000001;
              pppppppiVar11 = param_3;
              pppppppiVar14 = (void *)&local_64;
              goto LAB_005e151b;
            }
            goto LAB_005e12dc;
          }
          local_78 = (void *)0xffffffff;
          local_74 = (void *)0xffffffff;
          local_5c = (void *)0xffffffff;
          local_58 = (void *)0xffffffff;
          *(void **)param_3 = (void *)0xffffffff;
          local_40 = 0xffffffff;
          local_38 = (void *)0xffffffff;
          iVar6 = FUN_005d9fa1(param_2,0x11000002,&local_78,((void **)local_54)[0],0,0);
          if ((((iVar6 < 0) ||
               (iVar6 = FUN_005d9fa1(param_2,0x21000002,&local_5c,((void **)local_54)[0],&local_78,4),
               iVar6 < 0)) ||
              (iVar6 = FUN_005d9fa1(param_2,0x25000001,&local_40,&local_5c,&local_58,4), iVar6 < 0))
             || (iVar6 = FUN_005d9fa1(param_2,0x11000001,&local_38,&local_40,0,8), iVar6 < 0))
          goto LAB_005e1de6;
          pppppppiVar17 = (void *)&local_40;
          pppppppiVar14 = (void *)&local_38;
          pppppppiVar11 = param_3;
        }
LAB_005dcf99:
        uVar20 = CONCAT44(0x2000017,pppppppiVar17);
        pppppppiVar17 = (void *)0x22000001;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 3:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        param_3 = (void *)0xffffffff;
        local_38 = (void *)0xffffffff;
        *(void **)pppppppiVar11 = (void *)0xffffffff;
        iVar6 = FUN_005d9fa1(param_2,(uint)local_bc & 0xffffff | 0x30000000,&param_3,((void **)local_54)[0],
                             ((void **)local_54)[0],4);
        if ((iVar6 < 0) ||
           (iVar6 = FUN_005d9fa1(param_2,0x11000001,&local_38,&param_3,0,8), iVar6 < 0))
        goto LAB_005e1de6;
        pppppppiVar17 = (void *)&param_3;
        pppppppiVar14 = (void *)&local_38;
        goto LAB_005dcf99;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 4:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        lVar21 = ZEXT48(local_8) << 0x20;
        pppppppiVar11 = param_3;
        goto LAB_005dcfd5;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 5:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = CONCAT44(local_8,param_3);
        pppppppiVar11 = (void *)0x0;
LAB_005dd058:
        iVar6 = FUN_005db2b5(param_2,((void **)local_54)[0],pppppppiVar11,uVar19);
        goto LAB_005e1525;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 6:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = CONCAT44(local_8,param_3);
        pppppppiVar11 = ((void **)local_54)[1];
        goto LAB_005dd058;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 7:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 3);
        if (local_c != (void *)0x0) {
          local_38 = (void *)((unsigned int *)local_c + (int)local_8);
          uVar19 = FUN_005d91c9(local_c,local_8);
          iVar6 = (int)uVar19;
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d91c9((int)((ulonglong)uVar19 >> 0x20),local_8), iVar6 < 0)) ||
             (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          pppppppiVar17 = (void *)((uint)local_8 & 0xffffff);
          iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x11000000,local_c,((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar8 = 0x14;
          uVar18 = (uint)pppppppiVar17 | 0x13000000;
LAB_005dd115:
          iVar6 = FUN_005d9fa1(param_2,uVar18,local_38,local_c,0,uVar8);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = CONCAT44(2,local_38);
          pppppppiVar14 = ((void **)local_54)[0];
          goto LAB_005e0738;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 8:
    if ((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
       (local_18 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 2);
        if (local_c != (void *)0x0) {
          iVar6 = FUN_005d91c9(local_c,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x21000000,local_c,((void **)local_54)[0],((void **)local_54)[1],0);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = ZEXT48(((void **)local_54)[2]);
          pppppppiVar14 = local_c;
LAB_005e09fb:
          pppppppiVar17 = (void *)(uVar18 | 0x20000000);
          pppppppiVar11 = param_3;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 9:
    if ((void *)local_20 != (void *)0x0) {
      pppppppiVar11 = _malloc((int)local_bc << 3);
      local_c = pppppppiVar11;
      if (pppppppiVar11 != (void *)0x0) {
        uVar18 = 0;
        do {
          (&local_5c)[uVar18] = (void *)pppppppiVar11;
          uVar18 = uVar18 + 1;
          pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)ppppppiVar10));
        } while (uVar18 < 2);
        ppppppiVar13 = (void *)0x0;
        if (ppppppiVar10 != (void *)0x0) {
          do {
            ((void **)local_58)[(int)ppppppiVar13] = *(void **)(((int)this) + 0x2c);
            ppppppiVar13 = (void *)((int)ppppppiVar13 + 1);
          } while (ppppppiVar13 < ppppppiVar10);
        }
        uVar19 = FUN_005d91c9(local_5c,ppppppiVar10);
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        iVar6 = FUN_005d9fa1(param_2,(uint)ppppppiVar10 & 0xffffff | 0x25000000,local_5c,((void **)local_54)[0]
                             ,(int)((ulonglong)uVar19 >> 0x20),0);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0;
        pppppppiVar17 = (void *)((uint)ppppppiVar10 & 0xffffff | 0x34000000);
        pppppppiVar11 = (void *)0x0;
        pppppppiVar14 = (void *)local_5c;
        goto LAB_005e151b;
      }
      goto LAB_005e12dc;
    }
    break;
  case 10:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        lVar21 = CONCAT44(local_8,param_3);
        pppppppiVar11 = (void *)0x0;
LAB_005e0c0f:
        iVar6 = FUN_005da7de(param_2,local_54[0],pppppppiVar11,lVar21);
        goto LAB_005e1525;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0xb:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        fVar3 = (float10)log2((float10)_DAT_006cce38);
        uVar8 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                             (double)((float10)_DAT_006ccb10 / ((float10)0.6931471805599453 * fVar3)
                                     ));
        local_58 = (void *)
                   FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006cc850);
        pppppppiVar11 = _malloc((int)local_8 * 0x1c);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            local_2c[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 7);
          if (local_8 != 0) {
            pppppppiVar11 = (void *)local_14;
            pppppppiVar14 = (void *)local_8;
            do {
              *(undefined4 *)(((int)local_18 - (int)local_14) + (int)pppppppiVar11) = uVar8;
              *(void **)pppppppiVar11 = (void *)local_58;
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
              pppppppiVar14 = (void *)((int)pppppppiVar14 + -1);
            } while (pppppppiVar14 != (void *)0x0);
          }
          iVar6 = FUN_005d91c9(local_2c[0],local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_2c[1],local_8), iVar6 < 0)) ||
              ((iVar6 = FUN_005d91c9(local_24,local_8), iVar6 < 0 ||
               ((iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0 ||
                (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)))))) ||
             (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          uVar4 = (undefined3)local_8;
          local_8 = (unsigned int)CONCAT13(0x25,(undefined3)local_8);
          iVar6 = FUN_005d9fa1(param_2,local_8,local_2c[0],local_54[0],local_18,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_3c = (unsigned int)CONCAT13(0x14,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_3c,local_2c[1],local_2c[0],0,4);
          if ((((iVar6 < 0) ||
               (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x11000000,local_24,local_2c[0],0,0),
               iVar6 < 0)) ||
              (iVar6 = FUN_005d9fa1(param_2,local_3c,local_20,local_24,0,4), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x24000000,local_1c,local_2c[1],local_20,4),
             iVar6 < 0)) goto LAB_005e1de6;
          uVar8 = 4;
LAB_005e0e4c:
          uVar20 = CONCAT44(uVar8,local_14);
          pppppppiVar17 = (void *)local_8;
          pppppppiVar11 = param_3;
          pppppppiVar14 = local_1c;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0xc:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_60 = (void *)((void **)((void **)local_54)[0])[1];
        local_5c = ((void **)((void **)local_54)[0])[2];
        local_58 = (void *)*((void **)((void **)local_54)[0]);
        local_c8 = ((void **)((void **)local_54)[1])[2];
        local_c4 = (void *)*((void **)((void **)local_54)[1]);
        local_c0 = ((void **)((void **)local_54)[1])[1];
        local_144 = ((void **)((void **)local_54)[0])[2];
        local_140 = *((void **)((void **)local_54)[0]);
        local_13c = ((void **)((void **)local_54)[0])[1];
        local_7c = ((void **)((void **)local_54)[1])[1];
        local_78 = ((void **)((void **)local_54)[1])[2];
        local_74 = *((void **)((void **)local_54)[1]);
        local_1c = (void *)0xffffffff;
        local_18 = (void *)0xffffffff;
        local_14 = (void *)0xffffffff;
        local_150 = 0xffffffff;
        uStack_14c = 0xffffffff;
        uStack_148 = 0xffffffff;
        local_b8 = (int *)0xffffffff;
        local_b4 = (void *)0xffffffff;
        local_b0 = (void *)0xffffffff;
        *(void **)param_3 = (void *)0xffffffff;
        ((void **)param_3)[1] = (void *)0xffffffff;
        ((void **)param_3)[2] = (void *)0xffffffff;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff);
        local_8 = (unsigned int)CONCAT13(0x25,(undefined3)local_8);
        iVar6 = FUN_005d9fa1(param_2,local_8,&local_1c,&local_60,&local_c8,0);
        if (((iVar6 < 0) ||
            (iVar6 = FUN_005d9fa1(param_2,local_8,&local_150,&local_144,&local_7c,0), iVar6 < 0)) ||
           (iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x11000000,&local_b8,&local_150,0,0),
           iVar6 < 0)) goto LAB_005e1de6;
        uVar20 = ZEXT48(&local_b8);
        pppppppiVar14 = (void *)&local_1c;
goto LAB_005e0738;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0xd:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x1c000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0xe:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x1d000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0xf:
    uVar19 = _DAT_0069f3a0;
    goto joined_r0x005e014b;
  case 0x10:
    if ((void *)local_20 == (void *)0x0) break;
    if (param_3 != (void *)0x0) {
      if (local_bc == (void *)0x1) {
        *(void **)param_3 = *(void **)(((void **)local_54)[0]);
        goto LAB_005dd6a0;
      }
      ppppppiVar10 = (void *)((void **)local_20)[5];
      if (ppppppiVar10 == (void *)0x2) {
        local_c8 = (void *)0xffffffff;
        local_c4 = (void *)0xffffffff;
        local_c0 = (void *)0xffffffff;
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        local_78 = *(void **)(((void **)local_54)[0]);
        local_5c = ((void **)((void **)local_54)[0])[3];
        local_74 = ((void **)((void **)local_54)[0])[1];
        local_58 = (void *)((void **)((void **)local_54)[0])[2];
        iVar6 = FUN_005d9fa1(param_2,0x25000002,&local_c8,&local_78,&local_5c,0);
        if ((iVar6 < 0) ||
           (iVar6 = FUN_005d9fa1(param_2,0x11000001,&local_c0,&local_c4,0,0), iVar6 < 0))
        goto LAB_005e1de6;
        uVar20 = ZEXT48(&local_c0);
        pppppppiVar14 = &local_c8;
LAB_005dff6c:
        pppppppiVar17 = (void *)0x24000001;
        pppppppiVar11 = param_3;
      }
      else if (ppppppiVar10 == (void *)0x3) {
        local_150 = 0xffffffff;
        uStack_14c = 0xffffffff;
        uStack_148 = 0xffffffff;
        local_1c = (void *)0xffffffff;
        local_18 = (void *)0xffffffff;
        local_14 = (void *)0xffffffff;
        local_b8 = (int *)0xffffffff;
        local_b4 = (void *)0xffffffff;
        local_b0 = (void *)0xffffffff;
        local_144 = (void *)0xffffffff;
        local_140 = (void *)0xffffffff;
        local_13c = (void *)0xffffffff;
        iVar6 = FUN_005d91c9(param_3,local_8);
        pppppppiVar11 = ((void **)local_54)[0];
        if (iVar6 < 0) goto LAB_005e1de6;
        local_60 = (void *)((void **)((void **)local_54)[0])[4];
        local_5c = ((void **)((void **)local_54)[0])[7];
        local_58 = (void *)((void **)((void **)local_54)[0])[1];
        local_7c = ((void **)((void **)local_54)[0])[8];
        local_78 = ((void **)((void **)local_54)[0])[2];
        local_74 = ((void **)((void **)local_54)[0])[5];
        iVar6 = FUN_005d9fa1(param_2,0x25000003,&local_150,&local_60,&local_7c,0);
        if (iVar6 < 0) goto LAB_005e1de6;
        local_60 = (void *)((void **)pppppppiVar11)[7];
        local_5c = ((void **)pppppppiVar11)[1];
        local_58 = (void *)((void **)pppppppiVar11)[4];
        local_7c = ((void **)pppppppiVar11)[5];
        local_78 = ((void **)pppppppiVar11)[8];
        local_74 = ((void **)pppppppiVar11)[2];
        iVar6 = FUN_005d9fa1(param_2,0x25000003,&local_1c,&local_60,&local_7c,0);
        if (((iVar6 < 0) ||
            (iVar6 = FUN_005d9fa1(param_2,0x11000003,&local_b8,&local_1c,0,0), iVar6 < 0)) ||
           (iVar6 = FUN_005d9fa1(param_2,0x24000003,&local_144,&local_150,&local_b8,0), iVar6 < 0))
        goto LAB_005e1de6;
        local_60 = (void *)(*(void **)pppppppiVar11);
        local_5c = ((void **)pppppppiVar11)[3];
        local_58 = (void *)((void **)pppppppiVar11)[6];
        uVar20 = ZEXT48(&local_60);
        pppppppiVar17 = (void *)0x30000003;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_144;
      }
      else {
        if (ppppppiVar10 != (void *)0x4) goto LAB_005dd6a0;
        uVar19 = CONCAT44(local_8,param_3);
        iVar6 = 0xc;
        puVar9 = local_1b8;
        for (iVar15 = iVar6; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        puVar9 = local_1e8;
        for (iVar15 = iVar6; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        puVar9 = local_188;
        for (iVar15 = iVar6; iVar15 != 0; iVar15 = iVar15 + -1) {
          *puVar9 = 0xffffffff;
          puVar9 = puVar9 + 1;
        }
        piVar16 = local_100 + 2;
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar16 = -1;
          piVar16 = piVar16 + 1;
        }
        local_20 = (void *)0xffffffff;
        local_1c = (void *)0xffffffff;
        local_18 = (void *)0xffffffff;
        local_14 = (void *)0xffffffff;
        iVar6 = FUN_005d91c9(uVar19);
        pppppppiVar11 = ((void **)local_54)[0];
        if (iVar6 < 0) goto LAB_005e1de6;
        local_ac = ((void **)((void **)local_54)[0])[10];
        local_a8 = ((void **)((void **)local_54)[0])[0xe];
        local_a4[0] = ((void **)((void **)local_54)[0])[6];
        local_a4[1] = ((void **)((void **)local_54)[0])[0xe];
        local_a4[2] = ((void **)((void **)local_54)[0])[2];
        local_a4[3] = ((void **)((void **)local_54)[0])[10];
        local_a4[4] = ((void **)((void **)local_54)[0])[6];
        local_a4[5] = ((void **)((void **)local_54)[0])[0xe];
        local_a4[6] = ((void **)((void **)local_54)[0])[2];
        local_a4[7] = ((void **)((void **)local_54)[0])[10];
        local_a4[8] = ((void **)((void **)local_54)[0])[2];
        local_80 = (void *)((void **)((void **)local_54)[0])[6];
        local_138 = ((void **)((void **)local_54)[0])[0xf];
        local_134 = ((void **)((void **)local_54)[0])[7];
        local_130 = ((void **)((void **)local_54)[0])[0xb];
        local_12c = ((void **)((void **)local_54)[0])[0xb];
        local_128 = ((void **)((void **)local_54)[0])[0xf];
        local_124 = ((void **)((void **)local_54)[0])[3];
        local_120 = ((void **)((void **)local_54)[0])[0xf];
        local_11c = ((void **)((void **)local_54)[0])[3];
        local_118 = ((void **)((void **)local_54)[0])[7];
        local_114 = ((void **)((void **)local_54)[0])[7];
        local_110 = ((void **)((void **)local_54)[0])[0xb];
        local_10c = ((void **)((void **)local_54)[0])[3];
        iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1b8,&local_ac,&local_138,0);
        if ((((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1ac,local_a4 + 1,&local_12c,0),
             iVar6 < 0)) ||
            (iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1a0,local_a4 + 4,&local_120,0), iVar6 < 0
            )) || (iVar6 = FUN_005d9fa1(param_2,0x25000003,local_194,local_a4 + 7,&local_114,0),
                  iVar6 < 0)) goto LAB_005e1de6;
        local_ac = ((void **)pppppppiVar11)[0xe];
        local_a8 = ((void **)pppppppiVar11)[6];
        local_a4[0] = ((void **)pppppppiVar11)[10];
        local_a4[1] = ((void **)pppppppiVar11)[10];
        local_a4[2] = ((void **)pppppppiVar11)[0xe];
        local_a4[3] = ((void **)pppppppiVar11)[2];
        local_a4[4] = ((void **)pppppppiVar11)[0xe];
        local_a4[5] = ((void **)pppppppiVar11)[2];
        local_a4[6] = ((void **)pppppppiVar11)[6];
        local_a4[7] = ((void **)pppppppiVar11)[6];
        local_a4[8] = ((void **)pppppppiVar11)[10];
        local_80 = (void *)((void **)pppppppiVar11)[2];
        local_138 = ((void **)pppppppiVar11)[0xb];
        local_134 = ((void **)pppppppiVar11)[0xf];
        local_130 = ((void **)pppppppiVar11)[7];
        local_12c = ((void **)pppppppiVar11)[0xf];
        local_128 = ((void **)pppppppiVar11)[3];
        local_124 = ((void **)pppppppiVar11)[0xb];
        local_120 = ((void **)pppppppiVar11)[7];
        local_11c = ((void **)pppppppiVar11)[0xf];
        local_118 = ((void **)pppppppiVar11)[3];
        local_114 = ((void **)pppppppiVar11)[0xb];
        local_110 = ((void **)pppppppiVar11)[3];
        local_10c = ((void **)pppppppiVar11)[7];
        iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1e8,&local_ac,&local_138,0);
        if (((((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1dc,local_a4 + 1,&local_12c,0),
              iVar6 < 0)) ||
             ((iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1d0,local_a4 + 4,&local_120,0),
              iVar6 < 0 ||
              ((iVar6 = FUN_005d9fa1(param_2,0x25000003,local_1c4,local_a4 + 7,&local_114,0),
               iVar6 < 0 ||
               (iVar6 = FUN_005d9fa1(param_2,0x11000003,local_188,local_1e8,0,0), iVar6 < 0)))))) ||
            (iVar6 = FUN_005d9fa1(param_2,0x11000003,local_17c,local_1dc,0,0), iVar6 < 0)) ||
           ((((iVar6 = FUN_005d9fa1(param_2,0x11000003,local_170,local_1d0,0,0), iVar6 < 0 ||
              (iVar6 = FUN_005d9fa1(param_2,0x11000003,local_164,local_1c4,0,0), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,0x24000003,local_100 + 2,local_1b8,local_188,0),
             iVar6 < 0)) ||
            (((iVar6 = FUN_005d9fa1(param_2,0x24000003,local_100 + 5,local_1ac,local_17c,0),
              iVar6 < 0 ||
              (iVar6 = FUN_005d9fa1(param_2,0x24000003,&local_e0,local_1a0,local_170,0), iVar6 < 0))
             || (iVar6 = FUN_005d9fa1(param_2,0x24000003,&local_d4,local_194,local_164,0), iVar6 < 0
                )))))) goto LAB_005e1de6;
        local_ac = ((void **)pppppppiVar11)[5];
        local_a8 = ((void **)pppppppiVar11)[9];
        local_a4[0] = ((void **)pppppppiVar11)[0xd];
        local_a4[1] = ((void **)pppppppiVar11)[1];
        local_a4[2] = ((void **)pppppppiVar11)[9];
        local_a4[3] = ((void **)pppppppiVar11)[0xd];
        local_a4[4] = ((void **)pppppppiVar11)[1];
        local_a4[5] = ((void **)pppppppiVar11)[5];
        local_a4[6] = ((void **)pppppppiVar11)[0xd];
        local_a4[7] = ((void **)pppppppiVar11)[1];
        local_a4[8] = ((void **)pppppppiVar11)[5];
        local_80 = (void *)((void **)pppppppiVar11)[9];
        iVar6 = FUN_005d9fa1(param_2,0x30000003,&local_20,local_100 + 2,&local_ac,0);
        if (((iVar6 < 0) ||
            (iVar6 = FUN_005d9fa1(param_2,0x30000003,&local_1c,local_100 + 5,local_a4 + 1,0),
            iVar6 < 0)) ||
           ((iVar6 = FUN_005d9fa1(param_2,0x30000003,&local_18,&local_e0,local_a4 + 4,0), iVar6 < 0
            || (iVar6 = FUN_005d9fa1(param_2,0x30000003,&local_14,&local_d4,local_a4 + 7,0),
               iVar6 < 0)))) goto LAB_005e1de6;
        local_ac = *(void **)pppppppiVar11;
        local_a8 = ((void **)pppppppiVar11)[4];
        local_a4[0] = ((void **)pppppppiVar11)[8];
        local_a4[1] = ((void **)pppppppiVar11)[0xc];
        uVar20 = ZEXT48(&local_ac);
        pppppppiVar17 = (void *)0x30000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
      }
      goto LAB_005e151b;
    }
    goto LAB_005dd6a0;

  case 0x11:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_bc * 8 + 4);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_60)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)ppppppiVar10));
          } while (uVar18 < 3);
          iVar6 = FUN_005d91c9(local_60,ppppppiVar10);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_5c,ppppppiVar10), iVar6 < 0))
          goto LAB_005e1de6;
          *(void **)local_58 = (void *)0xffffffff;
          *(void **)param_3 = (void *)0xffffffff;
          uVar18 = (uint)ppppppiVar10 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x11000000,local_60,((void **)local_54)[1],0,0);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x24000000,local_5c,((void **)local_54)[0],local_60,0),
             iVar6 < 0)) goto LAB_005e1de6;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x30000000,local_58,local_5c,local_5c,4);
          pppppppiVar14 = local_58;
          goto joined_r0x005e1120;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;

  case 0x12:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)((uint)local_bc & 0xffffff | 0x30000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x13:
    if (((void *)local_20 == (void *)0x0) || (local_1c == (void *)0x0)) break;
    if (param_3 == (void *)0x0) goto LAB_005dd6a0;
    local_30 = *(void **)(((int)this) + 0x20);
    local_2c[0] = ((void **)((void **)local_54)[0])[1];
    local_2c[1] = ((void **)((void **)local_54)[0])[2];
    local_1c = (void *)((void **)((void **)local_54)[1])[1];
    local_14 = (void *)((void **)((void **)local_54)[1])[3];
    local_24 = local_30;
    local_20 = (void *)local_30;
    local_18 = local_30;
    iVar6 = FUN_005d91c9(param_3,local_8);
    if (iVar6 < 0) goto LAB_005e1de6;
    uVar20 = ZEXT48(&local_20);
    pppppppiVar14 = (void *)&local_30;
    goto LAB_005e01bb;
  case 0x14:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        fVar3 = (float10)log2((float10)_DAT_006cce38);
        pppppiVar7 = (void *)
                     FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                                  (double)((float10)_DAT_006ccb10 /
                                          ((float10)0.6931471805599453 * fVar3)));
        pppppppiVar11 = _malloc((int)local_8 * 0xc);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_c8)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 3);
          pppppppiVar11 = (void *)local_8;
          ppppppiVar10 = local_c8;
          if (local_8 != 0) {
            for (; pppppppiVar11 != (void *)0x0;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + -1)) {
              *(void **)ppppppiVar10 = pppppiVar7;
              ppppppiVar10 = (void *)((unsigned int *)ppppppiVar10 + (int)(1));
            }
          }
          iVar6 = FUN_005d91c9(local_c4,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x25000000,local_c4,((void **)local_54)[0],local_c8,0);
          pppppppiVar14 = local_c4;
joined_r0x005e0130:
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = 0x400000000;
          pppppppiVar17 = (void *)(uVar18 | 0x14000000);
          pppppppiVar11 = param_3;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x15:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0x400000000;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x14000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x16:
    if ((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
       (local_18 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        uVar18 = (uint)local_8 & 0xffffff;
        local_38 = (void *)0xffffffff;
        local_64 = (void *)0xffffffff;
        iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x30000000,&local_38,((void **)local_54)[1],((void **)local_54)[2],0);
        if ((iVar6 < 0) ||
           (iVar6 = FUN_005d9fa1(param_2,0x23000001,&local_64,&local_38,((int)this) + 0x24,0x2000017),
           pppppppiVar11 = (void *)local_8, iVar6 < 0)) goto LAB_005e1de6;
        pppppppiVar14 = _malloc((int)local_8 << 4);
        local_c = pppppppiVar14;
        if (pppppppiVar14 != (void *)0x0) {
          uVar12 = 0;
          do {
            (&local_20)[uVar12] = (void *)pppppppiVar14;
            uVar12 = uVar12 + 1;
            pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)((int)pppppppiVar11));
          } while (uVar12 < 4);
          pppppppiVar14 = (void *)0x0;
          if (pppppppiVar11 != (void *)0x0) {
            do {
              ((void **)local_14)[(int)pppppppiVar14] = (int *)local_64;
              pppppppiVar14 = (void *)((int)pppppppiVar14 + 1);
            } while (pppppppiVar14 < pppppppiVar11);
          }
          iVar6 = FUN_005d91c9(local_20,pppppppiVar11);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0)) ||
             ((iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0 ||
              (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x11000000,local_20,((void **)local_54)[0],0,0), iVar6 < 0
              )))) goto LAB_005e1de6;
          local_44 = (unsigned int)CONCAT13(0x24,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_44,local_1c,local_20,local_20,0);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x25000000,local_18,local_1c,local_14,0),
             iVar6 < 0)) goto LAB_005e1de6;
          uVar20 = ZEXT48(local_18);
          pppppppiVar17 = (void *)(unsigned int)local_44;
          pppppppiVar11 = param_3;
          pppppppiVar14 = ((void **)local_54)[0];
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x17:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 3);
        if (local_c != (void *)0x0) {
          local_38 = (void *)((unsigned int *)local_c + (int)(local_8));
          uVar19 = FUN_005d91c9(local_c,local_8);
          iVar6 = (int)uVar19;
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d91c9((int)((ulonglong)uVar19 >> 0x20),local_8), iVar6 < 0)) ||
             (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          pppppppiVar17 = (void *)((uint)local_8 & 0xffffff);
          iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x13000000,local_c,((void **)local_54)[0],0,0x14);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar8 = 0x18;
          uVar18 = (uint)pppppppiVar17 | 0x11000000;
          goto LAB_005dd115;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x18:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0xc);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_60)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 3);
          uVar18 = 0;
          do {
            uVar19 = FUN_005d91c9((&local_60)[uVar18],local_8);
            iVar6 = (int)uVar19;
            if (iVar6 < 0) goto LAB_005e1de6;
            uVar18 = (int)((ulonglong)uVar19 >> 0x20) + 1;
          } while (uVar18 < 3);
          iVar6 = FUN_005d91c9(param_3,local_8);
          pppppppiVar11 = (void *)local_8;
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x12000000,local_60,((void **)local_54)[1],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_8 = (local_8 & 0xff000000u) | ((unsigned int)SUB43(pppppppiVar11,0) & 0xffffffu);
          local_8 = (unsigned int)CONCAT13(0x25,(undefined3)local_8);
          iVar6 = FUN_005d9fa1(param_2,local_8,local_5c,((void **)local_54)[0],local_60,0);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x13000000,local_58,local_5c,0,4), iVar6 < 0))
          goto LAB_005e1de6;
          uVar20 = ZEXT48(local_58);
          pppppppiVar17 = (void *)local_8;
          pppppppiVar11 = param_3;
          pppppppiVar14 = ((void **)local_54)[1];
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x19:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x13000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x1a:
    if ((void *)local_20 != (void *)0x0) {
      ((void **)local_54)[1] = _malloc((int)local_8 * 4);
      if (((void **)local_54)[1] != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0x28);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            local_a4[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)pppppppiVar14));
          } while (uVar18 < 10);
          iVar6 = FUN_005d91c9(local_a4[0],local_8);
          if ((((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_a4[1],local_8), iVar6 < 0)) ||
                (iVar6 = FUN_005d91c9(local_a4[2],local_8), iVar6 < 0)) ||
               ((iVar6 = FUN_005d91c9(local_a4[3],local_8), iVar6 < 0 ||
                (iVar6 = FUN_005d91c9(local_a4[4],local_8), iVar6 < 0)))) ||
              (iVar6 = FUN_005d91c9(local_a4[5],local_8), iVar6 < 0)) ||
             (((iVar6 = FUN_005d91c9(local_a4[6],local_8), iVar6 < 0 ||
               (iVar6 = FUN_005d91c9(local_a4[7],local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(((void **)local_54)[1],local_8), iVar6 < 0)))) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          local_10 = (local_10 & 0xff000000u) | ((unsigned int)(SUB43(local_8,0)) & 0xffffffu);
          uVar4 = (undefined3)local_10;
          local_10 = (unsigned int)CONCAT13(0x11,(undefined3)local_10);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_a4[0],((void **)local_54)[0],0,0);
          if ((((iVar6 < 0) ||
               (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x21000000,local_a4[1],local_a4[0],((void **)local_54)[0]
                                     ,4), iVar6 < 0)) ||
              (iVar6 = FUN_005d9fa1(param_2,local_10,local_a4[2],local_a4[1],0,8), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x23000000,local_a4[3],local_a4[2],local_a4[1],
                                   0x2000017), iVar6 < 0)) goto LAB_005e1de6;
          local_44 = (unsigned int)CONCAT13(0x24,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_44,local_a4[4],local_a4[3],local_a4[1],4);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x15000000,local_a4[5],local_a4[4],0,0),
              iVar6 < 0)) ||
             ((iVar6 = FUN_005d9fa1(param_2,local_10,local_a4[6],local_a4[5],0,0), iVar6 < 0 ||
              ((iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x13000000,local_a4[7],local_a4[6],0,0x14),
               iVar6 < 0 ||
               (iVar6 = FUN_005d9fa1(param_2,local_44,((void **)local_54)[1],local_a4[5],local_a4[7],2),
               iVar6 < 0)))))) goto LAB_005e1de6;
          if (param_3 != (void *)0x0) {
            iVar6 = FUN_005d91c9(local_a4[8],local_8);
            if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_80,local_8), iVar6 < 0)) ||
                (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) ||
               (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x14000000,local_a4[8],((void **)local_54)[1],0,4),
               iVar6 < 0)) goto LAB_005e1de6;
            iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x12000000,local_80,local_a4[8],0,4);
            pppppppiVar14 = ((void **)local_54)[0];
            pppppppiVar11 = local_80;
            goto joined_r0x005e003f;
          }
          goto LAB_005dd6a0;
        }
      }
      goto LAB_005e12dc;
    }
    break;
  case 0x1b:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0x18);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            local_2c[uVar18 + 1] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 6);
          iVar6 = FUN_005d91c9(local_2c[1],local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_24,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0)) ||
             (((iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0 ||
               (iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0)) ||
              ((iVar6 = FUN_005d91c9(local_14,local_8), iVar6 < 0 ||
               (iVar6 = FUN_005d91c9(param_3,local_8), pppppppiVar11 = (void *)local_8, iVar6 < 0))))))
          goto LAB_005e1de6;
          pppppppiVar17 = (void *)((uint)local_8 & 0xffffff);
          iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x1c000000,local_2c[1],((void **)local_54)[0],0,0)
          ;
          if (iVar6 < 0) goto LAB_005e1de6;
          local_10 = (local_10 & 0xff000000u) | ((unsigned int)(SUB43(pppppppiVar11,0)) & 0xffffffu);
          uVar4 = (undefined3)local_10;
          local_10 = (unsigned int)CONCAT13(0x11,(undefined3)local_10);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_24,local_2c[1],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_40 = (unsigned int)CONCAT13(0x21,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_40,local_20,local_24,local_2c[1],4);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x1d000000,local_1c,((void **)local_54)[0],0,
                                    0), iVar6 < 0)) ||
             ((iVar6 = FUN_005d9fa1(param_2,local_10,local_18,local_1c,0,0), iVar6 < 0 ||
              (iVar6 = FUN_005d9fa1(param_2,local_40,local_14,local_18,local_1c,4), iVar6 < 0))))
          goto LAB_005e1de6;
          uVar20 = CONCAT44(4,local_14);
          pppppppiVar14 = (void *)local_20;
          goto LAB_005e0738;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x1c:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0x14);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_24)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 5);
          iVar6 = FUN_005d91c9(local_24,local_8);
          if (((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0)) ||
             ((iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0 ||
              (((iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0 ||
                (iVar6 = FUN_005d91c9(local_14,local_8), iVar6 < 0)) ||
               (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)))))) goto LAB_005e1de6;
          local_3c = (unsigned int)((uint)local_8 & 0xffffff);
          local_10 = (unsigned int)((uint)local_3c | 0x11000000);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_24,((void **)local_54)[0],0,0x40);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,(uint)local_3c | 0x24000000,local_20,((void **)local_54)[0],local_24
                                   ,0x40), iVar6 < 0)) goto LAB_005e1de6;
LAB_005dec59:
          iVar6 = FUN_005d9fa1(param_2,local_10,local_1c,local_20,0x4000000000);
          if ((iVar6 < 0) ||
             ((iVar6 = FUN_005d9fa1(param_2,(uint)local_3c | 0x21000000,local_18,local_1c,local_20,
                                    0x40), iVar6 < 0 ||
              (iVar6 = FUN_005d9fa1(param_2,local_10,local_14,local_18,0,0x40),
              pppppppiVar17 = (void *)(unsigned int)local_3c, pppppppiVar14 = (void *)local_14,
              pppppppiVar11 = local_18, iVar6 < 0)))) goto LAB_005e1de6;
          goto LAB_005e1186;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x1d:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 << 4);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_20)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 4);
          iVar6 = FUN_005d91c9(local_20,local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0)) ||
             ((iVar6 = FUN_005d91c9(local_14,local_8), iVar6 < 0 ||
              (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)))) goto LAB_005e1de6;
          local_3c = (unsigned int)((uint)local_8 & 0xffffff);
          iVar6 = FUN_005d9fa1(param_2,(uint)local_3c | 0x12000000,local_20,((void **)local_54)[0],0,0x40);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_10 = (unsigned int)((uint)local_3c | 0x11000000);
          goto LAB_005dec59;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x1e:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0x14);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_24)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 5);
          iVar6 = FUN_005d91c9(local_24,local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)) ||
             (((iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0 ||
               (iVar6 = FUN_005d91c9(local_14,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)))) goto LAB_005e1de6;
          local_3c = (unsigned int)((uint)local_8 & 0xffffff);
          local_10 = (unsigned int)((uint)local_3c | 0x11000000);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_24,((void **)local_54)[0],0,0x40);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,(uint)local_3c | 0x21000000,local_20,((void **)local_54)[0],
                                    local_24,0x40), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,local_10,local_1c,local_20,0,0x40), iVar6 < 0))
          goto LAB_005e1de6;
          local_58 = (void *)((uint)local_3c | 0x23000000);
          iVar6 = FUN_005d9fa1(param_2,local_58,local_18,local_20,local_1c,0x2000017);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,local_10,local_14,local_18,0,0x1a), iVar6 < 0))
          goto LAB_005e1de6;
          uVar20 = CONCAT44(0x2000017,local_18);
          pppppppiVar17 = local_58;
          pppppppiVar11 = param_3;
          pppppppiVar14 = (void *)local_14;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x1f:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 2);
        if (local_c != (void *)0x0) {
          iVar6 = FUN_005d91c9(local_c,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x14000000,local_c,((void **)local_54)[1],0,4);
          pppppppiVar14 = ((void **)local_54)[0];
          pppppppiVar11 = local_c;
joined_r0x005e003f:
          ((void **)local_54)[0] = pppppppiVar14;
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = ZEXT48(pppppppiVar11);
          goto LAB_005e127e;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x20:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        if (local_bc == (void *)0x1) {
          param_3 = (void *)0xffffffff;
          *(void **)pppppppiVar11 = (void *)0xffffffff;
          iVar6 = FUN_005d9fa1(param_2,0x11000001,&param_3,((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = CONCAT44(4,&param_3);
          pppppppiVar17 = (void *)0x21000001;
          pppppppiVar14 = ((void **)local_54)[0];
        }
        else {
          param_3 = (void *)0xffffffff;
          uVar19 = FUN_005d91c9(pppppppiVar11,local_8);
          iVar6 = (int)uVar19;
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,(uint)((ulonglong)uVar19 >> 0x20) & 0xffffff | 0x30000000
                                   ,&param_3,((void **)local_54)[0],((void **)local_54)[0],4), iVar6 < 0))
          goto LAB_005e1de6;
          uVar20 = 0x400000000;
          pppppppiVar17 = (void *)0x16000001;
          pppppppiVar14 = (void *)&param_3;
        }
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x21:
    if ((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
       (local_18 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005dbae8(param_2,param_3,((void **)local_54)[0],((void **)local_54)[1],((void **)local_54)[2],local_8);
        goto LAB_005e1525;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x22:
    if (((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
        (local_18 != (void *)0x0)) && (local_8 == 4)) {
      if (param_3 != (void *)0x0) {
        if ((*(byte *)(*(int *)(((int)this) + 8) + 0x90) & 0x40) == 0) {
          local_c = _malloc(0x20);
          if (local_c == (void *)0x0) goto LAB_005e12dc;
          uVar18 = 0;
          do {
            ((void **)&local_30)[uVar18] = (void *)((unsigned int *)local_c + uVar18);
            uVar18 = uVar18 + 1;
          } while (uVar18 < 8);
          pppppppiVar11 = local_c;
          for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(void **)pppppppiVar11 = (void *)0xffffffff;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
          }
          *(void **)param_3 = (void *)0xffffffff;
          ((void **)param_3)[1] = (void *)0xffffffff;
          ((void **)param_3)[2] = (void *)0xffffffff;
          ((void **)param_3)[3] = (void *)0xffffffff;
          iVar6 = FUN_005d9fa1(param_2,0x11000001,local_30,((void **)local_54)[0],0,0);
          if ((((((iVar6 < 0) ||
                 (iVar6 = FUN_005d9fa1(param_2,0x22000001,local_2c[0],local_30,((void **)local_54)[0],0x2000017
                                      ), iVar6 < 0)) ||
                ((iVar6 = FUN_005d9fa1(param_2,0x25000001,((unsigned int *)param_3 + 1),local_2c[0],((void **)local_54)[0],0),
                 iVar6 < 0 ||
                 ((iVar6 = FUN_005d9fa1(param_2,0x11000001,local_2c[1],((void **)local_54)[1],0,0), iVar6 < 0
                  || (iVar6 = FUN_005d9fa1(param_2,0x22000001,local_24,local_2c[1],((void **)local_54)[1],
                                           0x2000017), iVar6 < 0)))))) ||
               (iVar6 = FUN_005d9fa1(param_2,0x25000001,local_20,local_2c[0],local_24,0x2000017),
               iVar6 < 0)) ||
              (((iVar6 = FUN_005d9fa1(param_2,0x15000001,local_1c,((void **)local_54)[1],0,0), iVar6 < 0 ||
                (iVar6 = FUN_005d9fa1(param_2,0x25000001,local_18,((void **)local_54)[2],local_1c,0), iVar6 < 0
                )) || (iVar6 = FUN_005d9fa1(param_2,0x14000001,local_14,local_18,0,4), iVar6 < 0))))
             || ((iVar6 = FUN_005d9fa1(param_2,0x25000001,((unsigned int *)param_3 + 2),local_20,local_14,4),
                 iVar6 < 0 ||
                 (iVar6 = FUN_005d9fa1(param_2,0x10000001,param_3,((int)this) + 0x20,0,0x2000017),
                 iVar6 < 0)))) goto LAB_005e1de6;
          uVar20 = 0x200001700000000;
          pppppppiVar17 = (void *)0x10000001;
          pppppppiVar11 = ((unsigned int *)param_3 + 3);
          pppppppiVar14 = (void *)(((int)this) + 0x20);
        }
        else {
          local_20 = *(void **)(((void **)local_54)[0]);
          local_1c = (void *)*(void **)(((void **)local_54)[1]);
          local_18 = (void *)*(void **)(((void **)local_54)[2]);
          local_14 = (void *)*(void **)(((void **)local_54)[2]);
          *(void **)param_3 = (void *)0xffffffff;
          ((void **)param_3)[1] = (void *)0xffffffff;
          ((void **)param_3)[2] = (void *)0xffffffff;
          uVar20 = 0;
          ((void **)param_3)[3] = (void *)0xffffffff;
          pppppppiVar17 = (void *)0x33000004;
          pppppppiVar14 = &local_20;
        }
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x23:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        fVar3 = (float10)log2((float10)_DAT_006cce38);
        ppppppiVar10 = (void *)
                       FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                                    (double)((float10)0.6931471805599453 * fVar3));
        pppppppiVar11 = _malloc((int)local_8 << 3);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_5c)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 2);
LAB_005df2b2:
          pppppppiVar11 = (void *)local_8;
          pppppppiVar14 = (void *)local_5c;
          if (local_8 != 0) {
            for (; pppppppiVar11 != (void *)0x0;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + -1)) {
              *(void **)pppppppiVar14 = ppppppiVar10;
              pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
            }
          }
          iVar6 = FUN_005d91c9(local_58,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x15000000,local_58,((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = ZEXT48(local_58);
          pppppppiVar14 = (void *)local_5c;
          goto LAB_005e127e;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x24:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        fVar3 = (float10)log2((float10)_DAT_006cce38);
        fVar2 = (float10)log2((float10)_DAT_006ccb08);
        ppppppiVar10 = (void *)
                       FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                                    (double)(((float10)0.6931471805599453 * fVar3) /
                                            ((float10)0.6931471805599453 * fVar2)));
        pppppppiVar11 = _malloc((int)local_8 << 3);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_5c)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 2);
          goto LAB_005df2b2;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x25:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x15000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x26:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x21000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x27:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x20000000);
        pppppppiVar11 = param_3;
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x28:
    if ((void *)local_20 != (void *)0x0) {
      ((void **)local_54)[1] = _malloc((int)local_8 * 4);
      if (((void **)local_54)[1] != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0x24);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_34)[uVar18] = (int *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)pppppppiVar14));
          } while (uVar18 < 9);
          iVar6 = FUN_005d91c9(local_34,local_8);
          if (((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_30,local_8), iVar6 < 0)) ||
               (iVar6 = FUN_005d91c9(local_2c[0],local_8), iVar6 < 0)) ||
              (((iVar6 = FUN_005d91c9(local_2c[1],local_8), iVar6 < 0 ||
                (iVar6 = FUN_005d91c9(local_24,local_8), iVar6 < 0)) ||
               ((iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0 ||
                ((iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0 ||
                 (iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0)))))))) ||
             (iVar6 = FUN_005d91c9(((void **)local_54)[1],local_8), pppppppiVar11 = (void *)local_8, iVar6 < 0))
          goto LAB_005e1de6;
          pppppppiVar14 = (void *)((uint)local_8 & 0xffffff);
          local_3c = (unsigned int)pppppppiVar14;
          iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar14 | 0x13000000,local_34,((void **)local_54)[0],0,0x14)
          ;
          if (iVar6 < 0) goto LAB_005e1de6;
          local_10 = (local_10 & 0xff000000u) | ((unsigned int)(SUB43(pppppppiVar11,0)) & 0xffffffu);
          local_10 = (unsigned int)CONCAT13(0x11,(undefined3)local_10);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_30,local_34,0,0x18);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_44 = (unsigned int)((uint)pppppppiVar14 | 0x24000000);
          iVar6 = FUN_005d9fa1(param_2,local_44,local_2c[0],local_30,((void **)local_54)[0],2);
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,local_10,local_2c[1],((void **)local_54)[0],0,0), iVar6 < 0))
          goto LAB_005e1de6;
          local_38 = (void *)((uint)local_3c | 0x22000000);
          iVar6 = FUN_005d9fa1(param_2,local_38,local_24,((void **)local_54)[0],local_2c[1],0x2000017);
          if (((iVar6 < 0) ||
              (((iVar6 = FUN_005d9fa1(param_2,local_10,local_20,local_34,0,0), iVar6 < 0 ||
                (iVar6 = FUN_005d9fa1(param_2,local_38,local_1c,local_20,local_34,0x2000017),
                iVar6 < 0)) ||
               (iVar6 = FUN_005d9fa1(param_2,(uint)local_3c | 0x25000000,local_18,local_24,local_1c,
                                     0x2000017), iVar6 < 0)))) ||
             (iVar6 = FUN_005d9fa1(param_2,local_44,((void **)local_54)[1],local_2c[0],local_18,2), iVar6 < 0)
             ) goto LAB_005e1de6;
          if (param_3 != (void *)0x0) {
            iVar6 = FUN_005d91c9(local_14,local_8);
            if (((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) ||
               (iVar6 = FUN_005d9fa1(param_2,local_10,local_14,((void **)local_54)[1],0,2), iVar6 < 0))
            goto LAB_005e1de6;
            uVar20 = CONCAT44(0x10,local_14);
            pppppppiVar17 = (void *)(unsigned int)local_44;
            pppppppiVar11 = param_3;
            pppppppiVar14 = ((void **)local_54)[0];
            goto LAB_005e151b;
          }
          goto LAB_005dd6a0;
        }
      }
      goto LAB_005e12dc;
    }
    break;
  case 0x29:
  case 0x2a:
  case 0x2b:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 2);
        if (local_c != (void *)0x0) {
          pppppppiVar11 = (void *)0x0;
          if (local_8 != 0) {
            do {
              ((void **)local_c)[(int)pppppppiVar11] = *(void **)(((void **)local_54)[0]);
              pppppppiVar11 = (void *)((int)pppppppiVar11 + 1);
            } while ((unsigned int)pppppppiVar11 < local_8);
          }
          iVar6 = FUN_005d91c9(param_3,local_8);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = ZEXT48(((void **)local_54)[1]);
          pppppppiVar14 = local_c;
          goto LAB_005e01bb;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x2c:
  case 0x2f:
    if (((void *)local_20 == (void *)0x0) || (local_1c == (void *)0x0)) break;
    if (param_3 == (void *)0x0) goto LAB_005dd6a0;
    local_c = _malloc((int)local_8 << 2);
    if (local_c == (void *)0x0) goto LAB_005e12dc;
    pppppppiVar11 = (void *)0x0;
    if (local_8 != 0) {
      do {
        ((void **)local_c)[(int)pppppppiVar11] = *(void **)(((void **)local_54)[1]);
        pppppppiVar11 = (void *)((int)pppppppiVar11 + 1);
      } while ((unsigned int)pppppppiVar11 < local_8);
    }
    goto LAB_005e019c;
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
    if (((void *)local_20 == (void *)0x0) || (local_1c == (void *)0x0)) break;
    if (param_3 == (void *)0x0) goto LAB_005dd6a0;
    pppppppiVar11 = (void *)((void **)local_20)[4];
    local_58 = pppppppiVar11;
    if ((pppppppiVar11 == (void *)0x0) || (((void **)pppppppiVar11)[1] != (void *)0x8)) break;
    if (((void **)pppppppiVar11)[4] != (void *)0x1) {
      FUN_005d814c(2,((void **)pppppppiVar11)[5],((void **)pppppppiVar11)[6],((void **)pppppppiVar11)[7],0x400);
      iVar6 = FUN_005dc68d(&local_12c,((void **)local_54)[0],local_bc);
      if (-1 < iVar6) {
        local_10 = (unsigned int)((void **)pppppppiVar11)[6];
        local_3c = (unsigned int)((void **)pppppppiVar11)[7];
        FUN_005d8188();
        goto LAB_005df8d1;
      }
LAB_005df947:
      FUN_005d8188();
      goto LAB_005e1de6;
    }
    iVar6 = FUN_005dc68d(pppppppiVar11,((void **)local_54)[0],local_bc);
    if (iVar6 < 0) goto LAB_005e1de6;
    local_10 = (unsigned int)((void **)pppppppiVar11)[6];
    local_3c = (unsigned int)((void **)pppppppiVar11)[7];
LAB_005df8d1:
    ppppppiVar10 = ((void **)local_1c)[4];
    if ((ppppppiVar10 == (void *)0x0) || (((void **)ppppppiVar10)[1] != (void *)0x8)) break;
    if (((void **)ppppppiVar10)[4] == (void *)0x1) {
      iVar6 = FUN_005dc68d(ppppppiVar10,((void **)local_54)[1],local_b8);
      if (iVar6 < 0) goto LAB_005e1de6;
      pppppppiVar11 = (void *)((void **)ppppppiVar10)[6];
      local_40 = (unsigned int)((void **)ppppppiVar10)[7];
      local_44 = (unsigned int)pppppppiVar11;
    }
    else {
      FUN_005d814c(2,((void **)ppppppiVar10)[5],((void **)ppppppiVar10)[6],((void **)ppppppiVar10)[7],0x800);
      iVar6 = FUN_005dc68d(local_a4 + 1,((void **)local_54)[1],local_b8);
      if (iVar6 < 0) goto LAB_005df947;
      local_40 = (unsigned int)((void **)ppppppiVar10)[6];
      pppppppiVar11 = (void *)((void **)ppppppiVar10)[7];
      local_44 = (unsigned int)pppppppiVar11;
      FUN_005d8188();
    }
    if ((local_3c != local_40) || (local_8 != (unsigned int)((int)pppppppiVar11 * (int)local_10)))
    break;
    iVar15 = FUN_005d99dd(((void **)local_54)[0],((void **)local_58)[4],local_10,local_3c);
    if (iVar15 == 0) {
      pppppppiVar11 = _malloc((int)local_10 * 0x14);
      local_c = pppppppiVar11;
      if (pppppppiVar11 == (void *)0x0) goto LAB_005e12dc;
      uVar18 = 0;
      do {
        (&local_24)[uVar18] = pppppppiVar11;
        uVar18 = uVar18 + 1;
        pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_10));
      } while (uVar18 < 5);
      local_8 = (unsigned int)0x0;
      if (local_44 != 0) {
        local_6c = param_3;
        do {
          param_3 = (void *)0x0;
          if (local_40 != 0) {
            do {
              if (local_10 != 0) {
                local_58 = (void *)((int)local_3c * 4);
                pppppppiVar11 = (void *)((unsigned int *)((void **)local_54)[0] + (int)param_3);
                local_38 = (void *)(unsigned int)local_10;
                pppppppiVar14 = (void *)local_20;
                do {
                  ppppppiVar10 = *(void **)pppppppiVar11;
                  pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_3c));
                  *(void **)(((int)local_24 - (int)local_20) + (int)pppppppiVar14) =
                       ppppppiVar10;
                  *(void **)pppppppiVar14 = ((void **)((void **)local_54)[1])[(int)((int)param_3 * (int)local_44 + (int)local_8)];
                  pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
                  local_38 = (void *)((int)local_38 + -1);
                } while (local_38 != (void *)0x0);
              }
              iVar6 = FUN_005d91c9(local_18,local_10);
              if (iVar6 < 0) goto LAB_005e1de6;
              uVar18 = (uint)local_10 & 0xffffff;
              iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x25000000,local_18,local_24,local_20,0);
              if ((iVar6 < 0) ||
                 ((pppppppiVar11 = local_18, param_3 != (void *)0x0 &&
                  ((iVar6 = FUN_005d91c9(local_14,local_10), iVar6 < 0 ||
                   (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x24000000,local_14,local_1c,local_18,0),
                   pppppppiVar11 = (void *)local_14, iVar6 < 0)))))) goto LAB_005e1de6;
              pppppppiVar14 = local_1c;
              for (uVar18 = (uint)local_10 & 0x3fffffff; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(void **)pppppppiVar14 = *(void **)pppppppiVar11;
                pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
                pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
              }
              param_3 = (void *)((int)((unsigned int *)param_3 + 1));
              for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
                *(undefined1 *)pppppppiVar14 = *(undefined1 *)pppppppiVar11;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + 1);
                pppppppiVar14 = (void *)((int)pppppppiVar14 + 1);
              }
            } while ((unsigned int)param_3 < local_40);
          }
          pppppppiVar14 = (void *)0x0;
          pppppppiVar11 = local_6c;
          if (local_10 != 0) {
            do {
              *(void **)pppppppiVar11 = ((void **)local_1c)[(int)pppppppiVar14];
              pppppppiVar14 = (void *)((int)pppppppiVar14 + 1);
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_44));
            } while ((unsigned int)pppppppiVar14 < local_10);
          }
          local_8 = (unsigned int)((int)local_8 + 1);
          local_6c = (void *)((int)local_6c + 1);
        } while (local_8 < local_44);
      }
      goto LAB_005dd6a0;
    }
    iVar15 = FUN_005d9ac5(((void **)local_54)[1],((void **)ppppppiVar10)[4],local_40,pppppppiVar11);
    if (iVar15 == 0) {
      pppppppiVar11 = _malloc((int)pppppppiVar11 * 0x14);
      local_c = pppppppiVar11;
      if (pppppppiVar11 == (void *)0x0) goto LAB_005e12dc;
      uVar18 = 0;
      do {
        (&local_24)[uVar18] = pppppppiVar11;
        uVar18 = uVar18 + 1;
        pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_44));
      } while (uVar18 < 5);
      local_68 = (void *)0x0;
      if (local_10 != 0) {
        local_38 = (void *)0x0;
        local_64 = param_3;
        do {
          param_3 = (void *)0x0;
          if (local_3c != 0) {
            do {
              if (local_44 != 0) {
                pppppppiVar11 = (void *)((unsigned int *)((void **)local_54)[1] + (int)param_3 * (int)local_44);
                local_6c = (void *)(unsigned int)local_44;
                pppppppiVar14 = (void *)local_20;
                do {
                  *(void **)(((int)local_24 - (int)local_20) + (int)pppppppiVar14) =
                       ((void **)((void **)local_54)[0])[(int)local_38 + (int)param_3];
                  *(void **)pppppppiVar14 = *(void **)pppppppiVar11;
                  pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
                  pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
                  local_6c = (void *)((int)local_6c + -1);
                } while (local_6c != (void *)0x0);
              }
              iVar6 = FUN_005d91c9(local_18,local_44);
              if (iVar6 < 0) goto LAB_005e1de6;
              uVar18 = (uint)local_44 & 0xffffff;
              iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x25000000,local_18,local_24,local_20,0);
              if ((iVar6 < 0) ||
                 ((pppppppiVar11 = local_18, param_3 != (void *)0x0 &&
                  ((iVar6 = FUN_005d91c9(local_14,local_44), iVar6 < 0 ||
                   (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x24000000,local_14,local_1c,local_18,0),
                   pppppppiVar11 = (void *)local_14, iVar6 < 0)))))) goto LAB_005e1de6;
              pppppppiVar14 = local_1c;
              for (uVar18 = (uint)local_44 & 0x3fffffff; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(void **)pppppppiVar14 = *(void **)pppppppiVar11;
                pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
                pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
              }
              param_3 = (void *)((int)((unsigned int *)param_3 + 1));
              for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
                *(undefined1 *)pppppppiVar14 = *(undefined1 *)pppppppiVar11;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + 1);
                pppppppiVar14 = (void *)((int)pppppppiVar14 + 1);
              }
            } while ((unsigned int)param_3 < local_3c);
          }
          pppppppiVar14 = (void *)0x0;
          pppppppiVar11 = local_64;
          if (local_44 != 0) {
            do {
              *(void **)pppppppiVar11 = ((void **)local_1c)[(int)pppppppiVar14];
              pppppppiVar14 = (void *)((int)pppppppiVar14 + 1);
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
            } while ((unsigned int)pppppppiVar14 < local_44);
          }
          local_38 = (void *)((int)local_38 + (int)local_3c);
          local_68 = (void *)((int)local_68 + 1);
          local_64 = (void *)((unsigned int *)local_64 + (int)(local_44));
        } while ((unsigned int)local_68 < local_10);
      }
      goto LAB_005dd6a0;
    }
    local_c = _malloc((int)local_b8 << 2);
    if (local_c != (void *)0x0) {
      if (local_40 != 0) {
        local_6c = ((void **)local_54)[1];
        local_64 = (void *)(unsigned int)local_40;
        local_68 = local_c;
        do {
          if (local_44 != 0) {
            local_38 = (void *)(unsigned int)local_44;
            pppppppiVar11 = local_6c;
            pppppppiVar14 = local_68;
            do {
              *(void **)pppppppiVar14 = *(void **)pppppppiVar11;
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
              pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)((int)local_40));
              local_38 = (void *)((int)local_38 + -1);
            } while (local_38 != (void *)0x0);
            local_38 = (void *)0x0;
          }
          local_68 = (void *)((int)local_68 + 1);
          local_6c = (void *)((unsigned int *)local_6c + (int)(local_44));
          local_64 = (void *)((int)local_64 + -1);
        } while (local_64 != (void *)0x0);
      }
      uVar19 = FUN_005d91c9(param_3,local_8);
      iVar6 = (int)uVar19;
      if (iVar6 < 0) goto LAB_005e1de6;
      local_38 = (void *)0x0;
      if (local_10 != 0) {
        local_70 = (int)local_44 << 2;
        local_74 = (void *)((int)local_3c << 2);
        local_8 = (unsigned int)((void **)local_54)[0];
        pppppppiVar11 = (void *)(unsigned int)local_44;
        local_64 = (void *)((ulonglong)uVar19 >> 0x20);
        do {
          local_6c = (void *)0x0;
          if (pppppppiVar11 != (void *)0x0) {
            uVar18 = (uint)local_3c & 0xffffff;
            local_58 = (void *)((int)local_40 << 2);
            param_3 = local_64;
            local_68 = local_c;
            do {
              iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x30000000,param_3,local_8,local_68,0);
              if (iVar6 < 0) goto LAB_005e1de6;
              local_68 = (void *)((int)local_68 + (int)local_58);
              local_6c = (void *)((int)local_6c + 1);
              param_3 = ((unsigned int *)param_3 + 1);
              pppppppiVar11 = (void *)(unsigned int)local_44;
            } while ((unsigned int)local_6c < local_44);
          }
          local_8 = (unsigned int)((int)local_8 + (int)local_74);
          local_38 = (void *)((int)local_38 + 1);
          local_64 = (void *)((int)local_64 + local_70);
        } while ((unsigned int)local_38 < local_10);
      }
      goto LAB_005dd6a0;
    }
    goto LAB_005e12dc;
  case 0x32:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        *(void **)param_3 = (void *)0xffffffff;
        uVar20 = 0x1000000000;
        pppppppiVar17 = (void *)((uint)local_bc & 0xffffff | 0x35000000);
        pppppppiVar14 = ((void **)local_54)[0];
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x33:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        if (local_8 == 1) {
          local_c = _malloc(0x10);
          if (local_c != (void *)0x0) {
            uVar18 = 0;
            do {
              ((void **)&local_20)[uVar18] = (void *)((unsigned int *)local_c + uVar18);
              uVar18 = uVar18 + 1;
            } while (uVar18 < 4);
            iVar6 = FUN_005d91c9(local_20,1);
            if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_1c,1), iVar6 < 0)) ||
                ((iVar6 = FUN_005d91c9(local_18,1), iVar6 < 0 ||
                 ((((iVar6 = FUN_005d91c9(local_14,1), iVar6 < 0 ||
                    (iVar6 = FUN_005d91c9(param_3,1), iVar6 < 0)) ||
                   (iVar6 = FUN_005d9fa1(param_2,0x11000001,local_20,((void **)local_54)[0],0,0), iVar6 < 0))
                  || ((iVar6 = FUN_005d9fa1(param_2,0x22000001,local_1c,local_20,((void **)local_54)[0],
                                            0x2000017), iVar6 < 0 ||
                      (iVar6 = FUN_005d9fa1(param_2,0x22000001,local_18,((void **)local_54)[0],local_20,
                                            0x2000017), iVar6 < 0)))))))) ||
               (iVar6 = FUN_005d9fa1(param_2,0x11000001,local_14,local_18,0,0x1a), iVar6 < 0))
            goto LAB_005e1de6;
            uVar20 = CONCAT44(0x12,local_14);
            pppppppiVar14 = local_1c;
            goto LAB_005dff6c;
          }
        }
        else {
          uVar18 = (uint)local_8 & 0xffffff;
          local_38 = (void *)0xffffffff;
          local_64 = (void *)0xffffffff;
          local_68 = (void *)0xffffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x30000000,&local_38,((void **)local_54)[0],((void **)local_54)[0],4);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,0x16000001,&local_64,&local_38,0,4), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,0x12000001,&local_68,&local_64,0,4), iVar6 < 0))
          goto LAB_005e1de6;
          local_c = _malloc((int)local_8 << 2);
          if (local_c != (void *)0x0) {
            pppppppiVar11 = (void *)0x0;
            if (local_8 != 0) {
              do {
                ((void **)local_c)[(int)pppppppiVar11] = (void *)local_68;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + 1);
              } while ((unsigned int)pppppppiVar11 < local_8);
            }
            iVar6 = FUN_005d91c9(param_3,local_8);
            pppppppiVar14 = ((void **)local_54)[0];
            pppppppiVar11 = local_c;
            goto joined_r0x005e003f;
          }
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x34:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 << 3);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_5c)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 2);
          iVar6 = FUN_005d91c9(local_5c,local_8);
          if (((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_58,local_8), iVar6 < 0)) ||
             (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x15000000,local_5c,((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x25000000,local_58,((void **)local_54)[1],local_5c,0);
          pppppppiVar14 = local_58;
          goto joined_r0x005e0130;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x35:
    uVar19 = _DAT_0069f358;
joined_r0x005e014b:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        ppppppiVar10 = (void *)
                       FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,uVar19);
        pppppppiVar11 = _malloc((int)local_8 << 2);
        local_c = pppppppiVar11;
        if (pppppppiVar11 == (void *)0x0) {
          goto LAB_005e12dc;
        }
        pppppppiVar14 = (void *)local_8;
        if (local_8 != 0) {
          for (; pppppppiVar14 != (void *)0x0;
              pppppppiVar14 = (void *)((int)pppppppiVar14 + -1)) {
            *(void **)pppppppiVar11 = ppppppiVar10;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
          }
        }
LAB_005e019c:
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(local_c);
        pppppppiVar14 = ((void **)local_54)[0];
LAB_005e01bb:
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x25000000);
        pppppppiVar11 = param_3;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x36:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff);
        local_38 = (void *)0xffffffff;
        local_64 = (void *)0xffffffff;
        local_68 = (void *)0xffffffff;
        iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x30000000,&local_38,((void **)local_54)[0],
                             ((void **)local_54)[1],0);
        if (((iVar6 < 0) ||
            (iVar6 = FUN_005d9fa1(param_2,0x24000001,&local_64,&local_38,&local_38,0), iVar6 < 0))
           || (iVar6 = FUN_005d9fa1(param_2,0x11000001,&local_68,&local_64,0,0), iVar6 < 0))
        goto LAB_005e1de6;
        pppppppiVar11 = _malloc((int)local_8 << 3);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_5c)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 2);
          pppppppiVar11 = (void *)0x0;
          if (local_8 != 0) {
            do {
              ((void **)local_5c)[(int)pppppppiVar11] = (void *)local_68;
              pppppppiVar11 = (void *)((int)pppppppiVar11 + 1);
            } while ((unsigned int)pppppppiVar11 < local_8);
          }
          iVar6 = FUN_005d91c9(local_58,local_8);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar19 = FUN_005d91c9(param_3,local_8);
          iVar6 = (int)uVar19;
          if ((iVar6 < 0) ||
             (iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x25000000,local_58,((void **)local_54)[1],
                                   (int)((ulonglong)uVar19 >> 0x20),0), iVar6 < 0))
          goto LAB_005e1de6;
          uVar20 = ZEXT48(((void **)local_54)[0]);
          pppppppiVar14 = local_58;
          goto LAB_005e0738;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x37:
    if ((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
       (local_18 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_40 = 0xffffffff;
        uVar19 = FUN_005d91c9(&local_6c,1);
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(local_104,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&stack0xffffffbc,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&local_10,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&local_38,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&local_64,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(local_108,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&local_68,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&local_74,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar19 = FUN_005d91c9(&local_70,(int)((ulonglong)uVar19 >> 0x20));
        iVar6 = (int)uVar19;
        if ((iVar6 < 0) ||
           (iVar6 = FUN_005d91c9(&local_58,(int)((ulonglong)uVar19 >> 0x20)), iVar6 < 0))
        goto LAB_005e1de6;
        local_3c = (unsigned int)((uint)local_8 & 0xffffff);
        iVar6 = FUN_005d9fa1(param_2,(uint)local_3c | 0x30000000,&local_40,((void **)local_54)[0],((void **)local_54)[1],0
                            );
        if ((((iVar6 < 0) ||
             ((((((iVar6 = FUN_005d9fa1(param_2,0x25000001,&local_6c,&local_40,&local_40,4),
                  iVar6 < 0 ||
                  (iVar6 = FUN_005d9fa1(param_2,0x25000001,local_104,((void **)local_54)[2],((void **)local_54)[2],4),
                  iVar6 < 0)) ||
                 (iVar6 = FUN_005d9fa1(param_2,0x11000001,&stack0xffffffbc,&local_6c,0,8), iVar6 < 0
                 )) || ((iVar6 = FUN_005d9fa1(param_2,0x24000001,&local_10,((int)this) + 0x20,
                                              &stack0xffffffbc,0), iVar6 < 0 ||
                        (iVar6 = FUN_005d9fa1(param_2,0x25000001,&local_38,local_104,&local_10,0),
                        iVar6 < 0)))) ||
               (iVar6 = FUN_005d9fa1(param_2,0x23000001,&local_64,&local_38,((int)this) + 0x24,0x2000017
                                    ), iVar6 < 0)) ||
              ((iVar6 = FUN_005d9fa1(param_2,0x25000001,local_108,&local_38,&local_64,4), iVar6 < 0
               || (iVar6 = FUN_005d9fa1(param_2,0x25000001,&local_68,((void **)local_54)[2],&local_64,0),
                  iVar6 < 0)))))) ||
            (iVar6 = FUN_005d9fa1(param_2,0x25000001,&local_74,&local_68,&local_40,0), iVar6 < 0))
           || ((iVar6 = FUN_005d9fa1(param_2,0x16000001,&local_70,local_108,0,4), iVar6 < 0 ||
               (iVar6 = FUN_005d9fa1(param_2,0x24000001,&local_58,&local_74,&local_70,0), iVar6 < 0)
               ))) goto LAB_005e1de6;
        pppppppiVar11 = _malloc((int)local_8 * 0x14);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_24)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 5);
          if (local_8 != 0) {
            pppppppiVar11 = (void *)local_14;
            pppppppiVar14 = (void *)local_8;
            do {
              *(void **)(((int)local_18 - (int)local_14) + (int)pppppppiVar11) = local_68;
              *(void **)pppppppiVar11 = (void *)local_58;
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
              pppppppiVar14 = (void *)((int)pppppppiVar14 + -1);
            } while (pppppppiVar14 != (void *)0x0);
          }
          iVar6 = FUN_005d91c9(local_24,local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)) ||
             (iVar6 = FUN_005d91c9(param_3,local_8), pppppppiVar17 = (void *)(unsigned int)local_3c, iVar6 < 0))
          goto LAB_005e1de6;
          local_8 = (unsigned int)((uint)local_3c | 0x25000000);
          iVar6 = FUN_005d9fa1(param_2,local_8,local_24,local_18,((void **)local_54)[0],0);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,local_8,local_20,local_14,((void **)local_54)[1],0), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,(uint)pppppppiVar17 | 0x11000000,local_1c,local_20,0,0),
             iVar6 < 0)) goto LAB_005e1de6;
          uVar20 = ZEXT48(local_1c);
          pppppppiVar14 = local_24;
          goto LAB_005e0738;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x38:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        ppppppiVar10 = (void *)
                       FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006cc850)
        ;
        pppppppiVar11 = _malloc((int)local_8 << 4);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_20)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 4);
          pppppppiVar11 = (void *)local_8;
          pppppppiVar14 = (void *)local_14;
          if (local_8 != 0) {
            for (; pppppppiVar11 != (void *)0x0;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + -1)) {
              *(void **)pppppppiVar14 = ppppppiVar10;
              pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
            }
          }
          iVar6 = FUN_005d91c9(local_20,local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0)) ||
             (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          local_44 = SUB43(local_8,0);
          local_44 = (unsigned int)CONCAT13(0x24,local_44);
          iVar6 = FUN_005d9fa1(param_2,local_44,local_20,((void **)local_54)[0],local_14,0);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x13000000,local_1c,local_20,0,0x14), iVar6 < 0
              )) || (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x11000000,local_18,local_1c,0,0x18),
                    iVar6 < 0)) goto LAB_005e1de6;
          uVar20 = CONCAT44(2,local_18);
          pppppppiVar17 = (void *)(unsigned int)local_44;
          pppppppiVar11 = param_3;
          pppppppiVar14 = (void *)local_20;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x39:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        local_c = _malloc((int)local_8 << 2);
        if (local_c != (void *)0x0) {
          iVar6 = FUN_005d91c9(local_c,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x16000000,local_c,((void **)local_54)[0],0,4);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = 0x400000000;
          pppppppiVar17 = (void *)(uVar18 | 0x12000000);
          pppppppiVar11 = param_3;
          pppppppiVar14 = local_c;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x3a:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 * 0xc);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_60)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 3);
          if (local_8 != 0) {
            pppppppiVar11 = (void *)local_5c;
            pppppppiVar14 = (void *)local_8;
            do {
              *(undefined4 *)(((int)local_60 - (int)local_5c) + (int)pppppppiVar11) =
                   *(undefined4 *)(((int)this) + 0x24);
              *(void **)pppppppiVar11 = *(void **)(((int)this) + 0x20);
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
              pppppppiVar14 = (void *)((int)pppppppiVar14 + -1);
            } while (pppppppiVar14 != (void *)0x0);
          }
          iVar6 = FUN_005d91c9(local_58,local_8);
          if ((iVar6 < 0) || (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x21000000,local_58,((void **)local_54)[0],local_60,4);
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar20 = CONCAT44(0x14,local_5c);
          pppppppiVar14 = local_58;
          goto LAB_005e09fb;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x3b:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        pppppppiVar11 = _malloc((int)local_8 << 4);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_20)[uVar18] = (void *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 4);
          iVar6 = FUN_005d91c9(local_20,local_8);
          if (((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0)) ||
             ((iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0 ||
              ((iVar6 = FUN_005d91c9(local_14,local_8), iVar6 < 0 ||
               (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)))))) goto LAB_005e1de6;
          local_3c = (unsigned int)((uint)local_8 & 0xffffff);
          local_10 = (unsigned int)((uint)local_3c | 0x11000000);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_20,((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_38 = (void *)((uint)local_3c | 0x22000000);
          iVar6 = FUN_005d9fa1(param_2,local_38,local_1c,local_20,((void **)local_54)[0],0x2000017);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,local_38,local_18,((void **)local_54)[0],local_20,0x2000017),
              iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,local_10,local_14,local_18,0,0x1a), iVar6 < 0))
          goto LAB_005e1de6;
          uVar20 = CONCAT44(0x12,local_14);
          pppppppiVar17 = (void *)((uint)local_3c | 0x24000000);
          pppppppiVar11 = param_3;
          pppppppiVar14 = local_1c;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x3c:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        lVar21 = ZEXT48(local_8) << 0x20;
        pppppppiVar11 = param_3;
        goto LAB_005e0c0f;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x3d:
    if ((void *)local_20 != (void *)0x0) {
      _Size = (int)local_bc << 2;
      ((void **)local_54)[1] = _malloc(_Size);
      if (((void **)local_54)[1] != (void *)0x0) {
        ((void **)local_54)[2] = _malloc(_Size);
        if (((void **)local_54)[2] != (void *)0x0) {
          uVar19 = FUN_005d91c9(((void **)local_54)[1],ppppppiVar10);
          iVar6 = (int)uVar19;
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar19 = FUN_005d91c9((int)((ulonglong)uVar19 >> 0x20),ppppppiVar10);
          iVar6 = (int)uVar19;
          if (iVar6 < 0) goto LAB_005e1de6;
          lVar21 = CONCAT44(ppppppiVar10,(int)((ulonglong)uVar19 >> 0x20));
          pppppppiVar11 = ((void **)local_54)[1];
          goto LAB_005e0c0f;
        }
      }
      goto LAB_005e12dc;
    }
    break;
  case 0x3e:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        fVar3 = (float10)log2((float10)_DAT_006cce38);
        uVar8 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                             (double)((float10)_DAT_006ccb10 / ((float10)0.6931471805599453 * fVar3)
                                     ));
        local_58 = (void *)
                   FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006cc850);
        pppppppiVar11 = _malloc((int)local_8 << 5);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_30)[uVar18] = pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 8);
          if (local_8 != 0) {
            pppppppiVar11 = (void *)local_14;
            pppppppiVar14 = (void *)local_8;
            do {
              *(undefined4 *)(((int)local_18 - (int)local_14) + (int)pppppppiVar11) = uVar8;
              *(void **)pppppppiVar11 = (void *)local_58;
              pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
              pppppppiVar14 = (void *)((int)pppppppiVar14 + -1);
            } while (pppppppiVar14 != (void *)0x0);
          }
          iVar6 = FUN_005d91c9(local_30,local_8);
          if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_2c[0],local_8), iVar6 < 0)) ||
              ((iVar6 = FUN_005d91c9(local_2c[1],local_8), iVar6 < 0 ||
               ((iVar6 = FUN_005d91c9(local_24,local_8), iVar6 < 0 ||
                (iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0)))))) ||
             ((iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0 ||
              (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)))) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          uVar4 = (undefined3)local_8;
          local_8 = (unsigned int)CONCAT13(0x25,(undefined3)local_8);
          iVar6 = FUN_005d9fa1(param_2,local_8,local_30,((void **)local_54)[0],local_18,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_3c = (unsigned int)CONCAT13(0x14,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_3c,local_2c[0],local_30,0,4);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_10 = (unsigned int)CONCAT13(0x11,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_2c[1],local_30,0,0);
          if ((((iVar6 < 0) ||
               (iVar6 = FUN_005d9fa1(param_2,local_3c,local_24,local_2c[1],0,4), iVar6 < 0)) ||
              (iVar6 = FUN_005d9fa1(param_2,local_10,local_20,local_24,0,8), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x24000000,local_1c,local_2c[0],local_20,0),
             iVar6 < 0)) goto LAB_005e1de6;
          uVar8 = 0;
          goto LAB_005e0e4c;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x3f:
    if ((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
       (local_18 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_74 = (void *)
                   FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0da8);
        local_70 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_0069f338);
        pppppppiVar11 = _malloc((int)local_8 * 0x38);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            local_100[uVar18] = (int)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 0xe);
          uVar18 = 0;
          do {
            uVar19 = FUN_005d91c9(local_100[uVar18],local_8);
            iVar6 = (int)uVar19;
            if (iVar6 < 0) goto LAB_005e1de6;
            uVar18 = (int)((ulonglong)uVar19 >> 0x20) + 1;
          } while (uVar18 < 10);
          if (local_8 != 0) {
            local_58 = (void *)(unsigned int)local_8;
            puVar9 = local_d4;
            do {
              *(undefined4 *)((local_d8 - (int)local_d4) + (int)puVar9) =
                   *(undefined4 *)(((int)this) + 0x24);
              *puVar9 = *(undefined4 *)(((int)this) + 0x20);
              *(void **)((local_d0 - (int)local_d4) + (int)puVar9) = local_74;
              *(int *)((local_cc - (int)local_d4) + (int)puVar9) = local_70;
              puVar9 = puVar9 + 1;
              local_58 = (void *)((int)local_58 + -1);
            } while (local_58 != (void *)0x0);
          }
          iVar6 = FUN_005d91c9(param_3,local_8);
          pppppppiVar11 = (void *)local_8;
          if (iVar6 < 0) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x11000000,local_100[0],((void **)local_54)[0],0,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_44 = SUB43(pppppppiVar11,0);
          uVar4 = (undefined3)local_44;
          local_44 = (unsigned int)CONCAT13(0x24,local_44);
          iVar6 = FUN_005d9fa1(param_2,local_44,local_100[1],((void **)local_54)[1],local_100[0],0);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,local_44,local_f8[0],((void **)local_54)[2],local_100[0],0),
              iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x12000000,local_f8[1],local_100[1],0,0),
             iVar6 < 0)) goto LAB_005e1de6;
          local_8 = (unsigned int)CONCAT13(0x25,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_8,local_f8[2],local_f8[0],local_f8[1],0);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x21000000,local_ec[0],local_f8[2],local_d8,4),
              iVar6 < 0)) ||
             ((iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x20000000,local_ec[1],local_ec[0],local_d4,
                                    0x14), iVar6 < 0 ||
              (((iVar6 = FUN_005d9fa1(param_2,local_8,local_ec[2],local_ec[1],local_d0,8), iVar6 < 0
                || (iVar6 = FUN_005d9fa1(param_2,local_44,local_e0,local_ec[2],local_cc,0),
                   iVar6 < 0)) ||
               (iVar6 = FUN_005d9fa1(param_2,local_8,local_dc,local_ec[1],local_ec[1],0x14),
               iVar6 < 0)))))) goto LAB_005e1de6;
          uVar20 = (ulonglong)local_dc;
          pppppppiVar17 = (void *)local_8;
          pppppppiVar11 = param_3;
          pppppppiVar14 = local_e0;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x40:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        pppppppiVar14 = ((void **)local_54)[0];
        goto joined_r0x005e1120;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x41:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff);
        pppppppiVar14 = ((void **)local_54)[1];
        pppppppiVar11 = ((void **)local_54)[0];
LAB_005e1186:
        uVar20 = CONCAT44(0x2000017,pppppppiVar11);
        pppppppiVar17 = (void *)((uint)pppppppiVar17 | 0x23000000);
        pppppppiVar11 = param_3;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x42:
    if ((void *)local_20 != (void *)0x0) {
      pppppppiVar11 = _malloc((int)local_8 * 0xc);
      local_c = pppppppiVar11;
      if (pppppppiVar11 != (void *)0x0) {
        uVar18 = 0;
        do {
          (&local_60)[uVar18] = pppppppiVar11;
          uVar18 = uVar18 + 1;
          pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
        } while (uVar18 < 3);
        iVar6 = FUN_005d91c9(local_60,local_8);
        if ((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_5c,local_8), iVar6 < 0)) ||
            (iVar6 = FUN_005d91c9(local_58,local_8), iVar6 < 0)) ||
           ((iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0 ||
            (iVar6 = FUN_005da7de(param_2,((void **)local_54)[0],local_60,local_5c,local_8), iVar6 < 0))))
        goto LAB_005e1de6;
        uVar18 = (uint)local_8 & 0xffffff;
        iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x12000000,local_58,local_5c,0,0);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(local_58);
        pppppppiVar14 = local_60;
LAB_005e127e:
        pppppppiVar17 = (void *)(uVar18 | 0x25000000);
        pppppppiVar11 = param_3;
        goto LAB_005e151b;
      }
      goto LAB_005e12dc;
    }
    break;
  case 0x43:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        fVar3 = (float10)log2((float10)_DAT_006cce38);
        ppppppiVar10 = (void *)
                       FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,
                                    (double)((float10)_DAT_006ccb10 /
                                            ((float10)0.6931471805599453 * fVar3)));
        pppppppiVar11 = _malloc((int)local_8 * 0x24);
        local_c = pppppppiVar11;
        if (pppppppiVar11 != (void *)0x0) {
          uVar18 = 0;
          do {
            (&local_34)[uVar18] = (int *)pppppppiVar11;
            uVar18 = uVar18 + 1;
            pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)((int)local_8));
          } while (uVar18 < 9);
          pppppppiVar11 = (void *)local_8;
          pppppppiVar14 = (void *)local_14;
          if (local_8 != 0) {
            for (; pppppppiVar11 != (void *)0x0;
                pppppppiVar11 = (void *)((int)pppppppiVar11 + -1)) {
              *(void **)pppppppiVar14 = ppppppiVar10;
              pppppppiVar14 = (void *)((unsigned int *)pppppppiVar14 + (int)(1));
            }
          }
          iVar6 = FUN_005d91c9(local_34,local_8);
          if (((((iVar6 < 0) || (iVar6 = FUN_005d91c9(local_30,local_8), iVar6 < 0)) ||
               ((iVar6 = FUN_005d91c9(local_2c[0],local_8), iVar6 < 0 ||
                ((iVar6 = FUN_005d91c9(local_2c[1],local_8), iVar6 < 0 ||
                 (iVar6 = FUN_005d91c9(local_24,local_8), iVar6 < 0)))))) ||
              (iVar6 = FUN_005d91c9(local_20,local_8), iVar6 < 0)) ||
             (((iVar6 = FUN_005d91c9(local_1c,local_8), iVar6 < 0 ||
               (iVar6 = FUN_005d91c9(local_18,local_8), iVar6 < 0)) ||
              (iVar6 = FUN_005d91c9(param_3,local_8), iVar6 < 0)))) goto LAB_005e1de6;
          uVar18 = (uint)local_8 & 0xffffff;
          uVar4 = (undefined3)local_8;
          local_8 = (unsigned int)CONCAT13(0x25,(undefined3)local_8);
          iVar6 = FUN_005d9fa1(param_2,local_8,local_34,((void **)local_54)[0],local_14,0);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_3c = (unsigned int)CONCAT13(0x14,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_3c,local_30,local_34,0,4);
          if (iVar6 < 0) goto LAB_005e1de6;
          local_10 = (unsigned int)CONCAT13(0x11,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_10,local_2c[0],local_34,0,0);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,local_3c,local_2c[1],local_2c[0],0,4), iVar6 < 0)) ||
             (iVar6 = FUN_005d9fa1(param_2,local_10,local_24,local_2c[1],0,8), iVar6 < 0))
          goto LAB_005e1de6;
          local_44 = (unsigned int)CONCAT13(0x24,uVar4);
          iVar6 = FUN_005d9fa1(param_2,local_44,local_20,local_30,local_24,0);
          if (((iVar6 < 0) ||
              (iVar6 = FUN_005d9fa1(param_2,local_44,local_1c,local_30,local_2c[1],4), iVar6 < 0))
             || (iVar6 = FUN_005d9fa1(param_2,uVar18 | 0x12000000,local_18,local_1c,0,4), iVar6 < 0)
             ) goto LAB_005e1de6;
          uVar20 = ZEXT48(local_18);
          pppppppiVar17 = (void *)local_8;
          pppppppiVar11 = param_3;
          pppppppiVar14 = (void *)local_20;
          goto LAB_005e151b;
        }
        goto LAB_005e12dc;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x44:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        uVar18 = 0;
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          (&local_18)[uVar18] = (void *)*(void **)(((void **)local_54)[1]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 2);
        local_58 = (void *)*(void **)(((void **)local_54)[1]);
        FUN_005dc68d(0,&local_58,1);
        iVar15 = *(int *)(((int)this) + 8);
        ppppppiVar10 = ((void **)*(void **)(iVar15 + 0x14))[(int)local_18];
        if (((*(byte *)(*(int *)(*(int *)(iVar15 + 0x10) + (int)*(void **)ppppppiVar10 * 4) + 4) & 8) != 0)
           && (((void **)ppppppiVar10)[3] == (void *)0x0)) {
          local_40 = (unsigned int)0x0;
          pppppppiVar11 = *(void **)(iVar15 + 0x14);
          if (*(int *)(iVar15 + 8) != 0) {
            do {
              local_38 = pppppppiVar11;
              ppppppiVar13 = *(void **)local_38;
              if ((((*(void **)ppppppiVar10 == *(void **)ppppppiVar13) && (((void **)ppppppiVar10)[1] == ((void **)ppppppiVar13)[1])) &&
                  (((void **)ppppppiVar10)[2] == ((void **)ppppppiVar13)[2])) && (((void **)ppppppiVar13)[3] == (void *)0x1)) {
                local_14 = (void *)local_40;
                break;
              }
              local_40 = (unsigned int)((int)local_40 + 1);
              local_38 = (void *)((int)local_38 + 1);
              pppppppiVar11 = local_38;
            } while (local_40 < *(unsigned int *)(*(int *)(((int)this) + 8) + 8));
          }
          if (local_40 == *(unsigned int *)(iVar15 + 8)) {
            FUN_005d9e57(((int)this),param_2,0xdb5);
          }
        }
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(&local_18);
        pppppppiVar17 = (void *)0x40000002;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x45:
    if (((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
        (local_18 != (void *)0x0)) && ((void *)local_14 != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_30)[uVar18] = (void *)*(void **)(((void **)local_54)[0]);
          local_2c[uVar18 + 1] = *(void **)(((void **)local_54)[1]);
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[2]);
          uVar12 = uVar18 + 1;
          (&local_18)[uVar18] = (void *)*(void **)(((void **)local_54)[3]);
          uVar18 = uVar12;
        } while (uVar12 < 2);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(local_2c + 1);
        pppppppiVar17 = (void *)0x41000002;
        pppppppiVar11 = param_3;
        pppppppiVar14 = (void *)&local_30;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x46:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x42000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x47:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x43000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x48:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_5c)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 2);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x44000002;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_5c;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x49:
    if (((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
        (local_18 != (void *)0x0)) && ((void *)local_14 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_40 = (unsigned int)((int)((void **)local_54)[2] - (int)((void **)local_54)[1]);
        local_74 = (void *)((int)&local_20 - (int)((void **)local_54)[1]);
        local_3c = (unsigned int)((int)((void **)local_54)[3] - (int)((void **)local_54)[1]);
        local_70 = (int)&local_18 - (int)((void **)local_54)[1];
        local_58 = (void *)0x2;
        pppppppiVar11 = ((void **)local_54)[1];
        do {
          *(void **)(((int)&local_30 - (int)((void **)local_54)[1]) + (int)pppppppiVar11) = *(void **)(((void **)local_54)[0]);
          *(void **)((int)local_2c + (4U - (int)((void **)local_54)[1]) + (int)pppppppiVar11) =
               *(void **)pppppppiVar11;
          *(undefined4 *)((int)local_74 + (int)pppppppiVar11) =
               *(undefined4 *)((int)local_40 + (int)pppppppiVar11);
          *(undefined4 *)(local_70 + (int)pppppppiVar11) =
               *(undefined4 *)((int)local_3c + (int)pppppppiVar11);
          pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
          local_58 = (void *)((int)local_58 + -1);
        } while (local_58 != (void *)0x0);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(local_2c + 1);
        pppppppiVar17 = (void *)0x45000002;
        pppppppiVar11 = param_3;
        pppppppiVar14 = (void *)&local_30;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x4a:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x46000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x4b:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x47000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x4c:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_1c)[uVar18] = (void *)*(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 3);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x48000003;
        pppppppiVar11 = param_3;
        pppppppiVar14 = (void *)&local_1c;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x4d:
    if (((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
        (local_18 != (void *)0x0)) && ((void *)local_14 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_40 = (unsigned int)((int)((void **)local_54)[2] - (int)((void **)local_54)[1]);
        local_74 = (void *)((int)&local_e0 - (int)((void **)local_54)[1]);
        local_3c = (unsigned int)((int)((void **)local_54)[3] - (int)((void **)local_54)[1]);
        iVar15 = 8 - (int)((void **)local_54)[1];
        iVar6 = 0x14 - (int)((void **)local_54)[1];
        local_70 = (int)&local_d4 - (int)((void **)local_54)[1];
        local_58 = (void *)0x3;
        pppppppiVar11 = ((void **)local_54)[1];
        do {
          ppppppiVar10 = local_74;
          *(void **)((int)local_100 + iVar15 + (int)pppppppiVar11) = *(void **)(((void **)local_54)[0]);
          *(void **)((int)local_100 + iVar6 + (int)pppppppiVar11) = *(void **)pppppppiVar11;
          *(undefined4 *)((int)ppppppiVar10 + (int)pppppppiVar11) =
               *(undefined4 *)((int)pppppppiVar11 + (int)local_40);
          *(undefined4 *)(local_70 + (int)pppppppiVar11) =
               *(undefined4 *)((int)pppppppiVar11 + (int)local_3c);
          pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
          local_58 = (void *)((int)local_58 + -1);
        } while (local_58 != (void *)0x0);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(local_100 + 5);
        pppppppiVar17 = (void *)0x49000003;
        pppppppiVar11 = param_3;
        pppppppiVar14 = (void *)(local_100 + 2);
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x4e:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x4a000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x4f:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x4b000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x50:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_1c)[uVar18] = (void *)*(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 3);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x4c000003;
        pppppppiVar11 = param_3;
        pppppppiVar14 = (void *)&local_1c;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x51:
    if (((((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) &&
        (local_18 != (void *)0x0)) && ((void *)local_14 != (void *)0x0)) {
      if (param_3 != (void *)0x0) {
        local_40 = (unsigned int)((int)((void **)local_54)[2] - (int)((void **)local_54)[1]);
        local_74 = (void *)((int)&local_e0 - (int)((void **)local_54)[1]);
        local_3c = (unsigned int)((int)((void **)local_54)[3] - (int)((void **)local_54)[1]);
        iVar15 = 8 - (int)((void **)local_54)[1];
        iVar6 = 0x14 - (int)((void **)local_54)[1];
        local_70 = (int)&local_d4 - (int)((void **)local_54)[1];
        local_58 = (void *)0x3;
        pppppppiVar11 = ((void **)local_54)[1];
        do {
          ppppppiVar10 = local_74;
          *(void **)((int)pppppppiVar11 + (int)local_100 + iVar15) = *(void **)(((void **)local_54)[0]);
          *(void **)((int)pppppppiVar11 + (int)local_100 + iVar6) = *(void **)pppppppiVar11;
          *(undefined4 *)((int)pppppppiVar11 + (int)ppppppiVar10) =
               *(undefined4 *)((int)pppppppiVar11 + (int)local_40);
          *(undefined4 *)((int)pppppppiVar11 + local_70) =
               *(undefined4 *)((int)pppppppiVar11 + (int)local_3c);
          pppppppiVar11 = (void *)((unsigned int *)pppppppiVar11 + (int)(1));
          local_58 = (void *)((int)local_58 + -1);
        } while (local_58 != (void *)0x0);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(local_100 + 5);
        pppppppiVar17 = (void *)0x4d000003;
        pppppppiVar11 = param_3;
        pppppppiVar14 = (void *)(local_100 + 2);
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x52:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x4e000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x53:
    if (((void *)local_20 != (void *)0x0) && (local_1c != (void *)0x0)) {
      uVar18 = 0;
      if (param_3 != (void *)0x0) {
        do {
          (&local_20)[uVar18] = *(void **)(((void **)local_54)[0]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < 4);
        iVar6 = FUN_005d91c9(param_3,local_8);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = ZEXT48(((void **)local_54)[1]);
        pppppppiVar17 = (void *)0x4f000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_20;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x54:
    if ((void *)local_20 != (void *)0x0) {
      if ((param_3 != (void *)0x0) &&
         (local_40 = (unsigned int)0x0, ((void **)local_20)[6] != (void *)0x0)) {
        ppppppiVar10 = (void *)((void **)local_20)[5];
        do {
          ppppppiVar13 = (void *)0x0;
          if (ppppppiVar10 != (void *)0x0) {
            do {
              ((void **)param_3)[(int)(*(int *)((int)param_2 + 0x18) * (int)local_40 + (int)ppppppiVar13)] =
                   ((void **)((void **)local_54)[0])[(int)((int)(unsigned int)((void **)local_20)[6] * (int)ppppppiVar13 + (int)local_40)];
              ppppppiVar10 = (void *)((void **)local_20)[5];
              ppppppiVar13 = (void *)((int)ppppppiVar13 + 1);
            } while ((unsigned int)ppppppiVar13 < (unsigned int)ppppppiVar10);
          }
          local_40 = (unsigned int)((int)local_40 + 1);
        } while (local_40 < (unsigned int)((void **)local_20)[6]);
      }
      goto LAB_005dd6a0;
    }
    break;
  case 0x55:
    if ((void *)local_20 != (void *)0x0) {
      if (param_3 != (void *)0x0) {
        local_20 = (void *)
                   FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_0069f330);
        local_bc = ((void **)((void **)local_54)[0])[2];
        local_b8 = (int *)((void **)((void **)local_54)[0])[1];
        local_b4 = *(void **)(((void **)local_54)[0]);
        local_b0 = ((void **)((void **)local_54)[0])[3];
        local_1c = (void *)local_20;
        local_18 = (void *)local_20;
        local_14 = (void *)local_20;
        iVar6 = FUN_005d91c9(param_3,4);
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = CONCAT44(6,&local_20);
        pppppppiVar17 = (void *)0x25000004;
        pppppppiVar11 = param_3;
        pppppppiVar14 = &local_bc;
        goto LAB_005e151b;
      }
      goto LAB_005dd6a0;
    }
    break;
  default:
    FUN_005d9de1(((int)this),param_2,0xdac,"intrinsic function \'%s\' is not yet implemented");
  }
  iVar6 = -0x7fffbffb;
joined_r0x005e1120:
        if (iVar6 < 0) goto LAB_005e1de6;
        uVar20 = 0x400000000;
        pppppppiVar17 = (void *)((uint)local_8 & 0xffffff | 0x16000000);
        pppppppiVar11 = param_3;
        goto LAB_005e151b;
LAB_005e0738:
  pppppppiVar17 = (void *)((uint)pppppppiVar17 | 0x24000000);
  pppppppiVar11 = param_3;
  goto LAB_005e151b;
LAB_005e151b:
  iVar6 = FUN_005d9fa1(param_2,pppppppiVar17,pppppppiVar11,pppppppiVar14,uVar20);
LAB_005e1525:
  if (iVar6 < 0) goto LAB_005e1de6;
LAB_005dd6a0:
  iVar15 = *(int *)(local_154 + 0xc);
  if (iVar15 != 0) {
    param_2 = (void *)local_54;
    do {
      if (*(int *)(iVar15 + 8) != 0) {
        *(void **)(((int)this) + 0x1c) = *(void **)param_2;
        iVar6 = FUN_005e2a38(*(undefined4 *)(iVar15 + 8));
        if (iVar6 < 0) goto LAB_005e1de6;
      }
      iVar15 = *(int *)(iVar15 + 0xc);
      param_2 = (void *)((void **)param_2 + 1);
    } while (iVar15 != 0);
  }
  iVar6 = 0;
  goto LAB_005e1de6;
LAB_005e12dc:
  iVar6 = -0x7ff8fff2;
  goto LAB_005e1de6;
  iVar6 = -0x7fffbffb;
LAB_005e1de6:
  *(undefined4 *)(((int)this) + 0x1c) = local_158;
  uVar18 = 0;
  do {
    _free(((void **)local_54)[uVar18]);
    uVar18 = uVar18 + 1;
  } while (uVar18 < 4);
  _free(local_c);
  return iVar6;
}
