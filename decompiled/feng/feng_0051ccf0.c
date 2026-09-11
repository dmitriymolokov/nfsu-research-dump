/* spd-match: far pct=16.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0051CCF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0051cc10();
int __cdecl FUN_00674898();
extern int _DAT_006f8718;
extern int _DAT_006f871c;
int unaff_ESI;
void __fastcall FUN_0051ccf0(int obj)

{

  int unaff_ESI;
  
  *(int *)(obj + 8) = unaff_ESI;
  FUN_0051cc10(obj);
  _DAT_006f8718 = *(undefined4 *)(unaff_ESI + 0x18);
  _DAT_006f871c = FUN_00674898();
  return;
}
