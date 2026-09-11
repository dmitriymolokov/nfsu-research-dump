/* spd-match: far pct=12.82 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00415B20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_00415b86(void);
void __fastcall FUN_00415b20(int val, int param_1)

{
  float fVar1;

  if (val == -0x6edfbf62) {
    fVar1 = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xdc);
  }
  else {
    if (val != -0x4a68e40f) goto LAB_00415b86;
    fVar1 = *(float *)(param_1 + 0xdc) + *(float *)(param_1 + 0xd4);
  }
  *(float *)(param_1 + 0xd4) = fVar1;
  if (*(float *)(param_1 + 0xcc) < fVar1) {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xcc);
  }
  if (*(float *)(param_1 + 0xd4) < *(float *)(param_1 + 0xd0)) {
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
  }
LAB_00415b86:
                    
                    
  (**(code **)(*(int *)(param_1 + 0xb8) + 0x10))();
  return;
}
