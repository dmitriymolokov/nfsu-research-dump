/* spd-match: far pct=20.83 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050B280 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00504320();
extern int DAT_0073578c;
extern int DAT_00746104;
undefined4 __fastcall FUN_0050b280(int obj)

{
  int iVar1;

  int iVar2;
  undefined4 uVar3;
  
  FUN_00504320(*(undefined4 *)(obj + 0xc));
  iVar1 = DAT_0073578c;
  uVar3 = *(undefined4 *)(obj + 0xc);
  if (DAT_0073578c != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    uVar3 = 0;
    if ((iVar2 != 0) && (uVar3 = 0, *(int *)(iVar2 + 0x18) != 0)) {
      uVar3 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  return uVar3;
}
