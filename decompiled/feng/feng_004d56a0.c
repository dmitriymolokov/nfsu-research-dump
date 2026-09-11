/* spd-match: far pct=10.92 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004D56A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00414a60();
int __cdecl FUN_004d5790();
int __cdecl FUN_004f8dd0();
int __cdecl FUN_004f8ec0();
int __cdecl FUN_004f9060();
int __cdecl FUN_004f9240();
void __fastcall FUN_004d56a0(int val, int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;

  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (val == 0x72619778) {
      FUN_004f9060();
    }
    else if (val == -0x6ee3f5b5) {
      piVar6 = *(int **)(param_1 + 0x98);
      piVar2 = (int *)(param_1 + 0x98);
      if (((piVar6 != piVar2) &&
          (puVar1 = (undefined4 *)(param_1 + 0xa0), *(undefined4 **)(param_1 + 0xa0) != puVar1)) &&
         (puVar3 = (undefined4 *)**(int **)(param_1 + 0xa8), puVar3 != puVar1)) {
        iVar8 = 0;
        *(undefined4 **)(param_1 + 0xa8) = puVar3;
        for (puVar4 = *(undefined4 **)(param_1 + 0xac);
            (puVar4 != puVar1 && (iVar8 = iVar8 + 1, puVar4 != puVar3));
            puVar4 = (undefined4 *)*puVar4) {
        }
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          if (piVar6 == (int *)0x0) break;
          piVar6 = (int *)*piVar6;
        } while (piVar6 != piVar2);
        if (iVar7 < iVar8) {
          *(undefined4 *)(param_1 + 0xac) = **(undefined4 **)(param_1 + 0xac);
        }
        if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0x9c)) {
          FUN_004f8ec0(*(int *)(param_1 + 0xb0));
          uVar5 = **(undefined4 **)(param_1 + 0xb0);
          *(undefined4 *)(param_1 + 0xb0) = uVar5;
          FUN_004f8dd0(uVar5);
        }
        FUN_004f9240(piVar2);
      }
    }
  }
  else {
    FUN_004d5790(param_1,1);
  }
  FUN_00414a60();
  FUN_00414a60();
  return;
}
