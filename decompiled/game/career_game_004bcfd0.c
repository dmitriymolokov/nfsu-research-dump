/* spd-match: far pct=21.05 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BCFD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0075afa4;
uint __fastcall FUN_004bcfd0(int obj)

{

  int *piVar1;
  
  piVar1 = &DAT_0075afa4;
  do {
    if (*(int *)(*(int *)(obj + 0x48) + 0x738) == *piVar1) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
    piVar1 = piVar1 + 0xd2;
  } while ((int)piVar1 < 0x75f144);
  return (uint)piVar1 & 0xffffff00;
}
