/* spd-match: far pct=7.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
extern int _DAT_006cc850;
extern int _DAT_006cc998;
extern int _DAT_006cc9a0;
extern int _DAT_006cc9a8;
extern int _DAT_006cc9b0;
extern int _DAT_006cc9b8;
extern int _DAT_006cc9c0;
extern int _DAT_006cc9c8;
extern int _DAT_006cc9d0;
extern int _DAT_006cc9d8;
extern int _DAT_006cc9e0;
extern int _DAT_006cc9e8;
extern void LAB_00438d8d(void);

undefined4
FUN_00438b60(uint param_1,char param_2,uint param_3,byte param_4,byte param_5,char param_6,
            ushort param_7)

{
  undefined4 uVar1;
  double local_1c;
  double local_14;
  double local_c;
  
  local_14 = 0.0;
  local_1c = 1.0;
  if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      if (param_4 == 2) {
        local_14 = -((double)param_1 * ((int)_DAT_006cc9e8));
      }
      else if (2 < param_4) {
        local_14 = 0.0;
      }
    }
    else if (param_2 == '\x03') {
      if (param_4 == 3) {
        local_14 = (double)param_1 * ((int)_DAT_006cc9e8);
      }
      else {
        local_14 = (double)param_1 * ((int)_DAT_006cc9b8);
      }
      local_14 = -local_14;
    }
    else {
      local_14 = -((double)param_1 * ((int)_DAT_006cc9e8));
    }
    goto LAB_00438d8d;
  }
  local_14 = (double)param_3 * ((int)_DAT_006cc9e8);
  if (_DAT_006cc9e0 < local_14) {
    local_14 = 10000.0;
  }
  if ((param_6 == '\0') || (param_6 == '\x03')) {
    if (param_5 == 3) {
      local_1c = ((int)_DAT_006cc9e8) + 1.0;
    }
    else if (3 < param_5) {
      local_1c = ((double)param_5 - _DAT_006cc9d8) * ((int)_DAT_006cc850) + ((int)_DAT_006cc9d0) + 1.0;
    }
  }
  if (param_6 == '\x02') goto switchD_00438c80_caseD_3ee;
  if (param_7 < 0x456) {
    if (param_7 < 0x454) {
      switch(param_7) {
      case 0x3e9:
      case 0x3ea:
        goto switchD_00438c80_caseD_3e9;
      case 0x3eb:
      case 0x44f:
        break;
      case 0x3ec:
      case 0x3ed:
      case 0x450:
      case 0x451:
      case 0x452:
        goto switchD_00438c80_caseD_3ec;
      default:
        goto switchD_00438c80_caseD_3ee;
      case 0x453:
        goto switchD_00438c80_caseD_453;
      }
    }
switchD_00438c80_caseD_3eb:
    local_1c = local_1c + _DAT_006cc9e8;
  }
  else {
    switch(param_7) {
    case 0x516:
    case 0x517:
      goto switchD_00438c80_caseD_3eb;
    case 0x518:
switchD_00438c80_caseD_3ec:
      local_1c = local_1c + _DAT_006cc9d0;
      break;
    case 0x519:
    case 0x51b:
    case 0x51c:
switchD_00438c80_caseD_3e9:
      local_1c = local_1c + _DAT_006cc9c0;
      break;
    case 0x51a:
switchD_00438c80_caseD_453:
      local_1c = local_1c + _DAT_006cc9c8;
    }
  }
switchD_00438c80_caseD_3ee:
LAB_00438d8d:
  if (_DAT_006cc9b0 <= local_14) {
    local_c = (double)param_1 + local_14 * local_1c + _DAT_006cc850;
  }
  else {
    local_c = (double)param_1 - _DAT_006cc9a8;
  }
  if (local_c <= _DAT_006cc9a0) {
    if (_DAT_006cc998 <= local_c) {
      uVar1 = FUN_00674898();
    }
    else {
      uVar1 = 100;
    }
  }
  else {
    uVar1 = 99999999;
  }
  return uVar1;
}
