/* spd-match: far pct=14.67 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B1590 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f70();
int __cdecl FUN_00495fc0();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
int __cdecl FUN_004ffb70();
extern int DAT_00734588;
extern int DAT_0073578c;
extern void LAB_004b166b(void);
void __fastcall FUN_004b1590(int val, int param_1, int *param_2)

{
  int iVar1;

  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (val != 1) {
    if ((val == 0) || (val == 2)) {
      FUN_00495fc0();
      FUN_00495f70();
      FUN_004f6850("Loading...");
    }
    return;
  }
  FUN_004f68c0(0x20,"BLUEPRINT_%s",*param_2 * 0xc90 + DAT_00734588);
  uVar2 = FUN_004fd230();
  FUN_004ad7b0(uVar2);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) goto LAB_004b166b;
    iVar3 = FUN_004ef050(0x5d75c3b4);
  }
  if (iVar3 != 0) {
    for (iVar1 = *(int *)(iVar3 + 0x4c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar4 = FUN_004fd230();
      if (*(int *)(iVar1 + 0x30) == iVar4) {
        if (iVar1 != 0) {
          if (iVar1 != *(int *)(iVar3 + 0x54)) {
            *(int *)(iVar3 + 0x54) = iVar1;
            FUN_004ff030(iVar3);
            *(undefined4 *)(*(int *)(iVar3 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar1 + 0x10) = 0;
        }
        break;
      }
    }
  }
LAB_004b166b:
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x5d75c3b4);
    }
  }
  FUN_004f6970(iVar3);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c != 0) {
      uVar2 = FUN_004ef050(0xd719922f);
      FUN_004f6910(uVar2);
      return;
    }
    iVar3 = 0;
  }
  FUN_004f6910(iVar3);
  return;
}
