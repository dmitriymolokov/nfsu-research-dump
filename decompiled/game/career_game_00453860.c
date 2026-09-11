/* spd-match: far pct=18.97 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern int DAT_006b76e0;
extern void *PTR_FUN_006c939c;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00453860(undefined4 param_2, undefined4 param_3, undefined4 param_4);
};
void ThisCallBox::FUN_00453860(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(3,((undefined4)this),param_2);
  uVar1 = DAT_006b76e0;
  unaff_ESI[0x81] = param_4;
  *unaff_ESI = (unsigned int)&PTR_FUN_006c939c;
  unaff_ESI[0x80] = param_3;
  unaff_ESI[0x82] = uVar1;
  return;
}
