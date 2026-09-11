/* spd-match: far pct=39.58 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.5q/va_0041EFF0 */
#include "ghidra_compat.h"

double __cdecl FUN_0041e860(void);
double __cdecl FUN_0041ece0(void);
extern float _DAT_006cc95c;
extern float _DAT_006ccb9c;

float10 FUN_0041eff0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_0041ece0();
  fVar1 = (float)fVar4;
  fVar4 = (float10)FUN_0041e860();
  fVar2 = (float)fVar4;
  fVar3 = fVar2;
  if (fVar1 < fVar2) {
    fVar3 = fVar1;
  }
  if (fVar1 <= fVar2) {
    return (float10)fVar3 * (float10)_DAT_006cc95c + (float10)fVar2 * (float10)_DAT_006ccb9c;
  }
  return (float10)fVar3 * (float10)_DAT_006cc95c + (float10)fVar1 * (float10)_DAT_006ccb9c;
}
