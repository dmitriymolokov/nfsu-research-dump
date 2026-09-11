/* spd-match: far pct=4.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_2_2 */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
extern int _DAT_006cc970;

undefined4 FUN_005a8640(undefined4 param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar4 = 0;
  uVar3 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (3 < param_3) {
    pfVar5 = (float *)(param_2 + 8);
    local_8 = 3;
    do {
      if (_DAT_006cc970 < pfVar5[-2]) {
        iVar1 = FUN_00674898();
        local_18 = local_18 + iVar1;
        iVar1 = FUN_00674898();
        local_14 = local_14 + iVar1;
        iVar1 = FUN_00674898();
        local_10 = local_10 + iVar1;
        if (param_4 == '\0') {
          iVar1 = FUN_00674898();
          uVar3 = uVar3 + iVar1;
        }
        else {
          uVar2 = FUN_00674898();
          if ((int)uVar3 < (int)(uVar2 & 0xff)) {
            uVar3 = uVar2 & 0xff;
          }
        }
      }
      if (_DAT_006cc970 < pfVar5[-1]) {
        iVar1 = FUN_00674898();
        local_18 = local_18 + iVar1;
        iVar1 = FUN_00674898();
        local_14 = local_14 + iVar1;
        iVar1 = FUN_00674898();
        local_10 = local_10 + iVar1;
        if (param_4 == '\0') {
          iVar1 = FUN_00674898();
          uVar3 = uVar3 + iVar1;
        }
        else {
          uVar2 = FUN_00674898();
          if ((int)uVar3 < (int)(uVar2 & 0xff)) {
            uVar3 = uVar2 & 0xff;
          }
        }
      }
      if (_DAT_006cc970 < *pfVar5) {
        iVar1 = FUN_00674898();
        local_18 = local_18 + iVar1;
        iVar1 = FUN_00674898();
        local_14 = local_14 + iVar1;
        iVar1 = FUN_00674898();
        local_10 = local_10 + iVar1;
        if (param_4 == '\0') {
          iVar1 = FUN_00674898();
          uVar3 = uVar3 + iVar1;
        }
        else {
          uVar2 = FUN_00674898();
          if ((int)uVar3 < (int)(uVar2 & 0xff)) {
            uVar3 = uVar2 & 0xff;
          }
        }
      }
      if (_DAT_006cc970 < pfVar5[1]) {
        iVar1 = FUN_00674898();
        local_18 = local_18 + iVar1;
        iVar1 = FUN_00674898();
        local_14 = local_14 + iVar1;
        iVar1 = FUN_00674898();
        local_10 = local_10 + iVar1;
        if (param_4 == '\0') {
          iVar1 = FUN_00674898();
          uVar3 = uVar3 + iVar1;
        }
        else {
          uVar2 = FUN_00674898();
          if ((int)uVar3 < (int)(uVar2 & 0xff)) {
            uVar3 = uVar2 & 0xff;
          }
        }
      }
      local_8 = local_8 + 4;
      iVar4 = iVar4 + 4;
      pfVar5 = pfVar5 + 4;
    } while (local_8 < param_3);
  }
  for (; iVar4 < param_3; iVar4 = iVar4 + 1) {
    if (_DAT_006cc970 < *(float *)(param_2 + iVar4 * 4)) {
      iVar1 = FUN_00674898();
      local_18 = local_18 + iVar1;
      iVar1 = FUN_00674898();
      local_14 = local_14 + iVar1;
      iVar1 = FUN_00674898();
      local_10 = local_10 + iVar1;
      if (param_4 == '\0') {
        iVar1 = FUN_00674898();
        uVar3 = uVar3 + iVar1;
      }
      else {
        uVar2 = FUN_00674898();
        if ((int)uVar3 < (int)(uVar2 & 0xff)) {
          uVar3 = uVar2 & 0xff;
        }
      }
    }
  }
  (*(unsigned short *)((unsigned char *)&(local_c) + 2)) = 0xff;
  if (local_18 < 0x100) {
    (*(unsigned short *)((unsigned char *)&(local_c) + 2)) = (ushort)local_18 & 0xff;
  }
  local_c = CONCAT22((*(unsigned short *)((unsigned char *)&(local_c) + 2)),0xff00);
  if (local_14 < 0x100) {
    local_c = (uint)CONCAT21((*(unsigned short *)((unsigned char *)&(local_c) + 2)),(char)local_14) << 8;
  }
  local_c = CONCAT31(((unsigned int)(local_c) >> 8),0xff);
  if (local_10 < 0x100) {
    local_c = CONCAT31(((unsigned int)(local_c) >> 8),(char)local_10);
  }
  local_c = CONCAT13(0xff,(undefined3)local_c);
  if ((int)uVar3 < 0x100) {
    local_c = CONCAT13((char)uVar3,(undefined3)local_c);
  }
  return local_c;
}
