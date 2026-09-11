/* spd-match: far pct=6.50 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F9060 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8dd0();
int __cdecl FUN_004f8ec0();
int __cdecl FUN_004f9240();
void __fastcall FUN_004f9060(int val)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;

  int *piVar4;
  int iVar5;
  int *unaff_ESI;
  int iVar6;
  
  piVar4 = (int *)*unaff_ESI;
  if ((piVar4 != unaff_ESI) && (piVar1 = unaff_ESI + 2, (int *)unaff_ESI[2] != piVar1)) {
    if (val == 1) {
      piVar2 = *(int **)unaff_ESI[4];
      if (piVar2 == piVar1) {
        return;
      }
      iVar6 = 0;
      unaff_ESI[4] = (int)piVar2;
      for (piVar3 = (int *)unaff_ESI[5]; (piVar3 != piVar1 && (iVar6 = iVar6 + 1, piVar3 != piVar2))
          ; piVar3 = (int *)*piVar3) {
      }
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
        if (piVar4 == (int *)0x0) break;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != unaff_ESI);
      if (iVar5 < iVar6) {
        unaff_ESI[5] = *(int *)unaff_ESI[5];
      }
      if (unaff_ESI[6] != unaff_ESI[1]) {
        FUN_004f8ec0(unaff_ESI[6]);
        iVar6 = *(int *)unaff_ESI[6];
        unaff_ESI[6] = iVar6;
        FUN_004f8dd0(iVar6);
        FUN_004f9240(unaff_ESI);
        return;
      }
    }
    else if (val == -1) {
      if (unaff_ESI[4] == *piVar1) {
        return;
      }
      iVar6 = *(int *)(unaff_ESI[4] + 4);
      unaff_ESI[4] = iVar6;
      if (iVar6 == *(int *)(unaff_ESI[5] + 4)) {
        unaff_ESI[5] = iVar6;
      }
      if ((int *)unaff_ESI[6] != piVar4) {
        FUN_004f8ec0(unaff_ESI[6]);
        iVar6 = *(int *)(unaff_ESI[6] + 4);
        unaff_ESI[6] = iVar6;
        FUN_004f8dd0(iVar6);
      }
    }
    FUN_004f9240(unaff_ESI);
  }
  return;
}
