/* spd-match: far pct=8.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-a/va_00497EB0 */
#include "ghidra_compat.h"

int __cdecl FUN_00416bb0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043b850();
int __cdecl FUN_00495ce0();
int __cdecl FUN_00495f00();
int __cdecl FUN_004c2a50();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f67f0();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004feb50();
int __cdecl FUN_004ff2f0();
int __cdecl FUN_004ffb70();
extern int DAT_006cc568;
extern int DAT_00735710;
extern unsigned char *DAT_0073578c;
extern int DAT_007361a8;
extern unsigned char *DAT_007361f8;
extern int DAT_00746104;
extern int DAT_00777b4c;
extern int DAT_00777cd0;
extern unsigned char *DAT_0077b244;
extern int DAT_0078a344;
extern unsigned char *PTR_LAB_006c7968;
extern void LAB_00497f20(void);
extern void LAB_004980f4(void);
extern void LAB_0049819a(void);
extern void LAB_004981ba(void);
extern void LAB_004981c9(void);
extern void LAB_0049832c(void);
extern void LAB_00498343(void);
extern void LAB_00498354(void);
extern void LAB_004983fc(void);
extern void LAB_00498413(void);
extern void LAB_00498424(void);
extern void LAB_004984cc(void);
extern void LAB_004984e3(void);
extern void LAB_004984f4(void);
extern void LAB_0049859c(void);
extern void LAB_004985b3(void);
extern void LAB_004985c4(void);
extern void LAB_0049866c(void);
extern void LAB_00498683(void);
extern void LAB_00498694(void);
extern void LAB_0049873c(void);
extern void LAB_00498753(void);
extern void LAB_00498764(void);
extern void LAB_0049880c(void);
extern void LAB_00498823(void);
extern void LAB_00498834(void);
extern void LAB_004988dc(void);
extern void LAB_004988f3(void);
extern void LAB_00498904(void);
extern void LAB_004989ac(void);
extern void LAB_004989c3(void);
extern void LAB_004989d4(void);
extern void LAB_00498a7c(void);
extern void LAB_00498a93(void);
extern void LAB_00498aa4(void);
extern void LAB_00498b4c(void);
extern void LAB_00498b63(void);
extern void LAB_00498b74(void);
extern void LAB_00498c1f(void);
extern void LAB_00498c3e(void);
extern void LAB_00498c55(void);
extern void LAB_00498d0f(void);
extern void LAB_00498d22(void);

void __fastcall FUN_00497eb0(int val, int param_1, int param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  undefined4 *local_a8;
  int local_a4;
  int local_a0;
  byte local_9c;
  byte local_9b [31];
  int local_7c;
  int local_78;
  undefined4 local_74;
  byte local_70;
  byte local_6f [31];
  undefined1 local_50 [16];
  byte local_40;
  byte local_3f [63];
  
  local_a0 = 0;
  iVar9 = DAT_0073578c;
  iVar11 = local_7c;
  if (0 < val) {
    local_a4 = 1;
    local_a8 = &DAT_00777cd0;
    local_7c = val;
    do {
      iVar9 = 0;
      if (0 < *(int *)(DAT_007361f8 + 0x18)) {
        piVar5 = (int *)(DAT_007361f8 + 0x28);
        do {
          iVar11 = *piVar5;
          if ((int)*(short *)(iVar11 + 10) == local_a8[1]) goto LAB_00497f20;
          iVar9 = iVar9 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar9 < *(int *)(DAT_007361f8 + 0x18));
      }
      iVar11 = 0;
LAB_00497f20:
      local_74 = *(undefined4 *)(iVar11 + 0x10);
      iVar9 = *(int *)(iVar11 + 0x14);
      local_78 = iVar11;
      FUN_004f68c0(0x20,"Pos%d",local_a4);
      FUN_004f67f0(&PTR_LAB_006c7968,*local_a8);
      FUN_004f68c0(0x20,"Name%d",local_a4);
      if ((*(int *)(*(int *)(iVar11 + 0x14) + 4) == 1) &&
         (*(char *)(*(int *)(iVar11 + 0x14) + 0x734) == '\0')) {
        iVar11 = *(int *)(iVar11 + 0x18);
        cVar3 = FUN_0043a2e0();
        if (cVar3 == '\0') {
          iVar11 = iVar11 + 0x34;
        }
        else {
          iVar11 = DAT_0077b244 + 0x19;
        }
      }
      else {
        cVar3 = FUN_0043a2e0();
        if (cVar3 == '\0') {
          iVar11 = iVar9 + 0x73c;
        }
        else {
          iVar11 = FUN_0043b850(local_a8[1]);
          iVar11 = iVar11 + 0x19;
        }
      }
      FUN_004f67f0(&DAT_006cc568,iVar11);
      FUN_004f68c0(0x20,"Rep_%d",local_a4);
      if ((DAT_00777b4c == 1) && (*(int *)(iVar9 + 4) == 1)) {
        iVar9 = -1;
        pbVar10 = &local_70;
        bVar4 = local_70;
        while (bVar4 != 0) {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          pbVar1 = pbVar10 + 1;
          iVar9 = iVar9 * 0x21 + (uint)bVar4;
          pbVar10 = pbVar10 + 1;
          bVar4 = *pbVar1;
        }
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar11 = FUN_004f65d0(), iVar11 == 0)) ||
           (iVar11 = FUN_004ffb70(), iVar11 == 0)) {
          if (DAT_0073578c != 0) {
            uVar6 = FUN_004ef050(iVar9);
            FUN_004f6970(uVar6);
            goto LAB_004980f4;
          }
          iVar11 = 0;
        }
        FUN_004f6970(iVar11);
      }
      else {
        iVar9 = -1;
        pbVar10 = &local_70;
        bVar4 = local_70;
        while (bVar4 != 0) {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          iVar9 = iVar9 * 0x21 + (uint)bVar4;
          pbVar1 = pbVar10 + 1;
          pbVar10 = pbVar10 + 1;
          bVar4 = *pbVar1;
        }
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar11 = FUN_004f65d0(), iVar11 == 0)) ||
           (iVar11 = FUN_004ffb70(), iVar11 == 0)) {
          if (DAT_0073578c == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = FUN_004ef050(iVar9);
          }
        }
        FUN_004f6910(iVar11);
      }
