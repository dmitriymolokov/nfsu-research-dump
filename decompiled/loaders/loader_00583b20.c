/* spd-match: far pct=25.86 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00456e90(...);

struct ThisCallBox {
  void FUN_00583b20(int param_2, int param_3, int param_4);
};
void ThisCallBox::FUN_00583b20(int param_2, int param_3, int param_4) {
  undefined4 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    if (((int *)this)[0xee] == 0) {
      *(undefined1 *)(((int *)this) + 0xfb) = 0xff;
    }
    else {
      *(undefined1 *)(((int *)this) + 0xfb) = *(undefined1 *)(((int *)this)[0xee] + 10);
    }
    if (param_4 == -1) {
      uVar1 = (**(code **)(*((int *)this) + 0x40))(0xff,0xff);
      param_4 = FUN_00456e90(((int *)this)[1],uVar1);
      if (param_4 < 1) {
        param_4 = 0;
      }
    }
    ((int *)this)[0xee] = param_2;
    ((int *)this)[0xef] = param_3;
    ((int *)this)[0xf0] = param_4;
  }
  return;
}
