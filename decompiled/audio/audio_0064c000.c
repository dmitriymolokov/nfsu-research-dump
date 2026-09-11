/* spd-match: far pct=9.43 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_10/thiscall_attempt2_mutex-api */
#include "ghidra_compat.h"

BOOL __stdcall ReleaseMutex(HANDLE);

int __cdecl FUN_0064c380(...);
extern int DAT_00713c50;

struct ThisCallBox {
  undefined4 FUN_0064c000(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_0064c000(undefined4 param_2) {
  undefined4 uVar1;
  
  WaitForSingleObject((HANDLE)(unsigned int)(DAT_00713c50),0xffffffff);
  uVar1 = FUN_0064c380(((undefined4)this),param_2,0,0x18,0xc);
  ReleaseMutex((HANDLE)(unsigned int)(DAT_00713c50));
  return uVar1;
}
