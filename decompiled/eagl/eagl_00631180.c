/* spd-match: far pct=13.95 flags=/O1 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_00631180 */
#include <windows.h>
extern float _DAT_006a8380;
extern float _DAT_006cc7bc;
void __stdcall FUN_00631180(void* this_ptr, float* out) {
  float f = _DAT_006a8380 * 2.0f;
  unsigned short* p = (unsigned short*)this_ptr;
  out[0] = (float)p[0] * f - _DAT_006cc7bc;
  out[1] = (float)p[1] * f - _DAT_006cc7bc;
  out[2] = (float)p[2] * f - _DAT_006cc7bc;
  out[3] = (float)p[3] * f;
  out[4] = (float)p[4] * f;
  out[5] = (float)p[5] * f;
}
