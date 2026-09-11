/* spd-match: far pct=6.25 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00444840 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00444840(int obj, undefined4 *param_1, int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  uVar2 = *param_1;
  *(undefined4 *)(obj * 0x44 + 0xd8 + param_2) = param_1[1];
  puVar1 = (undefined4 *)(obj * 0x44 + 0xd4 + param_2);
  *puVar1 = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1[6] = 0xffffffff;
  *(undefined2 *)(puVar1 + 5) = 0;
  return;
}
