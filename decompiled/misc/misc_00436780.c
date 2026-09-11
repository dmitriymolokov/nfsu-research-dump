/* spd-match: far pct=8.51 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00436780 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0073618c;
extern int DAT_00736190;
void __fastcall FUN_00436780(int obj)

{
  int iVar1;
  int iVar2;

  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(obj + 0xc);
  *(undefined4 *)(obj + 0x18) = 1;
  iVar2 = DAT_00736190;
  iVar1 = DAT_0073618c;
  while( true ) {
    if ((iVar3 != 0) || (iVar1 == 0)) {
      return;
    }
    iVar4 = (iVar1 << 7) % iVar2;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    if (obj == iVar3 * 0x44 + iVar1) break;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    obj = iVar4 * 0x44 + iVar1;
    *(undefined4 *)(obj + 0x18) = 1;
    iVar3 = *(int *)(obj + 0xc);
  }
  return;
}
