/* spd-match: far pct=15.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005bb1eb();
int __cdecl FUN_005bf509();
int __cdecl FUN_005d78db();
int __cdecl FUN_005d8831();
int __cdecl FUN_005d8a02();
extern void LAB_005c0e0d(void);
extern void LAB_005c0e15(void);
extern void LAB_005c0e17(void);

undefined4 * FUN_005c0cfc(void *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Memory;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint local_8;
  
  iVar1 = (int)param_1;
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 4) != 0xc)) {
    return (undefined4 *)0x0;
  }
  uVar2 = *(int *)((int)param_1 + 0x18) * *(int *)((int)param_1 + 0x14);
  _Memory = _malloc(uVar2 * 0x10);
  if ((_Memory != (void *)0x0) && (iVar3 = FUN_005bf509(param_1,_Memory), -1 < iVar3)) {
    pvVar4 = _malloc(0x50);
    if (pvVar4 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d8831(0,0,0,0,1,(int)param_1 + 0x30);
    }
    if (puVar5 != (undefined4 *)0x0) {
      if (*(int **)((int)param_1 + 0x10) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)((int)param_1 + 0x10) + 8))();
        puVar5[4] = iVar3;
        if (iVar3 == 0) {
LAB_005c0e0d:
          (**(code **)*puVar5)(1);
          goto LAB_005c0e15;
        }
      }
      local_8 = 0;
      piVar6 = puVar5 + 8;
      param_1 = _Memory;
      if (uVar2 != 0) {
        do {
          pvVar4 = _malloc(0x14);
          if (pvVar4 == (void *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_005d78db(0,0,"Value");
          }
          *piVar6 = iVar3;
          if (iVar3 == 0) goto LAB_005c0e0d;
          pvVar4 = _malloc(0x40);
          if (pvVar4 == (void *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_005d8a02(param_1,iVar1 + 0x30);
          }
          *(int *)(*piVar6 + 8) = iVar3;
          if (iVar3 == 0) goto LAB_005c0e0d;
          piVar6 = (int *)(*piVar6 + 0xc);
          local_8 = local_8 + 1;
          param_1 = (void *)((int)param_1 + 0x10);
        } while (local_8 < uVar2);
      }
      FUN_005bb1eb(puVar5);
      goto LAB_005c0e17;
    }
  }
LAB_005c0e15:
  puVar5 = (undefined4 *)0x0;
LAB_005c0e17:
  _free(_Memory);
  return puVar5;
}
