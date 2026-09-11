/* spd-match: far pct=31.65 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.6-control100/va_0062E8F0 */
#include "ghidra_compat.h"
extern float _DAT_006a8270;
extern float _DAT_006cc7bc;
struct ThisCallBox {
  void FUN_0062e8f0(int param_2, float *ptr);
};
void ThisCallBox::FUN_0062e8f0(int param_2, float *ptr) {
  float f = _DAT_006a8270 + _DAT_006a8270;
  ptr[2] = 0.0f; ptr[1] = 0.0f; ptr[0] = 0.0f;
  unsigned char *b = (unsigned char *)this;
  if (param_2 == 0) ptr[0] = (float)b[0] * f - _DAT_006cc7bc;
  else if (param_2 == 1) ptr[1] = (float)b[0] * f - _DAT_006cc7bc;
  else ptr[2] = (float)b[0] * f - _DAT_006cc7bc;
  ptr[3] = (float)b[1] * f - _DAT_006cc7bc;
}
