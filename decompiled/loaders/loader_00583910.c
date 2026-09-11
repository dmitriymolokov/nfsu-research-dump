/* spd-match: far pct=5.51 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/loaders_p1/batches/20260724T154133Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00454f30();
int __cdecl FUN_005a6b00();
int __cdecl FUN_005a6bc0();
extern int DAT_006b5b9c;
extern int DAT_006b5ba4;
extern int DAT_006cc7a4;
extern int _DAT_006b5b98;
extern int _DAT_006b5ba0;
extern int _DAT_006b5ba8;
extern int _DAT_006b5bac;
extern int _DAT_006cc7bc;
int unaff_EDI;

void FUN_00583910(undefined4 *param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int *unaff_ESI;
  float *unaff_EDI;
  float10 fVar3;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  puVar2 = param_2;
  *unaff_EDI = 0.0;
  *param_1 = 0;
  *param_2 = 0;
  fVar3 = (float10)(**(code **)(*unaff_ESI + 0x5c))();
  param_2 = (undefined4 *)(unsigned int)((float)fVar3);
  fStack_c = *(float *)(unaff_ESI[1] + 0x3d4) * _DAT_006b5ba0;
  if (fStack_c <= DAT_006b5ba4) {
    fStack_c = DAT_006b5ba4;
  }
  fStack_8 = 99999.0;
  fVar3 = (float10)FUN_005a6bc0(unaff_ESI[0xf9],fStack_c,&fStack_8);
  if (fVar3 < (float10)(unsigned int)(_DAT_006b5ba8)) {
    FUN_00454f30(&fStack_4,fStack_8);
    param_2 = (undefined4 *)(unsigned int)(((_DAT_006cc7bc - fStack_4) * ((float)(unsigned int)(param_2) - _DAT_006b5bac) + _DAT_006b5bac));
  }
  fVar1 = *(float *)(*(char *)(unaff_ESI[0xf8] + 0x388) * 0x38 + 0x18 + unaff_ESI[0xf8]);
  fStack_8 = *(float *)(unaff_ESI[1] + 0x3d4) * _DAT_006b5b98;
  if (fStack_8 < DAT_006b5b9c) {
    fStack_8 = DAT_006b5b9c;
  }
  fVar3 = (float10)FUN_005a6b00(fVar1);
  fStack_4 = (float)fVar3;
  fVar3 = (float10)FUN_005a6b00(fStack_8 + fVar1);
  if ((float)(unsigned int)(param_2) < fStack_4) {
    fStack_4 = (float)(unsigned int)(param_2);
  }
  if ((float)fVar3 <= fStack_4) {
    fStack_4 = (float)fVar3;
  }
  if (*(char *)((int)unaff_ESI + 0x4d1) != '\0') {
    fStack_4 = DAT_006cc7a4;
  }
  if (*(char *)(unaff_ESI[0xfe] + 0x1f0) == '\0') {
    *unaff_EDI = *(float *)(unaff_ESI[0xfe] + 0x1e4);
    *param_1 = *(undefined4 *)(unaff_ESI[0xfe] + 0x1e8);
    *puVar2 = *(undefined4 *)(unaff_ESI[0xfe] + 0x1ec);
  }
  else {
    *unaff_EDI = fStack_4;
    *param_1 = 0;
    *puVar2 = 0;
  }
  if (fStack_4 <= *unaff_EDI) {
    *unaff_EDI = fStack_4;
    return;
  }
  *unaff_EDI = *unaff_EDI;
  return;
}
