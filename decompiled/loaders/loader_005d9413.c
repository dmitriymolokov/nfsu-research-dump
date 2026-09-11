/* spd-match: far pct=11.92 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_11/attempt3_refined_pointer_u64 */
#include "ghidra_compat.h"

int __cdecl __ftol(void);
float10 __cdecl fsin(float10);
float10 __cdecl fcos(float10);
float10 __cdecl log2(float10);
float10 __cdecl fpatan(float10, float10);

int __cdecl FUN_005b19e6(...);
int __cdecl FUN_005f7b0f(...);
int __cdecl FUN_005f7b21(...);
int __cdecl FUN_005f7b33(...);
int __cdecl FUN_005f7b57(...);
int __cdecl FUN_00672e20(...);
int __cdecl FUN_00672eeb(...);
int __cdecl FUN_00673590(...);
int __cdecl FUN_00673890(...);
int __cdecl FUN_00673b70(...);
extern int _DAT_006ccaf8;
extern int _DAT_006cce38;
extern void LAB_005d9713(...);
extern void LAB_005d973d(...);
extern void LAB_005d9751(...);
extern void LAB_005d980f(...);
extern void LAB_005d98ea(...);
extern void LAB_005d991c(...);
extern void LAB_005d9980(...);
extern void LAB_005d9983(...);

