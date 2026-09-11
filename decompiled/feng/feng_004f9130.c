/* spd-match: far pct=18.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F9130 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f8dd0();
int __cdecl FUN_004f8ec0();
int __cdecl FUN_004f9240();
extern void LAB_004f9220(void);
void __fastcall FUN_004f9130(int val, char param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;

  int iVar6;
  int iVar7;
  int *unaff_ESI;
  
  if ((int *)*unaff_ESI == unaff_ESI) {
    return;
  }
  piVar5 = unaff_ESI + 2;
  if ((int *)unaff_ESI[2] == piVar5) {
    return;
  }
  if (val == 1) {
    piVar1 = *(int **)unaff_ESI[4];
    if (piVar1 == piVar5) {
      return;
    }
    puVar2 = (undefined4 *)((undefined4 *)unaff_ESI[4])[1];
    *puVar2 = piVar1;
    piVar1[1] = (int)puVar2;
    iVar7 = *piVar1;
    piVar3 = (int *)unaff_ESI[4];
    *piVar1 = (int)piVar3;
    *(int **)(iVar7 + 4) = piVar3;
    piVar3[1] = (int)piVar1;
    *piVar3 = iVar7;
    piVar1 = (int *)unaff_ESI[5];
    piVar3 = (int *)unaff_ESI[4];
    if (piVar1 == piVar3) {
      unaff_ESI[5] = piVar3[1];
    }
    else {
      iVar7 = 0;
      for (piVar4 = piVar1; (piVar4 != piVar5 && (iVar7 = iVar7 + 1, piVar4 != piVar3));
          piVar4 = (int *)*piVar4) {
      }
      iVar6 = 0;
      for (piVar5 = (int *)*unaff_ESI;
          (piVar5 != unaff_ESI && (iVar6 = iVar6 + 1, piVar5 != (int *)0x0));
          piVar5 = (int *)*piVar5) {
      }
      if (iVar6 < iVar7) {
        unaff_ESI[5] = *piVar1;
      }
    }
    if (unaff_ESI[6] == unaff_ESI[1]) goto LAB_004f9220;
    FUN_004f8ec0(unaff_ESI[6]);
    iVar7 = *(int *)unaff_ESI[6];
  }
  else {
    if (val != -1) goto LAB_004f9220;
    piVar1 = (int *)unaff_ESI[4];
    if (piVar1 == (int *)*piVar5) {
      return;
    }
    piVar5 = (int *)piVar1[1];
    iVar7 = *piVar1;
    *piVar5 = iVar7;
    *(int **)(iVar7 + 4) = piVar5;
    puVar2 = (undefined4 *)piVar5[1];
    piVar1 = (int *)unaff_ESI[4];
    *puVar2 = piVar1;
    piVar5[1] = (int)piVar1;
    piVar1[1] = (int)puVar2;
    *piVar1 = (int)piVar5;
    if (*(int *)(unaff_ESI[5] + 4) == unaff_ESI[4]) {
      unaff_ESI[5] = unaff_ESI[4];
    }
    if (unaff_ESI[6] == *unaff_ESI) goto LAB_004f9220;
    FUN_004f8ec0(unaff_ESI[6]);
    iVar7 = *(int *)(unaff_ESI[6] + 4);
  }
  unaff_ESI[6] = iVar7;
  FUN_004f8dd0(iVar7);
LAB_004f9220:
  if (param_1 == '\0') {
    return;
  }
  FUN_004f9240();
  return;
}
