/* spd-match: far pct=3.14 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00592b20();
extern int DAT_0072cc04;
extern unsigned char *DAT_0072cc08;
extern void LAB_00592c03(void);

void FUN_00592b30(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1[7];
  iVar4 = DAT_0072cc04;
  if (piVar6 != param_1 + 7) {
    do {
      piVar1 = (int *)*piVar6;
      if ((char)piVar6[3] == '\0') {
        puVar3 = (undefined4 *)piVar6[2];
        if (puVar3[0x99] == 0) {
          piVar2 = (int *)puVar3[0x96];
          iVar4 = puVar3[0x97];
          if ((((((float)piVar2[9] < *(float *)(iVar4 + 0x2c) ==
                  ((float)piVar2[9] == *(float *)(iVar4 + 0x2c))) ||
                ((float)piVar2[0xb] < *(float *)(iVar4 + 0x24))) ||
               ((float)piVar2[10] < *(float *)(iVar4 + 0x30) ==
                ((float)piVar2[10] == *(float *)(iVar4 + 0x30)))) ||
              (((float)piVar2[0xc] < *(float *)(iVar4 + 0x28) ||
               ((*(char *)((int)piVar2 + 0x1d) == '\0' && (*(char *)(iVar4 + 0x1d) == '\0')))))) ||
             ((iVar4 = (**(code **)(*piVar2 + 0x50))(), iVar4 == 0 ||
              (iVar5 = (**(code **)(*(int *)puVar3[0x97] + 0x50))(), iVar4 = DAT_0072cc04,
              iVar5 == 0)))) {
            iVar4 = *piVar6;
            piVar2 = (int *)piVar6[1];
            *piVar2 = iVar4;
            *(int **)(iVar4 + 4) = piVar2;
            puVar3[0x9c] = 0;
            (**(code **)*puVar3)(1);
            iVar4 = DAT_0072cc04;
            goto LAB_00592c03;
          }
        }
        puVar3[0x98] = 0;
      }
      else {
        piVar2 = (int *)piVar6[1];
        *piVar2 = (int)piVar1;
        piVar1[1] = (int)piVar2;
LAB_00592c03:
        iVar5 = *(int *)(iVar4 + 0x18);
        *piVar6 = *(int *)(iVar4 + 0x10);
        *(int *)(iVar4 + 0x18) = iVar5 + -1;
        *(int **)(iVar4 + 0x10) = piVar6;
      }
      piVar6 = piVar1;
    } while (piVar1 != param_1 + 7);
  }
  if ((int *)param_1[7] == param_1 + 7) {
    iVar4 = *param_1;
    piVar6 = (int *)param_1[1];
    *piVar6 = iVar4;
    *(int **)(iVar4 + 4) = piVar6;
    FUN_00592b20();
    iVar5 = DAT_0072cc08;
    iVar4 = *(int *)(DAT_0072cc08 + 0x18);
    *param_1 = *(int *)(DAT_0072cc08 + 0x10);
    *(int *)(iVar5 + 0x18) = iVar4 + -1;
    *(int **)(iVar5 + 0x10) = param_1;
  }
  return;
}
