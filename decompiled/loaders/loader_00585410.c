/* spd-match: far pct=6.56 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_00/attempt2 */
#include "ghidra_compat.h"

int __cdecl FUN_00565230();
int __cdecl FUN_00583ea0();
int __cdecl FUN_00585360();
extern int DAT_006b5b58;
extern int DAT_006b5b60;
extern int DAT_006b5b7c;
extern int DAT_006cc7a4;
extern int _DAT_006b5b54;
extern int _DAT_006b5b5c;
extern int _DAT_006b5b64;
extern int _DAT_006b5b68;
extern int _DAT_006b5b6c;
extern int _DAT_006b5b70;
extern int _DAT_006b5b74;
extern int _DAT_006b5b78;
extern int _DAT_006b5b80;
extern int _DAT_006b5b84;
extern int _DAT_006cc7bc;
extern int _DAT_006ccbcc;
extern int _DAT_006ccbd0;

undefined4 *  FUN_00585410(int param_1,unsigned char *param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *extraout_ECX;
  float10 fVar7;
  float fStack_84;
  undefined1 auStack_7c [4];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  if (*(float *)(param_1 + 0x1e4) != DAT_006cc7a4) {
    fVar4 = *(float *)(param_1 + 0x1e8) * *(float *)(param_1 + 0x1e4) + _DAT_006ccbd0;
    if (*(int *)(param_1 + 0x13c) != 0) {
      fVar4 = fVar4 * _DAT_006b5b84;
    }
    local_78 = *(float *)(param_1 + 0x38);
    if (local_78 <= DAT_006cc7a4) {
      local_78 = -local_78;
      if (DAT_006b5b58 < local_78) {
        local_78 = DAT_006b5b58;
      }
      fVar5 = ((_DAT_006b5b54 - _DAT_006cc7bc) / DAT_006b5b58) * local_78 + _DAT_006cc7bc;
    }
    else {
      if (DAT_006b5b60 < local_78) {
        local_78 = DAT_006b5b60;
      }
      fVar5 = _DAT_006cc7bc - ((_DAT_006cc7bc - _DAT_006b5b5c) / DAT_006b5b60) * local_78;
    }
    if (fVar5 * fVar4 <
        SQRT(*(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4) +
             *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0)) * _DAT_006ccbcc) {
      pfVar1 = (float *)(param_1 + 0x110);
      if (DAT_006cc7a4 <
          *(float *)(param_1 + 0x30) * *pfVar1 +
          *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x114) +
          *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x118)) {
        FUN_00565230();
        FUN_00585410(local_60,pfVar1,local_50,0);
        fStack_6c = -(_DAT_006b5b68 * fStack_84);
        if (_DAT_006b5b64 < fStack_6c) {
          fStack_6c = _DAT_006b5b64;
        }
        FUN_00585410(auStack_7c,&fStack_6c,(float *)(param_1 + 0x30),0);
        *pfVar1 = fStack_70;
        *(float *)(param_1 + 0x114) = fStack_6c;
        *(float *)(param_1 + 0x118) = fStack_68;
      }
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0xa4);
  uVar3 = *(undefined4 *)(param_1 + 0xa8);
  *param_2 = *(undefined4 *)(param_1 + 0xa0);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  FUN_00585360();
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x118);
  param_2[0x14] = *(undefined4 *)(param_1 + 0x110);
  param_2[0x15] = uVar2;
  param_2[0x16] = uVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x124);
  uVar3 = *(undefined4 *)(param_1 + 0x128);
  param_2[0x18] = *(undefined4 *)(param_1 + 0x120);
  param_2[0x19] = uVar2;
  param_2[0x1a] = uVar3;
  fStack_74 = SQRT(extraout_ECX[2] * extraout_ECX[2] +
                   extraout_ECX[1] * extraout_ECX[1] + *extraout_ECX * *extraout_ECX);
  if (*(int *)(param_1 + 0x134) != 0) {
    fVar7 = (float10)FUN_00583ea0(fStack_74);
    fVar7 = -fVar7;
    fStack_6c = (float)((float10)*(float *)(param_1 + 0x84) * fVar7);
    fStack_68 = (float)((float10)*(float *)(param_1 + 0x88) * fVar7);
    param_2[0x18] =
         (float)(fVar7 * (float10)*(float *)(param_1 + 0x80) + (float10)(float)param_2[0x18]);
    param_2[0x19] = fStack_6c + (float)param_2[0x19];
    param_2[0x1a] = fStack_68 + (float)param_2[0x1a];
  }
  local_78 = SQRT(*(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8) +
                  *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4) +
                  *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0)) / _DAT_006b5b6c;
  if (local_78 < fStack_74 / _DAT_006b5b70) {
    local_78 = fStack_74 / _DAT_006b5b70;
  }
  fVar7 = (float10)FUN_00583ea0(local_78);
  if (fVar7 <= (float10)*(float *)(param_1 + 0x90)) {
    param_2[0x1c] = -_DAT_006b5b80;
  }
  else {
    param_2[0x1c] = DAT_006b5b7c;
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    fVar6 = -(_DAT_006b5b78 * *(float *)(param_1 + 0x90));
    fVar4 = *(float *)(param_1 + 0x84);
    fVar5 = *(float *)(param_1 + 0x88);
    param_2[0x18] = fVar6 * *(float *)(param_1 + 0x80) + (float)param_2[0x18];
    param_2[0x19] = fVar4 * fVar6 + (float)param_2[0x19];
    param_2[0x1a] = fVar5 * fVar6 + (float)param_2[0x1a];
    fVar6 = -(_DAT_006b5b74 * *(float *)(param_1 + 0x90));
    fVar4 = *(float *)(param_1 + 0x74);
    fVar5 = *(float *)(param_1 + 0x78);
    param_2[0x14] = fVar6 * *(float *)(param_1 + 0x70) + (float)param_2[0x14];
    param_2[0x15] = fVar4 * fVar6 + (float)param_2[0x15];
    param_2[0x16] = fVar5 * fVar6 + (float)param_2[0x16];
  }
  if (*(float *)(param_1 + 0x1e0) != DAT_006cc7a4) {
    if (*(float *)(param_1 + 0x128) <= *(float *)(param_1 + 0x1e0)) {
      if (-*(float *)(param_1 + 0x1e0) <= *(float *)(param_1 + 0x128)) {
        return param_2;
      }
      param_2[0x1a] = -*(float *)(param_1 + 0x1e0);
      return param_2;
    }
    param_2[0x1a] = *(undefined4 *)(param_1 + 0x1e0);
  }
  return param_2;
}
