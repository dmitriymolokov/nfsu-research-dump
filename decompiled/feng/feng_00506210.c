/* spd-match: far pct=5.53 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004acce0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8730();
int __cdecl FUN_004f8960();
int __cdecl FUN_005056c0();
int __cdecl FUN_00506ca0();
int __cdecl FUN_00506db0();
int __cdecl FUN_0059e5c0();
int __cdecl FUN_005a1550();
extern int DAT_00734588;
extern int DAT_00735714;
extern int DAT_00735ec1;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0075eef8;
extern int DAT_00760284;
extern int DAT_007677ac;
extern unsigned char *PTR_FUN_006c0298;
extern void LAB_005063d8(void);
extern void LAB_0050644f(void);
extern void LAB_00506468(void);
extern void LAB_00506508(void);
extern void LAB_00506521(void);
extern void LAB_005065c1(void);
extern void LAB_005065d2(void);
extern void LAB_00506633(void);
extern void LAB_005068ee(void);
extern void LAB_00506912(void);
extern void LAB_005069d4(void);
extern void LAB_005069e4(void);
extern void LAB_00506a55(void);
extern void LAB_00506a63(void);
extern void LAB_00506acd(void);
extern void LAB_00506adb(void);
extern void LAB_00506b45(void);
extern void LAB_00506b53(void);
extern void LAB_00506bb6(void);
extern void LAB_00506bc4(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_00506210(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  bool bVar22;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0298;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  puVar3 = param_1 + 0x13;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(puVar3,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  iVar9 = FUN_004f3f90(&DAT_00746104);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x18) != 0)) && (*(int **)(iVar9 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar9 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar9 + 0x18));
  }
  iVar9 = FUN_004acce0();
  pbVar10 = (byte *)(iVar9 * 0xc90 + DAT_00734588);
  iVar9 = -1;
  bVar2 = *pbVar10;
  while (bVar2 != 0) {
    iVar9 = iVar9 * 0x21 + (uint)bVar2;
    pbVar1 = pbVar10 + 1;
    pbVar10 = pbVar10 + 1;
    bVar2 = *pbVar1;
  }
  param_1[0x22] = iVar9;
  bVar21 = DAT_007677ac != 0;
  if (DAT_00745e40 != 1) {
    bVar22 = DAT_00745e40 == 2;
    if (((bVar21) || (bVar22)) || (cVar8 = FUN_005056c0(1), cVar8 != '\0')) {
      iVar9 = FUN_004f8730(puVar3,0,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x739c4a1b)) {
        *(undefined4 *)(iVar9 + 0x24) = 0x739c4a1b;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      puVar12 = _malloc(0x18);
      puVar12[2] = 0;
      puVar12[3] = 0x3ea45dd2;
      *(undefined1 *)(puVar12 + 5) = 0;
      puVar12[4] = "MU_GaragePartsBrowser.fng";
      *(undefined1 *)((int)puVar12 + 0x15) = 0;
      puVar13 = (undefined4 *)param_1[0x12];
      *puVar13 = puVar12;
      param_1[0x12] = puVar12;
      puVar12[1] = puVar13;
      *puVar12 = param_1 + 0x11;
      if ((!bVar21) && (!bVar22)) goto LAB_005069d4;
LAB_005069e4:
      iVar9 = FUN_004f8730(puVar3,1,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x15c767c)) {
        *(undefined4 *)(iVar9 + 0x24) = 0x15c767c;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      piVar14 = _malloc(0x18);
      piVar14[2] = 1;
      piVar14[3] = 0xf456f53;
      *(undefined1 *)(piVar14 + 5) = 0;
      piVar14[4] = (int)"MU_GaragePartsBrowser.fng";
      *(undefined1 *)((int)piVar14 + 0x15) = 0;
      puVar13 = (undefined4 *)param_1[0x12];
      *puVar13 = piVar14;
      param_1[0x12] = piVar14;
      piVar14[1] = (int)puVar13;
      *piVar14 = (int)(param_1 + 0x11);
      if ((!bVar21) && (!bVar22)) goto LAB_00506a55;
LAB_00506a63:
      iVar9 = FUN_004f8730(puVar3,2,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x4e6c2af9)) {
        *(undefined4 *)(iVar9 + 0x24) = 0x4e6c2af9;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      piVar14 = _malloc(0x18);
      piVar14[2] = 2;
      piVar14[3] = 0x661de4f0;
      *(undefined1 *)(piVar14 + 5) = 0;
      piVar14[4] = (int)"MU_GaragePartsBrowser.fng";
      *(undefined1 *)((int)piVar14 + 0x15) = 0;
      puVar13 = (undefined4 *)param_1[0x12];
      *puVar13 = piVar14;
      param_1[0x12] = piVar14;
      piVar14[1] = (int)puVar13;
      *piVar14 = (int)(param_1 + 0x11);
      if ((!bVar21) && (!bVar22)) goto LAB_00506acd;
LAB_00506adb:
      iVar9 = FUN_004f8730(puVar3,3,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != -0x44fcb15a)) {
        *(undefined4 *)(iVar9 + 0x24) = 0xbb034ea6;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      piVar14 = _malloc(0x18);
      piVar14[2] = 3;
      piVar14[3] = -0x36c48c03;
      *(undefined1 *)(piVar14 + 5) = 0;
      piVar14[4] = (int)"MU_GaragePartsBrowser.fng";
      *(undefined1 *)((int)piVar14 + 0x15) = 0;
      puVar13 = (undefined4 *)param_1[0x12];
      *puVar13 = piVar14;
      param_1[0x12] = piVar14;
      piVar14[1] = (int)puVar13;
      *piVar14 = (int)(param_1 + 0x11);
      if ((!bVar21) && (!bVar22)) goto LAB_00506b45;
LAB_00506b53:
      iVar9 = FUN_004f8730(puVar3,4,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x28f7092)) {
        *(undefined4 *)(iVar9 + 0x24) = 0x28f7092;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      piVar14 = _malloc(0x18);
      piVar14[2] = 4;
      piVar14[3] = 0x16bd49;
      *(undefined1 *)(piVar14 + 5) = 0;
      piVar14[4] = (int)"MU_GaragePartsBrowser.fng";
      *(undefined1 *)((int)piVar14 + 0x15) = 0;
      puVar13 = (undefined4 *)param_1[0x12];
      *puVar13 = piVar14;
      param_1[0x12] = piVar14;
      piVar14[1] = (int)puVar13;
      *piVar14 = (int)(param_1 + 0x11);
      if (!bVar21) goto LAB_00506bb6;
LAB_00506bc4:
      iVar9 = FUN_004f8730(puVar3,8,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x79165861)) {
        *(undefined4 *)(iVar9 + 0x24) = 0x79165861;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      piVar14 = _malloc(0x18);
      *(undefined1 *)(piVar14 + 5) = 0;
      *(undefined1 *)((int)piVar14 + 0x15) = 0;
      piVar14[2] = 8;
      piVar14[3] = -0x6f37eda8;
      piVar14[4] = (int)"MU_GaragePartsBrowser.fng";
      puVar13 = (undefined4 *)param_1[0x12];
      *puVar13 = piVar14;
      param_1[0x12] = piVar14;
      piVar14[1] = (int)puVar13;
      *piVar14 = (int)(param_1 + 0x11);
    }
    else {
LAB_005069d4:
      cVar8 = FUN_005056c0(2);
      if (cVar8 != '\0') goto LAB_005069e4;
LAB_00506a55:
      cVar8 = FUN_005056c0(10);
      if (cVar8 != '\0') goto LAB_00506a63;
LAB_00506acd:
      cVar8 = FUN_005056c0(0xb);
      if (cVar8 != '\0') goto LAB_00506adb;
LAB_00506b45:
      cVar8 = FUN_005056c0(8);
      if (cVar8 != '\0') goto LAB_00506b53;
LAB_00506bb6:
      cVar8 = FUN_005056c0(7);
      if (cVar8 != '\0') goto LAB_00506bc4;
    }
    cVar8 = FUN_005056c0(6);
    if (cVar8 != '\0') {
      iVar9 = FUN_004f8730(puVar3,0xc,0,1);
      if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != -0x6ba1643b)) {
        *(undefined4 *)(iVar9 + 0x24) = 0x945e9bc5;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      piVar14 = _malloc(0x18);
      *(undefined1 *)(piVar14 + 5) = 0;
      *(undefined1 *)((int)piVar14 + 0x15) = 0;
      piVar14[2] = 0xc;
      piVar14[3] = 0xb4e4315;
      piVar14[4] = (int)"MU_GaragePartsBrowser.fng";
      puVar3 = (undefined4 *)param_1[0x12];
      *puVar3 = piVar14;
      param_1[0x12] = piVar14;
      piVar14[1] = (int)puVar3;
      *piVar14 = (int)(param_1 + 0x11);
    }
    goto LAB_005068ee;
  }
  uVar15 = DAT_00760284 >> 0xe;
  uVar7 = DAT_00760284 >> 0x10;
  uVar16 = DAT_00760284 >> 10;
  uVar17 = DAT_00760284 >> 0xd;
  uVar18 = DAT_00760284 >> 0x11;
  uVar11 = DAT_00760284 >> 0x14;
  uVar19 = DAT_00760284 >> 0x12;
  if (((((DAT_00735ec1 != '\0') || (bVar21)) || (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
      ((cVar8 = FUN_005a1550(&DAT_0075eef8,9), cVar8 != '\0' ||
       (cVar8 = FUN_0059e5c0(), cVar8 != '\0')))) ||
     ((cVar8 = FUN_005a1550(&DAT_0075eef8,9), cVar8 != '\0' ||
      ((cVar8 = FUN_0059e5c0(), cVar8 != '\0' ||
       (cVar8 = FUN_005a1550(&DAT_0075eef8,9), cVar8 != '\0')))))) {
    bVar22 = true;
    if ((DAT_00735ec1 == '\0') && (!bVar21)) goto LAB_005063d8;
LAB_0050644f:
    bVar4 = true;
    if ((DAT_00735ec1 == '\0') && (!bVar21)) goto LAB_00506468;
LAB_00506508:
    bVar6 = true;
    if ((DAT_00735ec1 == '\0') && (!bVar21)) goto LAB_00506521;
LAB_005065c1:
    bVar5 = true;
    if ((DAT_00735ec1 == '\0') && (!bVar21)) goto LAB_005065d2;
LAB_00506633:
    bVar21 = true;
  }
  else {
    bVar22 = false;
LAB_005063d8:
    cVar8 = FUN_0059e5c0();
    if ((((cVar8 != '\0') || (cVar8 = FUN_005a1550(&DAT_0075eef8,0xb), cVar8 != '\0')) ||
        (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
       (((cVar8 = FUN_005a1550(&DAT_0075eef8,0xb), cVar8 != '\0' ||
         (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
        (cVar8 = FUN_005a1550(&DAT_0075eef8,0xb), cVar8 != '\0')))) goto LAB_0050644f;
    bVar4 = false;
LAB_00506468:
    cVar8 = FUN_0059e5c0();
    if ((((cVar8 != '\0') || (cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0')) ||
        (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
       (((cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0' ||
         (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
        ((cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0' ||
         ((cVar8 = FUN_0059e5c0(), cVar8 != '\0' ||
          (cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0')))))))) goto LAB_00506508;
    bVar6 = false;
LAB_00506521:
    cVar8 = FUN_0059e5c0();
    if ((((((cVar8 != '\0') || (cVar8 = FUN_005a1550(&DAT_0075eef8,5), cVar8 != '\0')) ||
          (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
         ((cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0' ||
          (cVar8 = FUN_0059e5c0(), cVar8 != '\0')))) ||
        (cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0')) ||
       ((cVar8 = FUN_0059e5c0(), cVar8 != '\0' ||
        (cVar8 = FUN_005a1550(&DAT_0075eef8,8), cVar8 != '\0')))) goto LAB_005065c1;
    bVar5 = false;
LAB_005065d2:
    cVar8 = FUN_0059e5c0();
    if ((((cVar8 != '\0') || (cVar8 = FUN_005a1550(&DAT_0075eef8,0xd), cVar8 != '\0')) ||
        (cVar8 = FUN_0059e5c0(), cVar8 != '\0')) ||
       (cVar8 = FUN_005a1550(&DAT_0075eef8,0xd), cVar8 != '\0')) goto LAB_00506633;
    cVar8 = FUN_0059e5c0();
    bVar21 = false;
    if (cVar8 != '\0') goto LAB_00506633;
  }
  iVar9 = FUN_004f8730(puVar3,0,0,1);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x739c4a1b)) {
    *(undefined4 *)(iVar9 + 0x24) = 0x739c4a1b;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
  }
  puVar12 = _malloc(0x18);
  *(byte *)(puVar12 + 5) = (byte)uVar15 & 1;
  puVar12[2] = 0;
  puVar12[3] = 0x3ea45dd2;
  *(bool *)((int)puVar12 + 0x15) = !bVar22;
  puVar20 = param_1 + 0x11;
  puVar12[4] = "MU_GaragePartsBrowser.fng";
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = puVar12;
  param_1[0x12] = puVar12;
  puVar12[1] = puVar13;
  *puVar12 = puVar20;
  iVar9 = FUN_004f8730(puVar3,1,0,1);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x15c767c)) {
    *(undefined4 *)(iVar9 + 0x24) = 0x15c767c;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
  }
  puVar12 = _malloc(0x18);
  *(byte *)(puVar12 + 5) = (byte)uVar7 & 1;
  puVar12[2] = 1;
  puVar12[3] = 0xf456f53;
  puVar12[4] = "MU_GaragePartsBrowser.fng";
  *(bool *)((int)puVar12 + 0x15) = !bVar4;
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = puVar12;
  param_1[0x12] = puVar12;
  puVar12[1] = puVar13;
  *puVar12 = puVar20;
  iVar9 = FUN_004f8730(puVar3,2,0,1);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x4e6c2af9)) {
    *(undefined4 *)(iVar9 + 0x24) = 0x4e6c2af9;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
  }
  puVar12 = _malloc(0x18);
  *(byte *)(puVar12 + 5) = (byte)uVar16 & 1;
  puVar12[2] = 2;
  puVar12[3] = 0x661de4f0;
  puVar12[4] = "MU_GaragePartsBrowser.fng";
  *(bool *)((int)puVar12 + 0x15) = !bVar5;
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = puVar12;
  param_1[0x12] = puVar12;
  puVar12[1] = puVar13;
  *puVar12 = puVar20;
  iVar9 = FUN_004f8730(puVar3,3,0,1);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != -0x44fcb15a)) {
    *(undefined4 *)(iVar9 + 0x24) = 0xbb034ea6;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
  }
  puVar12 = _malloc(0x18);
  *(byte *)(puVar12 + 5) = (byte)uVar17 & 1;
  puVar12[2] = 3;
  puVar12[3] = 0xc93b73fd;
  puVar12[4] = "MU_GaragePartsBrowser.fng";
  *(bool *)((int)puVar12 + 0x15) = !bVar6;
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = puVar12;
  param_1[0x12] = puVar12;
  puVar12[1] = puVar13;
  *puVar12 = puVar20;
  iVar9 = FUN_004f8730(puVar3,4,0,1);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x28f7092)) {
    *(undefined4 *)(iVar9 + 0x24) = 0x28f7092;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
  }
  puVar12 = _malloc(0x18);
  puVar12[2] = 4;
  puVar12[3] = 0x16bd49;
  *(byte *)(puVar12 + 5) = (byte)uVar18 & 1;
  puVar12[4] = "MU_GaragePartsBrowser.fng";
  *(undefined1 *)((int)puVar12 + 0x15) = 0;
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = puVar12;
  param_1[0x12] = puVar12;
  puVar12[1] = puVar13;
  *puVar12 = puVar20;
  iVar9 = FUN_004f8730(puVar3,8,0,1);
  if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != 0x79165861)) {
    *(undefined4 *)(iVar9 + 0x24) = 0x79165861;
    *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
  }
  puVar12 = _malloc(0x18);
  *(byte *)(puVar12 + 5) = (byte)uVar19 & 1;
  puVar12[2] = 8;
  puVar12[3] = 0x90c81258;
  puVar12[4] = "MU_GaragePartsBrowser.fng";
  *(bool *)((int)puVar12 + 0x15) = !bVar21;
  puVar13 = (undefined4 *)param_1[0x12];
  *puVar13 = puVar12;
  param_1[0x12] = puVar12;
  puVar12[1] = puVar13;
  *puVar12 = puVar20;
  cVar8 = FUN_005056c0(6);
  if (cVar8 != '\0') {
    iVar9 = FUN_004f8730(puVar3,0xc,0,1);
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0x24) != -0x6ba1643b)) {
      *(undefined4 *)(iVar9 + 0x24) = 0x945e9bc5;
      *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
    }
    puVar13 = _malloc(0x18);
    puVar13[2] = 0xc;
    puVar13[3] = 0xb4e4315;
    *(byte *)(puVar13 + 5) = (byte)uVar11 & 1;
    puVar13[4] = "MU_GaragePartsBrowser.fng";
    *(undefined1 *)((int)puVar13 + 0x15) = 0;
    puVar3 = (undefined4 *)param_1[0x12];
    *puVar3 = puVar13;
    param_1[0x12] = puVar13;
    puVar13[1] = puVar3;
    *puVar13 = puVar20;
  }
LAB_005068ee:
  puVar3 = (undefined4 *)param_1[0x11];
  do {
    if (puVar3 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_00506912:
      FUN_00506db0();
      FUN_004f8960();
      FUN_00506ca0();
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar3[2] == DAT_00735714) {
      param_1[0x10] = puVar3;
      goto LAB_00506912;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
