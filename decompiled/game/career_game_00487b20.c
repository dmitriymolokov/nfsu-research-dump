/* spd-match: far pct=15.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00487B20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00487b20(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)

{

  *(undefined4 *)(obj + 0x140) = param_2;
  *(undefined4 *)(obj + 0x144) = param_1;
  *(undefined4 *)(obj + 0x148) = param_3;
  *(undefined4 *)(obj + 0x14c) = param_7;
  *(undefined4 *)(obj + 0x150) = param_8;
  *(undefined4 *)(obj + 0x2c) = 5;
  *(undefined4 *)(obj + 0x160) = param_4;
  *(undefined4 *)(obj + 0x164) = param_5;
  *(undefined4 *)(obj + 0x168) = param_6;
  *(undefined4 *)(obj + 0x170) = param_9;
  *(undefined4 *)(obj + 0x174) = param_10;
  *(undefined4 *)(obj + 0x178) = param_11;
  return;
}