LAB_004980f4:
      FUN_004f68c0(0x20,"CarColor_%d",local_a4);
      iVar9 = -1;
      pbVar10 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar10 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar10 = pbVar10 + 1;
        bVar4 = *pbVar1;
      }
      iVar11 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_004981ba:
        if (iVar11 != 0) {
          iVar7 = FUN_004ef050(iVar9);
LAB_004981c9:
          if ((iVar7 != 0) && (FUN_00495ce0(local_50), *(int *)(iVar7 + 0x18) < 0x100)) {
            cVar3 = FUN_004feb50();
            if (cVar3 == '\0') {
              *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
            }
            FUN_004ff2f0(iVar7,0,0);
          }
        }
      }
      else {
        iVar7 = FUN_004f3f90(&DAT_00746104);
        iVar11 = DAT_0073578c;
        if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) {
LAB_0049819a:
          if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
          goto LAB_004981ba;
          goto LAB_004981c9;
        }
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004981ba;
          goto LAB_0049819a;
        }
      }
      FUN_004f68c0(0x20,"CarModel_%d",local_a4);
      uVar6 = FUN_004c2a50();
      FUN_00416bb0(uVar6);
      local_a8 = local_a8 + 0x57;
      local_a4 = local_a4 + 1;
      local_7c = local_7c + -1;
      iVar9 = DAT_0073578c;
      local_a0 = val;
      iVar11 = 0;
    } while (local_7c != 0);
  }
  while (local_7c = iVar11, local_a0 < param_2) {
    local_a0 = local_a0 + 1;
    FUN_004f68c0(0x20,"Name%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498343:
      if (iVar11 == 0) {
LAB_00498354:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498343;
          goto LAB_0049832c;
        }
        goto LAB_00498354;
      }
LAB_0049832c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498343;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"RacerColor_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498413:
      if (iVar11 == 0) {
LAB_00498424:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498413;
          goto LAB_004983fc;
        }
        goto LAB_00498424;
      }
LAB_004983fc:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498413;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"CarColor_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004984e3:
      if (iVar11 == 0) {
LAB_004984f4:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004984e3;
          goto LAB_004984cc;
        }
        goto LAB_004984f4;
      }
LAB_004984cc:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_004984e3;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Pos%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004985b3:
      if (iVar11 == 0) {
LAB_004985c4:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004985b3;
          goto LAB_0049859c;
        }
        goto LAB_004985c4;
      }
LAB_0049859c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_004985b3;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Position_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498683:
      if (iVar11 == 0) {
LAB_00498694:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498683;
          goto LAB_0049866c;
        }
        goto LAB_00498694;
      }
LAB_0049866c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498683;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"CarModel_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498753:
      if (iVar11 == 0) {
LAB_00498764:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498753;
          goto LAB_0049873c;
        }
        goto LAB_00498764;
      }
LAB_0049873c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498753;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Rep_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498823:
      if (iVar11 == 0) {
LAB_00498834:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498823;
          goto LAB_0049880c;
        }
        goto LAB_00498834;
      }
