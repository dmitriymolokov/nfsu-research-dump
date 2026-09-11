/* spd-match: far pct=9.13 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00487920();
int __cdecl FUN_00495f00();
int __cdecl FUN_004ab120();
int __cdecl FUN_004b2330();
int __cdecl FUN_004eede0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004f8370();
int __cdecl FUN_004f8960();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
int __cdecl FUN_005048e0();
int __cdecl FUN_005050d0();
int __cdecl FUN_00565b60();
extern int DAT_006fb02c;
extern int DAT_0073571c;
extern unsigned char *DAT_0073578c;
extern int DAT_00735e38;
extern int DAT_00735e84;
extern int DAT_0073ad3c;
extern int DAT_00744ff0;
extern int DAT_00745e40;
extern int DAT_00746104;
extern int DAT_0074810c;
extern int DAT_007588c4;
extern int DAT_00760284;
extern int DAT_00760288;
extern int DAT_0076028c;
extern int DAT_00760290;
extern int DAT_00760294;
extern int DAT_00760298;
extern unsigned char *PTR_FUN_006c0264;
extern void LAB_00504ebb(void);
extern void LAB_00504ee3(void);
extern void LAB_0068906e(void);
void *ExceptionList;

undefined4 * FUN_00504be0(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068906e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  puVar3 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c0264;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  (*(unsigned char *)&(local_8)) = 1;
  (local_8 = ((unsigned int)(local_8) & 0xff));
  FUN_004f8370(param_1 + 0x13,"master_thumb","thumb");
  local_8 = CONCAT31(((unsigned int)(local_8) >> 8),2);
  *(undefined1 *)(param_1 + 0x22) = 0;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) == 0)) {
    FUN_004f62f0();
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 == 0) || (*(int *)(iVar5 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar2 = *(int *)(DAT_0073578c + 8);
    iVar5 = iVar2 + 0xdc;
    if ((iVar5 == 0) || (iVar5 = FUN_004fd1e0(iVar5), iVar5 == 0)) {
      FUN_004eede0(iVar2,"MU_HorizontalBrowserBack.fng",0x10,0);
    }
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int **)(iVar5 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar5 + 0x18));
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (*(int **)(iVar5 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar5 + 0x14) + 8))(0xe8e61aab,0,0,*(int *)(iVar5 + 0x18));
  }
  if (((DAT_00760288 == 0) && (DAT_0076028c == 0)) &&
     (((DAT_00760290 == 0 && ((DAT_00760294 == 0 && (DAT_00760298 == 0)))) &&
      ((DAT_00760284 & 0x1000) == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((DAT_00745e40 == 1) && (((byte)DAT_00760284 >> 1 & 1) != 0)) || (param_2 = 0, bVar4)) {
    param_2 = 1;
  }
  if ((DAT_00745e40 != 1) || (local_14 = 1, (DAT_00760284 & 1) == 0)) {
    local_14 = 0;
  }
  pcVar7 = "BROWSER_VISUAL";
  do {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  FUN_005050d0(0x80f95bd3,"MU_GaragePartsChooseVisual.fng",param_2);
  pcVar7 = "BROWSER_PERFORMANCE";
  do {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  FUN_005050d0(0x2d0e7f1,"MU_GaragePerformanceCategory.fng",local_14);
  if (DAT_00745e40 != 1) {
    pcVar7 = "BROWSER_PRESETS";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_005050d0(0xd730ca44,"MU_GaragePresets.fng",0);
    pcVar7 = "BROWSER_PRESETS";
    do {
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    FUN_005050d0(0xac20c713,"MU_GaragePresets.fng",0);
    if (DAT_00745e40 != 1) goto LAB_00504ebb;
  }
  pcVar7 = "BROWSER_TRADE_IN";
  do {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  FUN_005050d0(0x55da25c5,"MU_UG_TradeCareerCar.fng",0);
LAB_00504ebb:
  puVar3 = (undefined4 *)param_1[0x11];
  do {
    if (puVar3 == param_1 + 0x11) {
      param_1[0x10] = (undefined4 *)param_1[0x11];
LAB_00504ee3:
      FUN_004f8960();
      FUN_00495f00(*(undefined4 *)(param_1[0x10] + 0xc));
      FUN_005048e0(&DAT_00744ff0);
      *(undefined1 *)(param_1 + 8) = 1;
      iVar5 = FUN_004b2330();
      if (iVar5 != 0) {
        DAT_0074810c = DAT_0073ad3c;
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        FUN_00487920();
      }
      if (DAT_00735e38 == 0) {
        DAT_00735e38 = FUN_00565b60(0xf660,0,0,0);
        FUN_004ab120(&DAT_007588c4,0xf660);
      }
      if (DAT_00745e40 == 1) {
        if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
           (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
          if (DAT_0073578c == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(0x2c7d911e);
          }
        }
        FUN_004f6910(iVar5);
        if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
           (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            uVar6 = FUN_004ef050(0xa936c3a2);
            FUN_004f6910(uVar6);
            ExceptionList = local_10;
            return param_1;
          }
          iVar5 = 0;
        }
        FUN_004f6910(iVar5);
      }
      else {
        if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
           (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
          if (DAT_0073578c == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(0x2c7d911e);
          }
        }
        FUN_004f6970(iVar5);
        if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
           (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
          if (DAT_0073578c == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_004ef050(0xa936c3a2);
          }
        }
        FUN_004f6970(iVar5);
      }
      ExceptionList = local_10;
      return param_1;
    }
    if (puVar3[2] == DAT_0073571c) {
      param_1[0x10] = puVar3;
      goto LAB_00504ee3;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}
