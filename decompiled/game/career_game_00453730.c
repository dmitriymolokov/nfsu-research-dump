/* spd-match: far pct=22.22 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern void *PTR_FUN_006c92d4;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00453730(undefined4 param_2);
};
void ThisCallBox::FUN_00453730(undefined4 param_2) {
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(0x11,((undefined4)this),param_2);
  *unaff_ESI = (unsigned int)&PTR_FUN_006c92d4;
  unaff_ESI[0x80] = 0;
  return;
}
