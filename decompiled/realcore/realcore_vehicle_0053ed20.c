/* spd-match: far pct=4.69 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053ED20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0053e4f0();
int __cdecl FUN_0053ec30();
void __fastcall FUN_0053ed20(undefined4 val, undefined4 param_1)

{

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0053e4f0(param_1,val);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xa0);
    puVar3 = *(undefined4 **)(iVar1 + 0x9c);
    if (0 < iVar2) {
      do {
        if (puVar3[4] != 0) {
          FUN_0053ec30(*puVar3);
        }
        puVar3 = puVar3 + 5;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}
