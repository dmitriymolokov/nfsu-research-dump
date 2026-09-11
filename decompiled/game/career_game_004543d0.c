/* spd-match: far pct=16.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004543D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0044d570();
int __cdecl FUN_00454330();
int unaff_EDI;
int unaff_ESI;
undefined4 __fastcall FUN_004543d0(int obj)

{
  int iVar1;
  int iVar2;

  undefined4 uVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  iVar1 = *(int *)(obj + 0x3a8);
  *unaff_EDI = 0;
  *unaff_ESI = 0;
  iVar2 = *(int *)(iVar1 + 0xb8);
  if ((iVar2 != -1) && (*(int *)(iVar1 + 8 + iVar2 * 4) != 0)) {
    uVar3 = FUN_0044d570();
    *unaff_EDI = uVar3;
    uVar3 = FUN_00454330();
    *unaff_ESI = uVar3;
    return 600;
  }
  return 0xffffffff;
}
