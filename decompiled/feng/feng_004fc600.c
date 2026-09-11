/* spd-match: far pct=5.66 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FC600 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
void __fastcall FUN_004fc600(float * obj, float *param_1, float *param_2, float param_3)

{

  float *unaff_ESI;
  
  *param_1 = (*unaff_ESI - *obj) * param_3 + *obj + *param_2;
  param_1[1] = (unaff_ESI[1] - obj[1]) * param_3 + param_2[1] + obj[1];
  param_1[2] = (unaff_ESI[2] - obj[2]) * param_3 + param_2[2] + obj[2];
  return;
}
