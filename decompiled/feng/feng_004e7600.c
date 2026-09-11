/* spd-match: far pct=8.20 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E7600 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004e6660();
int __cdecl FUN_004e6ac0();
int __cdecl FUN_004e7860();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f8000();
extern int DAT_00746104;
extern int DAT_0078eaf8;
void __fastcall FUN_004e7600(int obj)

{
  int iVar1;
  bool bVar2;

  int iVar3;
  int *piVar4;
  
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) &&
      ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 == 0 || (*(int *)(iVar3 + 0x18) == 0)))) &&
     (((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 == 0 || (*(int *)(iVar3 + 0x18) == 0)) &&
      ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 == 0 || (*(int *)(iVar3 + 0x18) == 0)))))) {
    if (DAT_0078eaf8 != 0) {
      iVar3 = FUN_004e6660();
      if (iVar3 != 0) {
        FUN_004f8000(iVar3);
        FUN_004e6ac0();
      }
      DAT_0078eaf8 = 0;
    }
    bVar2 = true;
  }
  else {
    DAT_0078eaf8 = 1;
    bVar2 = false;
  }
  iVar3 = 0;
  if (0 < *(int *)(obj + 0x40)) {
    piVar4 = (int *)(obj + 0x44);
    do {
      if ((((*piVar4 != 0) && (iVar1 = *(int *)(*piVar4 + 0x10), iVar1 != 0x49885419)) &&
          (iVar1 != 0x1c7fcf8b)) && (iVar1 != 0x46fce6dd)) {
        if ((*(char *)(iVar3 + 0x144 + obj) == '\0') || (!bVar2)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        FUN_004e7860(iVar1,iVar1,iVar1,iVar1);
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < *(int *)(obj + 0x40));
  }
  return;
}
