/* spd-match: far pct=4.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00427e60();
int __cdecl FUN_00454f30();
int __cdecl FUN_00567370();
int __cdecl FUN_00674898();
extern int DAT_00705b48;
extern int DAT_00735f30;
extern int DAT_00735f34;
extern int DAT_00735f38;
extern int DAT_007361b4;
extern int DAT_00736824;
extern int DAT_00736828;
extern int _DAT_006b6df0;
extern int _DAT_006b6df8;
extern int _DAT_006cc7c4;
extern int _DAT_006cc90c;
extern int _DAT_006cca94;
extern int _DAT_006ccb1c;
extern int _DAT_00705b40;
extern int _DAT_00705b44;
extern int _DAT_00736820;

void FUN_004887b0(undefined4 param_1,undefined4 param_2,byte param_3,int param_4)

{
  float fVar1;
  undefined2 uVar2;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_34 = (float)(uint)param_3;
  FUN_00454f30(&local_34,(float)(int)local_34 - _DAT_006cc7c4);
  fVar1 = _DAT_006b6df8;
  switch(param_2) {
  case 0x4e:
    *(ushort *)(param_4 + 0x3c) = -(ushort)(param_3 != 0) & 11000;
    return;
  case 0x4f:
    *(ushort *)(param_4 + 0x3c) = -(ushort)(param_3 != 0) & 0xd508;
    return;
  case 0x50:
    *(ushort *)(param_4 + 0x3e) = -(ushort)(param_3 != 0) & 0xd508;
    return;
  case 0x51:
    *(ushort *)(param_4 + 0x3e) = -(ushort)(param_3 != 0) & 11000;
    return;
  case 0x52:
    if (param_3 == 0) {
      *(undefined4 *)(param_4 + 0x2c) = 0;
      return;
    }
    *(float *)(param_4 + 0x2c) = ((int)_DAT_006b6df8) * ((int)_DAT_006ccb1c);
    return;
  case 0x53:
    if (param_3 == 0) {
      *(undefined4 *)(param_4 + 0x2c) = 0;
      return;
    }
    *(float *)(param_4 + 0x2c) = ((int)_DAT_006b6df8) * ((int)_DAT_006cc90c);
    return;
  case 0x54:
    if (param_3 != 0) {
      *(undefined4 *)(param_4 + 0x34) = 0;
      *(float *)(param_4 + 0x30) = fVar1;
      return;
    }
    break;
  case 0x55:
    if (param_3 != 0) {
      *(undefined4 *)(param_4 + 0x34) = 0;
      *(float *)(param_4 + 0x30) = -fVar1;
      return;
    }
    break;
  case 0x56:
    if (param_3 == 0) {
      *(undefined4 *)(param_4 + 0x38) = 0;
      return;
    }
    *(float *)(param_4 + 0x38) = _DAT_006b6df8;
    return;
  case 0x57:
    if (param_3 == 0) {
      *(undefined4 *)(param_4 + 0x38) = 0;
      return;
    }
    *(float *)(param_4 + 0x38) = -_DAT_006b6df8;
    return;
  case 0x58:
    DAT_00735f30 = (uint)(param_3 != 0);
    return;
  case 0x59:
    DAT_00735f34 = (uint)(param_3 != 0);
    return;
  case 0x5a:
    DAT_00735f38 = (uint)(param_3 != 0);
    return;
  default:
    return;
  case 0x5d:
    if (DAT_007361b4 == 0) {
      return;
    }
    local_30 = ((int)_DAT_00736820) - _DAT_00705b40;
    local_2c = ((int)DAT_00736824) - _DAT_00705b44;
    local_28 = ((int)DAT_00736828) - DAT_00705b48;
    FUN_00567370();
    local_20 = local_30 * ((int)_DAT_006cca94) + _DAT_00705b40;
    local_1c = local_2c * ((int)_DAT_006cca94) + _DAT_00705b44;
    local_18 = local_28 * ((int)_DAT_006cca94) + DAT_00705b48;
    FUN_00427e60(0,0);
    return;
  case 0x5e:
    uVar2 = FUN_00674898();
    *(undefined2 *)(param_4 + 0x3c) = uVar2;
    return;
  case 0x5f:
    uVar2 = FUN_00674898();
    *(undefined2 *)(param_4 + 0x3e) = uVar2;
    return;
  case 0x60:
    *(float *)(param_4 + 0x38) = -((int)_DAT_006b6df0) * local_34;
    return;
  case 0x61:
    *(float *)(param_4 + 0x34) = -((int)_DAT_006b6df0) * local_34;
    return;
  }
  *(undefined4 *)(param_4 + 0x30) = 0;
  *(undefined4 *)(param_4 + 0x34) = 0;
  return;
}
