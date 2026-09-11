/* spd-match: far pct=7.16 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005d91c9(...);
int __cdecl FUN_005d9fa1(...);
int __cdecl FUN_005f74cf(...);
extern int _DAT_006a0d50;
extern int _DAT_006a0d58;
extern int _DAT_006a0d60;
extern int _DAT_006a0d68;
extern int _DAT_006a0d70;
extern int _DAT_006a0d78;
extern int _DAT_006a0d80;
extern int _DAT_006a0d88;
extern int _DAT_006a0d90;
extern int _DAT_006cc850;
extern void LAB_005dad83(...);

struct ThisCallBox {
  int FUN_005da7de(undefined4 param_2, int param_3, undefined4 *param_4, undefined4 *param_5, uint param_6);
};
int ThisCallBox::FUN_005da7de(undefined4 param_2, int param_3, undefined4 *param_4, undefined4 *param_5, uint param_6) {
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 *local_7c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_10 = (undefined4 *)0x0;
  if ((*(byte *)(*(int *)(((int)this) + 8) + 0x91) & 1) == 0) {
    uVar16 = -(uint)(param_4 != (undefined4 *)0x0) & param_6;
    uVar2 = -(uint)(param_5 != (undefined4 *)0x0) & param_6;
    local_8 = uVar2 + uVar16;
    uVar3 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d90);
    uVar4 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d88);
    uVar5 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006cc850);
    uVar6 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d80);
    uVar7 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d78);
    uVar8 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d70);
    uVar9 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d68);
    uVar10 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d60);
    uVar11 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d58);
    uVar12 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d50);
    local_10 = (unsigned int *)_malloc(local_8 * 0x6c);
    if (local_10 == (undefined4 *)0x0) {
      param_6 = -0x7ff8fff2;
      iVar1 = param_6;
      goto LAB_005dad83;
    }
    uVar14 = 0;
    puVar13 = local_10;
    do {
      local_7c[uVar14] = puVar13;
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + local_8;
    } while (uVar14 < 0x1b);
    uVar14 = 0;
    do {
      uVar17 = FUN_005d91c9(local_7c[uVar14],local_8);
      iVar1 = (int)uVar17;
      if ((int)uVar17 < 0) goto LAB_005dad83;
      uVar14 = (int)((ulonglong)uVar17 >> 0x20) + 1;
    } while (uVar14 < 0xf);
    param_6 = 0;
    if (local_8 != 0) {
      local_c = (undefined4 *)(param_3 + uVar16 * -4);
      puVar13 = local_7c[0xf];
      do {
        if (param_6 < uVar16) {
          uVar15 = *(undefined4 *)((int)puVar13 + ((int)param_4 - (int)local_7c[0xf]));
        }
        else {
          uVar15 = *(undefined4 *)(((int)param_5 - param_3) + (int)local_c);
        }
        *puVar13 = uVar15;
        *(undefined4 *)((int)puVar13 + (local_3c - (int)local_7c[0xf])) = uVar3;
        uVar15 = uVar4;
        if (uVar16 <= param_6) {
          uVar15 = uVar5;
        }
        *(undefined4 *)((int)puVar13 + (local_38 - (int)local_7c[0xf])) = uVar15;
        *(undefined4 *)((int)puVar13 + (local_34 - (int)local_7c[0xf])) = uVar6;
        *(undefined4 *)((int)puVar13 + (local_30 - (int)local_7c[0xf])) = uVar7;
        *(undefined4 *)((int)puVar13 + (local_2c - (int)local_7c[0xf])) = uVar8;
        *(undefined4 *)((int)puVar13 + (local_28 - (int)local_7c[0xf])) = uVar9;
        *(undefined4 *)((int)puVar13 + (local_24 - (int)local_7c[0xf])) = uVar10;
        *(undefined4 *)((int)puVar13 + (local_20 - (int)local_7c[0xf])) = uVar11;
        *(undefined4 *)((int)puVar13 + (local_1c - (int)local_7c[0xf])) = uVar12;
        *(undefined4 *)((int)puVar13 + (local_18 - (int)local_7c[0xf])) =
             *(undefined4 *)(((int)this) + 0x20);
        if (param_6 < uVar16) {
          uVar15 = *(undefined4 *)((int)puVar13 + (param_3 - (int)local_7c[0xf]));
        }
        else {
          uVar15 = *local_c;
        }
        param_6 = param_6 + 1;
        local_c = local_c + 1;
        *(undefined4 *)((int)puVar13 + (local_14 - (int)local_7c[0xf])) = uVar15;
        puVar13 = puVar13 + 1;
      } while (param_6 < local_8);
    }
    local_c = (undefined4 *)(local_8 & 0xffffff);
    param_3 = CONCAT13(0x25,(int3)local_8);
    iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[0],local_14,local_3c,0);
    if (iVar1 < 0) goto LAB_005dad83;
    local_8 = (uint)local_c | 0x24000000;
    iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[1],local_7c[0],local_38,0);
    if ((((((((iVar1 < 0) ||
             (iVar1 = FUN_005d9fa1(param_2,(uint)local_c | 0x13000000,local_7c[2],local_7c[1],0,0x14
                                  ), iVar1 < 0)) ||
            (iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[3],local_7c[2],local_34,4), iVar1 < 0))
           || ((iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[4],local_7c[3],local_30,0), iVar1 < 0
               || (iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[5],local_7c[4],local_7c[4],4),
                  iVar1 < 0)))) ||
          ((iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[6],local_7c[5],local_2c,0), iVar1 < 0 ||
           ((iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[7],local_7c[6],local_28,0), iVar1 < 0 ||
            (iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[8],local_7c[5],local_7c[7],0), iVar1 < 0)
            ))))) ||
         (iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[9],local_7c[8],local_24,0), iVar1 < 0)) ||
        (((iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[10],local_7c[5],local_7c[9],0), iVar1 < 0
          || (iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[0xb],local_7c[10],local_20,0), iVar1 < 0
             )) || (iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[0xc],local_7c[5],local_7c[0xb],0),
                   iVar1 < 0)))) ||
       (((iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[0xd],local_7c[0xc],local_1c,0), iVar1 < 0 ||
         (iVar1 = FUN_005d9fa1(param_2,param_3,local_7c[0xe],local_7c[5],local_7c[0xd],0), iVar1 < 0
         )) || (iVar1 = FUN_005d9fa1(param_2,local_8,local_7c[0xf],local_7c[0xe],local_18,0x10),
               iVar1 < 0)))) goto LAB_005dad83;
    puVar13 = local_7c[0xf];
    for (uVar14 = uVar16 & 0x3fffffff; uVar14 != 0; uVar14 = uVar14 - 1) {
      *param_4 = *puVar13;
      puVar13 = puVar13 + 1;
      param_4 = param_4 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)param_4 = *(undefined1 *)puVar13;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      param_4 = (undefined4 *)((int)param_4 + 1);
    }
    puVar13 = local_7c[0xf] + uVar16;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_5 = *puVar13;
      puVar13 = puVar13 + 1;
      param_5 = param_5 + 1;
    }
  }
  else if (((param_4 != (undefined4 *)0x0) &&
           (iVar1 = FUN_005d9fa1(param_2,param_6 & 0xffffff | 0x17000000,param_4,param_3,0,0x10),
           iVar1 < 0)) ||
          ((param_5 != (undefined4 *)0x0 &&
           (iVar1 = FUN_005d9fa1(param_2,param_6 & 0xffffff | 0x18000000,param_5,param_3,0,0x10),
           iVar1 < 0)))) goto LAB_005dad83;
  param_6 = 0;
  iVar1 = param_6;
LAB_005dad83:
  param_6 = iVar1;
  _free(local_10);
  return param_6;
}