struct ThisCallBox {
  int FUN_005d9413(uint param_2, double *param_3);
};
int ThisCallBox::FUN_005d9413(uint param_2, double *param_3) {
  double dVar1;
  int *piVar2;
  uint *puVar3;
  float10 fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  double local_40;
  double local_38;
  undefined1 local_30 [8];
  double local_28;
  double local_20;
  double local_18;
  int *local_10;
  undefined4 local_c;
  uint uStack_8;
  
  iVar5 = *(int *)(((int)this) + 8);
  piVar7 = *(int **)(*(int *)(iVar5 + 0x14) + param_2 * 4);
  local_10 = piVar7;
  if (piVar7[1] != -1) {
    iVar5 = FUN_005d9413(piVar7[1],&local_28);
    if (iVar5 < 0) {
      return iVar5;
    }
    iVar6 = __ftol();
    iVar5 = piVar7[2];
    uStack_8 = FUN_005b19e6();
    param_2 = 0;
    if (uStack_8 == 0) {
      return -0x7fffbffb;
    }
    puVar8 = *(undefined4 **)(*(int *)(((int)this) + 8) + 0x14);
    while ((((piVar2 = (int *)*puVar8, *piVar7 != *piVar2 || (piVar2[1] != -1)) ||
            (iVar6 + iVar5 != piVar2[2])) || (piVar7[3] != piVar2[3]))) {
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
      if (uStack_8 <= param_2) {
        return -0x7fffbffb;
      }
    }
    iVar5 = FUN_005d9413(param_2,&local_18);
    if (iVar5 < 0) {
      return iVar5;
    }
    goto LAB_005d9983;
  }
  uVar9 = *(uint *)(*(int *)(*(int *)(iVar5 + 0x10) + *piVar7 * 4) + 4);
  if (((char)uVar9 < '\0') || ((*(byte *)(piVar7 + 6) & 0x80) != 0)) {
    fVar11 = (float10)*(double *)(piVar7 + 4);
  }
  else {
    if (((uVar9 & 2) == 0) || (piVar7[0xb] == -1)) {
      return -0x7fffbffb;
    }
    puVar3 = *(uint **)(*(int *)(iVar5 + 0x18) + piVar7[0xb] * 4);
    uVar9 = puVar3[3];
    uVar10 = 0;
    if (uVar9 != 0) {
      piVar7 = (int *)puVar3[4];
      do {
        if (param_2 == *piVar7) break;
        uVar10 = uVar10 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar10 < uVar9);
    }
    if (uVar10 == uVar9) {
      return -0x7fffbffb;
    }
    iVar5 = FUN_005f7b0f();
    if (iVar5 == 0) {
      iVar5 = FUN_005f7b21();
      if (iVar5 == 0) {
        iVar5 = FUN_005f7b33();
        if (iVar5 == 0) {
          iVar5 = FUN_005f7b57();
          if (iVar5 == 0) {
            return -0x7fffbffb;
          }
          uStack_8 = *puVar3 & 0xffffff;
          uVar9 = *puVar3 & 0xff000000;
          if (uVar9 == 0x30000000) {
            param_2 = 0;
            local_18 = 0.0;
            if (uStack_8 != 0) {
              iVar5 = uStack_8 << 2;
              do {
                iVar6 = FUN_005d9413(*(undefined4 *)(puVar3[2] + param_2 * 4),&local_40);
                if (iVar6 < 0) {
                  return iVar6;
                }
                iVar6 = FUN_005d9413(*(undefined4 *)(iVar5 + puVar3[2]),&local_38);
                if (iVar6 < 0) {
                  return iVar6;
                }
                param_2 = param_2 + 1;
                iVar5 = iVar5 + 4;
                local_18 = local_38 * local_40 + local_18;
              } while (param_2 < uStack_8);
            }
            goto LAB_005d9983;
          }
          if (uVar9 != 0x33000000) {
            return -0x7fffbffb;
          }
          local_18 = 0.0;
          if (uVar10 != 0) {
            if (uVar10 == 1) {
              iVar5 = FUN_005d9413(*(undefined4 *)puVar3[2],&local_20);
              if (iVar5 < 0) {
                return iVar5;
              }
              if (local_20 <= _DAT_006ccaf8) goto LAB_005d9983;
              goto LAB_005d991c;
            }
            if (uVar10 == 2) {
              iVar5 = FUN_005d9413(*(undefined4 *)puVar3[2],&local_20);
              if (iVar5 < 0) {
                return iVar5;
              }
              if (local_20 <= _DAT_006ccaf8) goto LAB_005d9983;
              iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + 4),&local_28);
              if (iVar5 < 0) {
                return iVar5;
              }
              if (local_28 <= _DAT_006ccaf8) goto LAB_005d9983;
              iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + 0xc),(double *)local_30);
              if (iVar5 < 0) {
                return iVar5;
              }
LAB_005d98ea:
              fVar11 = (float10)FUN_00673890();
              goto LAB_005d9980;
            }
            if (uVar10 != 3) goto LAB_005d9983;
          }
          goto LAB_005d973d;
        }
        iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + uVar10 * 4),&local_28);
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + (puVar3[3] + uVar10) * 4),&local_20);
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + (uVar10 + puVar3[3] * 2) * 4),(double *)&local_c);
        if (iVar5 < 0) {
          return iVar5;
        }
        if ((*puVar3 & 0xff000000) != 0x50000000) {
          return -0x7fffbffb;
        }
        if (_DAT_006ccaf8 <= local_28) goto LAB_005d991c;
