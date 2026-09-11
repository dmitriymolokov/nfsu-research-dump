/* spd-match: far pct=31.58 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FA0B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004fa0b0(char * obj, undefined4 param_1, int param_2, int param_3)

{
  char cVar1;

  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (obj != (char *)0x0) {
    cVar1 = *obj;
    while (cVar1 != '\0') {
      iVar2 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar1 = obj[iVar2];
    }
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      if (iVar2 == param_3 + -1) break;
      *(undefined1 *)(iVar2 + param_2) = 0x2a;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  *(undefined1 *)(iVar2 + param_2) = 0;
  return;
}
