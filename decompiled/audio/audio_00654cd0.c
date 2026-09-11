/* spd-match: far pct=5.82 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00654CD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined8 __fastcall FUN_00654cd0(undefined4 val, undefined4 param_1, undefined4 param_2, undefined8 *param_3, uint param_4)

{

  if (((uint)param_3 & 7) != 0) {
    if ((((uint)param_3 & 1) != 0) && (0 < (int)param_4)) {
      *(undefined1 *)param_3 = 0;
      param_3 = (undefined8 *)((int)param_3 + 1);
      param_4 = param_4 - 1;
    }
    if ((((uint)param_3 & 2) != 0) && (1 < (int)param_4)) {
      *(undefined2 *)param_3 = 0;
      param_3 = (undefined8 *)((int)param_3 + 2);
      param_4 = param_4 - 2;
    }
    if ((((uint)param_3 & 4) != 0) && (3 < (int)param_4)) {
      *(undefined4 *)param_3 = 0;
      param_3 = (undefined8 *)((int)param_3 + 4);
      param_4 = param_4 - 4;
    }
  }
  if (-1 < (int)param_4) {
    while (-1 < (int)(param_4 - 0x20)) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3 = param_3 + 4;
      param_4 = param_4 - 0x20;
    }
    while (-1 < (int)(param_4 - 8)) {
      *param_3 = 0;
      param_3 = param_3 + 1;
      param_4 = param_4 - 8;
    }
    if (param_4 != 0) {
      if ((param_4 & 4) != 0) {
        *(undefined4 *)param_3 = 0;
        param_3 = (undefined8 *)((int)param_3 + 4);
      }
      if ((param_4 & 2) != 0) {
        *(undefined2 *)param_3 = 0;
        param_3 = (undefined8 *)((int)param_3 + 2);
      }
      if ((param_4 & 1) != 0) {
        *(undefined1 *)param_3 = 0;
      }
      return CONCAT44(param_2,val);
    }
  }
  return CONCAT44(param_2,val);
}
