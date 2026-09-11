/* spd-match: far pct=5.75 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2296 */
#include "ghidra_compat.h"

int __cdecl FUN_00424e20();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_00572970();
extern int DAT_006b7398;
extern int DAT_006cc7a4;
extern int DAT_006f08a4;
extern unsigned char *DAT_007361f0;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc844;
extern int _DAT_006cc960;
extern int _DAT_006cca0c;
extern int _DAT_006cca94;
extern int _DAT_006ccb80;
extern int _DAT_007003a4;
extern int _DAT_007003a8;
extern int _DAT_007003ac;
extern int _DAT_007003b0;
extern int _DAT_007003b4;
extern void LAB_00461cf3(void);
extern void LAB_00461d08(void);
extern void LAB_00461d3f(void);

void FUN_00461a60(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  float local_c;
  float local_8;
  
  iVar3 = param_1[0x9b];
  fVar4 = *(float *)(iVar3 + 0x3d0);
  param_1[0xa0] = (int)((float)param_1[0xa0] - param_2);
  fVar1 = DAT_006cc7a4;
  if (((float)param_1[0xa0] <= DAT_006cc7a4) || (ABS(fVar4) <= _DAT_006ccb80)) {
    param_1[0xa0] = 0;
    fVar1 = (float)param_1[0xa5];
    param_1[0x78] = param_1[0xab];
  }
  else {
    param_1[0x78] = 0x3f800000;
  }
  if ((float)param_1[0xa7] <= _DAT_006cca0c) {
    if (_DAT_007003ac < fVar4) {
      *(undefined1 *)(param_1 + 0xac) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  local_c = fVar1;
  if (fVar4 <= _DAT_007003a4) {
    if ((fVar4 < _DAT_007003a8) ||
       ((fVar2 = DAT_006cc7a4, (char)param_1[0xac] != '\0' && (fVar4 < _DAT_007003ac)))) {
      local_c = 0.0;
      fVar2 = fVar1;
    }
    local_8 = (float)param_1[0xa7];
  }
  else {
    fVar2 = (float)param_1[0xa7];
    local_8 = DAT_006cc7a4;
  }
  local_8 = local_8 + local_8;
  if (_DAT_006cc7bc < local_8) {
    local_8 = 1.0;
  }
  param_1[0x79] = (int)fVar2;
  if (_DAT_006cc7dc < (float)param_1[0x78]) {
    uVar7 = ((int)DAT_006f08a4) + 1U & 0x80000007;
    bVar8 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar8 = (uVar7 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if ((bVar8) && (_DAT_006cca94 < *(float *)(param_1[0x9b] + 0x3d4))) {
      FUN_00572970(DAT_006b7398,"EBrake");
    }
  }
  if (local_c + _DAT_006cc960 < local_8) {
    param_1[0x77] = (int)local_8;
    param_1[0x75] = 0;
    goto LAB_00461d3f;
  }
  iVar5 = param_1[0x9b];
  if (*(int *)(iVar5 + 0x3d8) == 1) {
    fVar1 = ((int)_DAT_007003b0) * param_2 + (float)param_1[0x77];
    fVar4 = (float)param_1[0x77] - ((int)_DAT_007003b4) * param_2;
    if (fVar4 < local_c) {
      fVar4 = local_c;
    }
    local_c = fVar4;
    if (fVar1 < fVar4) {
      local_c = fVar1;
    }
    if ((((float)param_1[0xa5] <= _DAT_006cca0c) ||
        (fVar9 = (float10)FUN_00424e20(iVar5),
        (float10)*(float *)(*(int *)(iVar5 + 0x20) + 0x1f0) + (float10)((int)_DAT_006cc844) <= fVar9)) ||
       (_DAT_006cca0c <= local_c)) goto LAB_00461cf3;
    local_c = 0.6;
LAB_00461d08:
    fVar1 = local_c;
    if (_DAT_006cc7bc < local_c) {
      fVar1 = _DAT_006cc7bc;
    }
  }
  else {
LAB_00461cf3:
    fVar1 = DAT_006cc7a4;
    if (DAT_006cc7a4 < local_c) goto LAB_00461d08;
  }
  param_1[0x77] = (int)fVar1;
  if (param_1[0x75] == 0) {
    (**(code **)(*param_1 + 0x34))();
  }
LAB_00461d3f:
  cVar6 = FUN_0043a2e0();
  if ((cVar6 != '\0') && ((*DAT_007361f0 == 7 || (*DAT_007361f0 == 0xb)))) {
    param_1[0x77] = 0;
    param_1[0x79] = 0x3f000000;
  }
  *(int *)(iVar3 + 0x3dc) = param_1[0x77];
  return;
}
