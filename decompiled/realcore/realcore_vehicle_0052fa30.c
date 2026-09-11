/* spd-match: far pct=12.12 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052FA30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_0052fa46(void);
void __fastcall FUN_0052fa30(int obj)

{

  int *piVar1;
  int *piVar2;
  
  if (*(int *)(obj + 0x24) == 0) goto LAB_0052fa46;
  piVar2 = (int *)(*(int *)(obj + 0x24) + -0x210);
  while( true ) {
    if (obj == -0x24) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(obj + -0x1ec);
    }
    if (piVar2 == piVar1) break;
    (**(code **)(*piVar2 + 0x24))();
    if (piVar2[0x84] == 0) {
LAB_0052fa46:
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(piVar2[0x84] + -0x210);
    }
  }
  return;
}
