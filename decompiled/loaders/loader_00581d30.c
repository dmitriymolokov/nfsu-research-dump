/* spd-match: far pct=6.78 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_006f0d54;
extern int _DAT_006cc7dc;
extern int _DAT_006cc830;
extern int _DAT_006cc834;
extern int _DAT_006f0d30;
extern int _DAT_006f0d34;
extern int _DAT_006f0d38;
extern int _DAT_006f0d3c;
extern int _DAT_006f0d40;
extern int _DAT_006f0d44;
extern int _DAT_006f0d48;
extern int _DAT_006f0d4c;
extern int _DAT_006f0d50;

void __fastcall FUN_00581d30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  
  fVar1 = (*(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x174) +
          *(float *)(param_1 + 0x1a0) + *(float *)(param_1 + 0x194)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc)
  ;
  if (_DAT_006f0d30 < fVar1) {
    fVar1 = _DAT_006f0d30;
  }
  fVar2 = (*(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x174) +
          *(float *)(param_1 + 0x1a0) + *(float *)(param_1 + 0x194)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc)
  ;
  if (fVar2 < _DAT_006f0d34) {
    fVar2 = _DAT_006f0d34;
  }
  fVar3 = (*(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xdc) +
          *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xfc)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc);
  if (_DAT_006f0d38 < fVar3) {
    fVar3 = _DAT_006f0d38;
  }
  fVar4 = (*(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xdc) +
          *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0xfc)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc);
  if (fVar4 < _DAT_006f0d3c) {
    fVar4 = _DAT_006f0d3c;
  }
  fVar5 = *(float *)(param_1 + 0x274) * ((int)_DAT_006cc834) + *(float *)(param_1 + 0x278) * ((int)_DAT_006cc830);
  if (_DAT_006f0d40 < fVar5) {
    fVar5 = _DAT_006f0d40;
  }
  fVar6 = *(float *)(param_1 + 0x274) * ((int)_DAT_006cc834) + *(float *)(param_1 + 0x278) * ((int)_DAT_006cc830);
  if (fVar6 < _DAT_006f0d44) {
    fVar6 = _DAT_006f0d44;
  }
  fVar7 = *(float *)(param_1 + 0x110);
  if (_DAT_006f0d48 < *(float *)(param_1 + 0x110)) {
    fVar7 = _DAT_006f0d48;
  }
  fVar8 = *(float *)(param_1 + 0x110);
  if (*(float *)(param_1 + 0x110) < _DAT_006f0d4c) {
    fVar8 = _DAT_006f0d4c;
  }
  _DAT_006f0d34 =
       (*(float *)(param_1 + 0x740) + *(float *)(param_1 + 0x734) +
       *(float *)(param_1 + 0x760) + *(float *)(param_1 + 0x754)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc);
  local_18 = _DAT_006f0d34;
  if (fVar1 < _DAT_006f0d34) {
    local_18 = fVar1;
  }
  if (_DAT_006f0d34 < fVar2) {
    _DAT_006f0d34 = fVar2;
  }
  fVar1 = (*(float *)(param_1 + 0x790) + *(float *)(param_1 + 0x784) +
          *(float *)(param_1 + 0x7b0) + *(float *)(param_1 + 0x7a4)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc)
  ;
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  if (_DAT_006f0d34 <= fVar1) {
    _DAT_006f0d34 = fVar1;
  }
  fVar1 = (*(float *)(param_1 + 0x7e0) + *(float *)(param_1 + 0x7d4) +
          *(float *)(param_1 + 0x800) + *(float *)(param_1 + 0x7f4)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc)
  ;
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  _DAT_006f0d30 = local_18;
  if (_DAT_006f0d34 <= fVar1) {
    _DAT_006f0d34 = fVar1;
  }
  _DAT_006f0d3c =
       (*(float *)(param_1 + 0x5c0) + *(float *)(param_1 + 0x5bc) + *(float *)(param_1 + 0x830) +
        *(float *)(param_1 + 0x838) +
       *(float *)(param_1 + 0x5e0) + *(float *)(param_1 + 0x5dc) + *(float *)(param_1 + 0x834) +
       *(float *)(param_1 + 0x83c)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc);
  local_18 = _DAT_006f0d3c;
  if (fVar3 < _DAT_006f0d3c) {
    local_18 = fVar3;
  }
  if (_DAT_006f0d3c < fVar4) {
    _DAT_006f0d3c = fVar4;
  }
  fVar1 = (*(float *)(param_1 + 0x600) + *(float *)(param_1 + 0x5fc) + *(float *)(param_1 + 0x830) +
           *(float *)(param_1 + 0x838) +
          *(float *)(param_1 + 0x620) + *(float *)(param_1 + 0x61c) + *(float *)(param_1 + 0x834) +
          *(float *)(param_1 + 0x83c)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc);
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  if (_DAT_006f0d3c <= fVar1) {
    _DAT_006f0d3c = fVar1;
  }
  fVar1 = (*(float *)(param_1 + 0x640) + *(float *)(param_1 + 0x63c) + *(float *)(param_1 + 0x830) +
           *(float *)(param_1 + 0x838) +
          *(float *)(param_1 + 0x660) + *(float *)(param_1 + 0x65c) + *(float *)(param_1 + 0x834) +
          *(float *)(param_1 + 0x83c)) * ((int)_DAT_006cc7dc) * ((int)_DAT_006cc7dc);
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  _DAT_006f0d38 = local_18;
  if (_DAT_006f0d3c <= fVar1) {
    _DAT_006f0d3c = fVar1;
  }
  _DAT_006f0d44 =
       *(float *)(param_1 + 0x704) * ((int)_DAT_006cc830) +
       (*(float *)(param_1 + 0x700) + *(float *)(param_1 + 0x82c)) * ((int)_DAT_006cc834);
  local_18 = _DAT_006f0d44;
  if (fVar5 < _DAT_006f0d44) {
    local_18 = fVar5;
  }
  if (_DAT_006f0d44 < fVar6) {
    _DAT_006f0d44 = fVar6;
  }
  fVar1 = *(float *)(param_1 + 0x714) * ((int)_DAT_006cc830) +
          (*(float *)(param_1 + 0x710) + *(float *)(param_1 + 0x82c)) * ((int)_DAT_006cc834);
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  if (_DAT_006f0d44 <= fVar1) {
    _DAT_006f0d44 = fVar1;
  }
  fVar1 = *(float *)(param_1 + 0x724) * ((int)_DAT_006cc830) +
          (*(float *)(param_1 + 0x720) + *(float *)(param_1 + 0x82c)) * ((int)_DAT_006cc834);
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  _DAT_006f0d40 = local_18;
  if (_DAT_006f0d44 <= fVar1) {
    _DAT_006f0d44 = fVar1;
  }
  fVar1 = (*(float *)(param_1 + 0x2b0) - *(float *)(param_1 + 0x820)) * *(float *)(param_1 + 0x110);
  local_18 = fVar1;
  if (fVar7 < fVar1) {
    local_18 = fVar7;
  }
  if (fVar8 <= fVar1) {
    fVar8 = fVar1;
  }
  fVar1 = (*(float *)(param_1 + 0x2c0) - *(float *)(param_1 + 0x820)) * *(float *)(param_1 + 0x110);
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  if (fVar8 <= fVar1) {
    fVar8 = fVar1;
  }
  fVar1 = (*(float *)(param_1 + 0x2d0) - *(float *)(param_1 + 0x820)) * *(float *)(param_1 + 0x110);
  if (fVar1 <= local_18) {
    local_18 = fVar1;
  }
  _DAT_006f0d48 = local_18;
  if (fVar8 <= fVar1) {
    fVar8 = fVar1;
  }
  _DAT_006f0d4c = fVar8;
  local_18 = (*(float *)(param_1 + 0x67c) + *(float *)(param_1 + 0x828)) *
             *(float *)(param_1 + 0x670);
  _DAT_006f0d50 = local_18;
  if (DAT_006cc7a4 < local_18) {
    _DAT_006f0d50 = DAT_006cc7a4;
  }
  if (local_18 < DAT_006f0d54) {
    local_18 = DAT_006f0d54;
  }
  fVar1 = (*(float *)(param_1 + 0x68c) + *(float *)(param_1 + 0x828)) * *(float *)(param_1 + 0x680);
  if (fVar1 <= _DAT_006f0d50) {
    _DAT_006f0d50 = fVar1;
  }
  if (local_18 <= fVar1) {
    local_18 = fVar1;
  }
  DAT_006f0d54 = (*(float *)(param_1 + 0x69c) + *(float *)(param_1 + 0x828)) *
                 *(float *)(param_1 + 0x690);
  if (DAT_006f0d54 <= _DAT_006f0d50) {
    _DAT_006f0d50 = DAT_006f0d54;
  }
  if (DAT_006f0d54 < local_18) {
    DAT_006f0d54 = local_18;
    return;
  }
  return;
}
