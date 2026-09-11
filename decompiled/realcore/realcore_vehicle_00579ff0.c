/* spd-match: far pct=11.90 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00579FF0 */
#include "ghidra_compat.h"
extern float _DAT_006cca68;
int __cdecl FUN_0057a020(float, int);
float __cdecl FUN_00579ff0(int eax_val, int param_1) {
  int ecx = *(int *)(eax_val + 0x14);
  float f = _DAT_006cca68;
  if (ecx != 0 && *(signed char *)(ecx + 0x34) >= 0) {
    f = FUN_0057a020(*(float *)(ecx + 0x64), param_1);
  }
  return f;
}
