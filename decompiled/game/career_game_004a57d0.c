/* spd-match: far pct=43.06 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004A57D0 */
#include "ghidra_compat.h"
extern float DAT_006cc7a4, DAT_0078a320, _DAT_006cc7bc, _DAT_006cc930, _DAT_006cc934;
float __fastcall FUN_004a57d0(void* ecx, int edx, float f_arg) {
  float f3, f1, f2;
  f3 = f_arg / *(float*)((char*)edx + 8);
  if (f3 < DAT_006cc7a4) f3 = DAT_006cc7a4;
  else if (f3 > _DAT_006cc7bc) f3 = _DAT_006cc7bc;
  if (*(int*)&DAT_0078a320 == 1) { f1 = *(float*)((char*)ecx + 12); f2 = *(float*)((char*)ecx + 16); }
  else { f1 = *(float*)((char*)ecx + 4); f2 = *(float*)((char*)ecx + 8); }
  if (f2 <= f1) f3 = (f3 * (f2 - f1 + _DAT_006cc934)) + f1;
  else f3 = (f3 * (f2 - f1)) + f1;
  if (f3 > _DAT_006cc934) f3 -= _DAT_006cc934;
  if (f3 < _DAT_006cc930) f3 += _DAT_006cc934;
  return f3;
}
