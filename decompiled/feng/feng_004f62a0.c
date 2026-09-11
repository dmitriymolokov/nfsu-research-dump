/* spd-match: far pct=1.56 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F62A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004eede0();
int __cdecl FUN_004fd1e0();
extern unsigned char *DAT_0073578c;
void __fastcall FUN_004f62a0(undefined4 val, int param_1, undefined4 param_2)

{
  int iVar1;

  int iVar2;
  
  if (DAT_0073578c != 0) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar1 + 0xdc;
    if ((iVar2 == 0) || (iVar2 = FUN_004fd1e0(iVar2), iVar2 == 0)) {
      FUN_004eede0(iVar1,val,param_1 + 0x10,param_2);
    }
  }
  return;
}
