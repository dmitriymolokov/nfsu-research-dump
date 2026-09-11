/* spd-match: far pct=14.29 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_0042C4B0 */
#include "ghidra_compat.h"
extern int DAT_0078a2f0; extern float _DAT_006ccdb8; extern float _DAT_006ccdb4;
int __cdecl FUN_0042c4b0(int esi, int param_1) {
  int** p_ptr = (int**)(esi + 0x5c4);
  if (*p_ptr != 0) { ((void (__stdcall *)(int, int))(**p_ptr))(1, param_1); }
  *p_ptr = 0; *(int*)(esi + 0x5c8) = -1; *(int*)(esi + 0x5cc) = -1;
  if (DAT_0078a2f0 == 0x3e9) {
    float* f = (float*)(*(int*)(esi + 4) + 0x60);
    float d1 = f[0] - _DAT_006ccdb8; float d2 = f[1] - _DAT_006ccdb4;
    if ((d1*d1 + d2*d2) < 0) return 0;
  }
  return 0;
}
