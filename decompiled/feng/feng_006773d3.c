/* spd-match: far pct=8.16 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00677354();
extern int DAT_006eb878;

void __cdecl __lock(int _File)

{
  int iVar1;
  
  if ((&DAT_006eb878)[_File * 2] == 0) {
    iVar1 = FUN_00677354(_File);
    if (iVar1 == 0) {
      __amsg_exit(0x11);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_006eb878)[_File * 2]);
  return;
}
