/* spd-match: far pct=14.48 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D5790 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004d5df0();
int __cdecl FUN_004d5e70();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f8dd0();
int __cdecl FUN_004f8ec0();
int __cdecl FUN_004f9130();
int __cdecl FUN_004f9240();
extern int DAT_006ca778;
extern unsigned char *PTR_LAB_006c7804;
void __fastcall FUN_004d5790(int val, int param_1, char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;

  int iVar8;
  int *piVar9;
  int iVar10;
  undefined **ppuVar11;
  
  iVar2 = *(int *)(param_1 + 0xb0);
  if (val == 0x72619778) {
    FUN_004f9130(0);
  }
  else if (((val == -0x6ee3f5b5) &&
           (puVar1 = (undefined4 *)(param_1 + 0x98), *(undefined4 **)(param_1 + 0x98) != puVar1)) &&
          (piVar9 = (int *)(param_1 + 0xa0), *(int **)(param_1 + 0xa0) != piVar9)) {
    piVar3 = (int *)**(int **)(param_1 + 0xa8);
    if (piVar3 != piVar9) {
      piVar4 = (int *)(*(int **)(param_1 + 0xa8))[1];
      *piVar4 = (int)piVar3;
      piVar3[1] = (int)piVar4;
      iVar10 = *piVar3;
      piVar4 = *(int **)(param_1 + 0xa8);
      *piVar3 = (int)piVar4;
      *(int **)(iVar10 + 4) = piVar4;
      piVar4[1] = (int)piVar3;
      *piVar4 = iVar10;
      piVar3 = *(int **)(param_1 + 0xac);
      piVar4 = *(int **)(param_1 + 0xa8);
      if (piVar3 == piVar4) {
        *(int *)(param_1 + 0xac) = piVar4[1];
      }
      else {
        iVar10 = 0;
        for (piVar5 = piVar3; (piVar5 != piVar9 && (iVar10 = iVar10 + 1, piVar5 != piVar4));
            piVar5 = (int *)*piVar5) {
        }
        iVar8 = 0;
        for (puVar6 = (undefined4 *)*puVar1;
            (puVar6 != puVar1 && (iVar8 = iVar8 + 1, puVar6 != (undefined4 *)0x0));
            puVar6 = (undefined4 *)*puVar6) {
        }
        if (iVar8 < iVar10) {
          *(int *)(param_1 + 0xac) = *piVar3;
        }
      }
      if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0x9c)) {
        FUN_004f8ec0(*(int *)(param_1 + 0xb0));
        uVar7 = **(undefined4 **)(param_1 + 0xb0);
        *(undefined4 *)(param_1 + 0xb0) = uVar7;
        FUN_004f8dd0(uVar7);
      }
    }
  }
  piVar9 = *(int **)(param_1 + 0xa0);
  if (piVar9 != (int *)(param_1 + 0xa0)) {
    iVar10 = 1;
    do {
      if (piVar9[2] != 0) {
        if (iVar10 + -1 < 9) {
          ppuVar11 = &PTR_LAB_006c7804;
        }
        else {
          ppuVar11 = (undefined **)&DAT_006ca778;
        }
        FUN_004f68c0(0x20,ppuVar11,iVar10);
        iVar10 = iVar10 + 1;
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)(param_1 + 0xa0));
  }
  FUN_004f9240(param_1 + 0x98);
  if ((iVar2 != *(int *)(param_1 + 0xb0)) && (param_2 != '\0')) {
    FUN_004d5e70(param_1,*(int *)(param_1 + 0xb0),"Grabbed");
  }
  FUN_004d5df0();
  return;
}
