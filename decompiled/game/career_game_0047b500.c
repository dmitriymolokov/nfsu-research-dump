/* spd-match: far pct=19.70 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_0047B500 */
#include "ghidra_compat.h"
struct Data { int vals[16]; };
void __fastcall FUN_0047b500(int obj, int param_1, struct Data *esi) {
  if (*(int *)(obj + 0xc) == 0) {
    esi->vals[1] = 0; esi->vals[2] = 0; esi->vals[3] = 0; esi->vals[4] = 0;
    esi->vals[6] = 0; esi->vals[7] = 0; esi->vals[8] = 0; esi->vals[9] = 0;
    esi->vals[11] = 0; esi->vals[12] = 0; esi->vals[13] = 0; esi->vals[14] = 0;
    esi->vals[0] = 0x3f800000; esi->vals[5] = 0x3f800000;
    esi->vals[10] = 0x3f800000; esi->vals[15] = 0x3f800000;
  }
}
