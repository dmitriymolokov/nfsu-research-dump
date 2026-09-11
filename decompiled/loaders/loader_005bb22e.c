/* spd-match: far pct=18.68 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005d78db();
int __cdecl FUN_005d8670();
extern void LAB_005bb287(void);

int FUN_005bb22e(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  pvVar1 = _malloc(0x28);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_005d8670();
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2[4] = 0;
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 8))();
    puVar2[5] = iVar3;
    if (iVar3 == 0) goto LAB_005bb287;
  }
  pvVar1 = _malloc(0x14);
  if (pvVar1 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005d78db(puVar2,0,"Stmts");
  }
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_005bb287:
  (**(code **)*puVar2)(1);
  return 0;
}
