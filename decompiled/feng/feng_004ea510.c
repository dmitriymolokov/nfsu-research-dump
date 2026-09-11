/* spd-match: far pct=30.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004EA510 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ea6b0();
int __cdecl FUN_004ea720();
int __cdecl FUN_004ea7a0();
int __cdecl FUN_004ea810();
int __cdecl FUN_004ea880();
void __fastcall FUN_004ea510(int obj)

{

  switch(*(undefined4 *)(obj + 0x40)) {
  case 0:
    FUN_004ea810();
    return;
  case 1:
    FUN_004ea6b0();
    return;
  case 2:
    FUN_004ea720();
    return;
  case 3:
    FUN_004ea7a0();
    return;
  case 4:
    FUN_004ea880();
  }
  return;
}
