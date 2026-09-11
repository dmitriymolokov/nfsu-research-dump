/* spd-match: far pct=28.07 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ACCE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_00734588;
extern unsigned int uRam00000c50;
undefined4 __fastcall FUN_004acce0(int obj)

{

  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(DAT_00734588 + 0xd0);
  do {
    if (*piVar2 == *(int *)(obj + 8)) {
      return *(undefined4 *)(iVar1 * 0xc90 + DAT_00734588 + 0xc50);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x324;
  } while (iVar1 < 0x23);
  return uRam00000c50;
}
