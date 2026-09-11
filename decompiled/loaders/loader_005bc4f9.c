/* spd-match: far pct=14.46 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005bb1eb(...);
int __cdecl FUN_005d65b0(...);
int __cdecl FUN_005d78db(...);
int __cdecl FUN_005d814c(...);
int __cdecl FUN_005d8831(...);
int __cdecl FUN_005d8ad5(...);

struct ThisCallBox {
  undefined4 * FUN_005bc4f9(int *param_2);
};
undefined4 * ThisCallBox::FUN_005bc4f9(int *param_2) {
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  if (param_2 != (int *)0x0) {
    iVar7 = (int)param_2 + 0x10;
    pcVar3 = *(char **)(((int)this) + 0x28);
    param_2 = (int *)0x0;
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    pcVar3 = pcVar3 + (1 - (int)pcVar1);
    pvVar4 = (unsigned int *)_malloc(0x50);
    if (pvVar4 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d8831(0,0,0,0,1,iVar7);
    }
    if (puVar5 != (undefined4 *)0x0) {
      pvVar4 = (unsigned int *)_malloc(0x24);
      if (pvVar4 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_005d814c(3,0xe,1,1,0x200);
      }
      puVar5[4] = iVar6;
      if ((iVar6 != 0) && (iVar6 = FUN_005d65b0(pcVar3,&param_2), -1 < iVar6)) {
        pvVar4 = (unsigned int *)_malloc(0x40);
        if (pvVar4 == (void *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_005d8ad5(5,param_2,iVar7);
        }
        puVar5[8] = iVar7;
        if (iVar7 != 0) {
          puVar10 = *(undefined4 **)(((int)this) + 0x28);
          puVar8 = (undefined4 *)(**(code **)(*param_2 + 0xc))(param_2);
          for (uVar9 = (uint)pcVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar8 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar9 = (uint)pcVar3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          pvVar4 = (unsigned int *)_malloc(0x14);
          if (pvVar4 == (void *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_005d78db(puVar5[8],0,"Value");
          }
          if (iVar7 != 0) {
            puVar5[8] = iVar7;
            FUN_005bb1eb(puVar5);
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
              return puVar5;
            }
            return puVar5;
          }
        }
      }
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      param_2 = (int *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  return (undefined4 *)0x0;
}
