/* spd-match: far pct=24.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

extern int DAT_00717e64;
extern int DAT_00717e68;
extern int DAT_00717e6c;

void _GetLcidFromDefault(void)

{
  (*(unsigned short *)&(DAT_00717e64)) = (ushort)DAT_00717e64 | 0x104;
  DAT_00717e6c = GetUserDefaultLCID();
  DAT_00717e68 = DAT_00717e6c;
  return;
}
