/* spd-match: far pct=8.75 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_006308F0 */
#include "ghidra_compat.h"
int __cdecl FUN_00629350(float f);
struct ThisCallBox {
  unsigned int FUN_006308f0(float param_2, unsigned int param_3, int param_4);
};
unsigned int ThisCallBox::FUN_006308f0(float param_2, unsigned int param_3, int param_4) {
  float f1 = param_2;
  float f2 = (float)param_3;
  if (f1 < f2) return 0;
  if (f1 > f2) return 1;
  return 2;
}
