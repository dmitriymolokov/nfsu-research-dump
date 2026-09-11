/* spd-match: far pct=7.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f0c0();
int __cdecl FUN_0041f160();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_0055b500();
extern int DAT_00734bc8;
extern int DAT_00734dd8;
extern unsigned char *DAT_00734dd9;
extern int DAT_00734e1f;
extern int DAT_00734e20;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern unsigned char *PTR_FUN_006bca5c;
extern unsigned char *PTR_FUN_006c1800;
extern unsigned char *PTR_LAB_006c2c5c;
extern void LAB_0055a90f(void);
extern void LAB_0055a94b(void);
extern void LAB_0055a967(void);
extern void LAB_0055aa11(void);
extern void LAB_0055aa37(void);
extern void LAB_006876e1(void);
void *ExceptionList;

undefined4 * FUN_0055a610(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined **local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006876e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006bca5c;
  FUN_0041f0c0();
  (*(unsigned char *)&(local_4)) = 1;
  FUN_0041f0c0();
  iVar4 = param_1[3];
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
  uVar3 = FUN_004fd230();
  if (((((iVar4 == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) &&
      ((DAT_0073578c == 0 || (iVar4 = FUN_004ef050(uVar3), iVar4 == 0)))) ||
     (*(int *)(iVar4 + 0x18) != 2)) {
    iVar4 = 0;
  }
  pcVar2 = (char *)param_1[3];
  param_1[0x118] = iVar4;
  *(undefined1 *)((int)param_1 + 0x45d) = 0;
  DAT_00734bc8 = *pcVar2;
  DAT_00734e1f = 0;
  DAT_00734e20 = 0;
  if (DAT_00734bc8 != '\0') {
    pcVar5 = &DAT_00734bc8;
    do {
      cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar5];
      pcVar5 = pcVar5 + 1;
      *pcVar5 = cVar1;
    } while (cVar1 != '\0');
  }
  FUN_0055b500();
  iVar4 = 0;
  local_20 = (undefined **)0x0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  cVar1 = DAT_00734dd8;
  while (cVar1 != '\0') {
    pcVar2 = &DAT_00734dd9 + iVar4;
    iVar4 = iVar4 + 1;
    cVar1 = *pcVar2;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      if (iVar6 == 0xf) break;
      *(undefined1 *)((int)&local_20 + iVar6) = 0x2a;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(undefined1 *)((int)&local_20 + iVar6) = 0;
  FUN_0055b500();
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (((param_1[3] == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x70355aa6);
    }
  }
  param_1[0x10] = iVar4;
  if (((param_1[3] == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x70355aa7);
    }
  }
  param_1[0x11] = iVar4;
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) &&
     (iVar4 = 0, DAT_0073578c != 0)) {
    iVar6 = *(int *)(DAT_0073578c + 8);
    if (iVar6 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004fd1e0(iVar6 + 0xdc);
      if (iVar4 == 0) {
        iVar4 = FUN_004fd1e0(iVar6 + 0xec);
      }
    }
  }
  param_1[0x12] = iVar4;
  param_1[0x8f] = 1;
  param_1[0x91] = 0xe;
  FUN_0041f160(0x47af1aca,0,0,0x10);
  param_1[0x90] = 0xceffd44;
  param_1[0x111] = 2;
  param_1[0x113] = 0xf;
  FUN_0041f160(0xbda9eeb0,0,0,0x10);
  param_1[0x112] = 0xceffd44;
  if (param_1[3] == 0) {
LAB_0055a94b:
    if ((DAT_0073578c != 0) && (iVar4 = FUN_004ef050(0x47af1aca), iVar4 != 0)) {
LAB_0055a967:
      if (*(int *)(iVar4 + 0x18) == 2) {
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x20;
      }
    }
  }
  else {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_0055a90f:
      local_20 = &PTR_FUN_006c1800;
      (*(unsigned char *)&(local_4)) = 3;
      local_1c = 0x47af1aca;
      local_18 = 0;
      FUN_004ffb00(iVar4);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
      local_20 = &PTR_LAB_006c2c5c;
      iVar4 = local_18;
      if (local_18 == 0) goto LAB_0055a94b;
      goto LAB_0055a967;
    }
    if (DAT_0073578c != 0) {
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
          (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_0055a94b;
      goto LAB_0055a90f;
    }
  }
  if (param_1[3] == 0) {
LAB_0055aa11:
    if ((DAT_0073578c == 0) || (local_18 = FUN_004ef050(0xbda9eeb0), local_18 == 0))
    goto LAB_0055aa37;
  }
  else {
    iVar4 = FUN_004f3f90(&DAT_00746104);
    if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
      if (DAT_0073578c == 0) goto LAB_0055aa37;
      iVar6 = *(int *)(DAT_0073578c + 8);
      if ((iVar6 == 0) ||
         ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
          (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_0055aa11;
    }
    local_20 = &PTR_FUN_006c1800;
    (*(unsigned char *)&(local_4)) = 4;
    local_1c = 0xbda9eeb0;
    local_18 = 0;
    FUN_004ffb00(iVar4);
    local_4 = CONCAT31(((unsigned int)(local_4) >> 8),2);
    local_20 = &PTR_LAB_006c2c5c;
    if (local_18 == 0) goto LAB_0055aa11;
  }
  if (*(int *)(local_18 + 0x18) == 2) {
    *(uint *)(local_18 + 0x1c) = *(uint *)(local_18 + 0x1c) | 0x20;
  }
LAB_0055aa37:
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)((int)param_1 + 0x45e) = 0;
  ExceptionList = local_c;
  return param_1;
}
