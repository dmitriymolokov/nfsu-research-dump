/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_00673421 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006eb47c;
extern int DAT_006eb480;
extern int DAT_006eb484;
int unaff_EBP;
void __fastcall __NLG_Notify1(undefined4 val, undefined4 param_1)

{

  undefined4 unaff_EBP;
  
  DAT_006eb480 = param_1;
  DAT_006eb47c = val;
  DAT_006eb484 = unaff_EBP;
  return;
}
