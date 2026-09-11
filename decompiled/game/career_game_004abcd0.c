/* spd-match: far pct=10.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABCD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0059fb80();
extern unsigned char *PTR_DAT_006fb6f8;
void __fastcall FUN_004abcd0(int obj)

{
  char cVar1;
  char cVar2;

  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    pcVar3 = (&PTR_DAT_006fb6f8)[uVar5 * 2];
    iVar4 = (obj + 2) - (int)pcVar3;
    do {
      cVar1 = pcVar3[iVar4];
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      iVar4 = FUN_0059fb80();
      if (iVar4 == 0) {
        FUN_0059fb80();
      }
      return;
    }
    uVar5 = uVar5 + 1;
    if (6 < uVar5) {
      return;
    }
  } while( true );
}
