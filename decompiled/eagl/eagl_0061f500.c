/* spd-match: far pct=11.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

extern int DAT_006dfacc;
extern int DAT_006eb1e0;
extern code *DAT_007095a8;
extern char stack0x0000000c;

int FUN_0061f500(int param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 <= DAT_006dfacc) {
    if (DAT_007095a8 != (code *)0x0) {
      iVar1 = (*DAT_007095a8)(param_2);
      return iVar1;
    }
    iVar1 = FID_conflict__vfwprintf((FILE *)&DAT_006eb1e0,param_2,&stack0x0000000c);
  }
  return iVar1;
}
