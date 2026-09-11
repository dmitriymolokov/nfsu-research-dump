/* spd-match: far pct=6.25 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0053F9F0 */
#include <windows.h>
extern int DAT_007349c8;
extern float _DAT_007301d0;
extern float _DAT_00735558;
extern float _DAT_0073555c;
extern int DAT_00735560;
int __cdecl FUN_0053f9f0(int param_1, int param_2, char param_3) {
  float fVar3, fVar4;
  int delta = 1000;
  int shift = (unsigned char)DAT_007349c8 & 0x1f;
  fVar3 = (float)((unsigned int)1 << shift);
  fVar3 *= (float)delta;
  fVar3 *= _DAT_007301d0;
  fVar4 = fVar3;
  if (fVar3 < _DAT_00735558) fVar4 = _DAT_00735558;
  _DAT_00735558 = fVar4;
  DAT_00735560++;
  _DAT_0073555c += fVar3;
  return 0;
}
