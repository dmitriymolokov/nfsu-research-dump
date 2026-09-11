/* spd-match: far pct=2.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_float */
#include "ghidra_compat.h"

int __cdecl FUN_004400e0();
int __cdecl FUN_004407b0();
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern void LAB_00440c40(void);
extern void LAB_00440c7c(void);

int * FUN_00440a40(float *param_1,float *param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  int local_c;
  float local_8;
  int local_4;
  
  pfVar3 = param_2;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  fVar4 = param_1[0xac];
  if ((fVar4 == 0.0) || (fVar6 = (float10)FUN_004400e0(), (float10)(unsigned int)(DAT_006cc7a4) <= fVar6)) {
    if ((*param_2 < *param_1) ||
       (((param_1[2] < *param_2 || (param_2[1] < param_1[1])) || (param_1[3] < param_2[1])))) {
      FUN_004407b0(param_2,0x41000000,0);
    }
    fVar4 = param_1[0xa9];
    local_8 = param_2[2] + _DAT_006cc7bc;
    local_4 = 0;
    do {
      iVar5 = 0;
      param_2 = (float *)0xff7fffff;
      local_c = -1;
      if (0 < (int)fVar4) {
        do {
          fVar4 = param_1[iVar5 + 8];
          if (((*(float *)(unsigned int)(((int)fVar4 + 0x14)) <= *pfVar3) &&
              (*pfVar3 < *(float *)(unsigned int)(((int)fVar4 + 0x1c)) != (*pfVar3 == *(float *)(unsigned int)(((int)fVar4 + 0x1c)))
              )) && ((*(float *)(unsigned int)(((int)fVar4 + 0x18)) <= pfVar3[1] &&
                     (pfVar3[1] < *(float *)(unsigned int)(((int)fVar4 + 0x20)) !=
                      (pfVar3[1] == *(float *)(unsigned int)(((int)fVar4 + 0x20))))))) {
            fVar6 = (float10)FUN_004400e0();
            if (((fVar6 < (float10)(unsigned int)(DAT_006cc7a4) != (fVar6 == (float10)(unsigned int)(DAT_006cc7a4))) &&
                (fVar2 = -(((*(float *)(unsigned int)(((int)fVar4 + 0x70)) * *pfVar3 +
                            *(float *)(unsigned int)(((int)fVar4 + 0x74)) * pfVar3[1]) -
                           *(float *)(unsigned int)(((int)fVar4 + 0x7c))) / *(float *)(unsigned int)(((int)fVar4 + 0x78))),
                (float)(unsigned int)(param_2) < fVar2)) &&
               ((fVar2 < local_8 &&
                ((param_2 = (float *)(unsigned int)(fVar2), local_c = iVar5, (*(byte *)(unsigned int)((int)fVar4 + 10) & 1) == 0
                 && ((float)fVar6 < DAT_006cc7a4)))))) {
              param_1[0xac] = fVar4;
              goto LAB_00440c7c;
            }
          }
          fVar4 = param_1[0xa9];
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)fVar4);
        if (-1 < local_c) {
LAB_00440c7c:
          if (-1 < local_c) {
            fVar4 = param_1[local_c + 8];
            if (4 < local_c) {
              for (; 0 < local_c; local_c = local_c + -1) {
                param_1[local_c + 8] = param_1[local_c + 7];
              }
              param_1[8] = fVar4;
            }
            if (param_3 != (int *)0x0) {
              *param_3 = (int)*(char *)(unsigned int)((int)fVar4 + 0xb);
            }
            if (param_4 == (int *)0x0) {
              return (int *)0x0;
            }
            iVar5 = *(int *)(unsigned int)((int)fVar4 + 0x78);
            iVar1 = *(int *)(unsigned int)((int)fVar4 + 0x70);
            param_4[1] = *(int *)(unsigned int)((int)fVar4 + 0x74);
            *param_4 = iVar1;
            param_4[2] = iVar5;
            return param_4;
          }
          goto LAB_00440c40;
        }
      }
      local_4 = local_4 + 1;
      local_8 = 3.4028235e+38;
    } while (local_4 < 2);
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = 0;
    }
LAB_00440c40:
    if (param_3 != (int *)0x0) {
      *param_3 = 1;
    }
    param_3 = param_4;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = -0x40800000;
    }
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)*(char *)(unsigned int)((int)fVar4 + 0xb);
    }
    if (param_4 != (int *)0x0) {
      fVar4 = param_1[0xac];
      iVar1 = *(int *)(unsigned int)((int)fVar4 + 0x70);
      iVar5 = *(int *)(unsigned int)((int)fVar4 + 0x78);
      param_4[1] = *(int *)(unsigned int)((int)fVar4 + 0x74);
      *param_4 = iVar1;
      param_4[2] = iVar5;
      return (int *)(unsigned int)((int)fVar4 + 0x70);
    }
  }
  return param_3;
}
