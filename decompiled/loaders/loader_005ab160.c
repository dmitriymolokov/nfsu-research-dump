/* spd-match: far pct=10.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AB160 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007372b4;
extern int DAT_0077af30;
int __fastcall FUN_005ab160(int * obj)

{

  int iVar1;
  int iVar2;
  
  iVar1 = *obj;
  if ((-1 < iVar1) && (iVar2 = (&DAT_0077af30)[iVar1], iVar2 != 0)) {
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    iVar1 = ((int)*(short *)(iVar2 + 0x10) / 2) * 0x88 + 0x27c + iVar2;
    if (DAT_007372b4 != 0) {
      return iVar1;
    }
  }
  return iVar1;
}
