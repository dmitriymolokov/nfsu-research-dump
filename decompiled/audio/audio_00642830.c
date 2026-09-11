/* spd-match: far pct=7.14 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00642830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_EDI;
void __fastcall FUN_00642830(int val, int param_1)

{
  char cVar1;

  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *unaff_EDI;
  
  uVar4 = 0;
  pcVar5 = unaff_EDI;
  while( true ) {
    pcVar2 = unaff_EDI;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = val - 1U;
    if ((uint)((int)pcVar2 - (int)(unaff_EDI + 1)) < val - 1U) {
      pcVar2 = unaff_EDI;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (int)(unaff_EDI + 1);
    }
    if (uVar3 < uVar4) break;
    cVar1 = *pcVar5;
    if ((cVar1 < 'A') || ('Z' < cVar1)) {
      pcVar5[param_1 - (int)unaff_EDI] = cVar1;
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    else {
      pcVar5[param_1 - (int)unaff_EDI] = cVar1 + ' ';
      uVar4 = uVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  *(undefined1 *)(uVar4 + param_1) = 0;
  return;
}
