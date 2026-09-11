/* spd-match: far pct=14.08 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.3-r2/va_00587E40 */
/* try3: ECX=matrix, EDX=vector, stack=output — permute vs seed */
#include "ghidra_compat.h"

void __fastcall FUN_00587e40(float *param_1, float *obj, float *param_2)
{
  *param_2 = param_1[8] * obj[2] + param_1[4] * obj[1] + *param_1 * *obj;
  param_2[1] = param_1[9] * obj[2] + param_1[5] * obj[1] + param_1[1] * *obj;
  param_2[2] = param_1[10] * obj[2] + param_1[6] * obj[1] + param_1[2] * *obj;
  return;
}
