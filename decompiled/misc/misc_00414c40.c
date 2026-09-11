/* spd-match: far pct=7.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004151c0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
extern int DAT_006b9172;
extern int DAT_00700e70;
extern unsigned char *DAT_0073578c;
extern unsigned char *DAT_00736334;
extern int DAT_00746104;
extern int _DAT_00777cc0;
extern unsigned char *PTR_FUN_006cbe64;
extern unsigned char *PTR_FUN_006cbe88;
extern void LAB_00414d54(void);
extern void LAB_00414d98(void);
extern void LAB_00414ddc(void);
extern void LAB_00414e3c(void);
extern void LAB_00687fc3(void);
void *ExceptionList;

undefined4 * FUN_00414c40(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687fc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  piVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_006cbe64;
  puVar4 = param_1 + 0x1c;
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
  *puVar4 = puVar4;
  param_1[0x1d] = puVar4;
  param_1[0x1e] = 0;
  _DAT_00777cc0 = 4;
  local_30 = param_1[3];
  param_1[0x20] = 0;
  local_14 = (void *)(unsigned int)(float)(unsigned int)(DAT_00736334);
  local_4 = 1;
  local_2c = "CardetailSliderBase_1";
  local_24 = "CardetailText_1";
  local_28 = "CardetailSlider_1_";
  local_20 = 3;
  local_10 = 0x3f800000;
  local_1c = 0x3f800000;
  local_18 = 0x40400000;
  (**(code **)(*piVar1 + 0x14))(&local_30);
  (**(code **)(*piVar1 + 0xc))(1);
  puVar4 = param_1 + 0x21;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_1[3] == 0) {
LAB_00414d54:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x806de7a6);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_00414d54;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_00414d54;
  }
  param_1[0x21] = iVar3;
  if (param_1[3] == 0) {
LAB_00414d98:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xb0eca02e);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_00414d98;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_00414d98;
  }
  param_1[0x22] = iVar3;
  if (param_1[3] == 0) {
LAB_00414ddc:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x7e7c23b9);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_00414ddc;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_00414ddc;
  }
  param_1[0x23] = iVar3;
  if (param_1[3] != 0) {
    iVar3 = FUN_004f65d0();
    if (iVar3 != 0) {
      iVar3 = FUN_004ffb70();
      if (iVar3 != 0) goto LAB_00414e3c;
    }
  }
  if (DAT_0073578c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004ef050(0x80720ff);
  }
LAB_00414e3c:
  param_1[0x24] = iVar3;
  param_1[0x1f] = DAT_00700e70;
  iVar3 = DAT_00736334 + 1;
  param_1[0x17] = (float)iVar3;
  if ((float)param_1[0x15] < (float)iVar3) {
    param_1[0x17] = param_1[0x15];
  }
  if ((float)param_1[0x17] < (float)param_1[0x16]) {
    param_1[0x17] = param_1[0x16];
  }
  (**(code **)(*piVar1 + 0x10))();
  FUN_004151c0();
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
    if ((DAT_0073578c == 0) || (iVar2 = *(int *)(DAT_0073578c + 8), iVar2 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004fd1e0(iVar2 + 0xdc);
      if (iVar3 == 0) {
        iVar3 = FUN_004fd1e0(iVar2 + 0xec);
      }
    }
  }
  param_1[0x2d] = iVar3;
  ExceptionList = local_14;
  return param_1;
}
