/* spd-match: far pct=3.70 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_06/attempt4_r06_recipe */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif
long __cdecl __ftol(void);

int __cdecl FUN_005d9413(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d9fa1(...);
int __cdecl FUN_005dbae8(...);
int __cdecl FUN_005dc760(...);
int __cdecl FUN_005e2a38(...);
int __cdecl FUN_005f762c(...);
int __cdecl FUN_005f7cfc(...);
extern void LAB_005dc08d(...);
extern void LAB_005dc5da(...);
extern void LAB_005dc5df(...);

struct ThisCallBox {
  int FUN_005dc02b(undefined4 param_2, uint param_3, uint param_4, undefined4 *param_5);
};
int ThisCallBox::FUN_005dc02b(undefined4 param_2, uint param_3, uint param_4, undefined4 *param_5) {
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  size_t _Size;
  int *piVar9;
  int local_64 [3];
  undefined4 *local_58;
  undefined4 local_54;
  int iStack_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  void *local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  local_18 = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_3c = (void *)0x0;
  local_40 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_4c = 0;
  local_38 = 0;
  local_c = 0;
  if ((param_3 != 0) && (*(int *)(param_3 + 4) == 0xc)) {
    uVar8 = *(int *)(param_3 + 0x18) * *(int *)(param_3 + 0x14);
    local_c = uVar8;
    local_40 = (unsigned int *)_malloc(uVar8 * 8);
    if (local_40 != (undefined4 *)0x0) {
      local_20 = local_40 + uVar8;
      local_1c = local_40;
      goto LAB_005dc08d;
    }
    goto LAB_005dc5da;
  }
LAB_005dc08d:
  local_40 = local_1c;
  iVar1 = FUN_005e2a38(param_2,&local_2c);
  if (iVar1 < 0) goto LAB_005dc5df;
  iVar1 = FUN_005d9413(local_2c,&local_54);
  if (-1 < iVar1) {
    puVar6 = local_20;
    if ((double)(__int64)CONCAT44(iStack_50,local_54) != 0.0) {
      puVar6 = local_1c;
      param_4 = param_3;
    }
    if (local_c == 0) {
      iVar1 = FUN_005dc760(param_4);
    }
    else {
      iVar1 = FUN_005e2a38(param_4,puVar6);
    }
    goto LAB_005dc5df;
  }
  local_44 = 0xffffffff;
  local_24 = 0xffffffff;
  local_30 = 0xffffffff;
  local_28 = 0xffffffff;
  local_48 = 0xffffffff;
  iVar1 = FUN_005d9fa1(param_2,0x11000001,&local_44,&local_2c,0,0);
  if ((((iVar1 < 0) ||
       (iVar1 = FUN_005d9fa1(param_2,0x21000001,&local_24,&local_2c,&local_44,4), iVar1 < 0)) ||
      (iVar1 = FUN_005d9fa1(param_2,0x11000001,&local_30,&local_24,0,8), iVar1 < 0)) ||
     ((iVar1 = FUN_005d9fa1(param_2,0x22000001,&local_28,&local_30,&local_24,0x2000017), iVar1 < 0
      || (iVar1 = FUN_005d9fa1(param_2,0x23000001,&local_48,&local_30,&local_24,0x2000017),
         iVar1 < 0)))) goto LAB_005dc5df;
  uVar8 = *(uint *)(*(int *)(((int)this) + 4) + 0x18);
  _Size = uVar8 << 2;
  local_8 = uVar8;
  local_18 = (int *)_malloc(_Size);
  if ((local_18 == (int *)0x0) ||
     ((local_10 = (int *)_malloc(_Size), local_10 == (int *)0x0 ||
      (local_14 = (int *)_malloc(_Size), local_14 == (int *)0x0)))) {
LAB_005dc5da:
    iVar1 = -0x7ff8fff2;
  }
  else {
    piVar7 = *(int **)(((int)this) + 0x18);
    piVar9 = local_18;
    for (uVar8 = uVar8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(char *)piVar9 = (char)*piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
    if (param_3 == 0) {
      local_1c = local_20;
      piVar7 = local_18;
      piVar9 = local_10;
      for (uVar8 = local_8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)piVar9 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
    }
    else {
      piVar7 = (int *)(((int)this) + 0x2c);
      local_4c = *piVar7;
      iVar1 = FUN_005d9fa1(param_2,0x25000001,piVar7,piVar7,&local_28,0x2000017);
      if (iVar1 < 0) goto LAB_005dc5df;
      if (local_c == 0) {
        iVar1 = FUN_005dc760(param_3);
      }
      else {
        iVar1 = FUN_005e2a38(param_3,local_1c);
      }
      if (iVar1 < 0) goto LAB_005dc5df;
      *piVar7 = local_4c;
      piVar7 = *(int **)(((int)this) + 0x18);
      piVar9 = local_10;
      for (uVar8 = local_8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)piVar9 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      piVar7 = local_18;
      piVar9 = *(int **)(((int)this) + 0x18);
      for (uVar8 = local_8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)piVar9 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      local_4c = *(int *)(((int)this) + 0x38);
      *(undefined4 *)(((int)this) + 0x38) = 0;
    }
    if (param_4 == 0) {
      local_20 = local_1c;
      piVar7 = local_18;
      piVar9 = local_14;
      for (uVar8 = local_8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)piVar9 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
    }
    else {
      puVar6 = (undefined4 *)(((int)this) + 0x2c);
      uVar3 = *puVar6;
      iVar1 = FUN_005d9fa1(param_2,0x25000001,puVar6,puVar6,&local_48,0x2000017);
      if (iVar1 < 0) goto LAB_005dc5df;
      if (local_c == 0) {
        iVar1 = FUN_005dc760(param_4);
      }
      else {
        iVar1 = FUN_005e2a38(param_4,local_20);
      }
      if (iVar1 < 0) goto LAB_005dc5df;
      *puVar6 = uVar3;
      piVar7 = *(int **)(((int)this) + 0x18);
      piVar9 = local_14;
      for (uVar8 = local_8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)piVar9 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      piVar7 = local_18;
      piVar9 = *(int **)(((int)this) + 0x18);
      for (uVar8 = local_8 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(char *)piVar9 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar9 = (int *)((int)piVar9 + 1);
      }
      local_38 = *(int *)(((int)this) + 0x38);
      *(undefined4 *)(((int)this) + 0x38) = 0;
    }
    param_4 = 0;
    param_3 = local_c;
    if (local_8 != 0) {
      local_34 = (int)local_14 - (int)local_10;
      piVar7 = local_10;
      do {
        iVar1 = *piVar7;
        piVar9 = (int *)(local_34 + (int)piVar7);
        if (iVar1 != *piVar9) {
          if ((iVar1 == -1) ||
             (piVar2 = (int *)FUN_005f762c(iVar1), *(int *)(*(int *)(((int)this) + 8) + 0x4c) == *piVar2
             )) {
            iVar1 = *piVar9;
            *piVar7 = iVar1;
            *(int *)(*(int *)(((int)this) + 0x18) + param_4 * 4) = iVar1;
          }
          else if ((*piVar9 == -1) ||
                  (piVar2 = (int *)FUN_005f762c(*piVar9),
                  *(int *)(*(int *)(((int)this) + 8) + 0x4c) == *piVar2)) {
            iVar1 = *piVar7;
            *piVar9 = iVar1;
            *(int *)(*(int *)(((int)this) + 0x18) + param_4 * 4) = iVar1;
          }
          else {
            param_3 = param_3 + 1;
          }
        }
        param_4 = param_4 + 1;
        piVar7 = piVar7 + 1;
      } while (param_4 < local_8);
    }
    if (param_3 != 0) {
      local_3c = (unsigned int *)_malloc(param_3 << 4);
      if (local_3c == (void *)0x0) goto LAB_005dc5da;
      uVar8 = 0;
      pvVar4 = local_3c;
      do {
        local_64[uVar8] = (int)pvVar4;
        uVar8 = uVar8 + 1;
        pvVar4 = (void *)((int)pvVar4 + param_3 * 4);
      } while (uVar8 < 4);
      uVar8 = 0;
      puVar6 = local_1c;
      if (local_c != 0) {
        puVar6 = (undefined4 *)(local_64[0] - (int)local_1c);
        local_20 = (undefined4 *)((int)local_20 - (int)local_1c);
        iVar1 = local_64[1] - (int)local_1c;
        iStack_50 = local_64[2] - (int)local_1c;
        local_34 = local_c;
        do {
          *(undefined4 *)((int)puVar6 + (int)local_1c) = local_28;
          *(undefined4 *)(iVar1 + (int)local_1c) = *local_1c;
          *(undefined4 *)(iStack_50 + (int)local_1c) =
               *(undefined4 *)((int)local_20 + (int)local_1c);
          local_1c = local_1c + 1;
          local_34 = local_34 - 1;
          uVar8 = local_c;
        } while (local_34 != 0);
      }
      local_1c = puVar6;
      if (local_8 != 0) {
        puVar6 = (undefined4 *)(local_64[1] + uVar8 * 4);
        iStack_50 = local_64[0] - local_64[1];
        local_20 = (undefined4 *)(local_64[2] - local_64[1]);
        local_34 = local_8;
        piVar7 = local_14;
        do {
          if (*(int *)(((int)local_10 - (int)local_14) + (int)piVar7) != *piVar7) {
            *(undefined4 *)(iStack_50 + (int)puVar6) = local_28;
            *puVar6 = *(undefined4 *)(((int)local_10 - (int)local_14) + (int)piVar7);
            *(int *)((int)local_20 + (int)puVar6) = *piVar7;
            puVar6 = puVar6 + 1;
          }
          piVar7 = piVar7 + 1;
          local_34 = local_34 - 1;
        } while (local_34 != 0);
      }
      iVar1 = FUN_005dbae8(param_2,local_58,local_64[2],local_64[1],local_64[0],param_3);
      if (iVar1 < 0) goto LAB_005dc5df;
      uVar8 = local_c;
      puVar6 = local_58;
      if (param_5 != (undefined4 *)0x0) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *param_5 = *puVar6;
          puVar6 = puVar6 + 1;
          param_5 = param_5 + 1;
        }
      }
      uVar8 = 0;
      if (local_8 != 0) {
        puVar6 = local_58 + local_c;
        uVar5 = (int)local_14 - (int)local_10;
        local_34 = uVar5;
        do {
          if (local_10[uVar8] != *(int *)(uVar5 + (int)(local_10 + uVar8))) {
            uVar3 = FUN_005f762c(*(undefined4 *)(*(int *)(((int)this) + 0x18) + uVar8 * 4));
            iVar1 = FUN_005f762c(*puVar6);
            FUN_005f7cfc(uVar3);
            *(undefined4 *)(*(int *)(((int)this) + 0x18) + uVar8 * 4) = *puVar6;
            *(uint *)(iVar1 + 0x1c) = uVar8;
            puVar6 = puVar6 + 1;
            uVar5 = local_34;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_8);
      }
    }
    iVar1 = 0;
    if ((local_4c == 0) || (local_38 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(((int)this) + 0x38) = uVar3;
    if (local_4c != local_38) {
      FUN_005d9de1(((int)this),param_2,0xdac,"asymetric returns from if statements not yet implemented")
      ;
      iVar1 = -0x7fffbfff;
    }
  }
LAB_005dc5df:
  _free(local_18);
  _free(local_10);
  _free(local_14);
  _free(local_3c);
  _free(local_40);
  return iVar1;
}
