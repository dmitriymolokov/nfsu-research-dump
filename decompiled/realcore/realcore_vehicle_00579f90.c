/* spd-match: far pct=7.50 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_00579F90 */
#include <windows.h>
extern float DAT_006ffdbc;
void __stdcall FUN_00579f90(int eax_val, float param_2, char cl_val) {
  int iVar1 = *(int*)(eax_val + 0x14);
  if (iVar1 == 0) return;
  if (cl_val == 0) {
    *(float*)(iVar1 + 0x64) = param_2;
  } else {
    *(float*)(iVar1 + 0x64) = DAT_006ffdbc * *(float*)(iVar1 + 0x5c) * param_2;
  }
}
