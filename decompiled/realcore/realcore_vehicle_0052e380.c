/* spd-match: far pct=4.00 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int unaff_retaddr;

struct ThisCallBox {
  void FUN_0052e380(undefined4 param_2, int param_3, undefined4 *param_4);
};
void ThisCallBox::FUN_0052e380(undefined4 param_2, int param_3, undefined4 *param_4) {
  int iVar1;
  undefined4 unaff_retaddr;
  
  iVar1 = (**(code **)(*((int *)this) + 4))(param_2,*param_4);
  ((int *)this)[1] = iVar1;
  ((int *)this)[2] = 0x7fff;
  if (param_3 != 0) {
    iVar1 = (**(code **)(*((int *)this) + 4))(unaff_retaddr,param_4[1]);
    ((int *)this)[2] = iVar1;
  }
  iVar1 = ((param_3 * -2 + 0x7fff) * ((int *)this)[1] >> 0xf) + (((int *)this)[2] * param_3 * 2 >> 0xf);
  ((int *)this)[3] = iVar1;
  ((int *)this)[4] = iVar1;
  return;
}
