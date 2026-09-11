/* spd-match: far pct=6.87 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_char */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
int unaff_ESI;
int unaff_retaddr;

struct ThisCallBox {
  undefined4 FUN_006328d0(float param_2);
};
undefined4 ThisCallBox::FUN_006328d0(float param_2) {
  float fVar1;
  float fVar2;
  char cVar3;
  float unaff_ESI;
  undefined4 unaff_retaddr;
  undefined1 local_10 [12];
  float *pfStack_4;
  
  cVar3 = (**(code **)(**(int **)(((int)this) + 0x10) + 0x20))();
  if (cVar3 != '\0') {
    if (*(float *)(((int)this) + 0x18) == DAT_006cc7a4) {
      *(undefined1 **)(unsigned int)(param_2) = local_10;
      *(float *)((int)param_2 + 4) = unaff_ESI;
      return 1;
    }
    cVar3 = (**(code **)(**(int **)(((int)this) + 0x14) + 0x20))(unaff_retaddr);
    if (cVar3 != '\0') {
      fVar1 = _DAT_006cc7bc - *(float *)(((int)this) + 0x18);
      *pfStack_4 = (*(float *)(unsigned int)(local_10)) * fVar1 + (*(float *)(unsigned int)(local_10)) * *(float *)(((int)this) + 0x18);
      fVar2 = param_2 * fVar1 + unaff_ESI * *(float *)(((int)this) + 0x18);
      pfStack_4[1] = fVar2;
      fVar2 = SQRT(fVar2 * fVar2 + *pfStack_4 * *pfStack_4);
      if (fVar2 != DAT_006cc7a4) {
        fVar2 = (SQRT((*(float *)(unsigned int)(local_10)) * (*(float *)(unsigned int)(local_10)) + unaff_ESI * unaff_ESI) *
                 *(float *)(((int)this) + 0x18) +
                SQRT((*(float *)(unsigned int)(local_10)) * (*(float *)(unsigned int)(local_10)) + param_2 * param_2) * fVar1) / fVar2;
        *pfStack_4 = fVar2 * *pfStack_4;
        pfStack_4[1] = fVar2 * pfStack_4[1];
        return 1;
      }
      return 1;
    }
  }
  return 0;
}
