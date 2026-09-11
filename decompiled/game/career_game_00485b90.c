/* spd-match: far pct=11.76 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00485B90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
void __fastcall FUN_00485b90(float * obj, float *param_1, float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  int unaff_ESI;
  
  fVar1 = *(float *)(unaff_ESI + 100);
  fVar2 = obj[1];
  fVar3 = obj[2];
  fVar4 = *(float *)(unaff_ESI + 0x60);
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  *param_2 = fVar4 * *param_1 + fVar1 * *obj;
  param_2[1] = fVar5 * fVar4 + fVar2 * fVar1;
  param_2[2] = fVar6 * fVar4 + fVar3 * fVar1;
  return;
}
