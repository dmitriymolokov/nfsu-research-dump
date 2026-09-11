/* spd-match: far pct=54.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_006ee18c;

void __cdecl ___initconin(void)

{
  DAT_006ee18c = CreateFileA("CONIN$",0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  return;
}
