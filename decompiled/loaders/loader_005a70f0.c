/* spd-match: far pct=8.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A70F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_005a70f0(int obj)

{

  char cVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  FUN_00571ea0(0,"FuturePoint");
  FUN_00571c20(unaff_ESI,obj + 0x5c,1,1,1);
  FUN_00571c20(unaff_ESI,obj + 0x5e,2,2,1);
  FUN_00571c20(unaff_ESI,obj + 0x58,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x60,1,1,1);
  FUN_00571c20(unaff_ESI,obj + 4,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x20,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x3c,4,0xffffffff,0);
  iVar3 = obj + 0x24;
  iVar2 = 6;
  do {
    FUN_00571c20(unaff_ESI,iVar3 + -0x1c,4,0xffffffff,0);
    FUN_00571c20(unaff_ESI,iVar3,4,0xffffffff,0);
    FUN_00571c20(unaff_ESI,iVar3 + 0x1c,4,0xffffffff,0);
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar2 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar2 + 0x58 + unaff_ESI);
  cVar1 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}
