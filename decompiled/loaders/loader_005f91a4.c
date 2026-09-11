/* spd-match: far pct=6.12 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2446 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7709(...);
int __cdecl FUN_005f7738(...);
int __cdecl FUN_005f7760(...);
int __cdecl FUN_005f7a42(...);
int __cdecl FUN_005f84ab(...);
extern int _DAT_006ccaf8;
extern void LAB_005f926d(...);
extern void LAB_005f927c(...);
extern void LAB_005f95c1(...);
extern void LAB_005f96ec(...);

struct ThisCallBox {
  int FUN_005f91a4(uint *param_2, int param_3, uint param_4, int param_5, int param_6);
};
int ThisCallBox::FUN_005f91a4(uint *param_2, int param_3, uint param_4, int param_5, int param_6) {
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 local_68 [8];
  uint *local_60;
  int *local_58;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  iVar8 = *(int *)(((int)this) + 0x14);
  piVar1 = *(int **)(*(int *)(iVar8 + param_5 * 4) + 0x1c);
  iVar11 = *(int *)(*(int *)(iVar8 + param_4 * 4) + 0x1c);
  piVar2 = *(int **)(*(int *)(iVar8 + param_6 * 4) + 0x1c);
  piVar7 = *(int **)(iVar8 + param_3 * 4);
  local_c = *(int **)(iVar8 + (int)piVar1 * 4);
  piVar3 = *(int **)(iVar8 + (int)piVar2 * 4);
  uVar10 = piVar7[6];
  local_28 = *(int **)(iVar8 + iVar11 * 4);
  if ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar7 * 4) + 4) & 1) == 0) {
    return 0;
  }
  uVar5 = local_c[6] & piVar3[6] & local_28[6] & 0x20U | uVar10;
  piVar7[6] = uVar5;
  if (((uVar10 & 0xe000000) != 0) || ((*param_2 & 0xff000000) != 0x50000000)) goto LAB_005f927c;
  uVar12 = local_c[6] | piVar3[6];
  if ((uVar12 & 0x8000000) == 0) {
    if ((uVar12 & 0x4000000) != 0) {
      uVar5 = uVar5 | 0x4000000;
      goto LAB_005f926d;
    }
    if ((uVar12 & 0x2000000) != 0) {
      uVar5 = uVar5 | 0x2000000;
      goto LAB_005f926d;
    }
  }
  else {
    uVar5 = uVar5 | 0x8000000;
LAB_005f926d:
    piVar7[6] = uVar5;
  }
  piVar7[6] = piVar7[6] | local_c[6] & piVar3[6] & 0x1fU;
LAB_005f927c:
  if ((((local_c[6] | piVar3[6]) & 0x40U) != 0) && ((*param_2 & 0xff000000) == 0x50000000)) {
    piVar7[6] = piVar7[6] | 0x40;
  }
  if ((*param_2 & 0xff000000) != 0x50000000) {
    return 0;
  }
  piVar6 = piVar1;
  if (((uVar10 & 0x40) != 0) || ((*(byte *)(local_28 + 6) & 4) == 0)) {
    iVar8 = *(int *)(((int)this) + 0x10);
    uVar5 = *(uint *)(*(int *)(iVar8 + *local_28 * 4) + 4);
    if (((char)uVar5 < '\0') && (local_28[1] == -1)) {
      if (*(double *)(local_28 + 4) < _DAT_006ccaf8) {
        piVar6 = piVar2;
      }
    }
    else if ((piVar1 != piVar2) &&
            ((((uVar12 = *(uint *)(*(int *)(iVar8 + *local_c * 4) + 4) & 0x80, uVar12 == 0 ||
               (local_c[1] != -1)) || ((*(byte *)(*(int *)(iVar8 + *piVar3 * 4) + 4) & 0x80) == 0))
             || ((piVar3[1] != -1 || (*(double *)(local_c + 4) != *(double *)(piVar3 + 4))))))) {
      if ((uVar10 & 0x40) != 0) {
        return 0;
      }
      if (((((local_28[1] == -1) && ((uVar5 & 2) != 0)) &&
           ((puVar4 = *(uint **)(*(int *)(((int)this) + 0x18) + local_28[0xb] * 4),
            (*puVar4 & 0xff000000) == 0x11000000 &&
            (((uVar12 != 0 && (local_c[1] == -1)) && (*(double *)(local_c + 4) == 0.0)))))) &&
          (((*(byte *)(*(int *)(iVar8 + *piVar3 * 4) + 4) & 0x80) != 0 && (piVar3[1] == -1)))) &&
         (*(double *)(piVar3 + 4) == 1.0)) {
        uVar10 = 0;
        if (puVar4[3] != 0) {
          local_10 = (int *)puVar4[4];
          do {
            if (*local_10 == iVar11) break;
            local_10 = local_10 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar10 < puVar4[3]);
        }
        iVar8 = *(int *)(*(int *)(*(int *)(((int)this) + 0x14) + *(int *)(puVar4[2] + uVar10 * 4) * 4) +
                        0x1c);
        if ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x14) + iVar8 * 4) + 0x18) & 1) != 0) {
          piVar7[7] = iVar8;
          return 0;
        }
      }
      if (local_28[1] != -1) {
        return 0;
      }
      if (((((uVar5 & 2) != 0) &&
           (puVar4 = *(uint **)(*(int *)(((int)this) + 0x18) + local_28[0xb] * 4),
           (*puVar4 & 0xff000000) == 0x25000000)) &&
          ((uVar12 != 0 &&
           (((local_c[1] == -1 && (*(double *)(local_c + 4) == 0.0)) &&
            ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar3 * 4) + 4) & 0x80) != 0)))))) &&
         ((piVar3[1] == -1 && (*(double *)(piVar3 + 4) == 1.0)))) {
        uVar10 = puVar4[3];
        local_10 = (int *)0x0;
        if (uVar10 != 0) {
          piVar6 = (int *)puVar4[4];
          do {
            if (*piVar6 == iVar11) break;
            local_10 = (int *)((int)local_10 + 1);
            piVar6 = piVar6 + 1;
          } while ((unsigned int)(local_10) < uVar10);
        }
        local_18 = (int *)0x0;
        iVar8 = *(int *)(((int)this) + 0x14);
        local_24 = uVar10 * 4;
        local_14 = (int *)(puVar4[2] + (int)local_10 * 4);
        piVar9 = (int *)(puVar4[2] + ((int)local_10 + uVar10) * 4);
        do {
          local_30 = *(int **)(*(int *)(iVar8 + *local_14 * 4) + 0x1c);
          local_10 = *(int **)(iVar8 + *(int *)(*(int *)(iVar8 + *piVar9 * 4) + 0x1c) * 4);
          if ((((*(byte *)(*(int *)(iVar8 + (int)local_30 * 4) + 0x18) & 1) != 0) &&
              ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *local_10 * 4) + 4) & 0x80) != 0)) &&
             ((local_10[1] == -1 && (piVar6 = local_30, *(double *)(local_10 + 4) < _DAT_006ccaf8)))
             ) goto LAB_005f95c1;
          local_18 = (int *)((int)local_18 + 1);
          local_14 = local_14 + uVar10;
          piVar9 = piVar9 + -uVar10;
        } while ((unsigned int)(local_18) < 2);
      }
      if (local_28[1] != -1) {
        return 0;
      }
      if ((uVar5 & 2) == 0) {
        return 0;
      }
      puVar4 = *(uint **)(*(int *)(((int)this) + 0x18) + local_28[0xb] * 4);
      if ((*puVar4 & 0xff000000) != 0x24000000) {
        return 0;
      }
      local_1c = -1;
      if ((((uVar12 != 0) && (local_c[1] == -1)) &&
          ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar3 * 4) + 4) & 0x80) != 0)) &&
         (piVar3[1] == -1)) {
        if ((*(double *)(local_c + 4) == 0.0) && (*(double *)(piVar3 + 4) == 1.0)) {
          local_1c = 0x22000001;
        }
        else if ((*(double *)(local_c + 4) == 1.0) && (*(double *)(piVar3 + 4) == 0.0)) {
          local_1c = 0x23000001;
        }
      }
      uVar10 = puVar4[3];
      uVar5 = 0;
      if (uVar10 != 0) {
        piVar7 = (int *)puVar4[4];
        do {
          if (*piVar7 == iVar11) break;
          uVar5 = uVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (uVar5 < uVar10);
      }
      param_4 = 0;
      iVar8 = *(int *)(((int)this) + 0x14);
      local_2c = uVar10 * 4;
      local_18 = (int *)(puVar4[2] + uVar5 * 4);
      local_14 = (int *)(puVar4[2] + (uVar10 + uVar5) * 4);
      do {
        local_20 = *(int **)(*(int *)(iVar8 + *local_18 * 4) + 0x1c);
        iVar11 = *(int *)(*(int *)(iVar8 + *local_14 * 4) + 0x1c);
        piVar7 = *(int **)(iVar8 + iVar11 * 4);
        if (((piVar7[1] == -1) &&
            ((*(byte *)(*(int *)(*(int *)(((int)this) + 0x10) + *piVar7 * 4) + 4) & 2) != 0)) &&
           (puVar4 = *(uint **)(*(int *)(((int)this) + 0x18) + piVar7[0xb] * 4),
           (*puVar4 & 0xff000000) == 0x11000000)) {
          uVar5 = 0;
          if (puVar4[3] != 0) {
            piVar7 = (int *)puVar4[4];
            do {
              if (*piVar7 == iVar11) break;
              uVar5 = uVar5 + 1;
              piVar7 = piVar7 + 1;
              local_30 = piVar7;
            } while (uVar5 < puVar4[3]);
          }
          piVar7 = *(int **)(*(int *)(iVar8 + *(int *)(puVar4[2] + uVar5 * 4) * 4) + 0x1c);
          iVar11 = local_1c;
          if (local_1c != -1) {
LAB_005f96ec:
            local_8 = ((int)this);
            FUN_005f7709();
            iVar8 = FUN_005f7760(iVar11,2,1,0);
            if ((-1 < iVar8) && (iVar8 = FUN_005f7a42(param_2), -1 < iVar8)) {
              *local_58 = param_3;
              *local_60 = (uint)local_20;
              local_60[1] = (uint)piVar7;
              iVar8 = FUN_005f84ab(local_68,param_3,local_20,piVar7);
            }
            FUN_005f7738();
            return iVar8;
          }
          if ((piVar1 == piVar7) && (piVar2 == local_20)) {
            iVar11 = 0x20000001;
            goto LAB_005f96ec;
          }
          if ((piVar1 == local_20) && (piVar2 == piVar7)) {
            iVar11 = 0x21000001;
            goto LAB_005f96ec;
          }
        }
        local_18 = local_18 + uVar10;
        param_4 = param_4 + 1;
        local_14 = local_14 + -uVar10;
        if (1 < (unsigned int)(param_4)) {
          return 0;
        }
      } while( true );
    }
  }
LAB_005f95c1:
  piVar7[7] = (int)piVar6;
  return 0;
}
