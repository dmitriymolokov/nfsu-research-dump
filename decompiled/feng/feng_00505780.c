/* spd-match: far pct=7.48 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_004e3f40();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_005043f0();
int __cdecl FUN_00505c70();
int __cdecl FUN_00505d70();
extern int DAT_006b6b2c;
extern int DAT_00735718;
extern unsigned char *DAT_0073578c;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_00760284;
extern int DAT_00760288;
extern int DAT_0076028c;
extern int DAT_00760290;
extern int DAT_00760294;
extern int DAT_00760298;
extern int _DAT_00746de0;
extern unsigned char *PTR_FUN_006c0278;
extern void LAB_00505bf3(void);
extern void LAB_00505c14(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_00505780(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0278;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  if (DAT_00745e40 == 2) {
    cVar4 = FUN_004e3f40(0);
    *(char *)(param_1 + 0x22) = '\x01' - (cVar4 != '\0');
  }
  else {
    *(undefined1 *)(param_1 + 0x22) = 0;
  }
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 == 0) || (*(int *)(iVar6 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar2 = *(int *)(DAT_0073578c + 8);
    iVar6 = iVar2 + 0xdc;
    if ((iVar6 == 0) || (iVar6 = FUN_004fd1e0(iVar6), iVar6 == 0)) {
      FUN_004eede0(iVar2,"MU_HorizontalBrowserBack.fng",0x10,0);
    }
  }
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (*(int **)(iVar6 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar6 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar6 + 0x18));
  }
  iVar6 = FUN_004f3f90(&DAT_00746104);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0x18) != 0)) && (*(int **)(iVar6 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar6 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar6 + 0x18));
  }
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x8b) = 0;
  if (((DAT_00760288 != 0) || (DAT_0076028c != 0)) ||
     (((DAT_00760290 != 0 || ((DAT_00760294 != 0 || (DAT_00760298 != 0)))) ||
      (param_2 = 0, (DAT_00760284 & 0x1000) != 0)))) {
    param_2 = 1;
  }
  pcVar7 = "VISUAL_PART_BODY";
  if (DAT_00745e40 == 1) {
    bVar5 = (byte)DAT_00760284;
    local_14 = CONCAT31(((unsigned int)(local_14) >> 8),bVar5 >> 3) & 0xffffff01;
    local_18 = CONCAT31(((unsigned int)(local_18) >> 8),(char)(DAT_00760284 >> 8)) & 0xffffff01;
    local_1c = CONCAT31(((unsigned int)(local_1c) >> 8),bVar5 >> 4) & 0xffffff01;
    local_20 = CONCAT31(((unsigned int)(local_20) >> 8),bVar5 >> 5) & 0xffffff01;
    local_24 = CONCAT31(((unsigned int)(local_24) >> 8),bVar5 >> 6) & 0xffffff01;
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x1371ad,"MU_GaragePartsCategoryVisual.fng",local_14);
    pcVar7 = "VISUAL_PART_RIMS";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x1c1f5a,"MU_GarageRimsBrandBrowser.fng",local_18);
    pcVar7 = "VISUAL_PART_ACCESSORIES";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0xa12c3d13,"MU_GarageAccessoriesCategory.fng",local_1c);
    pcVar7 = "VISUAL_PART_PAINT";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x377653b,"MU_GaragePaintMod.fng",local_20);
    pcVar7 = "VISUAL_PART_DECALS";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x56ab04cb,"MU_GarageDecals_Zone.fng",local_24);
    pcVar7 = "VISUAL_PART_VINYL";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
  }
  else {
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x1371ad,"MU_GaragePartsCategoryVisual.fng",0);
    if (*(char *)((int)param_1 + 0x8b) == '\0') {
      pcVar7 = "VISUAL_PART_RIMS";
      do {
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
      FUN_00505c70(0x1c1f5a,"MU_GarageRimsBrandBrowser.fng",0);
    }
    if (*(char *)((int)param_1 + 0x8a) == '\0') {
      pcVar7 = "VISUAL_PART_ACCESSORIES";
      do {
        pcVar1 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar1 != '\0');
      FUN_00505c70(0xa12c3d13,"MU_GarageAccessoriesCategory.fng",0);
    }
    pcVar7 = "VISUAL_PART_PAINT";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x377653b,"MU_GaragePaintMod.fng",0);
    pcVar7 = "VISUAL_PART_DECALS";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_00505c70(0x56ab04cb,"MU_GarageDecals_Zone.fng",0);
    if (*(char *)(param_1 + 0x22) != '\0') goto LAB_00505bf3;
    pcVar7 = "VISUAL_PART_VINYL";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
  }
  FUN_00505c70(0x3e871f1,"MU_GarageVinylLayerV2.fng",param_2);
LAB_00505bf3:
  puVar3 = (undefined4 *)param_1[0x11];
  do {
    if (puVar3 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_00505c14:
      FUN_004f8960();
      FUN_00505d70();
      _DAT_00746de0 = DAT_006b6b2c;
      FUN_005043f0("MU_GarageVinylLayerV2.fng");
      FUN_005043f0("MU_GaragePartsChooseVisual.fng");
      *(undefined1 *)(param_1 + 8) = 1;
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar3[2] == DAT_00735718) {
      param_1[0x10] = puVar3;
      goto LAB_00505c14;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
