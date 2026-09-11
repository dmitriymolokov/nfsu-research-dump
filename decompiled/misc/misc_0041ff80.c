/* spd-match: far pct=9.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041FF80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ff50();
int __cdecl FUN_00571c20();
int unaff_ESI;
void __fastcall FUN_0041ff80(int obj)

{

  int iVar1;
  int *unaff_ESI;
  int local_4;
  
  local_4 = -1;
  if (*unaff_ESI != 0) {
    local_4 = (int)*(short *)(*unaff_ESI + 10);
  }
  FUN_00571c20(obj,&local_4,1,4,0);
  if (*(char *)(obj + 0x3d) != '\0') {
    if (-1 < local_4) {
      iVar1 = FUN_0041ff50();
      *unaff_ESI = iVar1;
      return;
    }
    *unaff_ESI = 0;
  }
  return;
}
