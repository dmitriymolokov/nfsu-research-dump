/* spd-match: far pct=2.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern void LAB_006381d8(void);
int unaff_retaddr;

void FUN_00638120(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_retaddr;
  int iVar6;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  int *piStack_4;
  
  iVar4 = 0;
  *(undefined4 *)(param_2 + 0x2fc) = 0;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)(param_2 + 0x210));
  iVar6 = 0;
  if (0 < iVar1) {
    piVar5 = (int *)(param_2 + 0x304);
    do {
      (**(code **)(*param_1 + 0x1c))(param_1,*(undefined4 *)(param_2 + 0x210),iVar6,&iStack_18);
      if (iVar4 < 0x100) {
        iVar3 = 0;
        param_1 = piStack_4;
        if (0 < iVar4) {
          piVar2 = (int *)(param_2 + 0x304);
          do {
            if ((((piVar2[-1] == 1) && (param_2 = unaff_retaddr, *piVar2 == iStack_18)) &&
                (piVar2[1] == iStack_14)) && (piVar2[4] == iStack_c)) goto LAB_006381d8;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 6;
          } while (iVar3 < iVar4);
        }
        piVar5[-1] = 1;
        *piVar5 = iStack_18;
        piVar5[1] = iStack_14;
        piVar5[4] = iStack_c;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 6;
      }
LAB_006381d8:
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  *(int *)(param_2 + 0x2fc) = iVar4;
  return;
}
