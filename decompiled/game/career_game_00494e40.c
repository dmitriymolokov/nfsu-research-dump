/* spd-match: far pct=7.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004959d0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
extern unsigned char *DAT_0073578c;
extern unsigned char *DAT_0073619c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006c1800;
extern unsigned char *PTR_FUN_006c7a00;
extern unsigned char *PTR_LAB_006c2c5c;
extern void LAB_00494f6c(void);
extern void LAB_00494faa(void);
extern void LAB_00494fc2(void);
extern void LAB_00494fc8(void);
extern void LAB_00495084(void);
extern void LAB_004950d4(void);
extern void LAB_004950ee(void);
extern void LAB_004950f4(void);
extern void LAB_004951ad(void);
extern void LAB_004951ee(void);
extern void LAB_00495208(void);
extern void LAB_0049520e(void);
extern void LAB_004952cc(void);
extern void LAB_0049530a(void);
extern void LAB_00495322(void);
extern void LAB_00495328(void);
extern void LAB_004953e0(void);
extern void LAB_00495430(void);
extern void LAB_0049544a(void);
extern void LAB_00495450(void);
extern void LAB_0049550d(void);
extern void LAB_0049554b(void);
extern void LAB_00495565(void);
extern void LAB_0049556b(void);
extern void LAB_0049562d(void);
extern void LAB_0049566b(void);
extern void LAB_00495685(void);
extern void LAB_0049568b(void);
extern void LAB_0049574d(void);
extern void LAB_0049578b(void);
extern void LAB_004957a5(void);
extern void LAB_004957ab(void);
extern void LAB_0049586d(void);
extern void LAB_004958bd(void);
extern void LAB_004958d7(void);
extern void LAB_004958dd(void);
extern void LAB_00687f20(void);
void *ExceptionList;

undefined4 * FUN_00494e40(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int local_a0;
  byte local_98;
  byte local_97 [31];
  undefined **local_78;
  int local_74;
  int local_70;
  undefined **local_6c;
  int local_68;
  int local_64;
  undefined **local_60;
  int local_5c;
  int local_58;
  undefined **local_54;
  int local_50;
  int local_4c;
  undefined **local_48;
  int local_44;
  int local_40;
  undefined **local_3c;
  int local_38;
  int local_34;
  undefined **local_30;
  int local_2c;
  int local_28;
  undefined **local_24;
  int local_20;
  int local_1c;
  undefined **local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687f20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c7a00;
  iVar4 = FUN_004f65d0();
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x18) = 0;
  }
  iVar4 = *(int *)(DAT_0073619c + 0x24);
  param_1[0x34] = iVar4;
  if (4 < iVar4) {
    param_1[0x34] = 4;
  }
  local_a0 = 0;
  do {
    iVar5 = local_a0 + 1;
    FUN_004f68c0(0x20,"CarModel_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_00494faa:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_00494fc8;
LAB_00494fc2:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_00494fc8;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_00494f6c:
        local_54 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 1;
        local_4c = 0;
        local_50 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_54 = &PTR_LAB_006c2c5c;
        iVar6 = local_4c;
        if (local_4c == 0) goto LAB_00494faa;
        goto LAB_00494fc2;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00494faa;
        goto LAB_00494f6c;
      }
LAB_00494fc8:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x10] = iVar6;
    FUN_004f68c0(0x20,"Driver_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_004950d4:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_004950f4;
LAB_004950ee:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_004950f4;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_00495084:
        local_18 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 2;
        local_10 = 0;
        local_14 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_18 = &PTR_LAB_006c2c5c;
        iVar6 = local_10;
        if (local_10 == 0) goto LAB_004950d4;
        goto LAB_004950ee;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_004950d4;
        goto LAB_00495084;
      }
LAB_004950f4:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x14] = iVar6;
    FUN_004f68c0(0x20,"Taunt_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_004951ee:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_0049520e;
LAB_00495208:
      if (*(int *)(iVar6 + 0x18) != 2) goto LAB_0049520e;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004951ad:
        local_3c = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 3;
        local_34 = 0;
        local_38 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_3c = &PTR_LAB_006c2c5c;
        iVar6 = local_34;
        if (local_34 == 0) goto LAB_004951ee;
        goto LAB_00495208;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_004951ee;
        goto LAB_004951ad;
      }
LAB_0049520e:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x18] = iVar6;
    FUN_004f68c0(0x20,"Bet_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_0049530a:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_00495328;
LAB_00495322:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_00495328;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004952cc:
        local_78 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 4;
        local_70 = 0;
        local_74 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_78 = &PTR_LAB_006c2c5c;
        iVar6 = local_70;
        if (local_70 == 0) goto LAB_0049530a;
        goto LAB_00495322;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_0049530a;
        goto LAB_004952cc;
      }
LAB_00495328:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x1c] = iVar6;
    FUN_004f68c0(0x20,"Position_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_00495430:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_00495450;
LAB_0049544a:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_00495450;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004953e0:
        local_24 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 5;
        local_1c = 0;
        local_20 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_24 = &PTR_LAB_006c2c5c;
        iVar6 = local_1c;
        if (local_1c == 0) goto LAB_00495430;
        goto LAB_0049544a;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00495430;
        goto LAB_004953e0;
      }
LAB_00495450:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x20] = iVar6;
    FUN_004f68c0(0x20,"RacerColor_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_0049554b:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_0049556b;
LAB_00495565:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_0049556b;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049550d:
        local_6c = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 6;
        local_64 = 0;
        local_68 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_6c = &PTR_LAB_006c2c5c;
        iVar6 = local_64;
        if (local_64 == 0) goto LAB_0049554b;
        goto LAB_00495565;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_0049554b;
        goto LAB_0049550d;
      }
LAB_0049556b:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x24] = iVar6;
    FUN_004f68c0(0x20,"BottomBacking_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_0049566b:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_0049568b;
LAB_00495685:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_0049568b;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049562d:
        local_60 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 7;
        local_58 = 0;
        local_5c = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_60 = &PTR_LAB_006c2c5c;
        iVar6 = local_58;
        if (local_58 == 0) goto LAB_0049566b;
        goto LAB_00495685;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_0049566b;
        goto LAB_0049562d;
      }
LAB_0049568b:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x28] = iVar6;
    FUN_004f68c0(0x20,"Coner_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_0049578b:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_004957ab;
LAB_004957a5:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_004957ab;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049574d:
        local_48 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 8;
        local_40 = 0;
        local_44 = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_48 = &PTR_LAB_006c2c5c;
        iVar6 = local_40;
        if (local_40 == 0) goto LAB_0049578b;
        goto LAB_004957a5;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_0049578b;
        goto LAB_0049574d;
      }
LAB_004957ab:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x2c] = iVar6;
    FUN_004f68c0(0x20,"CarColor_%d",iVar5);
    iVar4 = -1;
    pbVar7 = &local_98;
    bVar3 = local_98;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    if (param_1[3] == 0) {
LAB_004958bd:
      if ((DAT_0073578c == 0) || (iVar6 = FUN_004ef050(iVar4), iVar6 == 0)) goto LAB_004958dd;
LAB_004958d7:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_004958dd;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049586d:
        local_30 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 9;
        local_28 = 0;
        local_2c = iVar4;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_30 = &PTR_LAB_006c2c5c;
        iVar6 = local_28;
        if (local_28 == 0) goto LAB_004958bd;
        goto LAB_004958d7;
      }
      if (DAT_0073578c != 0) {
        iVar2 = *(int *)(DAT_0073578c + 8);
        if ((iVar2 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_004958bd;
        goto LAB_0049586d;
      }
LAB_004958dd:
      iVar6 = 0;
    }
    param_1[local_a0 + 0x30] = iVar6;
    local_a0 = iVar5;
    if (3 < iVar5) {
      *(undefined1 *)(param_1 + 0x35) = 0;
      *(undefined1 *)((int)param_1 + 0xd5) = 0;
      *(undefined1 *)((int)param_1 + 0xd6) = 0;
      FUN_004959d0(param_1);
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}
