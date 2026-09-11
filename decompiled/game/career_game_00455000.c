/* spd-match: far pct=5.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00455000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_LAB_006c8fc4;
undefined4 * __fastcall FUN_00455000(undefined4 val, undefined4 param_1, undefined4 *param_2)

{

  int iVar1;
  undefined4 *puVar2;
  
  param_2[0x19] = val;
  *(undefined1 *)(param_2 + 0x17) = 0xff;
  *(undefined2 *)((int)param_2 + 0x5e) = 0xffff;
  *param_2 = &PTR_LAB_006c8fc4;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  param_2[1] = 0;
  puVar2 = param_2 + 2;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_2[8] = 0;
  param_2[0xf] = 0;
  puVar2 = param_2 + 9;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_2 + 0x10;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_2;
}
