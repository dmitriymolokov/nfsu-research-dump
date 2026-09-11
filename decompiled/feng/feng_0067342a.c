/* spd-match: far pct=4.17 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0067342A */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006eb47c;
extern int DAT_006eb480;
extern int DAT_006eb484;
int unaff_EBP;
void __fastcall FUN_0067342a(undefined4 val)

{

  int unaff_EBP;
  
  DAT_006eb480 = *(undefined4 *)(unaff_EBP + 8);
  DAT_006eb47c = val;
  DAT_006eb484 = unaff_EBP;
  return;
}
