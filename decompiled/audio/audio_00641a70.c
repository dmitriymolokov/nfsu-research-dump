/* spd-match: far pct=29.03 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

undefined4 FUN_00641a70(int param_1)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  if (pvVar1 != (HANDLE)0x0) {
    *(HANDLE *)(param_1 + 4) = pvVar1;
    return 1;
  }
  return 0;
}
