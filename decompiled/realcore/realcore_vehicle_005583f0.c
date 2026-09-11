/* spd-match: far pct=7.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f0c0();
int __cdecl FUN_0041f160();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_005591a0();
extern int DAT_00734bc8;
extern unsigned char *DAT_0073578c;
extern int DAT_007363b2;
extern int DAT_00746104;
extern int DAT_007787b4;
extern unsigned char *PTR_FUN_006bcab4;
extern unsigned char *PTR_LAB_006bca48;
extern void LAB_00558887(void);
extern void LAB_005588c3(void);
extern void LAB_00558950(void);
extern void LAB_0055898c(void);
extern void LAB_00558a16(void);
extern void LAB_00558a52(void);
extern void LAB_00558b1a(void);
extern void LAB_00558b40(void);
extern void LAB_006877ad(void);
void *ExceptionList;

undefined4 * FUN_005583f0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006877ad;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  pcVar2 = (char *)param_1[3];
  *param_1 = &PTR_LAB_006bca48;
  DAT_00734bc8 = *pcVar2;
  if (DAT_00734bc8 != '\0') {
    pcVar4 = &DAT_00734bc8;
    do {
      cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  local_4 = 0;
  *param_1 = &PTR_FUN_006bcab4;
  FUN_0041f0c0();
  (*(unsigned char *)&(local_4)) = 1;
  FUN_0041f0c0();
  (*(unsigned char *)&(local_4)) = 2;
  FUN_0041f0c0();
  (*(unsigned char *)&(local_4)) = 3;
  FUN_0041f0c0();
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),4);
  param_1[0x10] = &DAT_007787b4;
  FUN_005591a0();
  pcVar2 = (char *)param_1[3];
  DAT_00734bc8 = *pcVar2;
  if (DAT_00734bc8 != '\0') {
    pcVar4 = &DAT_00734bc8;
    do {
      cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar4];
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(param_1 + 8) = 1;
  piVar6 = param_1 + 0x11;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d5);
    }
  }
  param_1[0x11] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda9a39d4);
    }
  }
  param_1[0x12] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef8f);
    }
  }
  param_1[0x13] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0xda96ef8e);
    }
  }
  param_1[0x14] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x70355aa6);
    }
  }
  param_1[0x15] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x70355aa7);
    }
  }
  param_1[0x16] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x70355aa8);
    }
  }
  param_1[0x17] = iVar5;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x70355aa9);
    }
  }
  param_1[0x18] = iVar5;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if (((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) &&
     (iVar5 = 0, DAT_0073578c != 0)) {
    iVar3 = *(int *)(DAT_0073578c + 8);
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004fd1e0(iVar3 + 0xdc);
      if (iVar5 == 0) {
        iVar5 = FUN_004fd1e0(iVar3 + 0xec);
      }
    }
  }
  param_1[0x19] = iVar5;
  FUN_0041f160(0x854bc1d8,0,0,0x10);
  FUN_0041f160(0x58f820ab,0,0,0x10);
  FUN_0041f160(0x917e8df9,0,0,0x10);
  FUN_0041f160(0x43225720,0,0,0x32);
  param_1[0x96] = 0x4c7b3797;
  param_1[0x98] = 0x1ff2aa3b;
  param_1[0x118] = 0x6659468a;
  param_1[0x11a] = 0x2ee3bb4c;
  param_1[0x19a] = 0xed17e1e5;
  param_1[0x19c] = 0x3dd4cc5d;
  param_1[0x21c] = 0x812d3edf;
  param_1[0x21e] = 0x4cc5dd6e;
  param_1[0x97] = 0xceffd44;
  param_1[0x119] = 0xceffd44;
  param_1[0x19b] = 0xceffd44;
  param_1[0x21d] = 0xceffd44;
  *(undefined1 *)((int)param_1 + 0x475) = 1;
  DAT_007363b2 = 1;
  *(undefined1 *)((int)param_1 + 0x67d) = 1;
  if (param_1[3] == 0) {
LAB_005588c3:
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(0x854bc1d8), iVar5 != 0)) &&
       (*(int *)(iVar5 + 0x18) == 2)) {
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x20;
    }
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00558887:
      (*(unsigned char *)&(local_4)) = 5;
      FUN_004ffb00(iVar5);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),4);
      goto LAB_005588c3;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_005588c3;
      goto LAB_00558887;
    }
  }
  if (param_1[3] == 0) {
LAB_0055898c:
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(0x58f820ab), iVar5 != 0)) &&
       (*(int *)(iVar5 + 0x18) == 2)) {
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x20;
    }
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00558950:
      (*(unsigned char *)&(local_4)) = 6;
      FUN_004ffb00(iVar5);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),4);
      goto LAB_0055898c;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_0055898c;
      goto LAB_00558950;
    }
  }
  if (param_1[3] == 0) {
LAB_00558a52:
    if (((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(0x917e8df9), iVar5 != 0)) &&
       (*(int *)(iVar5 + 0x18) == 2)) {
      *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x20;
    }
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_00558a16:
      (*(unsigned char *)&(local_4)) = 7;
      FUN_004ffb00(iVar5);
      local_4 = CONCAT31(((unsigned int)(local_4) >> 8),4);
      goto LAB_00558a52;
    }
    if (DAT_0073578c != 0) {
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00558a52;
      goto LAB_00558a16;
    }
  }
  if (param_1[3] != 0) {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
      if (DAT_0073578c == 0) goto LAB_00558b40;
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_00558b1a;
    }
    (*(unsigned char *)&(local_4)) = 8;
    FUN_004ffb00(iVar5);
    local_4 = CONCAT31(((unsigned int)(local_4) >> 8),4);
  }
LAB_00558b1a:
  if (((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(0x43225720), iVar5 != 0)) &&
     (*(int *)(iVar5 + 0x18) == 2)) {
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x20;
  }
LAB_00558b40:
  *(undefined1 *)(param_1 + 0x222) = 0;
  ExceptionList = local_c;
  return param_1;
}
