/* spd-match: far pct=8.47 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0057A020 */
#include "ghidra_compat.h"
extern float DAT_006ffdbc;
extern float _DAT_006cca64;
float __fastcall FUN_0057a020(int eax_val, float p1, float p2) {
  int ecx = *(int*)(eax_val + 0x14);
  if (ecx == 0) return _DAT_006cca64;
  if (*(float*)(ecx + 0x60) < p1) return _DAT_006cca64;
  if (*(float*)(ecx + 0x60) < p2) return _DAT_006cca64;
  return ((p2 - p1) / *(float*)(ecx + 0x5c)) / DAT_006ffdbc;
}
