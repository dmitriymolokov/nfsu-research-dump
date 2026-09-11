/* spd-match: far pct=13.22 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00580A40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_0057d200();
void __fastcall FUN_00580a40(int obj)

{
  int iVar1;

  char cVar2;
  int unaff_EDI;
  
  FUN_00571ea0(0,"DriverInfo");
  FUN_00571c20(obj,unaff_EDI,1,1,1);
  FUN_00571c20(obj,unaff_EDI + 1,1,1,1);
  FUN_00571c20(obj,unaff_EDI + 0x735,1,1,1);
  FUN_00571c20(obj,unaff_EDI + 3,1,1,1);
  FUN_00571c20(obj,unaff_EDI + 4,1,4,1);
  FUN_00571c20(obj,unaff_EDI + 0x738,4,0xffffffff,0);
  FUN_0057d200();
  iVar1 = *(char *)(obj + 0x40) * 0x10 + 0x4c + obj;
  *(int *)(iVar1 + 0xc) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
