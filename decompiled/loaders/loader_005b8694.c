/* spd-match: far pct=17.76 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_01/attempt3_recipe */
#include "ghidra_compat.h"

int __cdecl FUN_m375_thunk_helper();
extern unsigned char UNK_0063b6ea[];
extern int iRam006e760c;
extern int iRam006e75fc;
extern char cRam0070f435;

int __cdecl FUN_005b7369();
extern void LAB_005b8753(void);

int FUN_005b8694(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_c = (int *)0x0;
  iVar2 = FUN_005b7369(param_2,1);
  if (((iVar2 == 0) ||
      (((piVar5 = (int *)(*(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                         *(int *)(iVar2 + 0x18)), piVar5[4] != 0 && (*(int *)(iVar2 + 0x10) == -1))
       || (piVar5[1] != 4)))) || (*piVar5 != 4)) {
    local_8 = -0x7789f794;
LAB_005b8753:
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
    if (param_3 != (char *)0x0) {
      pcVar3 = param_3;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar3 + (1 - (int)(param_3 + 1));
      local_8 = FUN_m375_thunk_helper(pcVar3,&local_c);
      if (local_8 < 0) goto LAB_005b8753;
      pcVar4 = (char *)(**(code **)(*local_c + 0xc))(local_c);
      for (uVar6 = (uint)pcVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar6 = (uint)pcVar3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar4 = *param_3;
        param_3 = param_3 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    piVar5 = *(int **)(iVar2 + 0x18);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      *(undefined4 *)(iVar2 + 0x18) = 0;
    }
    *(int **)(iVar2 + 0x18) = local_c;
  }
  return local_8;
}
