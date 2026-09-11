/* spd-match: far pct=8.44 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00432a30();
int __cdecl FUN_0049fdb0();
int __cdecl FUN_0049fe10();
int __cdecl FUN_004ee660();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
int __cdecl FUN_004ffb00();
int __cdecl FUN_005461c0();
int __cdecl FUN_005649f0();
int __cdecl FUN_00566e60();
int __cdecl FUN_0057f2b0();
extern int DAT_006c744c;
extern unsigned char *DAT_007349b4;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_0078a320;
extern int DAT_0078a3f5;
extern int DAT_0078a410;
extern unsigned char *DAT_0078a418;
extern int DAT_0078a41c;
extern unsigned char *PTR_FUN_006c1800;
extern unsigned char *PTR_LAB_006c2c5c;
extern void LAB_004a0648(void);
extern void LAB_004a0680(void);
extern void LAB_004a0724(void);
extern void LAB_004a07ea(void);
extern void LAB_004a0822(void);
extern void LAB_004a08c6(void);
extern void LAB_004a097a(void);
extern void LAB_004a09b2(void);
extern void LAB_004a0a56(void);
extern void LAB_004a0b0a(void);
extern void LAB_004a0b42(void);
extern void LAB_004a0be6(void);
extern void LAB_004a0c9a(void);
extern void LAB_004a0cd2(void);
extern void LAB_004a0d87(void);
extern void LAB_004a0ddd(void);
extern void LAB_00687e60(void);
void *ExceptionList;

int FUN_004a03d0(int param_1,int *param_2,int param_3)

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
  undefined *puVar11;
  char *pcVar12;
  int *piVar13;
  int local_40;
  int local_3c;
  undefined **local_38;
  int local_34;
  int local_30;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687e60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int **)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x10000060;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x8c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  if (DAT_0078a320 < 2) {
    FUN_004fd230();
    uVar5 = FUN_0049fe10();
    *(undefined4 *)(param_1 + 0x90) = uVar5;
  }
  else {
    FUN_004fd230();
    iVar6 = FUN_0049fe10();
    *(int *)(param_1 + 0x90) = iVar6;
    if (iVar6 != 0) {
      for (iVar8 = *(int *)(iVar6 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar7 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar7) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar6 + 0x54)) {
              *(int *)(iVar6 + 0x54) = iVar8;
              FUN_004ff030(iVar6);
              *(undefined4 *)(*(int *)(iVar6 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  local_40 = 0;
  param_2 = (int *)(param_1 + 0x34);
  do {
    local_40 = local_40 + 1;
    FUN_004f68c0(0x20,"RPM_%d",local_40);
    iVar6 = -1;
    pbVar10 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar10 + 1;
      iVar6 = iVar6 * 0x21 + (uint)bVar4;
      pbVar10 = pbVar10 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a0680;
    iVar8 = FUN_004f3f90(&DAT_00746104);
    if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) goto LAB_004a0648;
    if (DAT_0073578c == 0) {
LAB_004a0724:
      iVar8 = 0;
    }
    else {
      iVar7 = *(int *)(DAT_0073578c + 8);
      if (iVar7 == 0) {
LAB_004a0680:
        if (DAT_0073578c == 0) goto LAB_004a0724;
        iVar8 = FUN_004ef050(iVar6);
      }
      else {
        FUN_004ee660();
        iVar8 = FUN_004fd1e0(iVar7 + 0xdc);
        if (iVar8 == 0) {
          FUN_004ee660();
          iVar8 = FUN_004fd1e0(iVar7 + 0xec);
          if (iVar8 == 0) goto LAB_004a0680;
        }
LAB_004a0648:
        local_38 = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 1;
        local_30 = 0;
        local_34 = iVar6;
        FUN_004ffb00(iVar8);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_38 = &PTR_LAB_006c2c5c;
        iVar8 = local_30;
        if (local_30 == 0) goto LAB_004a0680;
      }
      if ((iVar8 == 0) || (*(int *)(iVar8 + 0x18) != 1)) goto LAB_004a0724;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar6 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar9 = (int *)*piVar13;
      iVar7 = *(int *)(iVar6 + 0x18) + 1;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        iVar2 = *piVar9;
        if (*(int *)(iVar6 + 0x1c) < iVar7) {
          *(int *)(iVar6 + 0x1c) = iVar7;
        }
        *(int *)(iVar6 + 0x18) = iVar7;
        bVar4 = *(byte *)(iVar6 + 0x14);
        *piVar13 = iVar2;
        if (((bVar4 & 2) != 0) && (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar13 = piVar9, 0 < iVar6)
           ) {
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar9[2] = iVar8;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar9;
      *(int **)(param_1 + 4) = piVar9;
      piVar9[1] = (int)puVar3;
      *piVar9 = param_1;
    }
    *param_2 = iVar8;
    param_2 = param_2 + 1;
  } while (local_40 < 10);
  puVar11 = &DAT_006c744c;
  iVar6 = -1;
  bVar4 = 0x52;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar6 = iVar6 * 0x21 + (uint)bVar4;
    bVar4 = puVar11[1];
    puVar11 = puVar11 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a0822;
  iVar8 = FUN_004f3f90(&DAT_00746104);
  if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) goto LAB_004a07ea;
  if (DAT_0073578c == 0) {
LAB_004a08c6:
    iVar8 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0073578c + 8);
    if (iVar7 == 0) {
LAB_004a0822:
      if (DAT_0073578c == 0) goto LAB_004a08c6;
      iVar8 = FUN_004ef050(iVar6);
    }
    else {
      FUN_004ee660();
      iVar8 = FUN_004fd1e0(iVar7 + 0xdc);
      if (iVar8 == 0) {
        FUN_004ee660();
        iVar8 = FUN_004fd1e0(iVar7 + 0xec);
        if (iVar8 == 0) goto LAB_004a0822;
      }
LAB_004a07ea:
      local_38 = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 2;
      local_30 = 0;
      local_34 = iVar6;
      FUN_004ffb00(iVar8);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      local_38 = &PTR_LAB_006c2c5c;
      iVar8 = local_30;
      if (local_30 == 0) goto LAB_004a0822;
    }
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x18) != 1)) goto LAB_004a08c6;
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar6 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar9 = (int *)*piVar13;
    iVar7 = *(int *)(iVar6 + 0x18) + 1;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar2 = *piVar9;
      if (*(int *)(iVar6 + 0x1c) < iVar7) {
        *(int *)(iVar6 + 0x1c) = iVar7;
      }
      *(int *)(iVar6 + 0x18) = iVar7;
      bVar4 = *(byte *)(iVar6 + 0x14);
      *piVar13 = iVar2;
      if (((bVar4 & 2) != 0) && (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar13 = piVar9, 0 < iVar6))
      {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar9[2] = iVar8;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    *puVar3 = piVar9;
    *(int **)(param_1 + 4) = piVar9;
    piVar9[1] = (int)puVar3;
    *piVar9 = param_1;
  }
  *(int *)(param_1 + 0x5c) = iVar8;
  pcVar12 = "RPM45Corner_Left";
  iVar6 = -1;
  bVar4 = 0x52;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar6 = iVar6 * 0x21 + (uint)bVar4;
    bVar4 = pcVar12[1];
    pcVar12 = pcVar12 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a09b2;
  iVar8 = FUN_004f3f90(&DAT_00746104);
  if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) goto LAB_004a097a;
  if (DAT_0073578c == 0) {
LAB_004a0a56:
    iVar8 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0073578c + 8);
    if (iVar7 == 0) {
LAB_004a09b2:
      if (DAT_0073578c == 0) goto LAB_004a0a56;
      iVar8 = FUN_004ef050(iVar6);
    }
    else {
      FUN_004ee660();
      iVar8 = FUN_004fd1e0(iVar7 + 0xdc);
      if (iVar8 == 0) {
        FUN_004ee660();
        iVar8 = FUN_004fd1e0(iVar7 + 0xec);
        if (iVar8 == 0) goto LAB_004a09b2;
      }
LAB_004a097a:
      local_38 = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 3;
      local_30 = 0;
      local_34 = iVar6;
      FUN_004ffb00(iVar8);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      local_38 = &PTR_LAB_006c2c5c;
      iVar8 = local_30;
      if (local_30 == 0) goto LAB_004a09b2;
    }
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x18) != 1)) goto LAB_004a0a56;
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar6 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar9 = (int *)*piVar13;
    iVar7 = *(int *)(iVar6 + 0x18) + 1;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar2 = *piVar9;
      if (*(int *)(iVar6 + 0x1c) < iVar7) {
        *(int *)(iVar6 + 0x1c) = iVar7;
      }
      *(int *)(iVar6 + 0x18) = iVar7;
      bVar4 = *(byte *)(iVar6 + 0x14);
      *piVar13 = iVar2;
      if (((bVar4 & 2) != 0) && (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar13 = piVar9, 0 < iVar6))
      {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar9[2] = iVar8;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    *puVar3 = piVar9;
    *(int **)(param_1 + 4) = piVar9;
    piVar9[1] = (int)puVar3;
    *piVar9 = param_1;
  }
  *(int *)(param_1 + 0x60) = iVar8;
  pcVar12 = "RPM45Corner_Right";
  iVar6 = -1;
  bVar4 = 0x52;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar6 = iVar6 * 0x21 + (uint)bVar4;
    bVar4 = pcVar12[1];
    pcVar12 = pcVar12 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a0b42;
  iVar8 = FUN_004f3f90(&DAT_00746104);
  if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) goto LAB_004a0b0a;
  if (DAT_0073578c == 0) {
LAB_004a0be6:
    iVar8 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0073578c + 8);
    if (iVar7 == 0) {
LAB_004a0b42:
      if (DAT_0073578c == 0) goto LAB_004a0be6;
      iVar8 = FUN_004ef050(iVar6);
    }
    else {
      FUN_004ee660();
      iVar8 = FUN_004fd1e0(iVar7 + 0xdc);
      if (iVar8 == 0) {
        FUN_004ee660();
        iVar8 = FUN_004fd1e0(iVar7 + 0xec);
        if (iVar8 == 0) goto LAB_004a0b42;
      }
LAB_004a0b0a:
      local_38 = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 4;
      local_30 = 0;
      local_34 = iVar6;
      FUN_004ffb00(iVar8);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      local_38 = &PTR_LAB_006c2c5c;
      iVar8 = local_30;
      if (local_30 == 0) goto LAB_004a0b42;
    }
    if ((iVar8 == 0) || (*(int *)(iVar8 + 0x18) != 1)) goto LAB_004a0be6;
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar6 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar9 = (int *)*piVar13;
    iVar7 = *(int *)(iVar6 + 0x18) + 1;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar2 = *piVar9;
      if (*(int *)(iVar6 + 0x1c) < iVar7) {
        *(int *)(iVar6 + 0x1c) = iVar7;
      }
      *(int *)(iVar6 + 0x18) = iVar7;
      bVar4 = *(byte *)(iVar6 + 0x14);
      *piVar13 = iVar2;
      if (((bVar4 & 2) != 0) && (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar13 = piVar9, 0 < iVar6))
      {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar9[2] = iVar8;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    *puVar3 = piVar9;
    *(int **)(param_1 + 4) = piVar9;
    piVar9[1] = (int)puVar3;
    *piVar9 = param_1;
  }
  *(int *)(param_1 + 100) = iVar8;
  pcVar12 = "Shift_light_back";
  iVar6 = -1;
  bVar4 = 0x53;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar6 = iVar6 * 0x21 + (uint)bVar4;
    bVar4 = pcVar12[1];
    pcVar12 = pcVar12 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a0cd2;
  iVar8 = FUN_004f3f90(&DAT_00746104);
  if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) goto LAB_004a0c9a;
  if (DAT_0073578c == 0) goto LAB_004a0d87;
  iVar7 = *(int *)(DAT_0073578c + 8);
  if (iVar7 == 0) {
LAB_004a0cd2:
    if (DAT_0073578c == 0) goto LAB_004a0d87;
    iVar8 = FUN_004ef050(iVar6);
  }
  else {
    FUN_004ee660();
    iVar8 = FUN_004fd1e0(iVar7 + 0xdc);
    if (iVar8 == 0) {
      FUN_004ee660();
      iVar8 = FUN_004fd1e0(iVar7 + 0xec);
      if (iVar8 == 0) goto LAB_004a0cd2;
    }
LAB_004a0c9a:
    local_38 = &PTR_FUN_006c1800;
    (*(unsigned char *)&(local_4)) = 5;
    local_30 = 0;
    local_34 = iVar6;
    FUN_004ffb00(iVar8);
    local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
    local_38 = &PTR_LAB_006c2c5c;
    iVar8 = local_30;
    if (local_30 == 0) goto LAB_004a0cd2;
  }
  if ((iVar8 != 0) && (*(int *)(iVar8 + 0x18) == 1)) {
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar6 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar9 = (int *)*piVar13;
    iVar7 = *(int *)(iVar6 + 0x18) + 1;
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar2 = *piVar9;
      if (*(int *)(iVar6 + 0x1c) < iVar7) {
        *(int *)(iVar6 + 0x1c) = iVar7;
      }
      *(int *)(iVar6 + 0x18) = iVar7;
      bVar4 = *(byte *)(iVar6 + 0x14);
      *piVar13 = iVar2;
      if (((bVar4 & 2) != 0) && (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar13 = piVar9, 0 < iVar6))
      {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar9[2] = iVar8;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    *puVar3 = piVar9;
    *(int **)(param_1 + 4) = piVar9;
    piVar9[1] = (int)puVar3;
    *piVar9 = param_1;
  }
LAB_004a0d87:
  *(undefined1 *)(param_1 + 0x98) = 0;
  if ((int)(&DAT_0078a410)[param_3] < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < DAT_0078a41c) {
      pcVar12 = (char *)(DAT_0078a418 + 1);
      do {
        if ((&DAT_0078a410)[param_3] == (int)*pcVar12) {
          iVar6 = iVar6 * 0x750 + DAT_0078a418;
          goto LAB_004a0ddd;
        }
        iVar6 = iVar6 + 1;
        pcVar12 = pcVar12 + 0x750;
      } while (iVar6 < DAT_0078a41c);
    }
    iVar6 = 0;
  }
LAB_004a0ddd:
  if ((iVar6 != 0) && ((undefined4 *)(iVar6 + 0x10) != (undefined4 *)0x0)) {
    if (*(char *)(iVar6 + 0x434) == -1) {
      FUN_0057f2b0(1);
    }
    if ((iVar6 != -0x70) && (iVar6 != -0x260)) {
      FUN_00432a30(*(undefined4 *)(iVar6 + 0x10),(int)DAT_0078a3f5,&local_40);
      iVar6 = local_40;
      iVar8 = FUN_005461c0(local_40,0,0);
      if (iVar8 == 0) {
        *(undefined1 *)(param_1 + 0x98) = 1;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x68);
        if ((iVar8 != 0) && (*(int *)(iVar8 + 0x24) != iVar6)) {
          *(int *)(iVar8 + 0x24) = iVar6;
          *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x400000;
        }
      }
      iVar6 = *(int *)(param_1 + 0x94);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != local_3c)) {
        *(int *)(iVar6 + 0x24) = local_3c;
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  ExceptionList = local_c;
  return param_1;
}
