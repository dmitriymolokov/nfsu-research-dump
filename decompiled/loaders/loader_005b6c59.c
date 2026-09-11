/* spd-match: far pct=4.15 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_01/attempt4_recipe */
#include "ghidra_compat.h"

int __cdecl FUN_m375_thunk_helper();
typedef int _PtFuncCompare;
extern unsigned char UNK_0063b6ea[];
extern int iRam006e760c;
extern int iRam006e75fc;
extern unsigned char cRam0070f434;

extern void LAB_005b6e9c(void);

int FUN_005b6c59(int *param_1,int *param_2,int *param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar2 = (int *)*param_1;
  uVar9 = 0;
  local_c = (int *)0x0;
  local_8 = piVar2[4];
  iVar7 = piVar2[1];
  iVar3 = *piVar2;
  local_10 = 0;
  if ((param_4 != 0) || (local_8 == 0)) {
    local_8 = 1;
  }
  if (-1 < iVar7) {
    if (iVar7 < 4) {
      uVar6 = piVar2[6] * piVar2[5] * local_8;
      if (iVar3 == 1) {
        if (uVar6 != 0) {
          do {
            if (*param_2 == 0) break;
            iVar7 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *(uint *)(*(int *)(*param_2 + 8) + 0x18) = (uint)(*(int *)(*param_3 + iVar7) != 0);
            *param_2 = *(int *)(*param_2 + 0xc);
          } while (uVar9 < uVar6);
        }
        *param_3 = *param_3 + uVar6 * 4;
      }
      else if (iVar3 == 2) {
        uVar9 = 0;
        if (uVar6 != 0) {
          do {
            if (*param_2 == 0) break;
            *(undefined4 *)(*(int *)(*param_2 + 8) + 0x18) = *(undefined4 *)(*param_3 + uVar9 * 4);
            uVar9 = uVar9 + 1;
            *param_2 = *(int *)(*param_2 + 0xc);
          } while (uVar9 < uVar6);
        }
        *param_3 = *param_3 + uVar6 * 4;
      }
      else {
        if (iVar3 != 3) {
          return -0x7fffbffb;
        }
        if (uVar6 != 0) {
          do {
            if (*param_2 == 0) break;
            *(double *)(*(int *)(*param_2 + 8) + 0x18) = (double)*(float *)(*param_3 + uVar9 * 4);
            uVar9 = uVar9 + 1;
            *param_2 = *(int *)(*param_2 + 0xc);
          } while (uVar9 < uVar6);
        }
        *param_3 = *param_3 + uVar6 * 4;
      }
      *param_1 = *param_1 + 0x1c;
      goto LAB_005b6e9c;
    }
    if (iVar7 == 4) {
      if (iVar3 == 4) {
        while ((local_8 != 0 && (local_c = (int *)0x0, *param_2 != 0))) {
          pcVar8 = *(char **)*param_3;
          if (pcVar8 != (char *)0x0) {
            pcVar4 = pcVar8;
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            pcVar4 = pcVar4 + (1 - (int)(pcVar8 + 1));
            local_10 = FUN_m375_thunk_helper(pcVar4,&local_c);
            if (local_10 < 0) goto LAB_005b6e9c;
            pcVar5 = (**(char * (**)())(*local_c + 0xc))(local_c);
            for (uVar9 = (uint)pcVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar9 = (uint)pcVar4 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar5 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar5 = pcVar5 + 1;
            }
          }
          piVar2 = *(int **)(*(int *)(*param_2 + 8) + 0x18);
          if (piVar2 != (int *)0x0) {
            (**(int (**)())(*piVar2 + 8))(piVar2);
            *(undefined4 *)(*(int *)(*param_2 + 8) + 0x18) = 0;
          }
          *(int **)(*(int *)(*param_2 + 8) + 0x18) = local_c;
          *param_3 = *param_3 + 4;
          local_8 = local_8 + -1;
          *param_2 = *(int *)(*param_2 + 0xc);
        }
      }
      else {
        while ((local_8 != 0 && (*param_2 != 0))) {
          *param_3 = *param_3 + 4;
          local_8 = local_8 + -1;
          *param_2 = *(int *)(*param_2 + 0xc);
        }
      }
      *param_1 = *param_1 + 0x14;
      return local_10;
    }
    if (iVar7 == 5) {
      uVar9 = piVar2[5];
      *param_1 = (int)(piVar2 + 6);
      iVar7 = local_8;
      if (local_8 == 0) {
        return 0;
      }
      do {
        param_4 = 0;
        *param_1 = (int)(piVar2 + 6);
        if (uVar9 != 0) {
          do {
            local_10 = FUN_m375_thunk_helper(param_1,param_2,param_3,0);
            if (local_10 < 0) goto LAB_005b6e9c;
            param_4 = param_4 + 1;
          } while (param_4 < uVar9);
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      goto LAB_005b6e9c;
    }
  }
  local_10 = -0x7fffbffb;
LAB_005b6e9c:
  if (local_c != (int *)0x0) {
    (**(int (**)())(*local_c + 8))(local_c);
  }
  return local_10;
}
