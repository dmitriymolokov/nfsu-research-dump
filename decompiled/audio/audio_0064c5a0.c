/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2107/batches/20260724T133825Z_w0_tc0 */
#include "ghidra_compat.h"

extern unsigned char *DAT_00713ee7;
extern int DAT_00713f08;

void FUN_0064c5a0(undefined4 param_1)

{
  ((undefined4 *)(unsigned int)(&DAT_00713f08))[(int)(unsigned int)DAT_00713ee7] = param_1;
  DAT_00713ee7 = DAT_00713ee7 + '\x01';
  return;
}
