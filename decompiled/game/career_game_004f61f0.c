/* spd-match: far pct=16.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F61F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004eede0();
int __cdecl FUN_004f5ab0();
int __cdecl FUN_004fd1e0();
extern unsigned char *DAT_0073578c;
void __fastcall FUN_004f61f0(undefined4 val)

{
  int iVar1;

  int iVar2;
  int iVar3;
  
  iVar3 = DAT_0073578c;
  if (DAT_0073578c != 0) {
    iVar1 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar1 + 0xdc;
    if ((iVar2 == 0) || (iVar2 = FUN_004fd1e0(iVar2), iVar2 == 0)) {
      FUN_004eede0(iVar1,val,0x14,0xff);
      iVar3 = DAT_0073578c;
    }
    FUN_004f5ab0(iVar3);
    return;
  }
  return;
}
