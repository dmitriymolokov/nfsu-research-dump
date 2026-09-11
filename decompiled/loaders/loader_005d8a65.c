/* spd-match: far pct=7.14 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0cb4;

struct ThisCallBox {
  void FUN_005d8a65(undefined4 param_2, undefined4 param_3, undefined4 *param_4);
};
void ThisCallBox::FUN_005d8a65(undefined4 param_2, undefined4 param_3, undefined4 *param_4) {
  int iVar1;
  undefined4 *puVar2;
  
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = 0;
  ((undefined4 *)this)[4] = param_2;
  ((undefined4 *)this)[6] = param_3;
  ((undefined4 *)this)[1] = 0xd;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0cb4;
  puVar2 = ((undefined4 *)this) + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
