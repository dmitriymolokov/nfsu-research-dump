/* spd-match: far pct=12.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00502840 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef000();
int __cdecl FUN_004ffbe0();
bool __fastcall FUN_00502840(int val, int *param_1, int *param_2, int *param_3)

{
  uint uVar1;
  int *piVar2;

  uint uVar3;
  int iVar4;
  int *piVar5;
  
  *param_2 = 0;
  *param_3 = 0;
  uVar1 = *(uint *)(*param_1 + 0x78);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*param_1 + 0x7c);
    piVar5 = piVar2;
    while (*piVar5 != val) {
      uVar3 = uVar3 + 1;
      piVar5 = piVar5 + 3;
      if (uVar1 <= uVar3) {
        return false;
      }
    }
    if (piVar2 + uVar3 * 3 != (int *)0x0) {
      iVar4 = FUN_004ef000();
      *param_3 = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_004ffbe0();
        *param_2 = iVar4;
        return iVar4 != 0;
      }
    }
  }
  return false;
}
