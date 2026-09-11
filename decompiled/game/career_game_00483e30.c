/* spd-match: far pct=6.93 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00483E30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0073457c;
void __fastcall FUN_00483e30(int obj, float *param_1)

{
  float fVar1;
  float fVar2;

  fVar2 = (float)*(ushort *)(*(int *)(obj + 0x1c) + 0x264);
  fVar1 = fVar2 * ((int)DAT_0073457c) + (float)*(ushort *)(*(int *)(obj + 0x1c) + 0xc4);
  fVar2 = fVar2 * param_1[9];
  *param_1 = fVar1;
  if (fVar1 != param_1[2]) {
    *(undefined2 *)(param_1 + 0xb) = 2;
  }
  param_1[1] = fVar2;
  if (fVar2 != param_1[3]) {
    *(undefined2 *)(param_1 + 0xb) = 2;
  }
  return;
}
