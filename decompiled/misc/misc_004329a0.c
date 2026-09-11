/* spd-match: far pct=7.87 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004329A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ee6f0;
extern int DAT_006f1d74;
extern int DAT_006f1d80;
extern int DAT_006f1d88;
extern int DAT_006f1d8c;
extern int DAT_0073465c;
void __fastcall FUN_004329a0(undefined1 * obj)

{
  int iVar1;
  int iVar2;

  undefined1 uVar3;
  
  iVar2 = DAT_0073465c;
  iVar1 = DAT_006ee6f0;
  uVar3 = (undefined1)DAT_006f1d74;
  if (DAT_0073465c == 0) {
    uVar3 = 1;
  }
  *obj = uVar3;
  uVar3 = iVar1 != 0;
  if (iVar2 != 0) {
    uVar3 = (undefined1)DAT_006f1d80;
  }
  obj[1] = uVar3;
  uVar3 = (undefined1)DAT_006f1d88;
  obj[2] = 0;
  obj[3] = 7;
  obj[4] = 8;
  obj[5] = 2;
  if (iVar2 == 0) {
    uVar3 = 0x80;
  }
  obj[6] = uVar3;
  uVar3 = (undefined1)DAT_006f1d8c;
  if (iVar2 == 0) {
    uVar3 = 0x80;
  }
  obj[7] = uVar3;
  return;
}
