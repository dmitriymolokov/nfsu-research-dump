/* spd-match: far pct=16.08 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D7610 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
void __fastcall FUN_004d7610(int obj)

{

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(obj + 0xc);
  uVar1 = FUN_004fd230();
  if (((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) || (iVar2 = FUN_004ffb70(), iVar2 == 0)
     ) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar2 = FUN_004ef050(uVar1);
  }
  if ((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + 0x4c), iVar4 != 0)) {
    while (iVar3 = FUN_004fd230(), *(int *)(iVar4 + 0x30) != iVar3) {
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 == 0) {
        return;
      }
    }
    if (iVar4 != 0) {
      if (iVar4 != *(int *)(iVar2 + 0x54)) {
        *(int *)(iVar2 + 0x54) = iVar4;
        FUN_004ff030(iVar2);
        *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
  }
  return;
}
