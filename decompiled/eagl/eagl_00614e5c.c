/* spd-match: far pct=7.39 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_int/batches/20260724T143422Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

int __cdecl FUN_005f7186(...);
int __cdecl FUN_005f7709(...);
int __cdecl FUN_005f7760(...);
int __cdecl FUN_005f7a42(...);
int __cdecl FUN_00614d56(...);
extern void LAB_0061512d(...);

struct ThisCallBox {
  int FUN_00614e5c(int param_2, undefined4 *param_3, int *param_4, undefined4 *param_5, uint *param_6, int param_7, int param_8);
};
int ThisCallBox::FUN_00614e5c(int param_2, undefined4 *param_3, int *param_4, undefined4 *param_5, uint *param_6, int param_7, int param_8) {
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int local_34 [4];
  undefined4 *local_24 [4];
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_24[0] = (undefined4 *)0x0;
  local_24[1] = (undefined4 *)0x0;
  local_24[2] = (undefined4 *)0x0;
  uVar9 = *param_6 & 0xffffff;
  local_c = ((int *)this);
  local_14 = uVar9;
  local_24[3] = (undefined4 *)0x0;
  if ((*(byte *)((int)((int *)this) + 0x93) & 1) == 0) {
    uVar11 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = FUN_00614d56(*(undefined4 *)(param_2 + uVar11 * 4),local_24 + uVar11,
                             local_34 + uVar11);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
    local_8 = 0;
    if (uVar9 != 0) {
      local_10 = (int)local_24 - (int)param_4;
      piVar5 = param_4;
      do {
        if (((*(int *)(*(int *)(((int *)this)[5] +
                               *(int *)(((int)local_34 - (int)param_4) + (int)piVar5) * 4) + 0x24)
              != *piVar5) || ((*(byte *)(*(int *)(((int *)this)[5] + *piVar5 * 4) + 0x22) & 0xf) != 0)) ||
           (*(undefined4 **)(((int)local_24 - (int)param_4) + (int)piVar5) != local_24[0]))
        goto LAB_0061512d;
        local_8 = local_8 + 1;
        piVar5 = piVar5 + 1;
      } while (local_8 < uVar9);
    }
    uVar11 = 0;
    if (local_24[0][3] != 0) {
      do {
        uVar8 = 0;
        local_8 = 1;
        if (uVar9 == 0) goto LAB_0061512d;
        do {
          if (*(int *)(local_24[0][4] + uVar11 * 4) == *(int *)(param_2 + uVar8 * 4)) {
            local_8 = 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar9);
        if (local_8 != 0) goto LAB_0061512d;
        uVar11 = uVar11 + 1;
      } while (uVar11 < (uint)local_24[0][3]);
    }
  }
  else {
    local_8 = 0;
    if (uVar9 != 0) {
      piVar5 = param_4;
      do {
        iVar4 = *(int *)(((int *)this)[5] + *(int *)((param_2 - (int)param_4) + (int)piVar5) * 4);
        if ((*(int *)(iVar4 + 0x24) != *piVar5) || ((*(uint *)(iVar4 + 0x20) & 0xf0000) != 0x10000))
        goto LAB_0061512d;
        iVar4 = *(int *)(((int *)this)[5] + *piVar5 * 4);
        uVar11 = *(uint *)(iVar4 + 0x20);
        if (((uVar11 & 0xf0000) != 0) ||
           (((uVar11 & 0x200) == 0 &&
            ((uVar11 = *(uint *)(iVar4 + 0x18), (uVar11 & 4) == 0 || ((uVar11 & 0x10) == 0))))))
        goto LAB_0061512d;
        local_8 = local_8 + 1;
        piVar5 = piVar5 + 1;
      } while (local_8 < uVar9);
    }
  }
  pvVar6 = _malloc(0x38);
  if (pvVar6 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005f7709();
  }
  if (iVar4 == 0) {
    iVar7 = -0x7ff8fff2;
  }
  else {
    iVar7 = FUN_005f7760(uVar9 | 0xf1000000,uVar9 * 3,uVar9,0);
    if ((-1 < iVar7) && (iVar7 = FUN_005f7a42(param_6), piVar5 = local_c, -1 < iVar7)) {
      puVar10 = *(undefined4 **)(param_7 + 0x10);
      puVar12 = *(undefined4 **)(iVar4 + 0x10);
      for (uVar11 = uVar9; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      piVar13 = *(int **)(iVar4 + 8);
      for (uVar11 = uVar9; uVar11 != 0; uVar11 = uVar11 - 1) {
        *piVar13 = *param_4;
        param_4 = param_4 + 1;
        piVar13 = piVar13 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(char *)piVar13 = (char)*param_4;
        param_4 = (int *)((int)param_4 + 1);
        piVar13 = (int *)((int)piVar13 + 1);
      }
      puVar10 = (undefined4 *)(*(int *)(iVar4 + 8) + local_14 * 8);
      for (uVar11 = uVar9; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar10 = *param_3;
        param_3 = param_3 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)param_3;
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar10 = (undefined4 *)(*(int *)(iVar4 + 8) + uVar9 * 4);
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar10 = *param_5;
        param_5 = param_5 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)param_5;
        param_5 = (undefined4 *)((int)param_5 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar7 = local_c[5];
      piVar13 = *(int **)(iVar7 + **(int **)(iVar4 + 0x10) * 4);
      piVar1 = *(int **)(iVar7 + **(int **)(iVar4 + 8) * 4);
      piVar2 = *(int **)(iVar7 + (*(int **)(iVar4 + 8))[local_14 * 2] * 4);
      iVar7 = *piVar13;
      bVar3 = false;
      if (((((iVar7 == *piVar1) && (piVar13[2] == piVar1[2])) ||
           ((iVar7 == *piVar2 && (piVar13[2] == piVar2[2])))) || (iVar7 != local_c[0x18])) &&
         ((*(byte *)((int)local_c + 0x93) & 1) == 0)) {
        bVar3 = true;
      }
      iVar7 = (**(code **)(*local_c + 0x24))(iVar4,0);
      if ((iVar7 != 0) || (bVar3)) {
        FUN_005f7186(1);
LAB_0061512d:
        iVar7 = 1;
      }
      else {
        if (*(int *)(param_8 * 4 + piVar5[6]) != 0) {
          FUN_005f7186(1);
        }
        *(int *)(param_8 * 4 + piVar5[6]) = iVar4;
        *param_6 = 0;
        if (local_24[0] != (undefined4 *)0x0) {
          *local_24[0] = 0;
        }
        iVar7 = 0;
      }
    }
  }
  return iVar7;
}
