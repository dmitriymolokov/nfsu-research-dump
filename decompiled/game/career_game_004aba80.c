/* spd-match: far pct=46.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABA80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_004aba80(int obj)

{

  *(undefined4 *)(obj + 0x2f928) = 2;
  if (*(int **)(obj + 0x2ed5c) != (int *)0x0) {
                    
                    
    (**(code **)(**(int **)(obj + 0x2ed5c) + 0xc))();
    return;
  }
  return;
}
