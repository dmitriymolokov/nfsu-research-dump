/* spd-match: far pct=8.56 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005bb1eb();
int __cdecl FUN_005d78db();
int __cdecl FUN_005d814c();
int __cdecl FUN_005d8831();
int __cdecl FUN_005d8ad5();

undefined4 * FUN_005bcbdd(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((((param_1 != 0) && (*(int *)(param_1 + 4) == 0xe)) &&
      (piVar1 = *(int **)(param_1 + 0x30), piVar1 != (int *)0x0)) &&
     (uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1), 3 < uVar2)) {
    puVar3 = (uint *)(**(code **)(**(int **)(param_1 + 0x30) + 0xc))(*(int **)(param_1 + 0x30));
    uVar2 = *puVar3 & 0xffff0000;
    if (uVar2 == 0x7ffe0000) {
      uVar7 = 0x1c;
    }
    else if (uVar2 == 0x7fff0000) {
      uVar7 = 0x1b;
    }
    else if (uVar2 == 0xfffe0000) {
      uVar7 = 0x1a;
    }
    else {
      if (uVar2 != 0xffff0000) {
        return (undefined4 *)0x0;
      }
      uVar7 = 0x19;
    }
    pvVar4 = _malloc(0x50);
    if (pvVar4 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d8831(0,0,0,0,1,param_1 + 0x10);
    }
    if (puVar5 != (undefined4 *)0x0) {
      pvVar4 = _malloc(0x24);
      if (pvVar4 == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_005d814c(3,uVar7,1,1,0x200);
      }
      puVar5[4] = iVar6;
      if (iVar6 != 0) {
        pvVar4 = _malloc(0x40);
        if (pvVar4 == (void *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_005d8ad5(5,*(undefined4 *)(param_1 + 0x30),param_1 + 0x10);
        }
        puVar5[8] = iVar6;
        if (iVar6 != 0) {
          pvVar4 = _malloc(0x14);
          if (pvVar4 == (void *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_005d78db(puVar5[8],0,"Value");
          }
          if (iVar6 != 0) {
            puVar5[8] = iVar6;
            FUN_005bb1eb(puVar5);
            return puVar5;
          }
        }
      }
      (**(code **)*puVar5)(1);
    }
  }
  return (undefined4 *)0x0;
}
