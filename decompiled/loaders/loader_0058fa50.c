/* spd-match: far pct=20.31 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058FA50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040be70();
int __cdecl FUN_0040bef0();
extern int DAT_00737888;
extern int DAT_00737889;
void __fastcall FUN_0058fa50(int obj)

{

  int iVar1;
  
  iVar1 = *(int *)(obj + 0xc4) * 0x3c;
  if ((&DAT_00737889)[iVar1] != '\0') {
    FUN_0040be70();
    if ((&DAT_00737888)[iVar1] != '\0') {
      FUN_0040bef0();
    }
  }
  return;
}
