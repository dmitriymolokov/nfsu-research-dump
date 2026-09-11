/* spd-match: far pct=12.24 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004754E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004754e0(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)

{

  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(obj + 0x24) = param_1;
  *(undefined4 *)(obj + 0x28) = param_2;
  *(undefined4 *)(obj + 0x2c) = param_3;
  *(undefined4 *)(obj + 0x30) = param_4;
  puVar1 = (undefined4 *)(obj + 0x34);
  iVar2 = 4;
  do {
    puVar1[0x21] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
