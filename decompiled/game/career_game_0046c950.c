/* spd-match: far pct=15.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046C950 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
void __fastcall FUN_0046c950(int obj)

{

  int iVar1;
  char cVar2;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x3d) != '\0' || *(char *)(unaff_ESI + 0x3c) != '\0') {
    *(undefined4 *)(obj + 0xa0) = 0;
  }
  FUN_00571ea0(0,"Engine");
  FUN_00571c20(unaff_ESI,obj + 0x14,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x78,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x7c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x80,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x88,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x84,4,4,0);
  FUN_00571c20(unaff_ESI,obj + 0x8c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x90,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x94,4,4,0);
  FUN_00571c20(unaff_ESI,obj + 0x98,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0x9c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,obj + 0xa4,4,0xffffffff,0);
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
