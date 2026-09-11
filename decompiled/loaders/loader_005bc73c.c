/* spd-match: far pct=5.99 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_02/attempt3_recipe_thiscall */
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
int __cdecl FUN_005ba80b(...);
int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d814c(...);
int __cdecl FUN_005d8831(...);
int __cdecl FUN_005d8a65(...);
extern void LAB_005bc800(...);
extern void LAB_005bc805(...);
extern void LAB_005bc826(...);
extern void LAB_005bc842(...);
extern void LAB_005bc941(...);
extern void LAB_005bca67(...);
extern void LAB_005bca6b(...);
extern void LAB_005bca85(...);
extern void LAB_005bca89(...);
extern void LAB_005bca8c(...);
extern void LAB_005bcb3e(...);
extern void LAB_005bcb75(...);
extern void LAB_005bcbaf(...);

struct ThisCallBox {
  undefined4 * FUN_005bc73c(int *param_2, char *param_3);
};
undefined4 * ThisCallBox::FUN_005bc73c(int *param_2, char *param_3) {
  int iVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  byte *pbVar17;
  uint uVar18;
  int *piVar19;
  int *piVar20;
  bool bVar21;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  char *local_8;
  
  iVar7 = (int)param_3;
  if (param_3 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)((int)param_3 + 4) != 2) {
    return (undefined4 *)0x0;
  }
  if (param_2 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2[1] != 0xc) {
    return (undefined4 *)0x0;
  }
  iVar12 = param_2[4];
  iVar1 = (int)param_3 + 0x10;
  pvVar9 = _malloc(0x50);
  if (pvVar9 == (void *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = (undefined4 *)FUN_005d8831(0,0x17,0,0,1,iVar1);
  }
  if (local_c == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (iVar12 != 0) {
    if (*(int *)(iVar12 + 4) == 1) {
      local_1c = 0;
      param_3 = (char *)iVar12;
      do {
        iVar12 = *(int *)((int)param_3 + 8);
        if ((iVar12 != 0) && (*(int *)(iVar12 + 4) == 5)) {
          pbVar17 = *(byte **)(*(int *)(iVar12 + 0x14) + 0x18);
          pbVar10 = *(byte **)(iVar7 + 0x18);
          do {
            bVar2 = *pbVar10;
            bVar21 = bVar2 < *pbVar17;
            if (bVar2 != *pbVar17) {
LAB_005bc800:
              iVar11 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_005bc805;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar10[1];
            bVar21 = bVar2 < pbVar17[1];
            if (bVar2 != pbVar17[1]) goto LAB_005bc800;
            pbVar10 = pbVar10 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar2 != 0);
          iVar11 = 0;
LAB_005bc805:
          if (iVar11 == 0) {
            piVar5 = *(int **)(*(int *)(iVar12 + 0x18) + 0x20);
            if (piVar5 != (int *)0x0) {
              iVar12 = (**(code **)(*piVar5 + 8))();
              local_c[4] = iVar12;
              if (iVar12 == 0) goto LAB_005bc842;
            }
            pvVar9 = _malloc(0x40);
            if (pvVar9 == (void *)0x0) {
              iVar12 = 0;
            }
            else {
              iVar12 = FUN_005d8a65(2,local_1c,iVar1);
            }
            local_c[9] = iVar12;
            goto LAB_005bcbaf;
          }
          iVar12 = FUN_005ba80b(*(undefined4 *)(*(int *)(iVar12 + 0x18) + 0x20));
          local_1c = local_1c + iVar12;
        }
        param_3 = *(char **)((int)param_3 + 0xc);
      } while (param_3 != (char *)0x0);
    }
    else if (*(int *)(iVar12 + 4) == 8) {
      piVar5 = *(int **)(iVar12 + 0x18);
      pcVar16 = *(char **)((int)param_3 + 0x18);
      piVar6 = *(int **)(iVar12 + 0x1c);
      uVar18 = *(uint *)(iVar12 + 0x20) & 0x200;
      pcVar8 = pcVar16;
      do {
        pcVar13 = pcVar8;
        pcVar8 = pcVar13 + 1;
      } while (*pcVar13 != '\0');
      cVar3 = *pcVar16;
      if (cVar3 == '_') {
        if (*(int *)(iVar12 + 0x10) == 2) {
          if ((pcVar13 <= pcVar16 + 1) || (local_14 = 3, pcVar16[1] != 'm')) {
            local_14 = 2;
          }
          goto LAB_005bc941;
        }
      }
      else if ('`' < cVar3) {
        if (((cVar3 < 'c') || (cVar3 == 'g')) || (cVar3 == 'r')) {
          if ((*(int *)(iVar12 + 0x10) == 0) || (*(int *)(iVar12 + 0x10) == 1)) {
            local_14 = 1;
            goto LAB_005bc941;
          }
        }
        else if ((('v' < cVar3) && (cVar3 < '{')) &&
                ((*(int *)(iVar12 + 0x10) == 0 || (*(int *)(iVar12 + 0x10) == 1)))) {
          local_14 = 0;
LAB_005bc941:
          local_10 = 0;
          local_18 = (int *)(local_c + 9);
          if (pcVar13 <= pcVar16) {
LAB_005bcb3e:
            iVar11 = local_c[9];
            do {
              iVar14 = iVar11;
              if ((iVar14 == 0) || (uVar18 != 0)) goto LAB_005bcb75;
              iVar11 = *(int *)(iVar14 + 0xc);
              if (iVar11 != 0) {
                iVar15 = iVar11;
                do {
                  if (*(int *)(*(int *)(iVar14 + 8) + 0x18) == *(int *)(*(int *)(iVar15 + 8) + 0x18)
                     ) {
                    uVar18 = 1;
                    break;
                  }
                  iVar15 = *(int *)(iVar15 + 0xc);
                } while (iVar15 != 0);
              }
            } while( true );
          }
          param_3 = pcVar16 + 2;
          local_8 = pcVar16 + 3;
          piVar19 = param_2;
          piVar20 = param_2;
          do {
            if (3 < local_10) break;
            if (local_14 == 0) {
              cVar3 = *pcVar16;
              if (cVar3 == 'w') {
LAB_005bca89:
                piVar20 = (int *)0x3;
              }
              else if (cVar3 == 'x') {
LAB_005bca67:
                piVar20 = (int *)0x0;
              }
              else {
                if (cVar3 != 'y') {
                  if (cVar3 == 'z') goto LAB_005bca85;
                  goto LAB_005bc826;
                }
LAB_005bca6b:
                piVar20 = (int *)0x1;
              }
LAB_005bca8c:
              piVar19 = (int *)0x0;
              pcVar16 = pcVar16 + 1;
              local_8 = local_8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              if (local_14 == 1) {
                cVar3 = *pcVar16;
                if (cVar3 == 'a') goto LAB_005bca89;
                if (cVar3 == 'b') {
LAB_005bca85:
                  piVar20 = (int *)0x2;
                  goto LAB_005bca8c;
                }
                if (cVar3 == 'g') goto LAB_005bca6b;
                if (cVar3 == 'r') goto LAB_005bca67;
                goto LAB_005bc826;
              }
              if (local_14 == 2) {
                if (((((pcVar13 <= param_3) || (*pcVar16 != '_')) ||
                     (cVar3 = pcVar16[1], cVar3 < '1')) ||
                    (('9' < cVar3 || (cVar4 = *param_3, cVar4 < '1')))) || ('9' < cVar4))
                goto LAB_005bc826;
                local_8 = local_8 + 3;
                piVar19 = (int *)(cVar3 + -0x31);
                piVar20 = (int *)(cVar4 + -0x31);
                pcVar16 = pcVar16 + 3;
                param_3 = param_3 + 3;
              }
              else if (local_14 == 3) {
                if ((((pcVar13 <= local_8) || (*pcVar16 != '_')) ||
                    ((pcVar16[1] != 'm' ||
                     (((cVar3 = *param_3, cVar3 < '0' || ('9' < cVar3)) ||
                      (cVar4 = *local_8, cVar4 < '0')))))) || ('9' < cVar4)) goto LAB_005bc826;
                local_8 = local_8 + 4;
                piVar19 = (int *)(cVar3 + -0x30);
                piVar20 = (int *)(cVar4 + -0x30);
                pcVar16 = pcVar16 + 4;
                param_3 = param_3 + 4;
              }
            }
            if ((piVar5 <= piVar19) || (piVar6 <= piVar20)) goto LAB_005bc826;
            pvVar9 = _malloc(0x14);
            if (pvVar9 == (void *)0x0) {
              iVar11 = 0;
            }
            else {
              iVar11 = FUN_005d78db(0,0,"Swizzle");
            }
            *local_18 = iVar11;
            if (iVar11 == 0) goto LAB_005bc842;
            pvVar9 = _malloc(0x40);
            if (pvVar9 == (void *)0x0) {
              iVar11 = 0;
            }
            else {
              iVar11 = FUN_005d8a65(2,(int *)((int)piVar19 * (int)piVar6 + (int)piVar20),iVar1);
            }
            *(int *)(*local_18 + 8) = iVar11;
            if (iVar11 == 0) goto LAB_005bc842;
            local_18 = (int *)(*local_18 + 0xc);
            local_10 = local_10 + 1;
          } while (pcVar16 < pcVar13);
          if ((pcVar13 <= pcVar16) && (local_10 < 5)) goto LAB_005bcb3e;
        }
      }
    }
  }
  goto LAB_005bc826;
LAB_005bcb75:
  pvVar9 = _malloc(0x24);
  if (pvVar9 == (void *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_005d814c(local_10 != 1,*(undefined4 *)(iVar12 + 0x14),1,local_10,
                          -(uint)(uVar18 != 0) & 0x200);
  }
  local_c[4] = iVar12;
LAB_005bcbaf:
  if (iVar12 == 0) goto LAB_005bc842;
  iVar12 = (**(code **)(*param_2 + 8))();
  local_c[8] = iVar12;
  if (iVar12 != 0) {
    FUN_005bb1eb(local_c);
    return local_c;
  }
LAB_005bc826:
  FUN_005ba1d9(((undefined4)this),iVar1,0xbca,"invalid subscript \'%s\'",*(undefined4 *)(iVar7 + 0x18));
LAB_005bc842:
  (**(code **)*local_c)(1);
  return (undefined4 *)0x0;
}
