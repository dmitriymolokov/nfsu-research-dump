/* spd-match: far pct=9.44 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00432a30();
int __cdecl FUN_0049fdb0();
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
extern void LAB_004a4128(void);
extern void LAB_004a4160(void);
extern void LAB_004a4204(void);
extern void LAB_004a42ca(void);
extern void LAB_004a4302(void);
extern void LAB_004a43a6(void);
extern void LAB_004a445a(void);
extern void LAB_004a4492(void);
extern void LAB_004a4536(void);
extern void LAB_004a45ea(void);
extern void LAB_004a4622(void);
extern void LAB_004a4642(void);
extern void LAB_004a46d6(void);
extern void LAB_004a4726(void);
extern void LAB_00687da8(void);
void *ExceptionList;

int FUN_004a3f00(int param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  undefined *puVar10;
  char *pcVar11;
  int iVar12;
  int *piVar13;
  int local_44;
  int local_40;
  undefined **local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00687da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int **)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x10000060;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  uVar5 = FUN_004fd230();
  FUN_0049fe70(uVar5);
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  FUN_004fd230();
  uVar5 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  if (DAT_0078a320 < 2) {
    FUN_004fd230();
    uVar5 = FUN_0049fe10();
    *(undefined4 *)(param_1 + 0x30) = uVar5;
  }
  else {
    FUN_004fd230();
    uVar5 = FUN_0049fe10();
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    FUN_004fd230();
    FUN_0049fe10();
  }
  local_44 = 0;
  param_2 = (int *)(param_1 + 0x38);
  do {
    local_44 = local_44 + 1;
    FUN_004f68c0(0x20,"RPM_%d",local_44);
    iVar12 = -1;
    pbVar9 = &local_2c;
    bVar4 = local_2c;
    while (bVar4 != 0) {
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 - 0x20;
      }
      pbVar1 = pbVar9 + 1;
      iVar12 = iVar12 * 0x21 + (uint)bVar4;
      pbVar9 = pbVar9 + 1;
      bVar4 = *pbVar1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_004a4160;
    iVar6 = FUN_004f3f90(&DAT_00746104);
    if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) goto LAB_004a4128;
    if (DAT_0073578c == 0) {
LAB_004a4204:
      iVar6 = 0;
    }
    else {
      iVar7 = *(int *)(DAT_0073578c + 8);
      if (iVar7 == 0) {
LAB_004a4160:
        if (DAT_0073578c == 0) goto LAB_004a4204;
        iVar6 = FUN_004ef050(iVar12);
      }
      else {
        FUN_004ee660();
        iVar6 = FUN_004fd1e0(iVar7 + 0xdc);
        if (iVar6 == 0) {
          FUN_004ee660();
          iVar6 = FUN_004fd1e0(iVar7 + 0xec);
          if (iVar6 == 0) goto LAB_004a4160;
        }
LAB_004a4128:
        local_3c = &PTR_FUN_006c1800;
        (*(unsigned char *)&(local_4)) = 1;
        local_34 = 0;
        local_38 = iVar12;
        FUN_004ffb00(iVar6);
        local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
        local_3c = &PTR_LAB_006c2c5c;
        iVar6 = local_34;
        if (local_34 == 0) goto LAB_004a4160;
      }
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x18) != 1)) goto LAB_004a4204;
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar12 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar8 = (int *)*piVar13;
      iVar7 = *(int *)(iVar12 + 0x18) + 1;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        iVar2 = *piVar8;
        if (*(int *)(iVar12 + 0x1c) < iVar7) {
          *(int *)(iVar12 + 0x1c) = iVar7;
        }
        *(int *)(iVar12 + 0x18) = iVar7;
        bVar4 = *(byte *)(iVar12 + 0x14);
        *piVar13 = iVar2;
        if (((bVar4 & 2) != 0) &&
           (iVar12 = *(int *)(iVar12 + 0x28) >> 2, piVar13 = piVar8, 0 < iVar12)) {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar8[2] = iVar6;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar8;
      *(int **)(param_1 + 4) = piVar8;
      piVar8[1] = (int)puVar3;
      *piVar8 = param_1;
    }
    *param_2 = iVar6;
    param_2 = param_2 + 1;
  } while (local_44 < 10);
  puVar10 = &DAT_006c744c;
  iVar12 = -1;
  bVar4 = 0x52;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar12 = iVar12 * 0x21 + (uint)bVar4;
    bVar4 = puVar10[1];
    puVar10 = puVar10 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a4302;
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) goto LAB_004a42ca;
  if (DAT_0073578c == 0) {
LAB_004a43a6:
    iVar6 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0073578c + 8);
    if (iVar7 == 0) {
LAB_004a4302:
      if (DAT_0073578c == 0) goto LAB_004a43a6;
      iVar6 = FUN_004ef050(iVar12);
    }
    else {
      FUN_004ee660();
      iVar6 = FUN_004fd1e0(iVar7 + 0xdc);
      if (iVar6 == 0) {
        FUN_004ee660();
        iVar6 = FUN_004fd1e0(iVar7 + 0xec);
        if (iVar6 == 0) goto LAB_004a4302;
      }
LAB_004a42ca:
      local_3c = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 2;
      local_34 = 0;
      local_38 = iVar12;
      FUN_004ffb00(iVar6);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      local_3c = &PTR_LAB_006c2c5c;
      iVar6 = local_34;
      if (local_34 == 0) goto LAB_004a4302;
    }
    if ((iVar6 == 0) || (*(int *)(iVar6 + 0x18) != 1)) goto LAB_004a43a6;
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar12 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar8 = (int *)*piVar13;
    iVar7 = *(int *)(iVar12 + 0x18) + 1;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      iVar2 = *piVar8;
      if (*(int *)(iVar12 + 0x1c) < iVar7) {
        *(int *)(iVar12 + 0x1c) = iVar7;
      }
      *(int *)(iVar12 + 0x18) = iVar7;
      bVar4 = *(byte *)(iVar12 + 0x14);
      *piVar13 = iVar2;
      if (((bVar4 & 2) != 0) &&
         (iVar12 = *(int *)(iVar12 + 0x28) >> 2, piVar13 = piVar8, 0 < iVar12)) {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar8[2] = iVar6;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    *puVar3 = piVar8;
    *(int **)(param_1 + 4) = piVar8;
    piVar8[1] = (int)puVar3;
    *piVar8 = param_1;
  }
  *(int *)(param_1 + 0x60) = iVar6;
  pcVar11 = "RPM45Corner_Left";
  iVar12 = -1;
  bVar4 = 0x52;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar12 = iVar12 * 0x21 + (uint)bVar4;
    bVar4 = pcVar11[1];
    pcVar11 = pcVar11 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a4492;
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) goto LAB_004a445a;
  if (DAT_0073578c == 0) {
LAB_004a4536:
    iVar6 = 0;
  }
  else {
    iVar7 = *(int *)(DAT_0073578c + 8);
    if (iVar7 == 0) {
LAB_004a4492:
      if (DAT_0073578c == 0) goto LAB_004a4536;
      iVar6 = FUN_004ef050(iVar12);
    }
    else {
      FUN_004ee660();
      iVar6 = FUN_004fd1e0(iVar7 + 0xdc);
      if (iVar6 == 0) {
        FUN_004ee660();
        iVar6 = FUN_004fd1e0(iVar7 + 0xec);
        if (iVar6 == 0) goto LAB_004a4492;
      }
LAB_004a445a:
      local_3c = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 3;
      local_34 = 0;
      local_38 = iVar12;
      FUN_004ffb00(iVar6);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      local_3c = &PTR_LAB_006c2c5c;
      iVar6 = local_34;
      if (local_34 == 0) goto LAB_004a4492;
    }
    if ((iVar6 == 0) || (*(int *)(iVar6 + 0x18) != 1)) goto LAB_004a4536;
    if (DAT_007349b4 == 0) {
      FUN_005649f0();
    }
    iVar12 = DAT_007349b4;
    piVar13 = (int *)(DAT_007349b4 + 0x10);
    if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
      FUN_00566e60();
    }
    piVar8 = (int *)*piVar13;
    iVar7 = *(int *)(iVar12 + 0x18) + 1;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      iVar2 = *piVar8;
      if (*(int *)(iVar12 + 0x1c) < iVar7) {
        *(int *)(iVar12 + 0x1c) = iVar7;
      }
      *(int *)(iVar12 + 0x18) = iVar7;
      bVar4 = *(byte *)(iVar12 + 0x14);
      *piVar13 = iVar2;
      if (((bVar4 & 2) != 0) &&
         (iVar12 = *(int *)(iVar12 + 0x28) >> 2, piVar13 = piVar8, 0 < iVar12)) {
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
      }
      piVar8[2] = iVar6;
    }
    puVar3 = *(undefined4 **)(param_1 + 4);
    *puVar3 = piVar8;
    *(int **)(param_1 + 4) = piVar8;
    piVar8[1] = (int)puVar3;
    *piVar8 = param_1;
  }
  *(int *)(param_1 + 100) = iVar6;
  pcVar11 = "RPM45Corner_Right";
  iVar12 = -1;
  bVar4 = 0x52;
  do {
    if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
      bVar4 = bVar4 - 0x20;
    }
    iVar12 = iVar12 * 0x21 + (uint)bVar4;
    bVar4 = pcVar11[1];
    pcVar11 = pcVar11 + 1;
  } while (bVar4 != 0);
  if (*(int *)(param_1 + 8) == 0) goto LAB_004a4622;
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) goto LAB_004a45ea;
  if (DAT_0073578c != 0) {
    iVar7 = *(int *)(DAT_0073578c + 8);
    if (iVar7 == 0) {
LAB_004a4622:
      if (DAT_0073578c == 0) goto LAB_004a4642;
      iVar6 = FUN_004ef050(iVar12);
    }
    else {
      FUN_004ee660();
      iVar6 = FUN_004fd1e0(iVar7 + 0xdc);
      if (iVar6 == 0) {
        FUN_004ee660();
        iVar6 = FUN_004fd1e0(iVar7 + 0xec);
        if (iVar6 == 0) goto LAB_004a4622;
      }
LAB_004a45ea:
      local_3c = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 4;
      local_34 = 0;
      local_38 = iVar12;
      FUN_004ffb00(iVar6);
      local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
      local_3c = &PTR_LAB_006c2c5c;
      iVar6 = local_34;
      if (local_34 == 0) goto LAB_004a4622;
    }
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) == 1)) {
      if (DAT_007349b4 == 0) {
        FUN_005649f0();
      }
      iVar12 = DAT_007349b4;
      piVar13 = (int *)(DAT_007349b4 + 0x10);
      if ((*(int *)(DAT_007349b4 + 0x10) == 0) && ((*(byte *)(DAT_007349b4 + 0x14) & 1) != 0)) {
        FUN_00566e60();
      }
      piVar8 = (int *)*piVar13;
      iVar7 = *(int *)(iVar12 + 0x18) + 1;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        iVar2 = *piVar8;
        if (*(int *)(iVar12 + 0x1c) < iVar7) {
          *(int *)(iVar12 + 0x1c) = iVar7;
        }
        *(int *)(iVar12 + 0x18) = iVar7;
        bVar4 = *(byte *)(iVar12 + 0x14);
        *piVar13 = iVar2;
        if (((bVar4 & 2) != 0) &&
           (iVar12 = *(int *)(iVar12 + 0x28) >> 2, piVar13 = piVar8, 0 < iVar12)) {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        piVar8[2] = iVar6;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
      *puVar3 = piVar8;
      *(int **)(param_1 + 4) = piVar8;
      piVar8[1] = (int)puVar3;
      *piVar8 = param_1;
      goto LAB_004a46d6;
    }
  }
LAB_004a4642:
  iVar6 = 0;
LAB_004a46d6:
  *(int *)(param_1 + 0x68) = iVar6;
  if ((int)(&DAT_0078a410)[param_3] < 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    if (0 < DAT_0078a41c) {
      pcVar11 = (char *)(DAT_0078a418 + 1);
      do {
        if ((&DAT_0078a410)[param_3] == (int)*pcVar11) {
          iVar12 = iVar12 * 0x750 + DAT_0078a418;
          goto LAB_004a4726;
        }
        iVar12 = iVar12 + 1;
        pcVar11 = pcVar11 + 0x750;
      } while (iVar12 < DAT_0078a41c);
    }
    iVar12 = 0;
  }
LAB_004a4726:
  if (*(char *)(iVar12 + 0x434) == -1) {
    FUN_0057f2b0(1);
  }
  if ((iVar12 != 0) && (iVar12 != -0x260)) {
    FUN_00432a30(*(undefined4 *)(iVar12 + 0x10),(int)DAT_0078a3f5,&local_44);
    iVar12 = local_44;
    iVar6 = FUN_005461c0(local_44,0,0);
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x2c);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != iVar12)) {
        *(int *)(iVar6 + 0x24) = iVar12;
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
      }
    }
    iVar12 = *(int *)(param_1 + 0x28);
    if ((iVar12 != 0) && (*(int *)(iVar12 + 0x24) != local_40)) {
      *(int *)(iVar12 + 0x24) = local_40;
      *(uint *)(iVar12 + 0x1c) = *(uint *)(iVar12 + 0x1c) | 0x400000;
    }
  }
  local_34 = 0;
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x7c) = 1;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    local_30 = 0;
    local_38 = 0;
    local_3c = (undefined **)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x6c) + 0x2c);
    local_38 = puVar3[1];
    local_3c = (undefined **)*puVar3;
    local_30 = puVar3[3];
    local_34 = puVar3[2];
  }
  uVar5 = FUN_00503f60();
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  if (*(int *)(param_1 + 0x20) == 0) {
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = (undefined **)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2c);
    local_3c = (undefined **)*puVar3;
    local_38 = puVar3[1];
    local_34 = puVar3[2];
    local_30 = puVar3[3];
  }
  uVar5 = FUN_00503f60();
  *(undefined4 *)(param_1 + 0x98) = uVar5;
  if (*(int *)(param_1 + 0x60) == 0) {
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = (undefined **)0x0;
  }
  else {
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x60) + 0x2c);
    local_3c = (undefined **)*puVar3;
    local_38 = puVar3[1];
    local_34 = puVar3[2];
    local_30 = puVar3[3];
  }
  uVar5 = FUN_00503f60();
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  FUN_0049fec0(0,0);
  ExceptionList = local_c;
  return param_1;
}
