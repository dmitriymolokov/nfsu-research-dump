/* spd-match: far pct=8.94 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_004436D0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_005679b0(void* p, int val);
int __fastcall FUN_004436d0(int val, int edx_unused, int param_1, int param_2, int param_3) {
  int limit = *(int*)(param_1 + param_2 * 4 + 0x24);
  int i = *(int*)(param_1 + param_2 * 4 + 0x20);
  if (val) i = (val - *(int*)(param_1 + 0x1c)) / 180 + 1;
  if (i < limit) {
    unsigned char* p = (unsigned char*)(i * 180 + *(int*)(param_1 + 0x1c));
    do {
      if (p[0x18] == 0xFF || p[0x18] == (unsigned char)param_3) {
        float* f = (float*)p;
        if (f[10] <= *(float*)0 && *(float*)0 <= f[12] && f[11] <= ((float*)0)[1] && ((float*)0)[1] <= f[13]) {
          if (FUN_005679b0(p + 0x3c, *(int*)(p + 0x38))) return (int)p;
        }
      }
      i++; p += 180;
    } while (i < limit);
  }
  return 0;
}
