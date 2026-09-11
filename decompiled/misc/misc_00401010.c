/* spd-match: far pct=12.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00401010 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_007355b4;
extern int DAT_007355b8;
extern int DAT_007355c4;
extern unsigned char *DAT_007355c8;
int __fastcall FUN_00401010(int obj)

{
  uint uVar1;

  uint uVar2;
  int iVar3;
  
  uVar2 = obj + 0xfU & 0xfffffff0;
  uVar1 = DAT_007355b4 + uVar2;
  if (DAT_007355b8 <= uVar1) {
    DAT_007355c4 = 1;
    DAT_007355c8 = DAT_007355c8 + uVar2;
    return 0;
  }
  iVar3 = DAT_007355b4;
  DAT_007355b4 = uVar1;
  return iVar3;
}
