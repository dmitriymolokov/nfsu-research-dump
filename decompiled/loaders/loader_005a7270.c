/* spd-match: far pct=1.94 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_02/attempt02_cdecl_repaired */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern unsigned char *_DAT_006cc83c;
int unaff_ESI;
int unaff_retaddr;

void FUN_005a7270(undefined4 *param_1,float param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  undefined4 unaff_retaddr;
  
  cVar1 = (char)unaff_ESI[0x17];
  if ((cVar1 != -1) && (*(short *)((int)unaff_ESI + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (&DAT_0077af30)[cVar1];
    }
    iVar3 = *(short *)((int)unaff_ESI + 0x5e) * 0x88 + 0x27c + iVar3;
    if (iVar3 != 0) {
      iVar4 = (**(code **)(*unaff_ESI + 0x10))(param_4);
      if ((param_4 < 0) || (4 < param_4)) {
        fVar2 = DAT_006cc7a4;
        if ((10 < param_4) && (param_4 < 0x11)) {
          fVar2 = (float)unaff_ESI[param_4 + -9];
        }
      }
      else {
        fVar2 = (float)unaff_ESI[1];
      }
      (**(code **)(*unaff_ESI + 0x2c))
                (iVar3,unaff_retaddr,(float)(uintptr_t)param_1 - (float)unaff_ESI[0x16],
                 (float)((int)*(short *)(iVar3 + 0x3c + iVar4 * 2) << 8) * *(float *)_DAT_006cc83c + fVar2 +
                 param_2);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}
