/* spd-match: far pct=18.18 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051D860 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_0051d87c(void);
void __fastcall FUN_0051d860(int obj)

{

  int iVar1;
  int iVar2;
  
  if (*(int *)(obj + 0xe4) == 0) goto LAB_0051d87c;
  iVar2 = *(int *)(obj + 0xe4) + -0x270;
  while( true ) {
    if (obj == -0xe4) {
      iVar1 = 0;
    }
    else {
      iVar1 = obj + -0x18c;
    }
    if (iVar2 == iVar1) break;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x20) + 0x24))();
    }
    if (*(int *)(iVar2 + 0x270) == 0) {
LAB_0051d87c:
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x270) + -0x270;
    }
  }
  return;
}
