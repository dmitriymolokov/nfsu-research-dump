/* spd-match: far pct=19.95 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005ca273(...);
int __cdecl FUN_005d1d40(...);
extern void LAB_005ca4cf(...);

struct ThisCallBox {
  uint FUN_005ca361(int param_2, uint param_3, uint param_4);
};
uint ThisCallBox::FUN_005ca361(int param_2, uint param_3, uint param_4) {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_c;
  undefined4 *local_8;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = FUN_005d1d40(param_2,param_4,0);
  if (iVar3 != 0) {
    iVar2 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar3 + 4) * 4);
    if (*(int *)(iVar2 + 0x38) == 0) {
      iVar7 = *(int *)(((int)this) + 0x2c);
    }
    else {
      iVar7 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
    }
    param_4 = *(uint *)(*(int *)(iVar2 + 0x24) + iVar7 + 0x10 + *(int *)(iVar3 + 8));
    if (*(int *)(iVar3 + 0x18) != -1) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (param_4 <= param_3) {
      return 0;
    }
    local_8 = (undefined4 *)0x0;
    puVar4 = *(undefined4 **)(iVar3 + 0x14);
    if (*(undefined4 **)(iVar3 + 0x14) != (undefined4 *)0x0) {
      do {
        puVar8 = puVar4;
        puVar4 = puVar8;
        if (param_3 <= (uint)puVar8[6]) break;
        puVar4 = (undefined4 *)puVar8[5];
        local_8 = puVar8;
      } while (puVar4 != (undefined4 *)0x0);
      if ((puVar4 != (undefined4 *)0x0) && ((uint)puVar4[6] <= param_3)) goto LAB_005ca4cf;
    }
    puVar4 = (undefined4 *)_malloc(0x20);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[6] = 0xffffffff;
      puVar4[5] = 0;
      puVar4[4] = 0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = (int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar3 + 4) * 4);
      local_c = *(int *)(*piVar1 + 0x24) + *(int *)(iVar3 + 8);
      param_2 = *(int *)(*piVar1 + 0x28) + *(int *)(iVar3 + 0xc);
      if (*(int *)(*piVar1 + 0x38) == 0) {
        uVar5 = *(undefined4 *)(((int)this) + 0x2c);
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(((int)this) + 0xc) + 8);
      }
      uVar6 = FUN_005ca273(uVar5,&local_c,&param_2);
      *puVar4 = 3;
      puVar4[1] = *(undefined4 *)(iVar3 + 4);
      puVar4[2] = *(undefined4 *)(iVar3 + 8);
      iVar2 = *(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar3 + 4) * 4) + 0x28);
      iVar7 = *(int *)(iVar3 + 0xc);
      puVar4[6] = param_3;
      puVar4[3] = ((uint)((param_2 - iVar2) - iVar7) / param_4) * param_3 + iVar7;
      puVar4[7] = uVar6 / param_4;
      if (local_8 == (undefined4 *)0x0) {
        puVar4[5] = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 **)(iVar3 + 0x14) = puVar4;
      }
      else {
        puVar4[5] = (unsigned int)local_8[5];
        local_8[5] = (unsigned int)puVar4;
      }
LAB_005ca4cf:
      return ~(uint)puVar4;
    }
  }
  return 0;
}
