/* spd-match: far pct=5.87 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0049fe10();
int __cdecl FUN_0049fe70();
int __cdecl FUN_0049fec0();
int __cdecl FUN_004ee660();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb00();
int __cdecl FUN_00503f60();
int __cdecl FUN_005649f0();
int __cdecl FUN_00566dc0();
int __cdecl FUN_00566e60();
int __cdecl FUN_00567270();
extern unsigned char *DAT_007349b4;
extern int DAT_007349b8;
extern unsigned char *DAT_0073578c;
extern int DAT_0073d814;
extern int DAT_00746104;
extern void LAB_004a5de3(void);
extern void LAB_004a5e1b(void);
extern void LAB_004a5ebf(void);
extern void LAB_004a5fb8(void);
extern void LAB_004a5ff0(void);
extern void LAB_004a6043(void);
extern void LAB_004a61b8(void);
extern void LAB_004a61f0(void);
extern void LAB_004a6218(void);
extern void LAB_00687d70(void);
void *ExceptionList;

int FUN_004a5ca0(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int iVar11;
  int *piVar12;
  int *local_44;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687d70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x40000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0;
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  local_44 = (int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = 1;
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + 0x28 + iVar6) = 1;
    iVar6 = iVar6 + 1;
    FUN_004f68c0(0x20,"NOS_bar_6_%d",iVar6);
    iVar11 = -1;
    pbVar10 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a5e1b;
    iVar7 = FUN_004f3f90(&DAT_00746104);
    if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) goto LAB_004a5de3;
    if (DAT_0073578c == 0) {
LAB_004a5ebf:
      iVar11 = 0;
    }
    else {
      iVar8 = *(int *)(DAT_0073578c + 8);
      if (iVar8 != 0) {
        FUN_004ee660();
        iVar7 = FUN_004fd1e0(iVar8 + 0xdc);
        if (iVar7 == 0) {
          FUN_004ee660();
          iVar7 = FUN_004fd1e0(iVar8 + 0xec);
          if (iVar7 == 0) goto LAB_004a5e1b;
        }
LAB_004a5de3:
        (*(unsigned char *)&(local_4)) = 1;
        FUN_004ffb00(iVar7);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a5e1b:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 1)) goto LAB_004a5ebf;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar7 = DAT_007349b4;
      piVar12 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar9 = (int *)*piVar12;
      iVar8 = *(int *)(iVar7 + 0x18) + 1;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar2 = *piVar9;
        if (*(int *)(iVar7 + 0x1c) < iVar8) {
          *(int *)(iVar7 + 0x1c) = iVar8;
        }
        *(int *)(iVar7 + 0x18) = iVar8;
        bVar4 = *(byte *)(iVar7 + 0x14);
        *piVar12 = iVar2;
        if (((bVar4 & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar12 = piVar9, 0 < iVar7)
           ) {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
          }
        }
        piVar9[2] = iVar11;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar9;
      *(int **)(param_1 + 4) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1;
    }
    *local_44 = iVar11;
    local_44 = local_44 + 1;
  } while (iVar6 < 6);
  iVar6 = 0;
  local_44 = (int *)(param_1 + 0x3c);
  do {
    iVar6 = iVar6 + 1;
    FUN_004f68c0(0x20,"NOS_bar_4_%d",iVar6);
    iVar11 = -1;
    pbVar10 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a5ff0;
    iVar7 = FUN_004f3f90(&DAT_00746104);
    if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) goto LAB_004a5fb8;
    if (DAT_0073578c == 0) {
LAB_004a6043:
      iVar11 = 0;
    }
    else {
      iVar8 = *(int *)(DAT_0073578c + 8);
      if (iVar8 != 0) {
        FUN_004ee660();
        iVar7 = FUN_004fd1e0(iVar8 + 0xdc);
        if (iVar7 == 0) {
          FUN_004ee660();
          iVar7 = FUN_004fd1e0(iVar8 + 0xec);
          if (iVar7 == 0) goto LAB_004a5ff0;
        }
LAB_004a5fb8:
        (*(unsigned char *)&(local_4)) = 2;
        FUN_004ffb00(iVar7);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a5ff0:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 1)) goto LAB_004a6043;
      if (DAT_007349b4 == 0) {
        iVar7 = FUN_00566dc0(0xc,"bPNode SlotPool",0);
        if ((iVar7 != 0) && (DAT_0073d814 == 1)) {
          FUN_00567270();
        }
        DAT_007349b8 = 0;
        DAT_007349b4 = iVar7;
      }
      iVar7 = DAT_007349b4;
      piVar12 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar9 = (int *)*piVar12;
      iVar8 = *(int *)(iVar7 + 0x18) + 1;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar2 = *piVar9;
        if (*(int *)(iVar7 + 0x1c) < iVar8) {
          *(int *)(iVar7 + 0x1c) = iVar8;
        }
        *(int *)(iVar7 + 0x18) = iVar8;
        bVar4 = *(byte *)(iVar7 + 0x14);
        *piVar12 = iVar2;
        if (((bVar4 & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar12 = piVar9, 0 < iVar7)
           ) {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
          }
        }
        piVar9[2] = iVar11;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar9;
      *(int **)(param_1 + 4) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1;
    }
    *local_44 = iVar11;
    local_44 = local_44 + 1;
  } while (iVar6 < 4);
  iVar6 = 0;
  local_44 = (int *)(param_1 + 0x34);
  do {
    iVar6 = iVar6 + 1;
    FUN_004f68c0(0x20,"NOS_bar_2_%d",iVar6);
    iVar11 = -1;
    pbVar10 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a61f0;
    iVar7 = FUN_004f3f90(&DAT_00746104);
    if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) goto LAB_004a61b8;
    if (DAT_0073578c == 0) {
LAB_004a6218:
      iVar11 = 0;
    }
    else {
      iVar8 = *(int *)(DAT_0073578c + 8);
      if (iVar8 != 0) {
        FUN_004ee660();
        iVar7 = FUN_004fd1e0(iVar8 + 0xdc);
        if (iVar7 == 0) {
          FUN_004ee660();
          iVar7 = FUN_004fd1e0(iVar8 + 0xec);
          if (iVar7 == 0) goto LAB_004a61f0;
        }
LAB_004a61b8:
        (*(unsigned char *)&(local_4)) = 3;
        FUN_004ffb00(iVar7);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a61f0:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 1)) goto LAB_004a6218;
      if (DAT_007349b4 == 0) {
        iVar7 = FUN_00566dc0(0xc,"bPNode SlotPool",0);
        if ((iVar7 != 0) && (DAT_0073d814 == 1)) {
          FUN_00567270();
        }
        DAT_007349b8 = 0;
        DAT_007349b4 = iVar7;
      }
      iVar7 = DAT_007349b4;
      piVar12 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar9 = (int *)*piVar12;
      iVar8 = *(int *)(iVar7 + 0x18) + 1;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar2 = *piVar9;
        if (*(int *)(iVar7 + 0x1c) < iVar8) {
          *(int *)(iVar7 + 0x1c) = iVar8;
        }
        *(int *)(iVar7 + 0x18) = iVar8;
        bVar4 = *(byte *)(iVar7 + 0x14);
        *piVar12 = iVar2;
        if (((bVar4 & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, piVar12 = piVar9, 0 < iVar7)
           ) {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
          }
        }
        piVar9[2] = iVar11;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar9;
      *(int **)(param_1 + 4) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1;
    }
    *local_44 = iVar11;
    local_44 = local_44 + 1;
    if (1 < iVar6) {
      uVar5 = FUN_00503f60();
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      *(undefined1 *)(param_1 + 0x2e) = 0;
      FUN_0049fec0(0,0);
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}
