/* spd-match: far pct=6.35 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004ABF10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ac0b0(...);

struct ThisCallBox {
  void FUN_004abf10(int val, float param_2);
};
void ThisCallBox::FUN_004abf10(int val, float param_2)

{

  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(((int)this) + 0x237c);
  do {
    if (val == *piVar2) {
      iVar1 = FUN_004ac0b0();
      *(float *)(iVar1 + 0x340) = param_2 + *(float *)(iVar1 + 0x340);
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xd2;
  } while (iVar1 < 0x14);
  return;
}
