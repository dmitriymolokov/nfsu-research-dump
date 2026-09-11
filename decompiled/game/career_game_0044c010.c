/* spd-match: far pct=3.19 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2440_float_uint/batches/20260724T133759Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_004387e0();
int __cdecl FUN_00583f20();
extern int DAT_006cc7a4;
extern int DAT_0070077c;
extern int DAT_0073465c;
extern int DAT_0073466c;
extern int DAT_007372b0;
extern unsigned char *DAT_00779c78;
extern unsigned char *DAT_00779dd8;
extern unsigned char *DAT_00779f38;
extern unsigned char *DAT_00779f78;
extern int DAT_0078a300;
extern int DAT_0078a318;
extern int DAT_0078a31c;
extern int DAT_0078a368;
extern int DAT_0078a400;
extern int _DAT_006b7754;
extern int _DAT_006b7758;
extern int _DAT_006b775c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006ccb88;
extern int _DAT_0077a4a0;
int unaff_EDI;

void FUN_0044c010(int *param_1,int *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  undefined4 *local_10;
  float local_c;
  undefined *local_8;
  undefined4 local_4;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  fVar2 = DAT_007372b0;
  if (DAT_0078a400 != 0) {
    fVar7 = (float10)(float)(unsigned int)(param_1[5]) - (float10)(float)(unsigned int)(param_2[5]);
    if ((DAT_0078a368 != 0) || ((DAT_0073465c != 0 && (DAT_0073466c != 0)))) {
      fVar1 = (float)(fVar7 + (float10)(unsigned int)(_DAT_006cc7dc));
      fVar7 = (float10)FUN_004387e0(fVar1);
      if ((float10)fVar1 < fVar7) {
        fVar7 = fVar7 - (float10)(unsigned int)(_DAT_006cc7bc);
      }
      fVar7 = ((float10)fVar1 - fVar7) - (float10)(unsigned int)(_DAT_006cc7dc);
    }
    fVar7 = fVar7 * (float10)fVar2;
    fVar2 = (float)fVar7;
    if (fVar7 < (float10)(unsigned int)(_DAT_0077a4a0) != (fVar7 == (float10)(unsigned int)(_DAT_0077a4a0))) {
      iVar6 = 0;
      if (DAT_0078a318 == 0) {
        iVar4 = 1;
        do {
          iVar6 = iVar4;
          if ((int)(&DAT_0070077c)[iVar4] <= DAT_0078a31c) break;
          iVar4 = iVar4 + -1;
          iVar6 = 0;
        } while (-1 < iVar4);
      }
      iVar4 = 0;
      if ((DAT_0078a300 == 2) || (DAT_0078a300 == 3)) {
        iVar4 = 1;
      }
      iVar4 = iVar4 + iVar6 * 2;
      local_10 = &DAT_00779c78 + iVar4 * 0x16;
      local_8 = &DAT_00779dd8 + iVar4 * 0x58;
      local_c = 1.54143e-44;
      local_4 = 0xb;
      fVar7 = (float10)FUN_00583f20(&local_10,fVar2);
      fVar8 = (float10)FUN_00583f20(&local_8,fVar2);
      fVar8 = (fVar8 - (float10)(float)fVar7) * (float10)(unsigned int)(_DAT_006ccb88);
      local_10 = (undefined4 *)(unsigned int)((float)fVar8);
      local_c = (float)((float10)(float)fVar7 - fVar8 * (float10)(unsigned int)(DAT_006cc7a4));
      uVar5 = (**(code **)(*unaff_EDI + 0x58))();
      fVar1 = (float)(int)(((int)uVar5 < 1) - 1 & uVar5);
      local_c = (float)(unsigned int)(local_10) * fVar1 + local_c;
      *param_3 = local_c;
      iVar6 = *param_1;
      if (*(int *)(iVar6 + 0x28) == 4) {
        fVar3 = *(float *)(iVar6 + 0x3d0);
      }
      else {
        fVar3 = *(float *)(iVar6 + 0x3d4);
      }
      fVar2 = ((fVar3 - *(float *)(*param_2 + 0x3d4)) * _DAT_006b7754) /
              (_DAT_006b7758 * fVar2 * fVar2 + _DAT_006cc7bc);
      if (fVar2 <= -_DAT_006b775c) {
        fVar2 = -_DAT_006b775c;
      }
      if (_DAT_006b775c < fVar2) {
        fVar2 = _DAT_006b775c;
      }
      *param_3 = local_c + fVar2;
      iVar6 = (int)*(char *)((int)param_2 + 10) - (int)*(char *)((int)param_1 + 10);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 8;
      }
      else {
        iVar6 = iVar6 + 7;
      }
      fVar2 = (*(float *)(&DAT_00779f78 + iVar6 * 4) - *(float *)(&DAT_00779f38 + iVar6 * 4)) *
              _DAT_006ccb88;
      *param_4 = fVar1 * fVar2 + (*(float *)(&DAT_00779f38 + iVar6 * 4) - DAT_006cc7a4 * fVar2);
    }
  }
  return;
}
