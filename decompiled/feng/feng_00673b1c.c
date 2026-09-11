/* spd-match: far pct=3.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0067dec0();
extern int DAT_00792fb8;

void FUN_00673b1c(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_00792fb8 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_0067dec0();
    return;
  }
  __cintrindisp1();
  return;
}
