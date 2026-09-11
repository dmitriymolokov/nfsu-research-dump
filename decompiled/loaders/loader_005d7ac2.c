/* spd-match: far pct=4.76 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0c04;

struct ThisCallBox {
  void FUN_005d7ac2(undefined4 *param_2);
};
void ThisCallBox::FUN_005d7ac2(undefined4 *param_2) {
  int iVar1;
  undefined4 *puVar2;
  
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = 0;
  ((undefined4 *)this)[1] = 2;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0c04;
  puVar2 = ((undefined4 *)this) + 4;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
