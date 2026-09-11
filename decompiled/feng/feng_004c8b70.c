/* spd-match: far pct=6.95 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_004b2480();
int __cdecl FUN_004c8fd0();
int __cdecl FUN_004c90c0();
int __cdecl FUN_004e93b0();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8730();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_0051ba80();
int __cdecl FUN_0051bad0();
extern int DAT_006fae18;
extern unsigned char *DAT_0073578c;
extern int DAT_00735e54;
extern int DAT_00735e58;
extern int DAT_007449c8;
extern int DAT_00744ab0;
extern unsigned char *DAT_00744ab4;
extern int DAT_00746104;
extern int DAT_0076323d;
extern int DAT_0076777c;
extern int DAT_00777b4c;
extern int DAT_00777ccc;
extern unsigned char *PTR_FUN_006c5194;
extern void LAB_004c8cd5(void);
extern void LAB_0068916e(void);
void *ExceptionList;

undefined4 * FUN_004c8b70(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  int local_1c;
  char *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0068916e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c5194;
  FUN_004f8370(param_1 + 0x10,"master_thumb","car_thumb");
  puVar3 = param_1 + 0x20;
  *puVar3 = puVar3;
  param_1[0x21] = puVar3;
  iVar11 = DAT_00735e58;
  *(undefined1 *)(param_1 + 0x22) = 1;
  iVar6 = DAT_00777ccc;
  bVar13 = iVar11 == 0;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  cVar5 = FUN_0051ba80();
  if (cVar5 != '\0') {
    local_1c = 0xb;
    local_18 = &DAT_0076323d;
    do {
      if ((*local_18 != '\0') && ((&DAT_0076777c)[local_1c] == '\0')) {
        if (bVar13) {
          (&DAT_006fae18)[iVar11] = (char)local_1c;
          DAT_00735e58 = iVar11 + 1;
        }
        pcVar9 = "STATUS_MAGAZINES_ICON";
        do {
          pcVar1 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
        } while (*pcVar1 != '\0');
        FUN_004e93b0();
        FUN_004c8fd0(local_1c);
        iVar11 = DAT_00735e58;
      }
      local_18 = local_18 + 0x454;
      local_1c = local_1c + 1;
    } while ((int)local_18 < 0x76777d);
  }
  iVar12 = 0;
  iVar10 = *(int *)(iVar6 + 0x5914);
  if (0 < iVar10) {
    piVar8 = (int *)(iVar6 + 0x58d8);
    do {
      if (*piVar8 == 1) {
        iVar12 = piVar8[1];
      }
      piVar8 = piVar8 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (iVar12 != 0) {
      iVar6 = 0;
      do {
        if ((&DAT_00744ab0)[iVar6 * 2] == iVar12) {
          iVar6 = *(int *)(&DAT_00744ab4 + iVar6 * 8);
          goto LAB_004c8cd5;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x1b);
      iVar6 = 0;
LAB_004c8cd5:
      if (bVar13) {
        (&DAT_006fae18)[iVar11] = (char)iVar6;
        DAT_00735e58 = iVar11 + 1;
      }
      pcVar9 = "STATUS_MAGAZINES_ICON";
      iVar11 = -1;
      uVar7 = 0x53;
      do {
        iVar11 = iVar11 * 0x21 + uVar7;
        pbVar2 = (byte *)(pcVar9 + 1);
        uVar7 = (uint)*pbVar2;
        pcVar9 = pcVar9 + 1;
      } while (*pbVar2 != 0);
      iVar10 = FUN_004f8730(param_1 + 0x10,iVar12,0,1);
      if (((iVar11 != 0) && (iVar10 != 0)) && (*(int *)(iVar10 + 0x24) != iVar11)) {
        *(int *)(iVar10 + 0x24) = iVar11;
        *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x400000;
      }
      piVar8 = _malloc(0x10);
      piVar8[2] = iVar12;
      piVar8[3] = iVar6;
      puVar3 = (undefined4 *)param_1[0x21];
      *puVar3 = piVar8;
      param_1[0x21] = piVar8;
      piVar8[1] = (int)puVar3;
      *piVar8 = (int)(param_1 + 0x20);
    }
  }
  puVar3 = param_1 + 0x20;
  iVar11 = 0;
  for (puVar4 = (undefined4 *)param_1[0x20];
      (puVar4 != puVar3 && (iVar11 = iVar11 + 1, puVar4 != (undefined4 *)0x0));
      puVar4 = (undefined4 *)*puVar4) {
  }
  DAT_00735e54 = 1 < iVar11;
  FUN_0051bad0(&DAT_007449c8);
  if (DAT_00777b4c == 4) {
    iVar11 = FUN_004f3f90(&DAT_00746104);
    if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) != 0)) &&
       (*(int **)(iVar11 + 0x14) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar11 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar11 + 0x18));
    }
  }
  else {
    iVar11 = FUN_004f3f90(&DAT_00746104);
    if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) != 0)) &&
       (*(int **)(iVar11 + 0x14) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar11 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar11 + 0x18));
    }
  }
  FUN_004b2480();
  if ((undefined4 *)*puVar3 != puVar3) {
    param_1[0x1f] = param_1[0x20];
    FUN_004f8960();
  }
  FUN_004c90c0();
  *(undefined1 *)(param_1 + 8) = 1;
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if (((iVar11 == 0) || (*(int *)(iVar11 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar6 = *(int *)(DAT_0073578c + 8);
    iVar11 = iVar6 + 0xdc;
    if ((iVar11 == 0) || (iVar11 = FUN_004fd1e0(iVar11), iVar11 == 0)) {
      FUN_004eede0(iVar6,"MU_HorizontalBrowserBack.fng",0x10,0xff);
    }
  }
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if (((iVar11 == 0) || (*(int *)(iVar11 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar6 = *(int *)(DAT_0073578c + 8);
    iVar11 = iVar6 + 0xdc;
    if ((iVar11 == 0) || (iVar11 = FUN_004fd1e0(iVar11), iVar11 == 0)) {
      FUN_004eede0(iVar6,"GarageMain.fng",0x10,0);
    }
  }
  iVar11 = FUN_004f3f90(&DAT_00746104);
  if (((iVar11 != 0) && (*(int *)(iVar11 + 0x18) != 0)) && (*(int **)(iVar11 + 0x14) != (int *)0x0))
  {
    (**(code **)(**(int **)(iVar11 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar11 + 0x18));
  }
  iVar6 = FUN_004f3f90(&DAT_00746104);
  iVar11 = DAT_0073578c;
  if (((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) ||
     (((DAT_0073578c != 0 && (iVar10 = *(int *)(DAT_0073578c + 8), iVar10 != 0)) &&
      ((iVar6 = FUN_004fd1e0(iVar10 + 0xdc), iVar6 != 0 ||
       (iVar6 = FUN_004fd1e0(iVar10 + 0xec), iVar6 != 0)))))) {
    *(undefined4 *)(iVar6 + 0x1c) = 0xff;
  }
  if (((iVar11 != 0) && (iVar11 = FUN_004f3f90(&DAT_00746104), iVar11 != 0)) &&
     (iVar11 = *(int *)(iVar11 + 0x18), iVar11 != 0)) {
    iVar6 = *(int *)(iVar11 + 0x88);
    iVar10 = 0;
    if (iVar6 != 0) {
      piVar8 = *(int **)(iVar11 + 0x84);
      do {
        if (*(int *)(*piVar8 + 0x10) == -0x15619cfe) {
          iVar10 = *piVar8;
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (iVar10 != 0) {
        *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x4000000;
      }
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}
