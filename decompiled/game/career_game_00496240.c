/* spd-match: far pct=7.80 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004969e0();
int __cdecl FUN_004ab640();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
int __cdecl FUN_0051ba80();
int __cdecl FUN_005a2ba0();
int __cdecl FUN_005a2f10();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00777b4c;
extern unsigned char *DAT_00777ccc;
extern void LAB_00496130(void);
extern void LAB_0049630b(void);
extern void LAB_0049631c(void);
extern void LAB_00496332(void);
extern void LAB_0049646b(void);
extern void LAB_0049647c(void);
extern void LAB_00496492(void);
extern void LAB_00496658(void);
extern void LAB_004966e7(void);
extern void LAB_00496896(void);
extern void LAB_00496e00(void);
extern void LAB_00497110(void);
extern void LAB_00497180(void);
extern void LAB_004971f0(void);

void FUN_00496240(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 **ppuVar11;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_48 [8];
  int local_28;
  int local_24;
  byte local_20;
  byte local_1f [31];
  
  local_28 = 1;
  local_24 = 6;
  do {
    FUN_004f68c0(0x20,"Button%d",local_28);
    iVar8 = -1;
    pbVar5 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar5 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049631c:
      if (DAT_0073578c == 0) {
LAB_00496332:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar7 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar7 + 0xec), iVar4 == 0)))) goto LAB_0049631c;
          goto LAB_0049630b;
        }
        goto LAB_00496332;
      }
LAB_0049630b:
      if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar4 == 0)) goto LAB_0049631c;
    }
    FUN_004f6910(iVar4);
    iVar8 = -1;
    pbVar5 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
       (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
      iVar7 = *(int *)(iVar4 + 0x88);
      iVar10 = 0;
      if (iVar7 != 0) {
        piVar6 = *(int **)(iVar4 + 0x84);
        do {
          if (*(int *)(*piVar6 + 0x10) == iVar8) {
            iVar10 = *piVar6;
          }
          piVar6 = piVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (iVar10 != 0) {
          *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x4000000;
        }
      }
    }
    FUN_004f68c0(0x20,"Button_%d",local_28);
    iVar8 = -1;
    pbVar5 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar5 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049647c:
      if (DAT_0073578c == 0) {
LAB_00496492:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        if (DAT_0073578c != 0) {
          iVar7 = *(int *)(DAT_0073578c + 8);
          if ((iVar7 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar7 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar7 + 0xec), iVar4 == 0)))) goto LAB_0049647c;
          goto LAB_0049646b;
        }
        goto LAB_00496492;
      }
LAB_0049646b:
      if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar4 == 0)) goto LAB_0049647c;
    }
    FUN_004f6910(iVar4);
    piVar6 = DAT_00777ccc;
    iVar8 = DAT_00777b4c;
    local_28 = local_28 + 1;
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  switch(DAT_00777b4c) {
  case 1:
    uVar9 = 0x2e4350c6;
    if (DAT_00777ccc == (int *)0x0) {
LAB_00496658:
      local_68 = &LAB_00497110;
      local_58 = (undefined1 *)0x0;
      local_a8 = 3;
      local_9c = 0x80833fc2;
      local_98 = 0;
      local_4c = 0xffffffff;
      local_a4 = uVar9;
    }
    else {
      cVar3 = FUN_005a2f10(DAT_00777ccc,0);
      if ((cVar3 != '\0') &&
         ((((piVar6[0x1629] == 2 || (piVar6[0x1629] == 3)) ||
           (cVar3 = FUN_004ab640(), cVar3 != '\0')) ||
          ((cVar3 = FUN_0051ba80(), cVar3 != '\0' && (iVar8 != 8)))))) {
        uVar9 = 0x3d82312b;
      }
      if (piVar6[0x1629] != 1) goto LAB_00496658;
      if (((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 4))(), cVar3 != '\0')) &&
         ((DAT_00777ccc == (int *)0x0 || (cVar3 = FUN_005a2ba0(), cVar3 != '\0')))) {
        local_68 = &LAB_00497180;
        local_58 = &LAB_00497110;
        local_a8 = 5;
        local_a4 = 0x5fca71b2;
        local_9c = 0x1269c0d9;
        local_98 = 0x4888e03e;
        local_94 = 0x1c8dfaf9;
        local_4c = 0;
        local_48[0] = &LAB_004971f0;
        local_48[3] = (undefined1 *)0x0;
        goto LAB_004966e7;
      }
      local_4c = 0;
      local_68 = &LAB_00497180;
      local_a8 = 4;
      local_9c = 0x1269c0d9;
      local_98 = 0x4888e03e;
      local_58 = &LAB_00497110;
      local_a4 = uVar9;
    }
    local_48[0] = (undefined1 *)0x0;
    local_94 = 0;
    local_48[3] = (undefined1 *)0xffffffff;
LAB_004966e7:
    local_50 = 0;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = &LAB_00496130;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = &LAB_00496e00;
    local_8c = 0;
    local_a0 = 0x3b7f8ae;
    local_48[4] = (undefined1 *)0x0;
    local_48[1] = (undefined1 *)0x0;
    local_48[2] = (undefined1 *)0x0;
    local_48[5] = (undefined1 *)0x0;
    local_48[6] = (undefined1 *)0x0;
    local_48[7] = (undefined1 *)0x0;
    FUN_004969e0(param_1,&local_a8);
    return;
  case 2:
  case 4:
    if ((DAT_00777ccc == (int *)0x0) || (DAT_00777ccc[0x1629] != 1)) {
      local_68 = &LAB_00497110;
      local_58 = (undefined1 *)0x0;
      local_a8 = 3;
      local_9c = 0x80833fc2;
      local_98 = 0;
      local_4c = 0xffffffff;
LAB_00496896:
      local_48[0] = (undefined1 *)0x0;
      local_a4 = 0xbc92e0f8;
      local_94 = 0;
      local_48[3] = (undefined1 *)0xffffffff;
    }
    else {
      if ((DAT_00777ccc == (int *)0x0) ||
         (cVar3 = (**(code **)(*DAT_00777ccc + 4))(), cVar3 == '\0')) {
        local_4c = 0;
        local_68 = &LAB_00497180;
        local_a8 = 4;
        local_9c = 0x1269c0d9;
        local_98 = 0x4888e03e;
        local_58 = &LAB_00497110;
        goto LAB_00496896;
      }
      local_68 = &LAB_00497180;
      local_4c = 0;
      local_58 = &LAB_00497110;
      local_a8 = 5;
      local_a4 = 0x5fca71b2;
      local_9c = 0x1269c0d9;
      local_98 = 0x4888e03e;
      local_94 = 0x1c8dfaf9;
      local_48[0] = &LAB_004971f0;
      local_48[3] = (undefined1 *)0x0;
    }
    local_48[2] = (undefined1 *)0x0;
    local_5c = 0;
    local_48[1] = (undefined1 *)0x0;
    local_48[4] = (undefined1 *)0x0;
    local_48[5] = (undefined1 *)0x0;
    local_48[6] = (undefined1 *)0x0;
    local_48[7] = (undefined1 *)0x0;
    break;
  default:
    goto switchD_004964d3_caseD_3;
  case 8:
    local_90 = 0;
    local_a8 = 2;
    local_a4 = 0xe1ad6e1b;
    local_9c = 0;
    local_98 = 0;
    local_68 = (undefined1 *)0x0;
    local_5c = 0xffffffff;
    local_58 = (undefined1 *)0x0;
    local_4c = 0xffffffff;
    ppuVar11 = local_48;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *ppuVar11 = (undefined1 *)0x0;
      ppuVar11 = ppuVar11 + 1;
    }
  }
  local_50 = 0;
  local_54 = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = &LAB_00496130;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = &LAB_00496e00;
  local_8c = 0;
  local_a0 = 0x3b7f8ae;
  FUN_004969e0(param_1,&local_a8);
switchD_004964d3_caseD_3:
  return;
}
