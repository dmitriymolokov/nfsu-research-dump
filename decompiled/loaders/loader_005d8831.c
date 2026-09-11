/* spd-match: far pct=11.11 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

extern void *PTR_FUN_006a0ca4;

struct ThisCallBox {
  void FUN_005d8831(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 *param_7);
};
void ThisCallBox::FUN_005d8831(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 *param_7) {
  int iVar1;
  undefined4 *puVar2;
  
  ((undefined4 *)this)[2] = 0;
  ((undefined4 *)this)[3] = 0;
  ((undefined4 *)this)[5] = 0;
  ((undefined4 *)this)[6] = 0;
  ((undefined4 *)this)[7] = param_3;
  ((undefined4 *)this)[8] = param_4;
  ((undefined4 *)this)[9] = param_5;
  ((undefined4 *)this)[10] = param_6;
  ((undefined4 *)this)[1] = 0xc;
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006a0ca4;
  ((undefined4 *)this)[4] = param_2;
  puVar2 = ((undefined4 *)this) + 0xc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_7;
    param_7 = param_7 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
