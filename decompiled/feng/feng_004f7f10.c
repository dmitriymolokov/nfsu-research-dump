/* spd-match: far pct=2.60 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004f7660();
extern unsigned char *DAT_0070649c;
extern unsigned char *DAT_007064a0;

undefined4 __fastcall FUN_004f7f10(int param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = FUN_004f7660((float)(unsigned int)(DAT_0070649c + -0x140),(float)(unsigned int)(DAT_007064a0 + -0xf0));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
