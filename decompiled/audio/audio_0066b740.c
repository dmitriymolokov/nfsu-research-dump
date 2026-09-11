/* spd-match: far pct=24.69 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0066B740 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0066b710();
int unaff_ESI;
int __fastcall FUN_0066b740(undefined4 * obj)

{

  int unaff_ESI;
  
  *obj = 0;
  *(int *)(unaff_ESI + 0xa8) =
       (*(int *)(unaff_ESI + 0xa0) + *(int *)(unaff_ESI + 0xa8)) % *(int *)(unaff_ESI + 0xa4);
  FUN_0066b710(*(undefined4 *)(unaff_ESI + 0x6c),0);
  return (((*(int *)(unaff_ESI + 0xa8) - *(int *)(unaff_ESI + 0xac)) + *(int *)(unaff_ESI + 0xa4)) %
         *(int *)(unaff_ESI + 0xa4)) / *(int *)(unaff_ESI + 0xa0);
}
