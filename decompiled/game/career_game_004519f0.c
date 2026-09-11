/* spd-match: far pct=12.82 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
extern int DAT_0073ad34;
extern int _DAT_006cc8a8;
extern int _DAT_006cc8bc;
extern void *PTR_FUN_006c916c;
int unaff_ESI;

struct ThisCallBox {
  void FUN_004519f0(undefined4 param_2, float param_3);
};
void ThisCallBox::FUN_004519f0(undefined4 param_2, float param_3) {
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined4 *unaff_ESI;
  
  FUN_0044e2b0(10,((undefined4)this),param_2);
  fVar3 = param_3 - _DAT_006cc8a8;
  *unaff_ESI = (unsigned int)&PTR_FUN_006c916c;
  unaff_ESI[0x80] = 0;
  bVar1 = ABS(fVar3) < _DAT_006cc8bc;
  bVar2 = ABS(fVar3) == _DAT_006cc8bc;
  unaff_ESI[0x80] = DAT_0073ad34;
  unaff_ESI[0x81] = param_3;
  if (bVar1 != bVar2) {
    *(undefined1 *)(unaff_ESI + 0x82) = 0;
    return;
  }
  *(undefined1 *)(unaff_ESI + 0x82) = 1;
  return;
}
