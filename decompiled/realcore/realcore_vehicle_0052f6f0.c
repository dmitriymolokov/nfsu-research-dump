/* spd-match: far pct=5.68 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052F6F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_0052f6f0(int obj)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;

  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(*(int *)(obj + 100) + 600);
  cVar1 = *(char *)(iVar3 + 0x15);
  if (cVar1 != '\x01') {
    iVar4 = *(int *)(*(int *)(obj + 100) + 0x25c);
    cVar2 = *(char *)(iVar4 + 0x15);
    if (cVar2 != '\x01') {
      iVar6 = 0;
      iVar5 = 0;
      if (cVar1 == '\0') {
        iVar6 = *(int *)(iVar3 + 0x140);
      }
      if (cVar2 == '\0') {
        iVar5 = *(int *)(iVar4 + 0x140);
      }
      if ((iVar6 != 0) && (iVar5 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 2;
}
