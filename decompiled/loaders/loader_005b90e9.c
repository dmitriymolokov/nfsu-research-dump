/* spd-match: far pct=7.26 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b2aff(...);
int __cdecl FUN_005b2b58(...);
int __cdecl FUN_005b2b74(...);
int __cdecl FUN_005b2c79(...);
int __cdecl FUN_005b2d02(...);
int __cdecl FUN_005b2d7a(...);
int __cdecl FUN_005b3588(...);
int __cdecl FUN_005b3675(...);
int __cdecl FUN_005b3b78(...);
int __cdecl FUN_005b5fc3(...);
int __cdecl FUN_005b70ac(...);
int __cdecl FUN_005b710e(...);
extern void LAB_005b953d(...);
extern void LAB_005b9544(...);
extern void LAB_005b9549(...);

struct ThisCallBox {
  int FUN_005b90e9(int param_2, undefined4 param_3, undefined4 param_4);
};
int ThisCallBox::FUN_005b90e9(int param_2, undefined4 param_3, undefined4 param_4) {
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  uint local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  size_t local_28;
  int local_24;
  int *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  local_2c = 0;
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  local_8 = 0;
  pvVar1 = (unsigned int *)_malloc(0x1c);
  if (pvVar1 == (void *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_005b2aff();
  }
  if (local_10 != 0) {
    pvVar1 = (unsigned int *)_malloc(0x1c);
    if (pvVar1 == (void *)0x0) {
      local_c = 0;
    }
    else {
      local_c = FUN_005b2aff();
    }
    if (local_c != 0) {
      pvVar1 = (unsigned int *)_malloc(0x1c);
      if (pvVar1 == (void *)0x0) {
        local_8 = 0;
      }
      else {
        local_8 = FUN_005b2aff();
      }
      if (local_8 != 0) {
        pvVar1 = (unsigned int *)_malloc(0x48);
        if (pvVar1 == (void *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_005b5fc3();
        }
        if (iVar4 != 0) {
          local_14 = *(int *)(param_2 + 0x18);
          if ((((local_14 != 0) && (*(int *)(local_14 + 4) == 10)) &&
              (iVar6 = *(int *)(param_2 + 0x14), iVar6 != 0)) && (*(int *)(iVar6 + 4) == 2)) {
            uVar3 = *(uint *)(local_14 + 0x1c);
            iVar2 = 0;
            if ((uVar3 & 2) != 0) goto LAB_005b9549;
            local_20 = (int *)(iVar6 + 0x10);
            if ((*local_20 == 9) && (local_44 = *(int *)(iVar6 + 0x18), local_44 != 0)) {
              local_30 = 0;
              local_40 = (uVar3 >> 3 & 0x10 | uVar3 & 8) >> 3;
              iVar6 = *(int *)(local_14 + 0x2c);
              if (iVar6 != 0) {
                if ((*(int *)(iVar6 + 4) != 2) || (*(int *)(iVar6 + 0x10) != 9)) goto LAB_005b953d;
                local_30 = *(undefined4 *)(iVar6 + 0x18);
              }
              iVar2 = FUN_005b2d7a(*(undefined4 *)(local_14 + 0x20),&local_1c,local_54,local_50,
                                   local_4c,local_48,&local_28);
              if (iVar2 < 0) {
                pcVar7 = "ID3DXEffectCompiler: There was a problem getting variable type";
              }
              else {
                if ((local_1c == 0x12) || (local_1c == 0x11)) goto LAB_005b9549;
                iVar2 = FUN_005b3675(*(undefined4 *)(local_14 + 0x20),local_20,local_30,0,param_4,
                                     local_c,&local_38,0);
                if (-1 < iVar2) {
                  if ((local_1c < 10) || (0xe < local_1c)) {
                    local_18 = (unsigned int *)_malloc(local_28);
                    if (local_18 == (undefined4 *)0x0) goto LAB_005b9544;
                    puVar5 = local_18;
                    for (uVar3 = local_28 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *puVar5 = 0;
                      puVar5 = puVar5 + 1;
                    }
                    for (uVar3 = local_28 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                      *(undefined1 *)puVar5 = 0;
                      puVar5 = (undefined4 *)((int)puVar5 + 1);
                    }
                    local_3c = local_18;
                    iVar2 = FUN_005b3588(*(undefined4 *)(local_14 + 0x20),&local_3c);
                    if (iVar2 < 0) goto LAB_005b9549;
                    iVar2 = FUN_005b2b74(local_18,local_28,&local_24);
                    if (iVar2 < 0) goto LAB_005b9549;
                  }
                  else {
                    iVar6 = *(int *)(local_14 + 0x28);
                    local_34 = 0;
                    if (iVar6 != 0) {
                      if ((((*(int *)(iVar6 + 0x1c) != 0) ||
                           (iVar6 = *(int *)(iVar6 + 0x20), iVar6 == 0)) ||
                          (*(int *)(iVar6 + 4) != 1)) ||
                         ((iVar6 = *(int *)(iVar6 + 8), iVar6 == 0 || (*(int *)(iVar6 + 4) != 0xd)))
                         ) goto LAB_005b953d;
                      for (local_24 = *(int *)(iVar6 + 0x18); local_24 != 0;
                          local_24 = *(int *)(local_24 + 0xc)) {
                        iVar2 = FUN_005b3b78(local_24,0xffffffff,*(undefined4 *)(((int)this) + 0x100),
                                             &local_34,local_8,param_4,0x100);
                        if (iVar2 < 0) goto LAB_005b9549;
                      }
                    }
                    iVar2 = FUN_005b2b74(&local_34,4,&local_24);
                    if (iVar2 < 0) goto LAB_005b9549;
                    iVar2 = FUN_005b2d02(local_8);
                    if (iVar2 < 0) goto LAB_005b9549;
                    local_8 = 0;
                  }
                  *(undefined4 *)(iVar4 + 0x28) = 0;
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 != 0) {
                    do {
                      if (((*(int *)(iVar6 + 4) != 1) || (iVar2 = *(int *)(iVar6 + 8), iVar2 == 0))
                         || (*(int *)(iVar2 + 4) != 5)) goto LAB_005b953d;
                      if (*(int *)(iVar2 + 0x10) != 1) {
                        FUN_005b1f01(((int)this) + 0xc,local_20,0,
                                     "ID3DXEffectCompiler: There was a problem getting annotations")
                        ;
                        goto LAB_005b953d;
                      }
                      iVar2 = FUN_005b710e(iVar2,local_10,param_4,iVar4 + 0x30);
                      if ((iVar2 < 0) && (-1 < local_2c)) {
                        local_2c = iVar2;
                      }
                      *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
                      iVar6 = *(int *)(iVar6 + 0xc);
                    } while (iVar6 != 0);
                    iVar2 = local_2c;
                    if (local_2c < 0) goto LAB_005b9549;
                  }
                  iVar2 = FUN_005b2d02(local_c);
                  if (-1 < iVar2) {
                    local_c = 0;
                    iVar2 = FUN_005b2c79(local_38,0);
                    if (-1 < iVar2) {
                      iVar2 = FUN_005b2c79(local_24,0);
                      if (-1 < iVar2) {
                        iVar2 = FUN_005b2b74(&local_40,4,&param_4);
                        if (-1 < iVar2) {
                          iVar2 = FUN_005b2b74(iVar4 + 0x28,4,0);
                          if (-1 < iVar2) {
                            iVar2 = FUN_005b2d02(local_10);
                            if (-1 < iVar2) {
                              *(int *)(iVar4 + 0x20) = local_44;
                              *(undefined4 *)(iVar4 + 0x24) = local_30;
                              local_10 = 0;
                              *(undefined4 *)(iVar4 + 0x40) = local_38;
                              *(int *)(iVar4 + 0x3c) = local_24;
                              *(undefined4 *)(iVar4 + 0x44) = param_4;
                              *(int *)(iVar4 + 0x2c) = local_14;
                              *(int *)(iVar4 + 0x34) = *(int *)(((int)this) + 0x120);
                              *(int *)(iVar4 + 0x38) = *(int *)(param_2 + 0x14) + 0x10;
                              *(int *)(((int)this) + 0x120) = iVar4;
                              iVar4 = 0;
                              *(int *)(((int)this) + 0x100) = *(int *)(((int)this) + 0x100) + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_005b9549;
                }
                pcVar7 = "ID3DXEffectCompiler: Error initializing variable type";
              }
              FUN_005b1f01(((int)this) + 0xc,local_20,0,pcVar7);
              goto LAB_005b9549;
            }
          }
LAB_005b953d:
          iVar2 = -0x7fffbffb;
          goto LAB_005b9549;
        }
      }
    }
  }
LAB_005b9544:
  iVar2 = -0x7ff8fff2;
LAB_005b9549:
  if (local_8 != 0) {
    FUN_005b2b58(1);
  }
  if (local_10 != 0) {
    FUN_005b2b58(1);
  }
  if (local_c != 0) {
    FUN_005b2b58(1);
  }
  if (iVar4 != 0) {
    FUN_005b70ac(1);
  }
  if (local_18 != (undefined4 *)0x0) {
    _free(local_18);
  }
  return iVar2;
}
