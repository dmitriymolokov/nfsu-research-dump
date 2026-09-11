/* spd-match: far pct=10.84 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0056CEB0 */
#include "ghidra_compat.h"
extern float DAT_006cc7a4;
extern float DAT_0073cab8;
extern float _DAT_006b5e04;
extern float _DAT_0073c660;
extern float _DAT_0073c664;
extern float _DAT_0073c668;
extern float _DAT_0073cab0;
extern float _DAT_0073cab4;
int __fastcall FUN_0056ceb0(float * obj) {
  float val = (obj[0] - _DAT_0073cab0) * _DAT_0073c660;
  val += (obj[2] - DAT_0073cab8) * _DAT_0073c668;
  val += (obj[1] - _DAT_0073cab4) * _DAT_0073c664;
  if (val < DAT_006cc7a4) val = -val;
  return (val < _DAT_006b5e04) ? 1 : 0;
}
