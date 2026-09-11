/* spd-match: far pct=5.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

void FUN_0065f930(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  pcVar2 = *(char **)(param_1 + 0xc);
  if (*pcVar2 == -0x12) {
    *(char **)(param_1 + 0xc) = pcVar2 + 1;
    uVar1 = *(undefined2 *)(pcVar2 + 1);
    (*(unsigned short *)&(param_1)) = CONCAT11((char)uVar1,(char)((ushort)uVar1 >> 8));
    *(char **)(iVar3 + 0xc) = pcVar2 + 3;
    *(float *)(iVar3 + 4) = (float)(int)(short)param_1;
    (*(unsigned short *)&(param_1)) =
         CONCAT11((char)*(undefined2 *)(pcVar2 + 3),(char)((ushort)*(undefined2 *)(pcVar2 + 3) >> 8)
                 );
    *(char **)(iVar3 + 0xc) = pcVar2 + 5;
    iVar4 = 0x1c;
    *(float *)(iVar3 + 8) = (float)(int)(short)param_1;
    do {
      (*(unsigned short *)&(param_1)) =
           CONCAT11((char)**(undefined2 **)(iVar3 + 0xc),
                    (char)((ushort)**(undefined2 **)(iVar3 + 0xc) >> 8));
      **(float **)(iVar3 + 0x10) = (float)(int)(short)param_1;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 4;
      iVar4 = iVar4 + -1;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 2;
    } while (iVar4 != 0);
  }
  return;
}
