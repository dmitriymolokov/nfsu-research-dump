/* spd-match: far pct=15.62 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00497A00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00438a60();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043b850();
int __cdecl FUN_0043d8c0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f66f0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00647b70();
extern int DAT_006ca778;
extern int DAT_00735710;
extern int DAT_0073578c;
void __fastcall FUN_00497a00(undefined4 val, int param_1)

{
  undefined4 *puVar1;
  char cVar2;

  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = FUN_004fd230();
  if (((((param_1 == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) &&
      ((DAT_0073578c == 0 || (iVar4 = FUN_004ef050(uVar3), iVar4 == 0)))) ||
     (*(int *)(iVar4 + 0x18) != 2)) {
    iVar4 = 0;
  }
  uVar3 = FUN_004fd230();
  if (((((param_1 == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) &&
      ((DAT_0073578c == 0 || (iVar5 = FUN_004ef050(uVar3), iVar5 == 0)))) ||
     (*(int *)(iVar5 + 0x18) != 2)) {
    iVar5 = 0;
  }
  FUN_004f6910(iVar4);
  FUN_004f6910(iVar5);
  cVar2 = FUN_0043a2e0();
  if (cVar2 != '\0') {
    cVar2 = FUN_00438a60();
    if (cVar2 != '\0') {
      FUN_004f6970(iVar4);
      FUN_004f6970(iVar5);
      FUN_0043b850(val);
      iVar4 = FUN_00647b70();
      iVar6 = FUN_0043d8c0(val,0);
      iVar6 = iVar6 - iVar4;
      iVar4 = iVar6;
      if (iVar6 < 0) {
        iVar4 = -iVar6;
      }
      FUN_004f68a0(&DAT_006ca778,iVar4);
      if (iVar6 < 1) {
        if (iVar6 != 0) {
          FUN_004f66f0();
          return;
        }
        FUN_004f66f0();
        FUN_004f6910(iVar5);
        return;
      }
      FUN_004f66f0();
      return;
    }
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      puVar1 = DAT_00735710;
      bVar7 = DAT_00735710 != (undefined4 *)0x0;
      *(undefined4 *)(iVar4 + 0x5c) = 0xf4ca33b4;
      if (bVar7) {
        (**(code **)*puVar1)(iVar4);
      }
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffd | 0x400000;
    }
    FUN_004f6970(iVar4);
  }
  return;
}
