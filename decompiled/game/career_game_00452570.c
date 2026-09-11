/* spd-match: far pct=15.38 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern int DAT_0073ad34;
extern void *PTR_FUN_006c934c;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00452570(undefined4 param_2);
};
void ThisCallBox::FUN_00452570(undefined4 param_2) {
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(0xe,((undefined4)this),param_2);
  *unaff_ESI = (unsigned int)&PTR_FUN_006c934c;
  unaff_ESI[0x80] = 0;
  unaff_ESI[0x80] = DAT_0073ad34;
  *(undefined1 *)(unaff_ESI + 0x81) = 0;
  return;
}
