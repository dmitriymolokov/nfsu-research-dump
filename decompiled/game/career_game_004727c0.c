/* spd-match: far pct=7.48 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004727C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern void LAB_00472822(void);
void __fastcall FUN_004727c0(int obj, int param_1, int param_2)

{
  float fVar1;

  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x240) = 1;
  *(int *)(param_1 + 0x244) = obj;
  *(int *)(param_1 + 0x248) = param_2;
  if (*(int *)(obj + 0x10) == 2) {
    if (*(char *)(obj + 0x1d0) == '\0') goto LAB_00472822;
    fVar1 = *(float *)(obj + 0x1d4);
  }
  else {
    if (*(int *)(param_2 + 0x10) != 2) {
      return;
    }
    if (*(char *)(param_2 + 0x1d0) == '\0') goto LAB_00472822;
    fVar1 = *(float *)(param_2 + 0x1d4);
  }
  if (DAT_006cc7a4 < fVar1) {
    *(undefined1 *)(param_1 + 0x241) = 1;
    return;
  }
LAB_00472822:
  *(undefined1 *)(param_1 + 0x241) = 0;
  return;
}
