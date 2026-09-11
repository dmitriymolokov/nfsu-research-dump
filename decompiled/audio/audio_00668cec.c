/* spd-match: far pct=0.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_007177d0;
int unaff_EDI;

void FUN_00668cec(undefined4 *param_1)

{
  byte bVar1;
  int unaff_EDI;
  undefined1 in_CF;
  
  bVar1 = *(byte *)(unaff_EDI + 0x5e);
  *(byte *)(unaff_EDI + 0x5e) = (byte)(CONCAT11(in_CF,bVar1) >> 3) | bVar1 << 6;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_007177d0;
  }
  param_1[2] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}
