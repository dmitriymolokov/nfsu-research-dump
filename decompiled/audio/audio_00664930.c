/* spd-match: far pct=27.59 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.4/va_00664930 */
#include "ghidra_compat.h"

int __cdecl FUN_00664920(...);

struct ThisCallBox {
  void FUN_00664930(undefined4 param_1);
};

void ThisCallBox::FUN_00664930(undefined4 param_1)
{
  int iVar1;
  struct {
    int val1;
    int val2;
    undefined4 val3;
    int val4;
  } local_10;
  
  *(uint *)((int)this + 8) |= (uint)this;
  *(undefined4 *)((int)this + 0xc) = 0x7465726d;
  iVar1 = FUN_00664920();
  if (*(code **)(iVar1 + 0x6e4) != (code *)0x0) {
    local_10.val3 = param_1;
    local_10.val1 = 3;
    local_10.val2 = 0x64697363;
    local_10.val4 = 0;
    (**(code **)(iVar1 + 0x6e4))(iVar1,&local_10,*(undefined4 *)(iVar1 + 0x6e8));
  }
}
