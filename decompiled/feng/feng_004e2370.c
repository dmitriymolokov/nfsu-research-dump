/* spd-match: far pct=19.78 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E2370 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0800();
int __cdecl FUN_004f3f90();
int __cdecl FUN_00504320();
extern int DAT_0073578c;
extern int DAT_00746104;
int __fastcall FUN_004e2370(int * obj)

{
  int iVar1;

  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*obj + 0x14))();
  if (((char)iVar2 != '\0') && (iVar2 = 0, *(int *)(obj[0x10] + 0x10) != 0)) {
    FUN_00504320(obj[3]);
    iVar1 = DAT_0073578c;
    iVar2 = obj[3];
    if (DAT_0073578c != 0) {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar2 = 0;
      if ((iVar3 != 0) && (iVar2 = 0, *(int *)(iVar3 + 0x18) != 0)) {
        iVar2 = FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar3 + 0x18));
      }
    }
  }
  return iVar2;
}
