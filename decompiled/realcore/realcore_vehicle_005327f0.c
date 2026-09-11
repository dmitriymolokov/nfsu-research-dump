/* spd-match: far pct=2.50 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int _DAT_006ccae0;

struct ThisCallBox {
  void FUN_005327f0(undefined4 param_2, undefined4 param_3, float param_4, float param_5);
};
void ThisCallBox::FUN_005327f0(undefined4 param_2, undefined4 param_3, float param_4, float param_5) {
  bool bVar1;
  
  *((undefined4 *)this) = param_2;
  bVar1 = ABS(param_5 - param_4) < _DAT_006ccae0;
  ((undefined4 *)this)[2] = param_4;
  ((undefined4 *)this)[1] = param_3;
  ((undefined4 *)this)[3] = param_5;
  if (bVar1) {
    ((undefined4 *)this)[3] = param_5 + _DAT_006ccae0;
  }
  ((undefined4 *)this)[4] = 0;
  ((undefined4 *)this)[5] = param_2;
  return;
}
