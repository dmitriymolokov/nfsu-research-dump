/* spd-match: far pct=16.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00457450 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int unaff_ESI;
void __fastcall FUN_00457450(int obj)

{
  undefined4 *puVar1;

  undefined4 *unaff_ESI;
  
  if (*(char *)(obj + 0xf8) == '\0') {
    if (*(int *)(obj + 0xf0) == 0) {
      *(undefined4 *)(obj + 0xf0) = 0x13;
    }
    else {
      *(int *)(obj + 0xf0) = *(int *)(obj + 0xf0) + -1;
    }
    *(bool *)(obj + 0xf8) = *(int *)(obj + 0xf4) == *(int *)(obj + 0xf0);
    puVar1 = (undefined4 *)(obj + *(int *)(obj + 0xf0) * 0xc);
    *puVar1 = *unaff_ESI;
    puVar1[1] = unaff_ESI[1];
    puVar1[2] = unaff_ESI[2];
  }
  return;
}
