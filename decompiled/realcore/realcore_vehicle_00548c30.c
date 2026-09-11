/* spd-match: far pct=72.00 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00548C30 */
#include "ghidra_compat.h"
extern float _DAT_006cc858;
struct Data { float pad1[0x4c]; float v130; float v134; float pad2[1]; float v13c; };
float __fastcall FUN_00548c30(int val, struct Data *ctx) {
  float f = (float)val;
  if (val < 0) f += _DAT_006cc858;
  f = f * ctx->v13c + ctx->v130;
  if (f < ctx->v130) f = ctx->v130;
  if (f > ctx->v134) f = ctx->v134;
  return f;
}
