/* spd-match: far pct=12.61 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00415BF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_00415c56(void);
void __fastcall FUN_00415bf0(int val, int param_1)

{
  float fVar1;

  if (val == -0x6edfbf62) {
    fVar1 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0xa0);
  }
  else {
    if (val != -0x4a68e40f) goto LAB_00415c56;
    fVar1 = *(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x98);
  }
  *(float *)(param_1 + 0x98) = fVar1;
  if (*(float *)(param_1 + 0x90) < fVar1) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x90);
  }
  if (*(float *)(param_1 + 0x98) < *(float *)(param_1 + 0x94)) {
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x94);
  }
LAB_00415c56:
                    
                    
  (**(code **)(*(int *)(param_1 + 0x7c) + 0x10))();
  return;
}
