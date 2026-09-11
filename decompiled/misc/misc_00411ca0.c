/* spd-match: far pct=58.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00411CA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00411ca0(int obj, int param_1)

{

  int iVar1;
  
  if (obj == *(int *)(param_1 + 0x74)) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(obj + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(obj + 8) + 0xc) = *(undefined4 *)(obj + 0xc);
  }
  if (obj == *(int *)(param_1 + 0x7c)) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(obj + 8);
  }
  else {
    *(undefined4 *)(*(int *)(obj + 0xc) + 8) = *(undefined4 *)(obj + 8);
  }
  if (obj == *(int *)(param_1 + 0x78)) {
    iVar1 = *(int *)(obj + 0xc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(obj + 8);
    }
    *(int *)(param_1 + 0x78) = iVar1;
  }
  *(undefined4 *)(obj + 4) = 0;
  *(undefined4 *)(obj + 0xc) = *(undefined4 *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = obj;
  return;
}
