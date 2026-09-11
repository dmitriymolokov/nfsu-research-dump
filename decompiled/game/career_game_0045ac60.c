/* spd-match: far pct=14.78 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0045AC60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_0045ac60(int obj)

{

  int iVar1;
  char cVar2;
  int unaff_ESI;
  
  FUN_00571ea0(0,"DrivingChoice");
  FUN_00571c20(unaff_ESI,obj,1,4,1);
  FUN_00571c20(unaff_ESI,obj + 0xc,1,1,0);
  FUN_00571c20(unaff_ESI,obj + 8,4,0xffffffff,0);
  iVar1 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar1 + 0x58 + unaff_ESI);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}
