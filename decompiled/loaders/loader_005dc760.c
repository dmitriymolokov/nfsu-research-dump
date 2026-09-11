/* spd-match: far pct=5.24 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_06/attempt2_r06_recipe */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_005d932c(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005d9f14(...);
int __cdecl FUN_005dbe7e(...);
int __cdecl FUN_005dc02b(...);
int __cdecl FUN_005dc613(...);
int __cdecl FUN_005e2a38(...);
int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005f762c(...);
extern void LAB_005dc907(...);

struct ThisCallBox {
  int FUN_005dc760(int *param_2);
};
int ThisCallBox::FUN_005dc760(int *param_2) {
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_1c;
  int local_18;
  uint local_10;
  uint local_8;
  
  iVar6 = (int)param_2;
  uVar8 = 0;
  if ((param_2 == (int *)0x0) || (*(int *)(((int)this) + 0x38) != 0)) {
    return 0;
  }
  iVar7 = *(int *)((int)param_2 + 4);
  if (iVar7 == 5) {
    if (*(int *)((int)param_2 + 0x10) == 1) {
      iVar5 = *(int *)((int)param_2 + 0x18);
      iVar7 = *(int *)(iVar5 + 0x10);
      local_10 = *(uint *)(iVar5 + 0x14);
      if ((*(int *)(iVar5 + 0x18) != 0) || (bVar3 = true, (*(byte *)(iVar5 + 0x1c) & 0x40) == 0)) {
        bVar3 = false;
      }
      if ((*(int *)(iVar5 + 0x18) == 0) || (bVar2 = true, (*(byte *)(iVar5 + 0x1c) & 2) == 0)) {
        bVar2 = false;
      }
      local_18 = *(undefined4 *)(iVar5 + 0x20);
      local_1c = *(undefined4 *)(iVar5 + 0x30);
      uVar8 = *(uint *)(iVar5 + 0x1c) & 0x80;
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffff3ff;
    }
    else {
      if (*(int *)((int)param_2 + 0x10) != 2) {
        return 0;
      }
      iVar5 = *(int *)((int)param_2 + 0x18);
      local_10 = *(uint *)(iVar5 + 0x14);
      iVar7 = *(int *)(iVar5 + 0x10);
      *(byte *)(iVar5 + 0x19) = *(byte *)(iVar5 + 0x19) & 0xf3;
      local_18 = *(undefined4 *)(iVar5 + 0x20);
      local_1c = *(undefined4 *)(iVar5 + 0x34);
      bVar3 = false;
      bVar2 = false;
    }
    if (uVar8 != 0) {
      FUN_005e2a38(*(undefined4 *)(*(int *)((int)param_2 + 0x18) + 0x28),
                   *(int *)(((int)this) + 0x18) + iVar7 * 4);
      return 0;
    }
    local_8 = 0;
    if (local_10 != 0) {
      param_2 = (int *)(iVar7 << 2);
      do {
        if ((!bVar2) || (*(int *)((int)param_2 + *(int *)(((int)this) + 0x18)) == -1)) {
          if (bVar3) {
            uVar4 = *(undefined4 *)(*(int *)(((int)this) + 8) + 0x54);
          }
          else {
            uVar4 = *(undefined4 *)(*(int *)(((int)this) + 8) + 0x4c);
          }
          uVar4 = FUN_005f74cf(uVar4,0,0,0);
          iVar5 = FUN_005f762c();
          if (iVar5 != 0) {
            *(uint *)(iVar5 + 0x1c) = local_8 + iVar7;
            *(int *)(iVar5 + 0x44) = iVar6;
            *(uint *)(iVar5 + 0x48) = local_8;
          }
          *(undefined4 *)((int)param_2 + *(int *)(((int)this) + 0x18)) = uVar4;
        }
        local_8 = local_8 + 1;
        param_2 = (int *)((int)param_2 + 4);
      } while (local_8 < local_10);
    }
    if (!bVar3) {
      return 0;
    }
    iVar6 = FUN_005dbe7e(local_18,*(int *)(((int)this) + 0x18) + iVar7 * 4,local_10);
    if (iVar6 < 0) {
      return iVar6;
    }
    iVar6 = FUN_005dc613(local_18,*(int *)(((int)this) + 0x18) + iVar7 * 4,
                         *(undefined4 *)(*(int *)(((int)this) + 8) + 0x54),1,0,0,local_1c);
    if (iVar6 < 0) {
      return iVar6;
    }
    iVar6 = FUN_005d932c();
LAB_005dc907:
    if (-1 < iVar6) {
      return 0;
    }
    return iVar6;
  }
  if (iVar7 == 0xb) {
    iVar7 = *(int *)((int)param_2 + 0x10);
    if (iVar7 < 0) {
      return 0;
    }
    if (iVar7 < 2) {
      uVar8 = *(uint *)(*(int *)(((int)this) + 8) + 0xc);
      iVar7 = FUN_005e2a38(*(undefined4 *)((int)param_2 + 0x14),0);
      if (-1 < iVar7) {
        uVar1 = *(uint *)(*(int *)(((int)this) + 8) + 0xc);
        local_18 = 0;
        local_1c = 0;
        if (uVar8 < uVar1) {
          param_2 = (int *)(*(int *)(*(int *)(((int)this) + 8) + 0x18) + uVar8 * 4);
          iVar7 = *(int *)(*(int *)(((int)this) + 8) + 0xc) - uVar8;
          do {
            if ((((*(int *)(*param_2 + 0x30) == *(int *)(((int)this) + 0x30)) &&
                 (iVar5 = *(int *)(*param_2 + 0x34), iVar5 != 0)) && (*(int *)(iVar5 + 4) == 0xc))
               && (local_1c <= *(uint *)(iVar5 + 0x44))) {
              local_1c = *(uint *)(iVar5 + 0x44);
              local_18 = iVar5;
            }
            param_2 = param_2 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (uVar8 < uVar1) {
          do {
            iVar7 = *(int *)(*(int *)(*(int *)(((int)this) + 8) + 0x18) + uVar8 * 4);
            if (*(int *)(iVar7 + 0x30) == *(int *)(((int)this) + 0x30)) {
              *(int *)(iVar7 + 0x34) = local_18;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(*(int *)(((int)this) + 8) + 0xc));
        }
        *(uint *)(((int)this) + 0x38) = (uint)(*(int *)(iVar6 + 0x10) == 1);
        return 0;
      }
      return iVar7;
    }
    if (iVar7 == 2) {
      iVar6 = FUN_005dc02b(*(undefined4 *)((int)param_2 + 0x18),*(undefined4 *)((int)param_2 + 0x20)
                           ,*(undefined4 *)((int)param_2 + 0x24),0);
      goto LAB_005dc907;
    }
    if (iVar7 != 3) {
      return 0;
    }
    iVar6 = FUN_005d9f14(*(undefined4 *)((int)param_2 + 0x14),*(undefined4 *)((int)param_2 + 0x18),
                         *(undefined4 *)((int)param_2 + 0x1c),*(undefined4 *)((int)param_2 + 0x20));
    if (-1 < iVar6) {
      return 0;
    }
    if (iVar6 != -0x7fffbfff) {
      return iVar6;
    }
    uVar9 = 0x6a0e5c00000dac;
  }
  else {
    if (iVar7 == 1) {
      while( true ) {
        if (*(int *)(((int)this) + 0x38) != 0) {
          return 0;
        }
        iVar6 = FUN_005dc760(param_2);
        if (iVar6 < 0) break;
        param_2 = *(int **)((int)param_2 + 0xc);
        if (param_2 == (int *)0x0) {
          return 0;
        }
      }
      return iVar6;
    }
    uVar9 = 0x6a0e3400000000;
    param_2 = (int *)0x0;
  }
  FUN_005d9de1(((int)this),param_2,uVar9);
  return -0x7fffbffb;
}
