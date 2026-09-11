/* spd-match: far pct=6.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

int __cdecl FUN_004f3f90();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
extern int DAT_006b9172;
extern int DAT_00701040;
extern int DAT_00701048;
extern int DAT_0070105c;
extern int DAT_0070107c;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int _DAT_00777cc0;
extern unsigned char *PTR_FUN_006cbcfc;
extern unsigned char *PTR_FUN_006cbe88;
extern void LAB_006874ca(void);
extern char stack0xffffffc4;
extern char stack0xffffffc8;
extern char stack0xffffffcc;
void *ExceptionList;

int FUN_004155b0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006874ca;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  piVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_006cbcfc;
  puVar7 = param_1 + 0x1c;
  param_1[0x11] = &DAT_006b9172;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *piVar1 = (int)&PTR_FUN_006cbe88;
  *puVar7 = puVar7;
  param_1[0x1d] = puVar7;
  param_1[0x1e] = 0;
  piVar2 = param_1 + 0x1f;
  puVar7 = param_1 + 0x2b;
  param_1[0x20] = &DAT_006b9172;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *piVar2 = (int)&PTR_FUN_006cbe88;
  *puVar7 = puVar7;
  param_1[0x2c] = puVar7;
  param_1[0x2d] = 0;
  piVar6 = param_1 + 0x2e;
  puVar7 = param_1 + 0x3a;
  param_1[0x2f] = &DAT_006b9172;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *piVar6 = (int)&PTR_FUN_006cbe88;
  *puVar7 = puVar7;
  param_1[0x3b] = puVar7;
  param_1[0x3c] = 0;
  param_1[0x3e] = &DAT_006b9172;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x3d] = &PTR_FUN_006cbe88;
  puVar7 = param_1 + 0x49;
  *puVar7 = puVar7;
  param_1[0x4a] = puVar7;
  param_1[0x4b] = 0;
  local_18 = (float)DAT_00701040;
  _DAT_00777cc0 = 4;
  local_30 = (char *)param_1[3];
  local_4 = 4;
  local_2c = "CarenvmapSliderBase_1";
  local_24 = "CarenvmapSliderBase";
  local_28 = "CarenvmapSlider_1_";
  local_20 = 4.2039e-45;
  local_10 = 0x3f800000;
  local_14 = 0;
  local_1c = 0.0;
  (**(code **)(*piVar1 + 0x14))(&local_30);
  local_1c = (float)DAT_0070105c;
  local_30 = "reflect_freq_SliderBase_1";
  local_28 = "reflect_freq_SliderBase";
  local_2c = "reflect_freq_Slider_1_";
  local_24 = (char *)0x2;
  local_14 = 0x3f800000;
  local_18 = 0.0;
  local_20 = 0.0;
  (**(code **)(*piVar2 + 0x14))(&stack0xffffffcc);
  local_20 = (float)DAT_0070107c;
  local_2c = "WorldGeometrySliderBase";
  local_30 = "WorldGeometrySlider_1_";
  local_28 = (char *)0x3;
  local_18 = 1.0;
  local_1c = 0.0;
  local_24 = (char *)0x0;
  (**(code **)(*piVar6 + 0x14))(&stack0xffffffc8);
  local_24 = (char *)(unsigned int)(float)DAT_00701048;
  local_30 = "car_shadow_SliderBase";
  local_2c = (void *)0x3;
  local_1c = 1.0;
  local_20 = 0.0;
  local_28 = (char *)0x0;
  (**(code **)(*(int *)(puStack_8 + 0xf4) + 0x14))(&stack0xffffffc4);
  (**(code **)(*piVar1 + 0xc))(1);
  (**(code **)(*piVar2 + 0xc))(1);
  (**(code **)(*piVar6 + 0xc))(1);
  (**(code **)(*(int *)((int)local_18 + 0xf4) + 0xc))(1);
  (**(code **)(*piVar1 + 0x10))();
  (**(code **)(*piVar2 + 0x10))();
  (**(code **)(*piVar6 + 0x10))();
  (**(code **)(*(int *)((int)local_1c + 0xf4) + 0x10))();
  fVar4 = local_1c;
  puVar7 = (undefined4 *)((int)local_1c + 0x130);
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
    if ((DAT_0073578c == 0) || (iVar3 = *(int *)(DAT_0073578c + 8), iVar3 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004fd1e0(iVar3 + 0xdc);
      if (iVar5 == 0) {
        iVar5 = FUN_004fd1e0(iVar3 + 0xec);
      }
    }
  }
  *(int *)((int)fVar4 + 0x2b0) = iVar5;
  *(undefined1 *)((int)fVar4 + 0x2b4) = 0;
  ExceptionList = local_2c;
  return (int)fVar4;
}
