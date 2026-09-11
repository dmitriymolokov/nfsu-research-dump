/* spd-match: far pct=5.33 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

struct ThisCallBox {
  undefined4 FUN_0058dc50(float param_2, float param_3, float param_4);
};
undefined4 ThisCallBox::FUN_0058dc50(float param_2, float param_3, float param_4) {
  if (((((float *)this)[4] < ABS(param_2 - *((float *)this)) == (((float *)this)[4] == ABS(param_2 - *((float *)this)))) &&
      (((float *)this)[5] < ABS(param_3 - ((float *)this)[1]) == (((float *)this)[5] == ABS(param_3 - ((float *)this)[1])))) &&
     (((float *)this)[6] < ABS(param_4 - ((float *)this)[2]) == (((float *)this)[6] == ABS(param_4 - ((float *)this)[2])))) {
    return 1;
  }
  return 0;
}
