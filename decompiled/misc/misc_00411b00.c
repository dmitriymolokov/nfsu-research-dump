/* spd-match: far pct=7.45 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

undefined4 FUN_00411b00(void)

{
  BOOL BVar1;
  int iVar2;
  _OSVERSIONINFOA *p_Var3;
  _OSVERSIONINFOA local_a8;
  
  p_Var3 = &local_a8;
  for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->dwOSVersionInfoSize = 0;
    p_Var3 = (_OSVERSIONINFOA *)&p_Var3->dwMajorVersion;
  }
  local_a8.dwOSVersionInfoSize = 0x9c;
  BVar1 = GetVersionExA(&local_a8);
  if (BVar1 == 0) {
    local_a8.dwOSVersionInfoSize = 0x94;
    BVar1 = GetVersionExA(&local_a8);
    if (BVar1 == 0) {
      return 0;
    }
  }
  if (local_a8.dwPlatformId != 1) {
    return 0;
  }
  return 1;
}
