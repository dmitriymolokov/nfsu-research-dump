/* spd-match: far pct=6.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/m39/va_006849D0 */
#include "ghidra_compat.h"

longlong __fastcall __allshl(byte param_1,int param_2,uint val)

{
  if (0x3f < param_1) {
    return 0;
  }
  if (param_1 < 0x20) {
    return CONCAT44(param_2 << (param_1 & 0x1f) | val >> 0x20 - (param_1 & 0x1f),
                    val << (param_1 & 0x1f));
  }
  return (ulonglong)(val << (param_1 & 0x1f)) << 0x20;
}
