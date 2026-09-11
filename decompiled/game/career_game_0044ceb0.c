/* spd-match: far pct=11.90 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044CEB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0045ac60();
int __cdecl FUN_00571ea0();
int __cdecl FUN_0059ba20();
int __cdecl FUN_005a4f90();
void __fastcall FUN_0044ceb0(int obj)

{
  int iVar1;

  char cVar2;
  int unaff_EDI;
  
  FUN_00571ea0(0,"DrivingInformation");
  if (*(char *)(obj + 0x3d) != '\0' || *(char *)(obj + 0x3c) != '\0') {
    *(undefined4 *)(unaff_EDI + 4) = 0;
    *(undefined1 *)(unaff_EDI + 0x388) = 0xff;
  }
  FUN_0059ba20(unaff_EDI + 0x38c,obj);
  FUN_0045ac60();
  FUN_005a4f90();
  iVar1 = *(char *)(obj + 0x40) * 0x10 + 0x4c + obj;
  *(int *)(iVar1 + 0xc) = *(int *)(obj + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
