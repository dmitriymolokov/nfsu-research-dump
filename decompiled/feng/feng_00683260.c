/* spd-match: far pct=60.00 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00683260 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_006831f0();
extern int DAT_00717f18;
void __fastcall FUN_00683260(undefined4 * obj)

{
  code *pcVar1;
  int iVar2;
  int iVar3;

  FUN_0063f190(&DAT_00717f18);
  pcVar1 = (code *)obj[6];
  iVar2 = obj[4];
  iVar3 = obj[3];
  obj[7] = 0;
  FUN_0063f1a0(&DAT_00717f18);
  if (iVar2 == 0) {
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*obj);
    }
  }
  else if (iVar3 == 0) {
    FUN_006831f0();
    return;
  }
  return;
}
