/* spd-match: far pct=10.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
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
int __cdecl FUN_0055bb80();
extern int DAT_00734bc8;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern int DAT_007787b4;
extern unsigned char *PTR_LAB_006bca18;
extern unsigned char *PTR_LAB_006bca48;
extern void LAB_0055b8de(void);
extern void LAB_006880eb(void);
void *ExceptionList;

undefined4 * FUN_0055b6d0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006880eb;
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
  *param_1 = &PTR_LAB_006bca18;
  FUN_0041f0c0();
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  param_1[0x10] = &DAT_007787b4;
  FUN_0055bb80();
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
  param_1[0x11] = 0;
  if (((param_1[3] == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
     (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(0x70355aa6);
    }
  }
  param_1[0x11] = iVar5;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
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
  }
  param_1[0x12] = iVar5;
  param_1[0x8f] = 0xae83b9db;
  param_1[0x91] = 0;
  FUN_0041f160(0xd965a529,0x70355aa6,0,0x32);
  if (param_1[3] != 0) {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
      if (DAT_0073578c == 0) {
        ExceptionList = local_c;
        return param_1;
      }
      iVar3 = *(int *)(DAT_0073578c + 8);
      if ((iVar3 == 0) ||
         ((iVar5 = FUN_004fd1e0(iVar3 + 0xdc), iVar5 == 0 &&
          (iVar5 = FUN_004fd1e0(iVar3 + 0xec), iVar5 == 0)))) goto LAB_0055b8de;
    }
    (*(unsigned char *)&(local_4)) = 2;
    FUN_004ffb00(iVar5);
    local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  }
LAB_0055b8de:
  if (((DAT_0073578c != 0) && (iVar5 = FUN_004ef050(0xd965a529), iVar5 != 0)) &&
     (*(int *)(iVar5 + 0x18) == 2)) {
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x20;
  }
  ExceptionList = local_c;
  return param_1;
}
