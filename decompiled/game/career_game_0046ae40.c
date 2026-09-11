/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046AE40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0046ae60();
extern int DAT_006f08a4;
int unaff_ESI;
void __fastcall FUN_0046ae40(undefined4 val, undefined4 param_1, undefined4 param_2)

{

  int unaff_ESI;
  float10 fVar1;
  
  *(undefined4 *)(unaff_ESI + 0xc) = val;
  *(undefined4 *)(unaff_ESI + 0x10) = param_1;
  *(undefined4 *)(unaff_ESI + 0x14) = param_2;
  fVar1 = (float10)FUN_0046ae60();
  *(float *)(unaff_ESI + 8) = (float)fVar1;
  *(undefined4 *)(unaff_ESI + 0x30) = DAT_006f08a4;
  return;
}
