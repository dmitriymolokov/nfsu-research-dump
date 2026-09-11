/* spd-match: far pct=5.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_004f43d0();
int __cdecl FUN_004f4ea0();
int __cdecl FUN_004f4f10();
int __cdecl FUN_004f5000();
int __cdecl FUN_004f5030();
int __cdecl FUN_004fea10();
int __cdecl FUN_004ff1f0();
extern int _DAT_006cc7dc;

void FUN_004f7140(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int unaff_ESI;
  float10 fVar6;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (unaff_ESI != 0) {
    iVar3 = *(int *)(unaff_ESI + 0x2c);
    local_c = *(float *)(iVar3 + 0x1c);
    local_8 = *(float *)(iVar3 + 0x20);
    local_4 = *(undefined4 *)(iVar3 + 0x24);
    switch(*(undefined4 *)(unaff_ESI + 0x18)) {
    default:
      local_c = param_1;
      local_8 = param_2;
      break;
    case 2:
      iVar5 = FUN_004f43d0();
      if (iVar5 != 0) {
        fVar6 = (float10)FUN_004f4ea0(0);
        fVar1 = (float)(fVar6 * (float10)*(float *)(iVar3 + 0x38));
        fVar6 = (float10)FUN_004f4f10(iVar5,*(undefined4 *)(unaff_ESI + 0x60),
                                      *(undefined4 *)(unaff_ESI + 0x6c));
        fVar2 = (float)(fVar6 * (float10)*(float *)(iVar3 + 0x3c));
        fVar6 = (float10)FUN_004f5000(iVar5,*(undefined4 *)(unaff_ESI + 0x68),fVar1);
        local_c = (float)((float10)param_1 - ((float10)fVar1 * (float10)(unsigned int)(_DAT_006cc7dc) + fVar6));
        fVar6 = (float10)FUN_004f5030(iVar5,extraout_ECX,fVar2);
        local_8 = (float)((float10)param_2 - ((float10)fVar2 * (float10)(unsigned int)(_DAT_006cc7dc) + fVar6));
      }
    }
    if (*(int *)(unaff_ESI + 0x18) < 0x100) {
      cVar4 = FUN_004fea10();
      if (cVar4 == '\0') {
        *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
      }
      FUN_004ff1f0(unaff_ESI,2,&local_c,0);
    }
  }
  return;
}
