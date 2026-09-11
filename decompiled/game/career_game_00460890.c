/* spd-match: far pct=20.13 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00460890 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_00584430();
void __fastcall FUN_00460890(int obj)

{

  int iVar1;
  char cVar2;
  int unaff_ESI;
  
  FUN_00571ea0(0,"PlayerSteering");
  FUN_00571c20(unaff_ESI,obj + 0x70,2,2,0);
  FUN_00571c20(unaff_ESI,obj + 0x74,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x78,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 4,1,1,0);
  FUN_00584430();
  FUN_00584430();
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
