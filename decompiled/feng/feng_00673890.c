/* spd-match: far pct=1.39 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_006738ed();
int __cdecl FUN_0067cf90();
extern int DAT_00792fb8;

void FUN_00673890(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_00792fb8 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_0067cf90();
    return;
  }
  FUN_006738ed((double)in_ST1,(double)in_ST0);
  return;
}