LAB_005d980f:
        fVar11 = (float10)(double)(__int64)CONCAT44(uStack_8,local_c);
      }
      else {
        iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + uVar10 * 4),(double *)&local_c);
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + (puVar3[3] + uVar10) * 4),&local_20);
        if (iVar5 < 0) {
          return iVar5;
        }
        uVar9 = *puVar3 & 0xff000000;
        if (uVar9 == 0x20000000) {
          if ((double)(__int64)CONCAT44(uStack_8,local_c) < local_20) goto LAB_005d980f;
LAB_005d991c:
          fVar11 = (float10)local_20;
        }
        else {
          if (uVar9 == 0x21000000) {
            if ((double)(__int64)CONCAT44(uStack_8,local_c) <= local_20) goto LAB_005d991c;
            goto LAB_005d980f;
          }
          if (uVar9 == 0x22000000) {
            if (local_20 <= (double)(__int64)CONCAT44(uStack_8,local_c)) {
LAB_005d9751:
              fVar11 = (float10)0;
              goto LAB_005d9980;
            }
          }
          else {
            if (uVar9 != 0x23000000) {
              if (uVar9 == 0x24000000) {
                fVar11 = (float10)local_20 + (float10)(double)(__int64)CONCAT44(uStack_8,local_c);
              }
              else {
                if (uVar9 != 0x25000000) {
                  if (uVar9 != 0x26000000) {
                    return -0x7fffbffb;
                  }
                  dVar1 = (double)(__int64)CONCAT44(uStack_8,local_c);
                  fVar11 = (float10)local_20;
                  goto LAB_005d9713;
                }
                fVar11 = (float10)local_20 * (float10)(double)(__int64)CONCAT44(uStack_8,local_c);
              }
              goto LAB_005d9980;
            }
            if ((double)(__int64)CONCAT44(uStack_8,local_c) < local_20) goto LAB_005d9751;
          }
LAB_005d973d:
          fVar11 = (float10)1;
        }
      }
    }
    else {
      iVar5 = FUN_005d9413(*(undefined4 *)(puVar3[2] + uVar10 * 4),(double *)&local_c);
      if (iVar5 < 0) {
        return iVar5;
      }
      uVar9 = *puVar3 & 0xff000000;
      if (uVar9 < 0x17000001) {
        if (uVar9 == 0x17000000) {
          fVar11 = (float10)fsin((float10)(double)(__int64)CONCAT44(uStack_8,local_c));
        }
        else {
          if (uVar9 == 0x10000000) goto LAB_005d980f;
          if (uVar9 == 0x11000000) {
            fVar11 = -(float10)(double)(__int64)CONCAT44(uStack_8,local_c);
          }
          else if (uVar9 == 0x12000000) {
            fVar11 = (float10)1 / (float10)(double)(__int64)CONCAT44(uStack_8,local_c);
          }
          else if (uVar9 == 0x13000000) {
            iVar5 = FUN_00672eeb(CONCAT44(uStack_8,local_c));
            if (iVar5 == 0) goto LAB_005d9751;
            fVar11 = (float10)FUN_00673590(CONCAT44(uStack_8,local_c));
            fVar11 = (float10)(double)(__int64)CONCAT44(uStack_8,local_c) - fVar11;
          }
          else {
            if (uVar9 == 0x14000000) goto LAB_005d98ea;
            if (uVar9 == 0x15000000) {
              fVar11 = (float10)log2((float10)(double)(__int64)CONCAT44(uStack_8,local_c));
              fVar4 = (float10)log2((float10)_DAT_006cce38);
              fVar11 = ((float10)0.6931471805599453 * fVar11) /
                       ((float10)0.6931471805599453 * fVar4);
            }
            else {
              if (uVar9 != 0x16000000) {
                return -0x7fffbffb;
              }
              fVar11 = SQRT((float10)(double)(__int64)CONCAT44(uStack_8,local_c));
            }
          }
        }
      }
      else if (uVar9 == 0x18000000) {
        fVar11 = (float10)fcos((float10)(double)(__int64)CONCAT44(uStack_8,local_c));
      }
      else if (uVar9 == 0x19000000) {
        fVar11 = (float10)FUN_00673b70();
      }
      else if (uVar9 == 0x1a000000) {
        fVar11 = (float10)FUN_00672e20();
      }
      else {
        if (uVar9 != 0x1b000000) {
          if ((uVar9 != 0x1c000000) && (uVar9 != 0x1d000000)) {
            return -0x7fffbffb;
          }
          goto LAB_005d9751;
        }
        dVar1 = (double)(__int64)CONCAT44(uStack_8,local_c);
        fVar11 = (float10)1;
LAB_005d9713:
        fVar11 = (float10)fpatan((float10)dVar1,fVar11);
      }
    }
  }
LAB_005d9980:
  local_18 = (double)fVar11;
LAB_005d9983:
  *(byte *)(local_10 + 6) = *(byte *)(local_10 + 6) | 0x80;
  *(double *)(local_10 + 4) = local_18;
  if (param_3 != (double *)0x0) {
    *param_3 = local_18;
  }
  return 0;
}
