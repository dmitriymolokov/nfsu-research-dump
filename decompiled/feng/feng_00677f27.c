/* spd-match: far pct=77.78 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern code *DAT_00717d70;

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if (DAT_00717d70 != (code *)0x0) {
    iVar1 = (*DAT_00717d70)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
