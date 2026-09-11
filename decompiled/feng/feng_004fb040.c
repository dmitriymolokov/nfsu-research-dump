/* spd-match: far pct=9.26 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FB040 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fd230();
extern void LAB_004fb08e(void);
extern void LAB_004fb0bd(void);
int unaff_ESI;
uint __fastcall FUN_004fb040(int obj, undefined4 param_1, int param_2, int param_3, int param_4, int param_5)

{
  int iVar1;

  uint uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  uVar2 = *(uint *)(unaff_ESI + 100) & 4;
  if ((uVar2 != 0) && (param_2 <= param_5)) {
    iVar1 = **(int **)(unaff_ESI + 0x58);
    uVar3 = FUN_004fd230();
    (**(code **)(iVar1 + 0x18))(uVar3);
LAB_004fb08e:
    iVar1 = **(int **)(unaff_ESI + 0x58);
    uVar3 = FUN_004fd230();
    uVar2 = (**(code **)(iVar1 + 0x18))(uVar3);
    return uVar2 & 0xffffff00;
  }
  if ((*(uint *)(unaff_ESI + 100) & 2) != 0) {
    if (uVar2 == 0) {
      uVar2 = obj + param_4;
      if ((int)uVar2 < 0) goto LAB_004fb0bd;
    }
    else {
      uVar2 = param_3 + obj;
      if ((int)uVar2 < 0) {
LAB_004fb0bd:
        iVar1 = **(int **)(unaff_ESI + 0x58);
        uVar3 = FUN_004fd230();
        uVar2 = (**(code **)(iVar1 + 0x18))(uVar3);
        return uVar2 & 0xffffff00;
      }
      param_2 = param_2 - param_5;
    }
    if (param_2 <= (int)uVar2) goto LAB_004fb08e;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}
