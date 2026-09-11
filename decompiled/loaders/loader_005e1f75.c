/* spd-match: far pct=7.82 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005b1775(...);
int __cdecl FUN_005d932c(...);
int __cdecl FUN_005d99a5(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d9eb5(...);
int __cdecl FUN_005d9fa1(...);
int __cdecl FUN_005dbe7e(...);
int __cdecl FUN_005dc613(...);
int __cdecl FUN_005dc760(...);
int __cdecl FUN_005e2a38(...);
int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005f762c(...);
int __cdecl FUN_005f7e20(...);
int __cdecl FUN_005f7f90(...);
int __cdecl FUN_00673533(...);
extern void LAB_005e232b(...);
extern void LAB_005e23a8(...);
extern void LAB_005e251e(...);
extern void LAB_005e26ba(...);
extern void LAB_005e2852(...);
extern void LAB_005e287b(...);
extern void LAB_005e2926(...);

struct ThisCallBox {
  int FUN_005e1f75(undefined4 param_2, uint param_3, uint param_4, undefined4 *param_5, int param_6, int param_7);
};
int ThisCallBox::FUN_005e1f75(undefined4 param_2, uint param_3, uint param_4, undefined4 *param_5, int param_6, int param_7) {
  char *pcVar1;
  void *pvVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  void *local_24;
  void *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  uint local_c;
  uint local_8;
  
  local_20 = (void *)0x0;
  local_24 = (void *)0x0;
  local_28 = (undefined4 *)0x0;
  local_18 = (int *)0x0;
  local_c = 0;
  if ((param_3 == 0) || (*(int *)(param_3 + 4) != 9)) {
    return -0x7fffbffb;
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    FUN_005d9de1(((int)this),param_3,0xdac,"\'%s\': recursive functions not yet implemented",param_2);
    return -0x7fffbfff;
  }
  if ((param_6 != 0) && (local_8 = FUN_005f7f90(), (int)local_8 < 0)) goto LAB_005e26ba;
  if (param_4 == 0) {
    local_1c = 0;
    local_30 = 0;
  }
  else {
    local_1c = *(int *)(param_4 + 8);
    local_30 = *(int *)(param_4 + 0xc);
  }
  iVar8 = *(int *)(param_3 + 0x24);
  iVar11 = 0;
  while (iVar8 != 0) {
    piVar9 = (int *)(iVar8 + 8);
    iVar8 = *(int *)(iVar8 + 0xc);
    if (((iVar8 != 0) && (*(int *)(iVar8 + 8) != 0)) && (*(int *)(*(int *)(iVar8 + 8) + 4) == 0xb))
    {
      iVar8 = *(int *)(iVar8 + 0xc);
    }
    iVar11 = iVar11 + *(int *)(*(int *)(*piVar9 + 0x18) + 0x14);
  }
  local_20 = _malloc(iVar11 << 2);
  if ((local_20 == (void *)0x0) ||
     ((param_6 != 0 && (local_18 = (int *)_malloc(iVar11 << 2), local_18 == (int *)0x0)))) {
LAB_005e2926:
    local_8 = -0x7ff8fff2;
    goto LAB_005e26ba;
  }
  iVar8 = *(int *)(param_3 + 0x24);
  param_4 = local_1c;
  while (iVar8 != 0) {
    piVar9 = (int *)(iVar8 + 8);
    iVar8 = *(int *)(iVar8 + 0xc);
    if (((iVar8 != 0) && (*(int *)(iVar8 + 8) != 0)) && (*(int *)(*(int *)(iVar8 + 8) + 4) == 0xb))
    {
      iVar8 = *(int *)(iVar8 + 0xc);
    }
    if (((param_6 == 0) ||
        ((param_7 != 0 && ((*(byte *)(*(int *)(*piVar9 + 0x18) + 0x1c) & 0x40) != 0)))) &&
       (param_4 != 0)) {
      if ((*(int *)(param_4 + 8) != 0) &&
         (local_8 = FUN_005e2a38(*(int *)(param_4 + 8)), (int)local_8 < 0)) goto LAB_005e26ba;
      param_4 = *(int *)(param_4 + 0xc);
    }
  }
  uVar12 = *(int *)(param_3 + 0x24);
  pvVar2 = local_20;
  param_4 = local_1c;
  while (uVar12 != 0) {
    iVar8 = *(int *)(uVar12 + 8);
    local_1c = *(int *)(uVar12 + 0xc);
    if (((local_1c != 0) && (*(int *)(local_1c + 8) != 0)) &&
       (*(int *)(*(int *)(local_1c + 8) + 4) == 0xb)) {
      local_1c = *(int *)(local_1c + 0xc);
    }
    iVar11 = *(int *)(iVar8 + 0x18);
    if ((param_6 == 0) || ((param_7 != 0 && ((*(byte *)(iVar11 + 0x1c) & 0x40) != 0)))) {
      local_8 = FUN_005dc760();
      if ((int)local_8 < 0) goto LAB_005e26ba;
      if (param_4 == 0) {
        local_8 = FUN_005dc760();
        goto LAB_005e232b;
      }
      if (((*(byte *)(iVar11 + 0x1c) & 0x10) != 0) &&
         (local_8 = FUN_005d9fa1(*(undefined4 *)(param_4 + 8),
                                 *(uint *)(iVar11 + 0x14) & 0xffffff | 0x10000000,
                                 *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,pvVar2,0,0),
         (int)local_8 < 0)) goto LAB_005e26ba;
      param_4 = *(int *)(param_4 + 0xc);
    }
    else {
      iVar7 = *(int *)(((int)this) + 8);
      local_14 = *(int *)(iVar7 + 0x4c);
      if ((*(uint *)(iVar11 + 0x1c) & 0x40) == 0) {
        if ((*(uint *)(iVar11 + 0x1c) & 0x10) != 0) {
          local_14 = *(int *)(iVar7 + 0x58);
        }
      }
      else {
        local_14 = *(int *)(iVar7 + 0x54);
      }
      local_8 = 0;
      if (*(int *)(iVar11 + 0x14) != 0) {
        do {
          iVar14 = *(int *)(iVar11 + 0x10) + local_8;
          uVar6 = FUN_005f74cf(local_14,0,0,0);
          iVar7 = FUN_005f762c();
          if (iVar7 != 0) {
            *(int *)(iVar7 + 0x44) = iVar8;
            *(int *)(iVar7 + 0x1c) = iVar14;
            *(uint *)(iVar7 + 0x48) = local_8;
          }
          local_8 = local_8 + 1;
          *(undefined4 *)(*(int *)(((int)this) + 0x18) + iVar14 * 4) = uVar6;
        } while (local_8 < *(uint *)(iVar11 + 0x14));
      }
      if ((*(int *)(*(int *)(((int)this) + 8) + 0x4c) != local_14) &&
         (local_8 = FUN_005dbe7e(*(undefined4 *)(iVar11 + 0x20),
                                 *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,
                                 *(undefined4 *)(iVar11 + 0x14)), (int)local_8 < 0))
      goto LAB_005e26ba;
      if (*(int *)(*(int *)(((int)this) + 8) + 0x54) == local_14) {
        local_8 = FUN_005dc613(*(undefined4 *)(iVar11 + 0x20),
                               *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,local_14,1,0,0
                               ,*(undefined4 *)(iVar11 + 0x30));
        if ((int)local_8 < 0) goto LAB_005e26ba;
        local_8 = FUN_005d932c();
LAB_005e232b:
        if ((int)local_8 < 0) goto LAB_005e26ba;
      }
      else if (*(int *)(*(int *)(((int)this) + 8) + 0x58) == local_14) {
        local_8 = FUN_005dc613(*(undefined4 *)(iVar11 + 0x20),
                               *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,local_14,0,0,
                               *(undefined4 *)(iVar11 + 0x2c),*(undefined4 *)(iVar11 + 0x30));
        if ((int)local_8 < 0) goto LAB_005e26ba;
        iVar8 = FUN_005d99a5(*(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,
                             *(undefined4 *)(iVar11 + 0x14));
        if (iVar8 == 0) {
          FUN_005d9de1(((int)this),iVar11,0xdae,"\'%s\': input parameter \'%s\' missing semantics");
        }
        else {
          uVar12 = 0;
          if (*(int *)(iVar11 + 0x14) != 0) {
            do {
              iVar8 = *(int *)(iVar11 + 0x10) + uVar12;
              uVar3 = local_c + 1;
              uVar12 = uVar12 + 1;
              local_18[local_c] = iVar8;
              local_c = uVar3;
            } while (uVar12 < *(uint *)(iVar11 + 0x14));
          }
        }
      }
    }
    pvVar2 = (void *)((int)pvVar2 + *(int *)(iVar11 + 0x14) * 4);
    uVar12 = local_1c;
  }
  if (param_6 == 0) {
LAB_005e251e:
    piVar9 = (int *)(((int)this) + 0x38);
    iVar8 = *piVar9;
    *piVar9 = 0;
    *(undefined4 *)(param_3 + 0x38) = 1;
    local_8 = FUN_005dc760();
    iVar11 = *piVar9;
    *piVar9 = iVar8;
    *(undefined4 *)(param_3 + 0x38) = 0;
    if ((int)local_8 < 0) goto LAB_005e26ba;
    if ((iVar11 != 0) || (*(int *)(param_3 + 0x14) == 0)) {
      if (param_6 == 0) {
        if (param_5 != (undefined4 *)0x0) {
          puVar13 = (undefined4 *)(*(int *)(((int)this) + 0x18) + *(int *)(param_3 + 0x10) * 4);
          for (uVar12 = *(uint *)(param_3 + 0x14) & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
            *param_5 = *puVar13;
            puVar13 = puVar13 + 1;
            param_5 = param_5 + 1;
          }
          for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined1 *)param_5 = *(undefined1 *)puVar13;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            param_5 = (undefined4 *)((int)param_5 + 1);
          }
        }
      }
      else if (*(uint *)(param_3 + 0x14) != 0) {
        iVar8 = *(int *)(((int)this) + 0x18) + *(int *)(param_3 + 0x10) * 4;
        local_8 = FUN_005d9fa1(param_3,*(uint *)(param_3 + 0x14) & 0xffffff | 0x10000000,iVar8,iVar8
                               ,0,0);
        if ((((int)local_8 < 0) ||
            (local_8 = FUN_005dbe7e(*(undefined4 *)(param_3 + 0x20),
                                    *(int *)(((int)this) + 0x18) + *(int *)(param_3 + 0x10) * 4,
                                    *(undefined4 *)(param_3 + 0x14)), (int)local_8 < 0)) ||
           (local_8 = FUN_005dc613(*(undefined4 *)(param_3 + 0x20),
                                   *(int *)(((int)this) + 0x18) + *(int *)(param_3 + 0x10) * 4,
                                   *(undefined4 *)(*(int *)(((int)this) + 8) + 0x5c),0,1,
                                   *(undefined4 *)(param_3 + 0x30),0), (int)local_8 < 0))
        goto LAB_005e26ba;
        iVar8 = FUN_005d99a5(*(int *)(((int)this) + 0x18) + *(int *)(param_3 + 0x10) * 4,
                             *(undefined4 *)(param_3 + 0x14));
        if (iVar8 == 0) {
          FUN_005d9de1(((int)this),param_3,0xdaf,"\'%s\': function return value missing semantics");
        }
        else {
          uVar12 = 0;
          if (*(int *)(param_3 + 0x14) != 0) {
            do {
              uVar6 = FUN_005f762c();
              iVar8 = (**(code **)(**(int **)(((int)this) + 8) + 8))(uVar6);
              if (iVar8 < 0) {
                *(undefined4 *)(((int)this) + 0x34) = 1;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(param_3 + 0x14));
          }
        }
      }
      local_1c = *(int *)(param_3 + 0x24);
joined_r0x005e26b4:
      if (local_1c == 0) {
        local_8 = 0;
      }
      else {
        iVar8 = *(int *)(local_1c + 8);
        local_1c = *(int *)(local_1c + 0xc);
        if (((local_1c != 0) && (*(int *)(local_1c + 8) != 0)) &&
           (*(int *)(*(int *)(local_1c + 8) + 4) == 0xb)) {
          local_1c = *(int *)(local_1c + 0xc);
        }
        iVar11 = *(int *)(iVar8 + 0x18);
        if ((*(byte *)(iVar11 + 0x1c) & 0x20) == 0) goto LAB_005e287b;
        param_3 = 0;
        if (*(int *)(iVar11 + 0x14) != 0) {
          do {
            piVar9 = (int *)FUN_005f762c();
            if ((piVar9 != (int *)0x0) && (*(int *)(*(int *)(((int)this) + 8) + 0x4c) == *piVar9)) {
              FUN_005d9de1(((int)this),piVar9[0x11],0xdb4,
                           "\'%s\': output parameter \'%s\' never assigned a value",param_2);
              goto LAB_005e26ba;
            }
            param_3 = param_3 + 1;
          } while (param_3 < *(uint *)(iVar11 + 0x14));
        }
        if (param_6 == 0) goto LAB_005e2852;
        iVar7 = *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4;
        local_8 = FUN_005d9fa1(iVar11,*(uint *)(iVar11 + 0x14) & 0xffffff | 0x10000000,iVar7,iVar7,0
                               ,0);
        if (((-1 < (int)local_8) &&
            (local_8 = FUN_005dbe7e(*(undefined4 *)(iVar11 + 0x20),
                                    *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,
                                    *(undefined4 *)(iVar11 + 0x14)), -1 < (int)local_8)) &&
           (local_8 = FUN_005dc613(*(undefined4 *)(iVar11 + 0x20),
                                   *(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,
                                   *(undefined4 *)(*(int *)(((int)this) + 8) + 0x5c),0,1,
                                   *(undefined4 *)(iVar11 + 0x2c),0), -1 < (int)local_8)) {
          iVar7 = FUN_005d99a5(*(int *)(((int)this) + 0x18) + *(int *)(iVar11 + 0x10) * 4,
                               *(undefined4 *)(iVar11 + 0x14));
          if (iVar7 == 0) {
            FUN_005d9de1(((int)this),iVar11,0xdaf,"\'%s\': output parameter \'%s\' missing semantics");
          }
          else {
            uVar12 = 0;
            if (*(int *)(iVar11 + 0x14) != 0) {
              do {
                FUN_005f762c();
                iVar7 = (**(code **)(**(int **)(((int)this) + 8) + 8))();
                if (iVar7 < 0) {
                  *(undefined4 *)(((int)this) + 0x34) = 1;
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < *(uint *)(iVar11 + 0x14));
            }
          }
          goto LAB_005e287b;
        }
      }
      goto LAB_005e26ba;
    }
    FUN_005d9de1(((int)this),param_3,0xdb3,"\'%s\': function must return a value");
  }
  else {
    bVar5 = false;
    param_4 = 0;
    if (local_c == 0) {
LAB_005e23a8:
      FUN_005f7e20(FUN_005d9eb5,local_18,local_c,((int)this));
      param_4 = 0;
      if (local_c != 0) {
        local_14 = FUN_005f762c();
        local_1c = 1;
        if (1 < local_c) {
          do {
            iVar8 = FUN_005f762c();
            if ((*(int *)(local_14 + 0x50) == *(int *)(iVar8 + 0x50)) &&
               (*(int *)(local_14 + 0xc) == *(int *)(iVar8 + 0xc))) {
              param_4 = param_4 + 1;
              iVar8 = local_14;
            }
            local_14 = iVar8;
            local_1c = local_1c + 1;
          } while (local_1c < local_c);
          if (param_4 != 0) {
            local_24 = _malloc(param_4 << 2);
            if ((local_24 == (void *)0x0) ||
               (local_28 = (undefined4 *)_malloc(param_4 << 2), local_28 == (undefined4 *)0x0)) goto LAB_005e2926;
            iVar8 = *local_18;
            param_4 = 0;
            local_14 = FUN_005f762c();
            local_1c = 1;
            local_2c = local_28;
            do {
              iVar11 = local_18[local_1c];
              iVar7 = FUN_005f762c();
              if ((*(int *)(local_14 + 0x50) == *(int *)(iVar7 + 0x50)) &&
                 (*(int *)(local_14 + 0xc) == *(int *)(iVar7 + 0xc))) {
                param_4 = param_4 + 1;
                *(undefined4 *)(((int)local_24 - (int)local_28) + (int)local_2c) =
                     *(undefined4 *)(iVar11 * 4 + *(int *)(((int)this) + 0x18));
                *local_2c = *(undefined4 *)(*(int *)(((int)this) + 0x18) + iVar8 * 4);
                local_2c = local_2c + 1;
                iVar11 = iVar8;
                iVar7 = local_14;
              }
              local_14 = iVar7;
              local_1c = local_1c + 1;
              iVar8 = iVar11;
            } while (local_1c < local_c);
            local_8 = FUN_005d9fa1(param_3,param_4 & 0xffffff | 0x10000000,local_24,local_28,0,0);
            if ((int)local_8 < 0) goto LAB_005e26ba;
          }
        }
      }
      goto LAB_005e251e;
    }
    do {
      uVar6 = FUN_005f762c();
      iVar8 = (**(code **)(**(int **)(((int)this) + 8) + 8))(uVar6);
      if (iVar8 < 0) {
        bVar5 = true;
      }
      param_4 = param_4 + 1;
    } while (param_4 < local_c);
    if (!bVar5) goto LAB_005e23a8;
  }
  local_8 = -0x7fffbffb;
LAB_005e26ba:
  _free(local_20);
  _free(local_18);
  _free(local_24);
  _free(local_28);
  return local_8;
LAB_005e2852:
  if (local_30 != 0) {
    if (*(int *)(local_30 + 8) != 0) {
      local_8 = FUN_005e2a38(*(int *)(local_30 + 8));
      if ((int)local_8 < 0) goto LAB_005e26ba;
LAB_005e287b:
      if ((param_6 != 0) && ((param_7 == 0 || ((*(byte *)(iVar11 + 0x1c) & 0x40) == 0)))) {
        if ((*(byte *)(iVar11 + 0x1c) & 0x40) != 0) {
          pcVar10 = *(char **)(*(int *)(iVar8 + 0x14) + 0x18);
          pcVar1 = pcVar10 + 1;
          do {
            cVar4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar4 != '\0');
          iVar11 = FUN_005b1775();
          if (iVar11 == 0) goto LAB_005e2926;
          FUN_00673533(iVar11,pcVar10 + (2 - (int)pcVar1));
          *(int *)(*(int *)(iVar8 + 0x14) + 0x18) = iVar11;
        }
        goto joined_r0x005e26b4;
      }
    }
    if (local_30 != 0) {
      local_30 = *(int *)(local_30 + 0xc);
    }
  }
  goto joined_r0x005e26b4;
}
