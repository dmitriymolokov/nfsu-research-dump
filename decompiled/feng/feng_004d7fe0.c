/* spd-match: far pct=64.77 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D7FE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004d7eb0();
int __cdecl FUN_004d8040();
int __cdecl FUN_004d80e0();
int __cdecl FUN_004d8370();
extern int DAT_00745e40;
undefined4 __fastcall FUN_004d7fe0(int obj)

{
  char cVar1;

  cVar1 = FUN_004d7eb0();
  if (cVar1 == '\0') {
    if (DAT_00745e40 == 1) {
      if (*(char *)(obj + 0x10) == '\x1e') {
        if (*(byte *)(obj + 0x11) < 2) {
          return 1;
        }
        if (((*(byte *)(obj + 0x11) < 3) && (cVar1 = FUN_004d8040(), cVar1 != '\0')) &&
           (cVar1 = FUN_004d8370(), cVar1 != '\0')) {
          return 1;
        }
        cVar1 = FUN_004d80e0();
        if ((cVar1 != '\0') && (cVar1 = FUN_004d8370(), cVar1 != '\0')) {
          return 1;
        }
      }
    }
    else if (DAT_00745e40 == 2) {
      return 1;
    }
  }
  return 0;
}
