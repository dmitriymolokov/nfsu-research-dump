/* spd-match: far pct=8.51 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-arity/va_0046BA50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_EDI;
int unaff_ESI;
float10 __fastcall FUN_0046ba50(float val)

{

  float *unaff_ESI;
  float *unaff_EDI;
  undefined1 local_30 [16];
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = unaff_EDI[2] * unaff_ESI[1] - unaff_ESI[2] * unaff_EDI[1];
  local_1c = unaff_ESI[2] * *unaff_EDI - unaff_EDI[2] * *unaff_ESI;
  local_18 = unaff_EDI[1] * *unaff_ESI - *unaff_EDI * unaff_ESI[1];
  FUN_0046ba50(0);
  return ((float10)(float)(unsigned int)(&local_20) * (float10)unaff_ESI[2] -
         (float10)(unsigned int)(val) * (float10)unaff_ESI[1]) * (float10)(unsigned int)(*unaff_EDI) +
         ((float10)(unsigned int)(val) * (float10)(unsigned int)(*unaff_ESI) - (float10)(float)(unsigned int)(local_30) * (float10)unaff_ESI[2])
         * (float10)unaff_EDI[1] +
         ((float10)(float)(unsigned int)(local_30) * (float10)unaff_ESI[1] -
         (float10)(float)(unsigned int)(&local_20) * (float10)(unsigned int)(*unaff_ESI)) * (float10)unaff_EDI[2];
}
