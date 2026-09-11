/* spd-match: far pct=12.79 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_006eb720;

void FUN_0067fef5(void)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  DVar1 = GetCurrentProcessId();
  DVar2 = GetCurrentThreadId();
  DVar3 = GetTickCount();
  QueryPerformanceCounter(&local_14);
  DAT_006eb720 = local_c.dwHighDateTime ^ local_c.dwLowDateTime ^ DVar1 ^ DVar2 ^ DVar3 ^
                 local_14.s.HighPart ^ local_14.s.LowPart;
  if (DAT_006eb720 == 0) {
    DAT_006eb720 = 0xbb40e64e;
  }
  return;
}
