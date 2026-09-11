/* spd-match: far pct=10.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004323f0();
int __cdecl FUN_004ac0f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004b2480();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00550730();
int __cdecl FUN_00550780();
int __cdecl FUN_00550830();
int __cdecl FUN_00552610();
int __cdecl FUN_00552bb0();
int __cdecl FUN_005530e0();
int __cdecl FUN_00553300();
int __cdecl FUN_00553360();
int __cdecl FUN_005534a0();
extern int DAT_00734f64;
extern int DAT_00734f68;
extern unsigned char *DAT_0073578c;
extern int DAT_007363b3;
extern int DAT_00746104;
extern int DAT_00748850;
extern int DAT_00777b54;
extern int _DAT_0072cc80;
extern unsigned char *PTR_FUN_006bce70;
extern void LAB_0068879b(void);
void *ExceptionList;

undefined4 * FUN_00550d00(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0068879b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(param_1,param_2);
  local_8 = 0;
  *param_1 = &PTR_FUN_006bce70;
  FUN_00417600();
  param_1[0x1ea] = 0x9d5e09c9;
  DAT_00777b54 = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_004ac0f0(param_1 + 0x20);
  iVar3 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,param_1 + 0x20);
  _DAT_0072cc80 = 1;
  if (iVar3 != 0) {
    FUN_004b0e50(iVar3,&DAT_00748850,1);
  }
  FUN_004b2480();
  pvVar4 = _malloc(0x58);
  (*(unsigned char *)&(local_8)) = 1;
  if (pvVar4 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00550830(pvVar4,*(undefined4 *)(*(int *)(param_2 + 4) + 0xc),0);
  }
  iVar2 = param_1[0x1b];
  param_1[0x1e8] = iVar3;
  local_8 = (uint)((unsigned int)(local_8) >> 8) << 8;
  FUN_00550730();
  if (*(int *)(iVar3 + 8) != iVar2) {
    *(int *)(iVar3 + 8) = iVar2;
    *(undefined1 *)(iVar3 + 0xc) = 1;
  }
  FUN_005530e0();
  FUN_00553300();
  if (param_1[0x1b] == 0) {
    FUN_00552610(param_1,1);
  }
  else {
    FUN_00552bb0(param_1,1);
  }
  iVar3 = param_1[0x1e8];
  cVar1 = *(char *)(param_1 + 0x1c);
  FUN_00550780();
  if (*(char *)(iVar3 + 0xd) != cVar1) {
    *(char *)(iVar3 + 0xd) = cVar1;
    *(undefined1 *)(iVar3 + 0xe) = 1;
  }
  uVar5 = FUN_00553360();
  param_1[0x1e9] = uVar5;
  FUN_005534a0(uVar5);
  *(undefined1 *)(param_1 + 8) = 1;
  piVar6 = param_1 + 0x10;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xda9bdef8);
    }
  }
  param_1[0x10] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xda928c87);
    }
  }
  param_1[0x11] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xda9bdef7);
    }
  }
  param_1[0x12] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xda928c86);
    }
  }
  param_1[0x13] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xaa68bfce);
    }
  }
  param_1[0x14] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xaa68bfd4);
    }
  }
  param_1[0x15] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x925c868a);
    }
  }
  param_1[0x16] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xea9e6302);
    }
  }
  param_1[0x17] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xda96ef8f);
    }
  }
  param_1[0x18] = iVar3;
  if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xda9a39d5);
    }
  }
  param_1[0x19] = iVar3;
  DAT_007363b3 = 1;
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
  param_1[0x1a] = iVar3;
  DAT_00734f64 = param_1;
  DAT_00734f68 = 0;
  ExceptionList = local_10;
  return param_1;
}
