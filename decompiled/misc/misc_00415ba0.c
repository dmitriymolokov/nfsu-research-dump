/* spd-match: far pct=15.71 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00415BA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_00415be2(void);
void __fastcall FUN_00415ba0(int val, int param_1)

{
  float fVar1;

  if (val == -0x6edfbf62) {
    fVar1 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 100);
  }
  else {
    if (val != -0x4a68e40f) goto LAB_00415be2;
    fVar1 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x5c);
  }
  *(float *)(param_1 + 0x5c) = fVar1;
  if (*(float *)(param_1 + 0x54) < fVar1) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  }
  if (*(float *)(param_1 + 0x5c) < *(float *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
  }
LAB_00415be2:
                    
                    
  (**(code **)(*(int *)(param_1 + 0x40) + 0x10))();
  return;
}
