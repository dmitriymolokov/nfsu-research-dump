/* spd-match: far pct=13.89 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern void *PTR_FUN_006c90f4;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00450d20(undefined4 param_2, undefined4 param_3);
};
void ThisCallBox::FUN_00450d20(undefined4 param_2, undefined4 param_3) {
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(6,((undefined4)this),param_2);
  *unaff_ESI = (unsigned int)&PTR_FUN_006c90f4;
  unaff_ESI[0x80] = param_3;
  return;
}