LAB_0049880c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498823;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Lead%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004988f3:
      if (iVar11 == 0) {
LAB_00498904:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004988f3;
          goto LAB_004988dc;
        }
        goto LAB_00498904;
      }
LAB_004988dc:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_004988f3;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Back_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004989c3:
      if (iVar11 == 0) {
LAB_004989d4:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_004989c3;
          goto LAB_004989ac;
        }
        goto LAB_004989d4;
      }
LAB_004989ac:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_004989c3;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"Corner_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498a93:
      if (iVar11 == 0) {
LAB_00498aa4:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498a93;
          goto LAB_00498a7c;
        }
        goto LAB_00498aa4;
      }
LAB_00498a7c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498a93;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"PointEarned_%d",local_a0);
    iVar9 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar9 = iVar9 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar11 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498b63:
      if (iVar11 == 0) {
LAB_00498b74:
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004ef050(iVar9);
      }
    }
    else {
      iVar7 = FUN_004f3f90(&DAT_00746104);
      iVar11 = DAT_0073578c;
      if ((iVar7 == 0) || (iVar7 = *(int *)(iVar7 + 0x18), iVar7 == 0)) {
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar7 = FUN_004fd1e0(iVar8 + 0xdc), iVar7 == 0 &&
              (iVar7 = FUN_004fd1e0(iVar8 + 0xec), iVar7 == 0)))) goto LAB_00498b63;
          goto LAB_00498b4c;
        }
        goto LAB_00498b74;
      }
LAB_00498b4c:
      if ((iVar7 == 0) || (iVar7 = FUN_004ffb70(), iVar11 = DAT_0073578c, iVar7 == 0))
      goto LAB_00498b63;
    }
    FUN_004f6910(iVar7);
    FUN_004f68c0(0x20,"TotalPoints_%d",local_a0);
    iVar11 = -1;
    pbVar10 = &local_9c;
    bVar4 = local_9c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar11 = iVar11 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    iVar7 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_00498c3e:
      iVar9 = 0;
      if (iVar7 == 0) {
LAB_00498c55:
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_004ef050(iVar11);
        iVar9 = DAT_0073578c;
      }
    }
    else {
      iVar9 = FUN_004f3f90(&DAT_00746104);
      iVar7 = DAT_0073578c;
      if ((iVar9 == 0) || (iVar9 = *(int *)(iVar9 + 0x18), iVar9 == 0)) {
        iVar9 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar8 = *(int *)(DAT_0073578c + 8);
          if ((iVar8 == 0) ||
             ((iVar9 = FUN_004fd1e0(iVar8 + 0xdc), iVar9 == 0 &&
              (iVar9 = FUN_004fd1e0(iVar8 + 0xec), iVar9 == 0)))) goto LAB_00498c3e;
          goto LAB_00498c1f;
        }
        goto LAB_00498c55;
      }
LAB_00498c1f:
      if ((iVar9 == 0) ||
         (iVar8 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar7 = DAT_0073578c, iVar8 == 0))
      goto LAB_00498c3e;
    }
    FUN_004f6910(iVar8);
    iVar11 = local_7c;
  }
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    FUN_00495f00(0x70445b0c);
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar11 = FUN_004f3f90(&DAT_00746104);
    iVar9 = DAT_0073578c;
    if ((iVar11 == 0) || (iVar11 = *(int *)(iVar11 + 0x18), iVar11 == 0)) {
      if (DAT_0073578c == 0) {
        return;
      }
      iVar7 = *(int *)(DAT_0073578c + 8);
      if ((iVar7 == 0) ||
         ((iVar11 = FUN_004fd1e0(iVar7 + 0xdc), iVar11 == 0 &&
          (iVar11 = FUN_004fd1e0(iVar7 + 0xec), iVar11 == 0)))) goto LAB_00498d0f;
    }
    if ((iVar11 != 0) && (iVar11 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar11 != 0))
    goto LAB_00498d22;
  }
LAB_00498d0f:
  if (iVar9 == 0) {
    return;
  }
  iVar11 = FUN_004ef050(0x6e6c46c);
LAB_00498d22:
  if ((iVar11 != 0) && (*(int *)(iVar11 + 0x18) == 2)) {
    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar12 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar11 + 0x5c) = 0x4f6b0d68;
    if (bVar12) {
      (**(code **)*puVar2)(iVar11);
    }
    *(uint *)(iVar11 + 0x1c) = *(uint *)(iVar11 + 0x1c) & 0xfffffffd | 0x400000;
    return;
  }
  return;
}
