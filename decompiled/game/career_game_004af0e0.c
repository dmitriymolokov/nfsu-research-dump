/* spd-match: far pct=13.25 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AF0E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004323f0();
int __cdecl FUN_0057f2b0();
int unaff_ESI;
void __fastcall FUN_004af0e0(undefined4 val)

{

  int unaff_ESI;
  
  FUN_004323f0((int *)(unaff_ESI + 0x10),val);
  FUN_0057f2b0(1);
  *(undefined4 *)(unaff_ESI + 0x1c9c) = 1;
  if (*(int *)(unaff_ESI + 0x1ca8) == 0) {
    *(undefined4 *)(unaff_ESI + 0x1cb0) = 1;
    return;
  }
  if (*(int *)(unaff_ESI + 0x1cb0) == 0) {
    *(uint *)(unaff_ESI + 0x1cb0) =
         (uint)(*(int *)(unaff_ESI + 0x1570) != *(int *)(unaff_ESI + 0x10));
  }
  return;
}
