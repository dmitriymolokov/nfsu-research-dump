/* spd-match: far pct=18.97 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E0560 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f65d0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
extern int DAT_00758954;
extern int _DAT_00758958;
int unaff_EBX;
void __fastcall FUN_004e0560(int val)

{
  int iVar1;
  int iVar2;

  int iVar3;
  int *unaff_EBX;
  
  iVar1 = unaff_EBX[1];
  if (val == -0x6edfbf62) {
    unaff_EBX[1] = 1;
  }
  else if (val == -0x4a68e40f) {
    unaff_EBX[1] = 2;
  }
  if (iVar1 != unaff_EBX[1]) {
    FUN_004f65d0();
    iVar1 = unaff_EBX[iVar1 + 3];
    if (iVar1 != 0) {
      for (iVar2 = *(int *)(iVar1 + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        iVar3 = FUN_004fd230();
        if (*(int *)(iVar2 + 0x30) == iVar3) {
          if (iVar2 != 0) {
            if (iVar2 != *(int *)(iVar1 + 0x54)) {
              *(int *)(iVar1 + 0x54) = iVar2;
              FUN_004ff030(iVar1);
              *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
          break;
        }
      }
    }
    iVar1 = unaff_EBX[unaff_EBX[1] + 3];
    if (iVar1 != 0) {
      for (iVar2 = *(int *)(iVar1 + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        iVar3 = FUN_004fd230();
        if (*(int *)(iVar2 + 0x30) == iVar3) {
          if (iVar2 != 0) {
            if (iVar2 != *(int *)(iVar1 + 0x54)) {
              *(int *)(iVar1 + 0x54) = iVar2;
              FUN_004ff030(iVar1);
              *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
          break;
        }
      }
    }
    if (*unaff_EBX == 0) {
      DAT_00758954 = (uint)(unaff_EBX[1] != 1);
      return;
    }
    if (*unaff_EBX == 1) {
      _DAT_00758958 = (uint)(unaff_EBX[1] != 1);
    }
  }
  return;
}
