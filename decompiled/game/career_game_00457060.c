/* spd-match: far pct=12.94 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00455270();
int __cdecl FUN_00455390();
int __cdecl FUN_00567160();
extern void LAB_004570be(void);
int unaff_EDI;

void FUN_00457060(int *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 4))();
    if (iVar1 == unaff_EDI) {
      return;
    }
    (**(code **)*piVar2)(1);
  }
  if (unaff_EDI == 0) {
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      iVar1 = FUN_00455270();
      *param_1 = iVar1;
      return;
    }
  }
  else {
    if (unaff_EDI != 1) goto LAB_004570be;
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      iVar1 = FUN_00455390();
      *param_1 = iVar1;
      return;
    }
  }
  piVar2 = (int *)0x0;
LAB_004570be:
  *param_1 = (int)piVar2;
  return;
}
