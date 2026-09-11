/* spd-match: far pct=6.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_0065bf50();
int __cdecl FUN_0065bf6d();

uint FUN_00657cd0(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int local_a4 [3];
  uint local_98;
  _OSVERSIONINFOA local_94;
  
  bVar1 = false;
  local_94.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_94);
  uVar3 = 1;
  if ((local_94.dwPlatformId == 1) && (local_94.dwMinorVersion == 0)) {
    bVar1 = true;
  }
  iVar2 = FUN_0065bf50();
  if (iVar2 != 0) {
    FUN_0065bf6d(local_a4,0);
    if (local_a4[0] != 0) {
      FUN_0065bf6d(local_a4,1);
      if (((local_98 & 0x2000000) != 0) && (!bVar1)) {
        uVar3 = 3;
      }
      FUN_0065bf6d(local_a4,0x80000001);
      if ((int)local_98 < 0) {
        uVar3 = uVar3 | 4;
      }
    }
  }
  return uVar3;
}
