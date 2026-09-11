/* spd-match: far pct=9.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005883E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_FUN_006b94f0;
void __fastcall FUN_005883e0(undefined4 * obj, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  
  obj[0x2b] = param_1;
  obj[0x28] = param_3;
  obj[0x29] = param_2;
  obj[5] = param_5;
  pcVar1 = (char *)(obj + 3);
  *obj = &PTR_FUN_006b94f0;
  obj[0x2a] = param_4;
  obj[6] = 0;
  *pcVar1 = 'S';
  pcVar3 = pcVar1;
  do {
    cVar2 = pcVar3[(int)("Suspnsn" + (1 - (int)pcVar1))];
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar2;
  } while (cVar2 != '\0');
  return;
}
