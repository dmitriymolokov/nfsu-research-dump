/* spd-match: far pct=10.92 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0056D700 */
#include "ghidra_compat.h"
extern float *DAT_00735518;
extern float _DAT_006ccbe8, _DAT_006cc7a4, _DAT_006b5d6c;
extern float _DAT_0073c670, _DAT_0073c674, _DAT_0073c678;
int __cdecl FUN_00564db0(float, float);
void __cdecl FUN_0056d700(float * obj) {
  float tmp[3];
  float *p = (float*)DAT_00735518;
  if (!p) {
    tmp[0] = _DAT_006ccbe8; tmp[1] = _DAT_006cc7a4; tmp[2] = 7000.0f;
  } else {
    tmp[0] = p[11]; tmp[1] = p[12]; tmp[2] = _DAT_006b5d6c + p[13];
  }
  _DAT_0073c670 = obj[0] - tmp[0];
  _DAT_0073c674 = obj[1] - tmp[1];
  _DAT_0073c678 = obj[2] - tmp[2];
  FUN_00564db0(0.0f, -_DAT_0073c678);
}
