/* spd-match: far pct=12.02 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052BA50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0052bb40();
int __cdecl FUN_0052bb90();
int __cdecl FUN_00532640();
int __cdecl FUN_00532670();
int __cdecl FUN_005326f0();
int __cdecl FUN_0064b7d0();
int __cdecl FUN_0064bc30();
int __cdecl FUN_00674898();
extern int DAT_006f4f40;
void __fastcall FUN_0052ba50(int * obj, undefined4 param_1)

{
  char cVar1;

  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  if (obj[0x6e4] != 0) {
    cVar1 = FUN_0052bb90();
    if (cVar1 == '\0') {
      FUN_00532640();
      FUN_00532670(0x3f800000,0,0x96,0);
      obj[0x6e0] = 0x3f800000;
      *(undefined1 *)(obj + 0x6e2) = 0;
    }
    FUN_005326f0(param_1);
    piVar4 = &local_4;
    local_4 = DAT_006f4f40;
    (**(code **)(*obj + 0x38))(piVar4,9);
    iVar2 = FUN_00674898();
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar2;
      if (0x7fff < iVar2) {
        iVar3 = 0x7fff;
      }
    }
    *(int *)(obj[0x6e4] + 8) = iVar3;
    if (*(int *)obj[0x6e4] != 0) {
      FUN_0064bc30((int *)obj[0x6e4] + 1);
    }
    local_4 = 0;
    if (*(int *)obj[0x6e4] != 0) {
      FUN_0064b7d0(&local_4);
      if (local_4 == 1) {
        FUN_0052bb40(piVar4,iVar2);
      }
    }
  }
  return;
}
