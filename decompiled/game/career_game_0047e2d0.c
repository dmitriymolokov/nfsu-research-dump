/* spd-match: far pct=34.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047E2D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *PTR_LAB_006c8118;
void __fastcall FUN_0047e2d0(undefined4 * obj)

{
  int iVar1;
  int *piVar2;

  *obj = &PTR_LAB_006c8118;
  if ((undefined4 *)obj[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)obj[3])(1);
  }
  iVar1 = obj[1];
  piVar2 = (int *)obj[2];
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}
