/* spd-match: far pct=2.25 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_004f76c0(...);

struct ThisCallBox {
  undefined4 FUN_004f7660(float param_2, float param_3);
};
undefined4 ThisCallBox::FUN_004f7660(float param_2, float param_3) {
  undefined2 extraout_var;
  undefined4 uVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_004f76c0(((undefined4)this),&local_10);
  uVar1 = CONCAT22(extraout_var,
                   (ushort)(param_2 < local_10) << 8 | (ushort)(NAN(param_2) || NAN(local_10)) << 10
                   | (ushort)(param_2 == local_10) << 0xe);
  if (param_2 >= local_10) {
    uVar1 = CONCAT22(extraout_var,
                     (ushort)(param_2 < local_8) << 8 | (ushort)(NAN(param_2) || NAN(local_8)) << 10
                     | (ushort)(param_2 == local_8) << 0xe);
    if (param_2 < local_8 != (param_2 == local_8)) {
      uVar1 = CONCAT22(extraout_var,
                       (ushort)(param_3 < local_c) << 8 |
                       (ushort)(NAN(param_3) || NAN(local_c)) << 10 |
                       (ushort)(param_3 == local_c) << 0xe);
      if (param_3 >= local_c) {
        uVar1 = CONCAT22(extraout_var,
                         (ushort)(param_3 < local_4) << 8 |
                         (ushort)(NAN(param_3) || NAN(local_4)) << 10 |
                         (ushort)(param_3 == local_4) << 0xe);
        if (param_3 < local_4 != (param_3 == local_4)) {
          return CONCAT31((int3)((uint)uVar1 >> 8),1);
        }
      }
    }
  }
  return uVar1;
}
