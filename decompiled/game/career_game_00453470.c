/* spd-match: far pct=15.38 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern void *PTR_FUN_006c9194;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00453470(undefined4 param_2);
};
void ThisCallBox::FUN_00453470(undefined4 param_2) {
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(0x10,((undefined4)this),param_2);
  *unaff_ESI = (unsigned int)&PTR_FUN_006c9194;
  return;
}
