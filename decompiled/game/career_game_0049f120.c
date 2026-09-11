/* spd-match: far pct=8.39 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049F120 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern int DAT_0073ad3c;
void __fastcall FUN_0049f120(int val, int param_1)

{

  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 8) = DAT_0073ad3c;
  if (((val == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar1 = FUN_004ef050(0xb0116b0e);
  }
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x4c), iVar3 != 0)) {
    while (iVar2 = FUN_004fd230(), *(int *)(iVar3 + 0x30) != iVar2) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      if (iVar3 != *(int *)(iVar1 + 0x54)) {
        *(int *)(iVar1 + 0x54) = iVar3;
        FUN_004ff030(iVar1);
        *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  return;
}
