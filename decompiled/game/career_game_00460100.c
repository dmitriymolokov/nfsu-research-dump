/* spd-match: far pct=9.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00460100 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00432c90();
extern int _DAT_006cca94;
undefined4 __fastcall FUN_00460100(int obj)

{
  int iVar1;

  float10 fVar2;
  
  if ((*(char *)(obj + 0x228) == '\0') &&
     (iVar1 = *(int *)(obj + 0x1f0), *(int *)(*(int *)(iVar1 + 0x14) + 4) != 3)) {
    fVar2 = (float10)FUN_00432c90();
    if (((float10)_DAT_006cca94 < fVar2) &&
       ((iVar1 = *(int *)(iVar1 + 0x1c), iVar1 == 0 || (*(short *)(iVar1 + 0x10) == 0)))) {
      return 1;
    }
  }
  return 0;
}
