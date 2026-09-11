/* spd-match: far pct=12.90 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0062E840 */
#include "ghidra_compat.h"
extern float _DAT_006a8278;
extern float _DAT_006a8280;
extern float _DAT_006cc7bc;
extern float _DAT_0070d5a8;
struct Data { unsigned short d[7]; };
void __stdcall FUN_0062e840(Data *ctx, float *dest) {
  float f = _DAT_006a8278 + _DAT_006a8278;
  dest[2] = (float)ctx->d[2] * f - _DAT_006cc7bc;
  dest[3] = (float)ctx->d[3] * f - _DAT_006cc7bc;
  dest[4] = (float)ctx->d[4] * f;
  dest[5] = (float)ctx->d[5] * f;
  ((unsigned char *)dest)[24] = (unsigned char)ctx->d[6];
  float f2 = _DAT_0070d5a8 * _DAT_006a8278;
  dest[0] = (float)ctx->d[0] * f2 + _DAT_006a8280;
  dest[1] = (float)ctx->d[1] * f2 + _DAT_006a8280;
}
