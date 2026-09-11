/* spd-match: far pct=6.08 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057D160 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0057d160(undefined4 val, undefined4 param_1, undefined4 *param_2, undefined4 param_3, undefined1 param_4, undefined1 param_5)

{

  int iVar1;
  undefined4 *puVar2;
  
  *param_2 = val;
  *(undefined1 *)((int)param_2 + 5) = param_4;
  *(undefined1 *)((int)param_2 + 6) = param_5;
  *(undefined1 *)(param_2 + 1) = 0;
  param_2[0x111] = 0;
  *(undefined1 *)((int)param_2 + 7) = 1;
  *(undefined1 *)((int)param_2 + 0x425) = 0xff;
  puVar2 = param_2 + 0x113;
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_2 + 0x18b;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_2 + 0x1a9;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x1010101;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_2 + 2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_2[0x10a] = 0;
  param_2[0x10d] = 0;
  param_2[0x10c] = 0;
  param_2[0x110] = 0;
  param_2[0x10f] = 0;
  param_2[0x10e] = 0;
  param_2[0x1c7] = 0;
  *(undefined1 *)(param_2 + 0x109) = 0xff;
  return;
}
