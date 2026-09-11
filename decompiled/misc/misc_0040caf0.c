/* spd-match: far pct=7.29 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_0078bc40;

void FUN_0040caf0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((int **)DAT_0078bc40 != &DAT_0078bc40) {
    do {
      piVar2 = DAT_0078bc40;
      iVar3 = *DAT_0078bc40;
      piVar1 = (int *)DAT_0078bc40[1];
      *piVar1 = iVar3;
      *(int **)(iVar3 + 4) = piVar1;
      piVar1 = (int *)piVar2[0xb];
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar3 != 0) {
          iVar3 = (**(code **)(*(int *)piVar2[0xb] + 8))((int *)piVar2[0xb]);
        }
        piVar2[0xb] = 0;
      }
      piVar1 = (int *)piVar2[8];
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar3 != 0) {
          iVar3 = (**(code **)(*(int *)piVar2[8] + 8))((int *)piVar2[8]);
        }
        piVar2[8] = 0;
      }
    } while ((int **)DAT_0078bc40 != &DAT_0078bc40);
  }
  return;
}
