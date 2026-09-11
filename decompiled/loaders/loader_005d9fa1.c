/* spd-match: far pct=11.74 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_05/attempt5_thiscall_malloc */
#include "ghidra_compat.h"

int __cdecl FUN_005d91c9(...);
int __cdecl FUN_005d9de1(...);
int __cdecl FUN_005f74cf(...);
int __cdecl FUN_005f752b(...);
int __cdecl FUN_005f762c(...);
int __cdecl FUN_005f7642(...);
int __cdecl FUN_005f7a5c(...);
int __cdecl FUN_005f7aa3(...);
int __cdecl FUN_005f7b98(...);
extern void LAB_005da0d4(...);
extern void LAB_005da15c(...);
extern void LAB_005da3e3(...);

struct ThisCallBox {
  int FUN_005d9fa1(undefined4 param_2, uint param_3, unsigned int *param_4, undefined4 *param_5, unsigned int *param_6, uint param_7);
};
int ThisCallBox::FUN_005d9fa1(undefined4 param_2, uint param_3, unsigned int *param_4, undefined4 *param_5, unsigned int *param_6, uint param_7) {
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_20 [3];
  unsigned int local_14;
  uint local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)((int)this);
  if (param_3 == 0x30000001) {
    iVar1 = FUN_005d9fa1(param_2,0x25000001,param_4,param_5,param_6,param_7);
    if (iVar1 < 0) {
      return iVar1;
    }
    return 0;
  }
  if ((param_3 == 0x30000002) && ((*(byte *)(*(int *)(((int)this) + 8) + 0x90) & 0x20) == 0)) {
    local_20[2] = (undefined4 *)0xffffffff;
    local_14 = -1;
    iVar1 = FUN_005d9fa1(param_2,0x25000001,(unsigned int *)(local_20 + 2),param_5,param_6,param_7 & 0x40);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_005d9fa1(param_2,0x25000001,(unsigned int *)&local_14,(unsigned int *)(param_5 + 1),(unsigned int *)(param_6 + 1),param_7 & 0x40);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_005d9fa1(param_2,0x24000001,param_4,(unsigned int *)(local_20 + 2),(unsigned int *)&local_14,param_7);
    if (iVar1 < 0) {
      return iVar1;
    }
LAB_005da3e3:
    iVar1 = 0;
  }
  else {
    if (((*(byte *)(*(int *)(((int)this) + 8) + 0x90) & 0x80) == 0) ||
       ((((local_10 = param_3 & 0xff000000, local_10 != 0x20000000 && (local_10 != 0x21000000)) &&
         (local_10 != 0x22000000)) && (local_10 != 0x23000000)))) {
      local_10 = FUN_005f752b(param_3,0xffffffff,0xffffffff);
      iVar1 = FUN_005f7642();
      if (iVar1 != 0) {
        local_8 = FUN_005f7b98(0,0);
        uVar2 = FUN_005f7a5c(0,0);
        iVar7 = *(int *)(iVar1 + 4) - uVar2;
        puVar4 = param_5;
        puVar3 = *(undefined4 **)(iVar1 + 8);
        for (uVar5 = uVar2 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar3 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        puVar4 = (undefined4 *)(*(int *)(iVar1 + 8) + uVar2 * 4);
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *param_6;
          param_6 = param_6 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar2 = 0;
        puVar4 = local_c;
        if (*(int *)(iVar1 + 4) != 0) {
          do {
            puVar4 = local_c;
            iVar7 = FUN_005f762c();
            if (iVar7 != 0) {
              *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + 1;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(iVar1 + 4));
        }
        param_3 = 0;
        if (local_8 != 0) {
          local_14 = (int)param_5 - (int)param_4;
          param_6 = param_4;
          do {
            param_5 = (undefined4 *)0x0;
            if (((param_4 != (unsigned int *)0x0) && (*param_6 != -1)) &&
               (param_5 = (undefined4 *)FUN_005f762c(), param_5 == (undefined4 *)0x0)) {
              FUN_005d9de1(puVar4,0,0,"internal error: result register invalid");
              return -0x7fffbffb;
            }
            local_c = (undefined4 *)
                      FUN_005f74cf(*(undefined4 *)(*(int *)((int)puVar4 + 8) + 0x60),0,0,0);
            if ((local_c == (undefined4 *)0xffffffff) || (iVar7 = FUN_005f762c(), iVar7 == 0))
            goto LAB_005da0d4;
            *(uint *)(iVar7 + 0x18) = param_7;
            *(uint *)(iVar7 + 0x2c) = local_10;
            *(undefined4 **)(param_3 * 4 + *(int *)(iVar1 + 0x10)) = local_c;
            if (param_4 != (unsigned int *)0x0) {
              *param_6 = (unsigned int)local_c;
            }
            if (param_5 != (undefined4 *)0x0) {
              *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)((int)param_5 + 0x1c);
              *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)((int)param_5 + 0x44);
              *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)((int)param_5 + 0x48);
            }
            if ((*(int *)(iVar7 + 0x1c) != -1) &&
               (*(undefined4 *)(*(int *)((int)puVar4 + 0x18) + *(int *)(iVar7 + 0x1c) * 4) =
                     *(undefined4 *)(param_3 * 4 + *(int *)(iVar1 + 0x10)),
               *(int *)(iVar7 + 0x44) == 0)) {
              FUN_005d9de1(puVar4,0,0,"internal error: argument missing context (A%u)");
            }
            iVar6 = FUN_005f7aa3();
            if (iVar6 != 0) {
              puVar3 = (undefined4 *)(local_14 + (int)param_6);
              iVar6 = FUN_005f762c();
              *(undefined4 *)(iVar7 + 0x20) = *puVar3;
              *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) | *(uint *)(iVar6 + 0x18);
              *(undefined8 *)(iVar7 + 0x10) = *(undefined8 *)(iVar6 + 0x10);
            }
            param_3 = param_3 + 1;
            param_6 = param_6 + 1;
          } while (param_3 < local_8);
        }
        *(undefined4 *)(iVar1 + 0x34) = param_2;
        *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)((int)puVar4 + 0x30);
        goto LAB_005da3e3;
      }
    }
    else {
      param_3 = param_3 & 0xffffff;
      local_c = (undefined4 *)_malloc(param_3 << 4);
      if (local_c != (undefined4 *)0x0) {
        uVar2 = 0;
        puVar4 = local_c;
        do {
          local_20[uVar2] = puVar4;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + param_3;
        } while (uVar2 < 4);
        if (param_3 != 0) {
          iVar1 = (int)param_5 - (int)local_20[2];
          iVar7 = (int)param_6 - (int)local_20[2];
          local_14 = local_14 - (int)local_20[2];
          local_8 = param_3;
          do {
            if (local_10 == 0x20000000) {
              *local_20[2] = *(undefined4 *)(iVar7 + (int)local_20[2]);
              uVar8 = *(undefined4 *)(iVar1 + (int)local_20[2]);
LAB_005da15c:
              *(undefined4 *)(local_14 + (int)local_20[2]) = uVar8;
            }
            else {
              if (local_10 == 0x21000000) {
                *local_20[2] = *(undefined4 *)(iVar1 + (int)local_20[2]);
                uVar8 = *(undefined4 *)(iVar7 + (int)local_20[2]);
                goto LAB_005da15c;
              }
              if (local_10 == 0x22000000) {
                *local_20[2] = *(undefined4 *)(((int)this) + 0x24);
                uVar8 = *(undefined4 *)(((int)this) + 0x20);
                goto LAB_005da15c;
              }
              if (local_10 == 0x23000000) {
                *local_20[2] = *(undefined4 *)(((int)this) + 0x20);
                uVar8 = *(undefined4 *)(((int)this) + 0x24);
                goto LAB_005da15c;
              }
            }
            local_20[2] = local_20[2] + 1;
            local_8 = local_8 - 1;
          } while (local_8 != 0);
        }
        iVar1 = FUN_005d91c9(local_20[0],param_3);
        if ((-1 < iVar1) && (iVar1 = FUN_005d91c9(local_20[1],param_3), -1 < iVar1)) {
          iVar1 = FUN_005d9fa1(param_2,param_3 | 0x11000000,local_20[0],param_6,0,param_7 & 0x40);
          if ((-1 < iVar1) &&
             ((iVar1 = FUN_005d9fa1(param_2,param_3 | 0x24000000,local_20[1],param_5,local_20[0],
                                    param_7 & 0x40), -1 < iVar1 &&
              (iVar1 = FUN_005d9fa1(param_2,param_3 | 0x50000000,param_4,local_20[1],
                                    local_c + param_3 * 2,param_7), -1 < iVar1)))) {
            iVar1 = 0;
          }
        }
        _free(local_c);
        return iVar1;
      }
    }
LAB_005da0d4:
    iVar1 = -0x7ff8fff2;
  }
  return iVar1;
}
