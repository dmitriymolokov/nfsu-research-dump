/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABDE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004abde0(int obj, undefined4 param_1, char *param_2)

{
  char cVar1;

  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  pcVar2 = (char *)(obj + 0x2ed20);
  *pcVar2 = cVar1;
  if (cVar1 != '\0') {
    pcVar3 = pcVar2;
    do {
      cVar1 = pcVar3[(int)(param_2 + (1 - (int)pcVar2))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}
