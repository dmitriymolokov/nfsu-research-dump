/* spd-match: far pct=8.33 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AA9F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00571c20();
int __cdecl FUN_00571ea0();
int __cdecl FUN_005aaa90();
void __fastcall FUN_005aa9f0(int obj, int param_1)

{

  char cVar1;
  int iVar2;
  
  FUN_00571ea0(0,"TrafficIntersection");
  FUN_00571c20(obj,param_1 + 0xc,1,4,1);
  iVar2 = 0;
  do {
    FUN_00571c20(obj,param_1 + 6 + iVar2,1,1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 0x16;
  do {
    FUN_005aaa90();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(char *)(obj + 0x40) * 0x10 + 0x4c + obj;
  *(int *)(iVar2 + 0xc) = *(int *)(obj + 0x150) - *(int *)(iVar2 + 0xc);
  cVar1 = *(char *)(obj + 0x40) + -1;
  *(char *)(obj + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(obj + 0x44)) {
    *(undefined4 *)(obj + 0x44) = 0xffffffff;
  }
  return;
}
