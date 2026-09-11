/* spd-match: far pct=8.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_00417e70();
int __cdecl FUN_004181e0();
int __cdecl FUN_0041f0c0();
int __cdecl FUN_0041f160();
int __cdecl FUN_004323f0();
int __cdecl FUN_004b0e50();
int __cdecl FUN_004b2330();
int __cdecl FUN_004b26f0();
int __cdecl FUN_004bca40();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f62f0();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f78e0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb00();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00565da0();
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_00748850;
extern int _DAT_0072cc80;
extern unsigned char *PTR_FUN_006cbc18;
extern void LAB_00417a78(void);
extern void LAB_00417aba(void);
extern void LAB_00417b79(void);
extern void LAB_00417bb7(void);
extern void LAB_00417bdb(void);
extern void LAB_006886a7(void);
void *ExceptionList;

undefined4 * FUN_00417700(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  byte local_760;
  byte local_75f [31];
  undefined1 local_740 [1092];
  int local_2fc;
  int local_2f8;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006886a7;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004f78e0(param_1,param_2);
  local_14 = 0;
  *param_1 = &PTR_FUN_006cbc18;
  FUN_0041f0c0();
  puVar4 = param_1 + 0x9b;
  puVar1 = param_1 + 0x9d;
  *puVar4 = puVar4;
  param_1[0x9c] = puVar4;
  *puVar1 = puVar1;
  param_1[0x9e] = puVar1;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  local_14 = CONCAT31(((unsigned int)(local_14) >> 8),2);
  param_1[0x96] = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined1 *)((int)param_1 + 0x265) = 1;
  FUN_00417e70(param_1);
  FUN_004181e0(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00565da0("DUMMY_SKIN%d",1);
  iVar8 = -1;
  pbVar6 = &local_760;
  bVar5 = local_760;
  while (bVar5 != 0) {
    iVar8 = iVar8 * 0x21 + (uint)bVar5;
    pbVar2 = pbVar6 + 1;
    pbVar6 = pbVar6 + 1;
    bVar5 = *pbVar2;
  }
  FUN_00565da0("DUMMY_WHEEL%d",1);
  iVar9 = -1;
  pbVar6 = &local_760;
  while (local_760 != 0) {
    pbVar2 = pbVar6 + 1;
    iVar9 = iVar9 * 0x21 + (uint)local_760;
    pbVar6 = pbVar6 + 1;
    local_760 = *pbVar2;
  }
  FUN_00417600();
  FUN_004bca40();
  pcVar7 = "FE_SKYLINE";
  do {
    pcVar3 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar3 != '\0');
  FUN_004b26f0(local_740);
  local_2fc = iVar8;
  local_2f8 = iVar9;
  iVar8 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,local_740);
  _DAT_0072cc80 = 1;
  if (iVar8 != 0) {
    FUN_004b0e50(iVar8,&DAT_00748850,1);
  }
  iVar8 = FUN_004f3f90(&DAT_00746104);
  if ((iVar8 == 0) || (*(int *)(iVar8 + 0x18) == 0)) {
    FUN_004f62f0();
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (((param_1[3] == 0) || (iVar8 = FUN_004f65d0(), iVar8 == 0)) ||
     (iVar8 = FUN_004ffb70(), iVar8 == 0)) {
    if (DAT_0073578c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_004ef050(0xea9e6302);
    }
  }
  param_1[0x10] = iVar8;
  if (((param_1[3] == 0) || (iVar8 = FUN_004f65d0(), iVar8 == 0)) ||
     (iVar8 = FUN_004ffb70(), iVar8 == 0)) {
    if (DAT_0073578c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_004ef050(0xaa68bfd7);
    }
  }
  param_1[0x11] = iVar8;
  if (((param_1[3] == 0) || (iVar8 = FUN_004f65d0(), iVar8 == 0)) ||
     (iVar8 = FUN_004ffb70(), iVar8 == 0)) {
    if (DAT_0073578c == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_004ef050(0xaa68bfc6);
    }
  }
  param_1[0x12] = iVar8;
  iVar8 = FUN_004f3f90(&DAT_00746104);
  if (((iVar8 == 0) || (iVar8 = *(int *)(iVar8 + 0x18), iVar8 == 0)) &&
     (iVar8 = 0, DAT_0073578c != 0)) {
    iVar9 = *(int *)(DAT_0073578c + 8);
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_004fd1e0(iVar9 + 0xdc);
      if (iVar8 == 0) {
        iVar8 = FUN_004fd1e0(iVar9 + 0xec);
      }
    }
  }
  param_1[0x13] = iVar8;
  FUN_0041f160(0x38fc835a,0x70355aa6,0,0xc);
  param_1[0x90] = 0xd03dd189;
  param_1[0x92] = 0;
  if (param_1[3] == 0) {
LAB_00417aba:
    if (((DAT_0073578c != 0) && (iVar8 = FUN_004ef050(0x38fc835a), iVar8 != 0)) &&
       (*(int *)(iVar8 + 0x18) == 2)) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x20;
    }
  }
  else {
    iVar8 = FUN_004f3f90(&DAT_00746104);
    if ((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x18), iVar8 != 0)) {
LAB_00417a78:
      (*(unsigned char *)&(local_14)) = 3;
      FUN_004ffb00(iVar8);
      local_14 = CONCAT31(((unsigned int)(local_14) >> 8),2);
      goto LAB_00417aba;
    }
    if (DAT_0073578c != 0) {
      if ((*(int *)(DAT_0073578c + 8) == 0) ||
         ((iVar8 = FUN_004fd1e0(*(int *)(DAT_0073578c + 8) + 0xdc), iVar8 == 0 &&
          (iVar8 = FUN_004fd1e0(*(int *)(DAT_0073578c + 8) + 0xec), iVar8 == 0))))
      goto LAB_00417aba;
      goto LAB_00417a78;
    }
  }
  pcVar7 = "Description";
  iVar8 = -1;
  bVar5 = 0x44;
  do {
    if (('`' < (char)bVar5) && ((char)bVar5 < '{')) {
      bVar5 = bVar5 - 0x20;
    }
    iVar8 = iVar8 * 0x21 + (uint)bVar5;
    bVar5 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
  } while (bVar5 != 0);
  if (param_1[3] == 0) {
LAB_00417bb7:
    if (((DAT_0073578c != 0) && (iVar8 = FUN_004ef050(iVar8), iVar8 != 0)) &&
       (*(int *)(iVar8 + 0x18) == 2)) goto LAB_00417bdb;
  }
  else {
    iVar9 = FUN_004f3f90(&DAT_00746104);
    if ((iVar9 != 0) && (iVar9 = *(int *)(iVar9 + 0x18), iVar9 != 0)) {
LAB_00417b79:
      (*(unsigned char *)&(local_14)) = 4;
      FUN_004ffb00(iVar9);
      local_14 = CONCAT31(((unsigned int)(local_14) >> 8),2);
      goto LAB_00417bb7;
    }
    if (DAT_0073578c != 0) {
      if ((*(int *)(DAT_0073578c + 8) == 0) ||
         ((iVar9 = FUN_004fd1e0(*(int *)(DAT_0073578c + 8) + 0xdc), iVar9 == 0 &&
          (iVar9 = FUN_004fd1e0(*(int *)(DAT_0073578c + 8) + 0xec), iVar9 == 0))))
      goto LAB_00417bb7;
      goto LAB_00417b79;
    }
  }
  iVar8 = 0;
LAB_00417bdb:
  param_1[0xa2] = iVar8;
  *(undefined1 *)((int)param_1 + 0x266) = 1;
  ExceptionList = local_1c;
  return param_1;
}
