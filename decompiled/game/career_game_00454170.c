/* spd-match: far pct=16.98 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern void *PTR_FUN_006c92ac;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00454170(undefined4 param_2, undefined4 param_3, undefined4 param_4);
};
void ThisCallBox::FUN_00454170(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(0x12,((undefined4)this),param_2);
  unaff_ESI[0x82] = param_4;
  *unaff_ESI = (unsigned int)&PTR_FUN_006c92ac;
  unaff_ESI[0x80] = param_3;
  *(undefined1 *)(unaff_ESI + 0x81) = 0;
  return;
}
