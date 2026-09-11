/* spd-match: far pct=13.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_0078daa0;
extern int DAT_0078daa4;

void FUN_00408100(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if ((int **)DAT_0078daa0 != &DAT_0078daa0) {
    do {
      piVar2 = DAT_0078daa0;
      iVar3 = *DAT_0078daa0;
      piVar1 = (int *)DAT_0078daa0[1];
      *piVar1 = iVar3;
      *(int **)(iVar3 + 4) = piVar1;
      piVar1 = (int *)piVar2[6];
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
        while (iVar3 != 0) {
          iVar3 = (**(code **)(*(int *)piVar2[6] + 8))((int *)piVar2[6]);
        }
        piVar2[6] = 0;
      }
    } while ((int **)DAT_0078daa0 != &DAT_0078daa0);
  }
  DAT_0078daa0 = (int *)&DAT_0078daa0;
  DAT_0078daa4 = &DAT_0078daa0;
  return;
}
