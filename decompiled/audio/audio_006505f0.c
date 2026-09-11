/* spd-match: far pct=2.81 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

int __cdecl FUN_00412ee0();
int __cdecl FUN_00655500();

void FUN_006505f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_2c;
  undefined1 local_24 [4];
  uint local_20;
  int local_18 [6];
  
  iVar1 = param_1[0x56];
  if (*(char *)(iVar1 + 0x25) == '\0') {
    local_2c = param_2[2];
  }
  else {
    uVar2 = param_2[2];
    (*(unsigned short *)&(local_2c)) = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
    local_2c = CONCAT22(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),(undefined2)local_2c);
  }
  local_20 = local_20 ^ (local_20 ^ local_2c) & 0x7fffffff;
  uVar4 = (uint)*(byte *)((int)param_1 + 0x3a);
  iVar3 = 0;
  if (uVar4 != 0) {
    do {
      if (*(char *)(iVar1 + 0x25) == '\0') {
        local_2c = *(int *)((int)param_2 + (int)local_18 + iVar3 * 4 + (0xc - (int)local_18));
      }
      else {
        uVar2 = *(undefined4 *)((int)param_2 + (int)local_18 + iVar3 * 4 + (0xc - (int)local_18));
        (*(unsigned short *)&(local_2c)) = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        local_2c = CONCAT13((char)uVar2,CONCAT12((char)((uint)uVar2 >> 8),(undefined2)local_2c));
      }
      local_18[iVar3] = (int)param_2 + local_2c + uVar4 * 4 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  if ((local_20 & 0x7fffffff) != 0) {
    *(undefined4 **)(local_18[0] + -4) = param_2;
    *param_2 = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(iVar1 + 0x1c) = (local_20 & 0x7fffffff) + *(int *)(iVar1 + 0x1c);
    local_20 = (uint)*(byte *)(iVar1 + 0x24) << 0x1f | local_20 & 0x7fffffff;
    FUN_00655500(param_1[2],local_24);
    *(undefined1 *)(iVar1 + 0x24) = 1;
    return;
  }
  FUN_00412ee0(*param_1,param_2);
  return;
}
