/* spd-match: far pct=10.40 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004f43d0();
int __cdecl FUN_004f4ea0();
int __cdecl FUN_004f4f10();
int __cdecl FUN_004f5000();
int __cdecl FUN_004f5030();
extern int _DAT_006cc7dc;
int unaff_ESI;

void FUN_004f7260(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  float10 fVar5;
  
  if (unaff_ESI != 0) {
    iVar3 = *(int *)(unaff_ESI + 0x2c);
    switch(*(undefined4 *)(unaff_ESI + 0x18)) {
    default:
      *param_1 = *(float *)(iVar3 + 0x1c);
      *param_2 = *(float *)(iVar3 + 0x20);
      break;
    case 2:
      iVar4 = FUN_004f43d0();
      if (iVar4 != 0) {
        fVar5 = (float10)FUN_004f4ea0(0);
        fVar1 = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x38));
        fVar5 = (float10)FUN_004f4f10(iVar4,*(undefined4 *)(unaff_ESI + 0x60),
                                      *(undefined4 *)(unaff_ESI + 0x6c));
        fVar2 = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x3c));
        fVar5 = (float10)FUN_004f5000(iVar4,*(undefined4 *)(unaff_ESI + 0x68),fVar1);
        *param_1 = (float)((float10)fVar1 * (float10)(unsigned int)(_DAT_006cc7dc) + fVar5 +
                          (float10)*(float *)(iVar3 + 0x1c));
        fVar5 = (float10)FUN_004f5030(iVar4,*(undefined4 *)(unaff_ESI + 0x68),fVar2);
        *param_2 = (float)((float10)fVar2 * (float10)(unsigned int)(_DAT_006cc7dc) + fVar5 +
                          (float10)*(float *)(iVar3 + 0x20));
        return;
      }
    }
  }
  return;
}
