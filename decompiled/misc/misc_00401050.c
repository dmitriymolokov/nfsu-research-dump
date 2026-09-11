/* spd-match: far pct=6.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401050 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_007355b4;
extern int DAT_007355b8;
extern int DAT_007355c4;
extern unsigned char *DAT_007355c8;
int __fastcall FUN_00401050(int val)

{
  uint uVar1;

  int iVar2;
  
  uVar1 = DAT_007355b4 + val * 0x40;
  if (DAT_007355b8 <= uVar1) {
    DAT_007355c4 = 1;
    DAT_007355c8 = DAT_007355c8 + val * 0x40;
    return 0;
  }
  iVar2 = DAT_007355b4;
  DAT_007355b4 = uVar1;
  return iVar2;
}
