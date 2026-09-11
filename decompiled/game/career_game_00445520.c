/* spd-match: far pct=7.61 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00445520 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00445520(short * obj, float *param_1, float *param_2)

{
  short sVar1;
  short sVar2;

  sVar1 = obj[2];
  sVar2 = obj[1];
  *param_2 = (float)(int)*obj;
  param_2[1] = (float)(int)sVar2;
  param_2[2] = (float)(int)sVar1;
  sVar1 = obj[5];
  sVar2 = obj[4];
  *param_1 = (float)(int)obj[3];
  param_1[1] = (float)(int)sVar2;
  param_1[2] = (float)(int)sVar1;
  return;
}
