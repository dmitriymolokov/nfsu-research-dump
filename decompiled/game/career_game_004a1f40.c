/* spd-match: far pct=5.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004ee660();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6970();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_005649f0();
int __cdecl FUN_00566e60();
extern int DAT_006b9172;
extern unsigned char *DAT_007349b4;
extern unsigned char *DAT_0073578c;
extern int DAT_0073ad34;
extern int DAT_00746104;
extern void LAB_004a2087(void);
extern void LAB_004a20bf(void);
extern void LAB_004a2165(void);
extern void LAB_004a226e(void);
extern void LAB_004a22a6(void);
extern void LAB_004a234c(void);
extern void LAB_004a2458(void);
extern void LAB_004a2490(void);
extern void LAB_004a2538(void);
extern void LAB_004a2648(void);
extern void LAB_004a2680(void);
extern void LAB_004a2728(void);
extern void LAB_004a283c(void);
extern void LAB_004a2874(void);
extern void LAB_004a2918(void);
extern void LAB_004a29cf(void);
extern void LAB_004a2a07(void);
extern void LAB_004a2abb(void);
extern void LAB_00687df8(void);
void *ExceptionList;

int FUN_004a1f40(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  char *pcVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 uVar10;
  int extraout_EDX_02;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0;
  puVar12 = (undefined4 *)(param_1 + 0x20);
  param_2 = 4;
  do {
    puVar12[2] = 0;
    *puVar12 = 0xffffffff;
    puVar12[1] = 0xffffffff;
    puVar12[2] = 0;
    FUN_004f68c0(0x20,&DAT_006b9172);
    puVar12[0xb] = 0;
    puVar12 = puVar12 + 0xc;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  param_2 = 0;
  do {
    iVar4 = param_2 + 1;
    FUN_004f68c0(0x20,"LBData_%d",iVar4);
    iVar11 = -1;
    pbVar8 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a20bf;
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) goto LAB_004a2087;
    if (DAT_0073578c == 0) {
LAB_004a2165:
      iVar11 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if (iVar6 != 0) {
        FUN_004ee660();
        iVar5 = FUN_004fd1e0(iVar6 + 0xdc);
        if (iVar5 == 0) {
          FUN_004ee660();
          iVar5 = FUN_004fd1e0(iVar6 + 0xec);
          if (iVar5 == 0) goto LAB_004a20bf;
        }
LAB_004a2087:
        (*(unsigned char *)&(local_4)) = 1;
        FUN_004ffb00(iVar5);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a20bf:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 2)) goto LAB_004a2165;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar5 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar7 = (int *)*piVar13;
      iVar6 = *(int *)(iVar5 + 0x18) + 1;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar2 = *piVar7;
        if (*(int *)(iVar5 + 0x1c) < iVar6) {
          *(int *)(iVar5 + 0x1c) = iVar6;
        }
        *(int *)(iVar5 + 0x18) = iVar6;
        bVar3 = *(byte *)(iVar5 + 0x14);
        *piVar13 = iVar2;
        if (((bVar3 & 2) != 0) && (iVar5 = *(int *)(iVar5 + 0x28) >> 2, piVar13 = piVar7, 0 < iVar5)
           ) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar7[2] = iVar11;
      }
      puVar12 = *(undefined4 **)(param_1 + 4);
      *puVar12 = piVar7;
      *(int **)(param_1 + 4) = piVar7;
      piVar7[1] = (int)puVar12;
      *piVar7 = param_1;
    }
    *(int *)(param_1 + 0xf4 + param_2 * 4) = iVar11;
    if ((iVar11 != 0) &&
       (*(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar11 + 0x18) == 5)) {
      uVar10 = *(undefined4 *)(iVar11 + 0x60);
      iVar11 = *(int *)(iVar11 + 0x5c);
      if (0 < iVar11) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX + 4);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    FUN_004f68c0(0x20,"LBTextBacking_%d",iVar4);
    iVar11 = -1;
    pbVar8 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar11 = iVar11 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a22a6;
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) goto LAB_004a226e;
    if (DAT_0073578c == 0) {
LAB_004a234c:
      iVar11 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if (iVar6 != 0) {
        FUN_004ee660();
        iVar5 = FUN_004fd1e0(iVar6 + 0xdc);
        if (iVar5 == 0) {
          FUN_004ee660();
          iVar5 = FUN_004fd1e0(iVar6 + 0xec);
          if (iVar5 == 0) goto LAB_004a22a6;
        }
LAB_004a226e:
        (*(unsigned char *)&(local_4)) = 2;
        FUN_004ffb00(iVar5);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a22a6:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 1)) goto LAB_004a234c;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar5 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar7 = (int *)*piVar13;
      iVar6 = *(int *)(iVar5 + 0x18) + 1;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar2 = *piVar7;
        if (*(int *)(iVar5 + 0x1c) < iVar6) {
          *(int *)(iVar5 + 0x1c) = iVar6;
        }
        *(int *)(iVar5 + 0x18) = iVar6;
        bVar3 = *(byte *)(iVar5 + 0x14);
        *piVar13 = iVar2;
        if (((bVar3 & 2) != 0) && (iVar5 = *(int *)(iVar5 + 0x28) >> 2, piVar13 = piVar7, 0 < iVar5)
           ) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar7[2] = iVar11;
      }
      puVar12 = *(undefined4 **)(param_1 + 4);
      *puVar12 = piVar7;
      *(int **)(param_1 + 4) = piVar7;
      piVar7[1] = (int)puVar12;
      *piVar7 = param_1;
    }
    *(int *)(param_1 + 0x114 + param_2 * 4) = iVar11;
    if ((iVar11 != 0) &&
       (*(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar11 + 0x18) == 5)) {
      uVar10 = *(undefined4 *)(iVar11 + 0x60);
      iVar11 = *(int *)(iVar11 + 0x5c);
      if (0 < iVar11) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX_00 + 4);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    FUN_004f68c0(0x20,"LeaderText_%d",iVar4);
    iVar11 = -1;
    pbVar8 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a2490;
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) goto LAB_004a2458;
    if (DAT_0073578c == 0) {
LAB_004a2538:
      iVar11 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if (iVar6 != 0) {
        FUN_004ee660();
        iVar5 = FUN_004fd1e0(iVar6 + 0xdc);
        if (iVar5 == 0) {
          FUN_004ee660();
          iVar5 = FUN_004fd1e0(iVar6 + 0xec);
          if (iVar5 == 0) goto LAB_004a2490;
        }
LAB_004a2458:
        (*(unsigned char *)&(local_4)) = 3;
        FUN_004ffb00(iVar5);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a2490:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 2)) goto LAB_004a2538;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar5 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar7 = (int *)*piVar13;
      iVar6 = *(int *)(iVar5 + 0x18) + 1;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar2 = *piVar7;
        if (*(int *)(iVar5 + 0x1c) < iVar6) {
          *(int *)(iVar5 + 0x1c) = iVar6;
        }
        *(int *)(iVar5 + 0x18) = iVar6;
        bVar3 = *(byte *)(iVar5 + 0x14);
        *piVar13 = iVar2;
        if (((bVar3 & 2) != 0) && (iVar5 = *(int *)(iVar5 + 0x28) >> 2, piVar13 = piVar7, 0 < iVar5)
           ) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar7[2] = iVar11;
      }
      puVar12 = *(undefined4 **)(param_1 + 4);
      *puVar12 = piVar7;
      *(int **)(param_1 + 4) = piVar7;
      piVar7[1] = (int)puVar12;
      *piVar7 = param_1;
    }
    *(int *)(param_1 + 0x104 + param_2 * 4) = iVar11;
    if ((iVar11 != 0) &&
       (*(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar11 + 0x18) == 5)) {
      uVar10 = *(undefined4 *)(iVar11 + 0x60);
      iVar11 = *(int *)(iVar11 + 0x5c);
      if (0 < iVar11) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX_01 + 4);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    FUN_004f68c0(0x20,"LBBacking_%d",iVar4);
    iVar11 = -1;
    pbVar8 = &local_2c;
    bVar3 = local_2c;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar8 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar3;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a2680;
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) goto LAB_004a2648;
    if (DAT_0073578c == 0) {
LAB_004a2728:
      iVar11 = 0;
    }
    else {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if (iVar6 != 0) {
        FUN_004ee660();
        iVar5 = FUN_004fd1e0(iVar6 + 0xdc);
        if (iVar5 == 0) {
          FUN_004ee660();
          iVar5 = FUN_004fd1e0(iVar6 + 0xec);
          if (iVar5 == 0) goto LAB_004a2680;
        }
LAB_004a2648:
        (*(unsigned char *)&(local_4)) = 4;
        FUN_004ffb00(iVar5);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      }
LAB_004a2680:
      if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
         (*(int *)(iVar11 + 0x18) != 1)) goto LAB_004a2728;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar5 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar7 = (int *)*piVar13;
      iVar6 = *(int *)(iVar5 + 0x18) + 1;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar2 = *piVar7;
        if (*(int *)(iVar5 + 0x1c) < iVar6) {
          *(int *)(iVar5 + 0x1c) = iVar6;
        }
        *(int *)(iVar5 + 0x18) = iVar6;
        bVar3 = *(byte *)(iVar5 + 0x14);
        *piVar13 = iVar2;
        if (((bVar3 & 2) != 0) && (iVar5 = *(int *)(iVar5 + 0x28) >> 2, piVar13 = piVar7, 0 < iVar5)
           ) {
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar7[2] = iVar11;
      }
      puVar12 = *(undefined4 **)(param_1 + 4);
      *puVar12 = piVar7;
      *(int **)(param_1 + 4) = piVar7;
      piVar7[1] = (int)puVar12;
      *piVar7 = param_1;
    }
    *(int *)(param_1 + 0x124 + param_2 * 4) = iVar11;
    if ((iVar11 != 0) &&
       (*(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar11 + 0x18) == 5)) {
      iVar5 = *(int *)(iVar11 + 0x5c);
      uVar10 = *(undefined4 *)(iVar11 + 0x60);
      if (0 < iVar5) {
        do {
          FUN_004f6970(uVar10);
          uVar10 = *(undefined4 *)(extraout_EDX_02 + 4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    puVar12 = (undefined4 *)(param_2 * 0x30 + 0x144 + param_1);
    for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    param_2 = iVar4;
  } while (iVar4 < 4);
  pcVar9 = "LeaderBoardFill";
  iVar11 = -1;
  bVar3 = 0x4c;
  do {
    if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
      bVar3 = bVar3 - 0x20;
    }
    iVar11 = iVar11 * 0x21 + (uint)bVar3;
    bVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 1;
  } while (bVar3 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a2874;
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) goto LAB_004a283c;
  if (DAT_0073578c == 0) {
LAB_004a2918:
    iVar11 = 0;
  }
  else {
    iVar5 = *(int *)(DAT_0073578c + 8);
    if (iVar5 != 0) {
      FUN_004ee660();
      iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
      if (iVar4 == 0) {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xec);
        if (iVar4 == 0) goto LAB_004a2874;
      }
LAB_004a283c:
      (*(unsigned char *)&(local_4)) = 5;
      FUN_004ffb00(iVar4);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
    }
LAB_004a2874:
    if (((DAT_0073578c == 0) || (iVar11 = FUN_004ef050(iVar11), iVar11 == 0)) ||
       (*(int *)(iVar11 + 0x18) != 1)) goto LAB_004a2918;
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar4 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar7 = (int *)*piVar13;
    iVar5 = *(int *)(iVar4 + 0x18) + 1;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      iVar6 = *piVar7;
      if (*(int *)(iVar4 + 0x1c) < iVar5) {
        *(int *)(iVar4 + 0x1c) = iVar5;
      }
      *(int *)(iVar4 + 0x18) = iVar5;
      bVar3 = *(byte *)(iVar4 + 0x14);
      *piVar13 = iVar6;
      if (((bVar3 & 2) != 0) && (iVar4 = *(int *)(iVar4 + 0x28) >> 2, piVar13 = piVar7, 0 < iVar4))
      {
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar7[2] = iVar11;
    }
    puVar12 = *(undefined4 **)(param_1 + 4);
    *puVar12 = piVar7;
    *(int **)(param_1 + 4) = piVar7;
    piVar7[1] = (int)puVar12;
    *piVar7 = param_1;
  }
  *(int *)(param_1 + 0x134) = iVar11;
  pcVar9 = "LeaderBoardLine";
  iVar11 = -1;
  bVar3 = 0x4c;
  do {
    if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
      bVar3 = bVar3 - 0x20;
    }
    iVar11 = iVar11 * 0x21 + (uint)bVar3;
    bVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 1;
  } while (bVar3 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a2a07;
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) goto LAB_004a29cf;
  if (DAT_0073578c != 0) {
    iVar5 = *(int *)(DAT_0073578c + 8);
    if (iVar5 != 0) {
      FUN_004ee660();
      iVar4 = FUN_004fd1e0(iVar5 + 0xdc);
      if (iVar4 == 0) {
        FUN_004ee660();
        iVar4 = FUN_004fd1e0(iVar5 + 0xec);
        if (iVar4 == 0) goto LAB_004a2a07;
      }
LAB_004a29cf:
      (*(unsigned char *)&(local_4)) = 6;
      FUN_004ffb00(iVar4);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
    }
LAB_004a2a07:
    if (((DAT_0073578c != 0) && (iVar11 = FUN_004ef050(iVar11), iVar11 != 0)) &&
       (*(int *)(iVar11 + 0x18) == 1)) {
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar4 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar7 = (int *)*piVar13;
      iVar5 = *(int *)(iVar4 + 0x18) + 1;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar6 = *piVar7;
        if (*(int *)(iVar4 + 0x1c) < iVar5) {
          *(int *)(iVar4 + 0x1c) = iVar5;
        }
        *(int *)(iVar4 + 0x18) = iVar5;
        bVar3 = *(byte *)(iVar4 + 0x14);
        *piVar13 = iVar6;
        if (((bVar3 & 2) != 0) && (iVar4 = *(int *)(iVar4 + 0x28) >> 2, piVar13 = piVar7, 0 < iVar4)
           ) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar7[2] = iVar11;
      }
      puVar12 = *(undefined4 **)(param_1 + 4);
      *puVar12 = piVar7;
      *(int **)(param_1 + 4) = piVar7;
      piVar7[1] = (int)puVar12;
      *piVar7 = param_1;
      goto LAB_004a2abb;
    }
  }
  iVar11 = 0;
LAB_004a2abb:
  *(int *)(param_1 + 0x138) = iVar11;
  *(undefined4 *)(param_1 + 0xf0) = 4;
  *(undefined4 *)(param_1 + 0x13c) = DAT_0073ad34;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  ExceptionList = local_c;
  return param_1;
}
