/* spd-match: far pct=16.76 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0044e2b0(...);
int __cdecl FUN_00458f10(...);
extern int DAT_0073ad34;
extern int _DAT_006b7668;
extern void *PTR_FUN_006c925c;
int unaff_EDI;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00451400(undefined4 param_2, undefined4 param_3);
};
void ThisCallBox::FUN_00451400(undefined4 param_2, undefined4 param_3) {
  float *pfVar1;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  
  FUN_0044e2b0(9,((undefined4)this),param_2);
  *unaff_ESI = (unsigned int)&PTR_FUN_006c925c;
  unaff_ESI[0x80] = 0;
  unaff_ESI[0x81] = 0;
  unaff_ESI[0x80] = DAT_0073ad34;
  *(undefined1 *)(unaff_ESI + 0x82) = 1;
  unaff_ESI[0x83] = param_3;
  if ((unaff_EDI == (int *)0x0) || (unaff_EDI == (int *)0xfffffc74)) {
    *(undefined1 *)((int)unaff_ESI + 0x209) = 1;
  }
  else {
    pfVar1 = (float *)unaff_EDI[0xe4];
    if ((pfVar1[10] - (float)unaff_EDI[(char)unaff_EDI[0xe2] * 0xe + 4]) -
        ((*(float *)(*unaff_EDI + 0x60) - *pfVar1) * pfVar1[4] -
        (*(float *)(*unaff_EDI + 100) - pfVar1[1]) * pfVar1[3]) <= _DAT_006b7668) {
      *(undefined1 *)((int)unaff_ESI + 0x209) = 0;
    }
    else {
      *(undefined1 *)((int)unaff_ESI + 0x209) = 1;
    }
  }
  unaff_ESI[0x81] = 0;
  FUN_00458f10(0,0);
  return;
}
