/* spd-match: far pct=7.32 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00524BB0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_005328b0(int);
extern int __cdecl FUN_00567370(void*, void*, int);
extern float _DAT_006b6698;
int __cdecl FUN_00524bb0(int obj) {
  struct { float s10, s14, s18, s20, s24, s28, s30, s38; } st;
  int ebx = *(int*)(obj + 0x234);
  int esi = FUN_005328b0(ebx + 0x60);
  st.s38 = *(float*)(esi + 0x60);
  st.s24 = *(float*)(ebx + 0x60);
  st.s28 = *(float*)(ebx + 0x68);
  st.s10 = st.s28 - *(float*)(esi + 0x68);
  st.s14 = st.s24 - *(float*)(ebx + 0x64);
  if (_DAT_006b6698 < (st.s10 * st.s10 + st.s14 * st.s14)) return 0;
  st.s18 = 0;
  FUN_00567370(&st.s10, &st.s20, 0);
  return 1;
}
