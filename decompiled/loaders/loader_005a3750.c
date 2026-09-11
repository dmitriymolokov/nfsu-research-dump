/* spd-match: far pct=7.69 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A3750 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007373a8;
extern int DAT_007373ad;
int __fastcall FUN_005a3750(int val)

{

  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_007373a8)[iVar1 * 2] == val) {
      return 1 << ((&DAT_007373ad)[iVar1 * 8] & 0x1f);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x55);
  return 0;
}
