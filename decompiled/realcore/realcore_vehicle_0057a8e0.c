/* spd-match: far pct=74.29 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0057A8E0 */
#include "ghidra_compat.h"
extern float DAT_006cc7a4;
float __fastcall FUN_0057a8e0(int val, int base) {
  int *p = (int *)base;
  if (val >= 0 && val < 5) {
    return *(float *)(base + 0x14);
  }
  if (val >= 11 && val < 17) {
    return *(float *)(base + (val * 4) - 0x14);
  }
  return DAT_006cc7a4;
}
