/* spd-match: far pct=12.93 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_int */
#include "ghidra_compat.h"

int __cdecl FUN_00406580(...);
extern unsigned char *DAT_007187c8;
extern unsigned char *DAT_00719798;
int unaff_retaddr;

struct ThisCallBox {
  void FUN_00407760(undefined4 param_2);
};
void ThisCallBox::FUN_00407760(undefined4 param_2) {
  int *piVar1;
  int iVar2;
  int unaff_retaddr;
  
  piVar1 = (int *)(unsigned int)(DAT_007187c8);
  if (*(int *)(((int)this) + 0x130) == -1) {
    *(undefined4 *)(((int)this) + 0x118) = param_2;
    return;
  }
  if ((int *)(unsigned int)(DAT_007187c8) != (int *)0x0) {
    if (*(int *)(((int)this) + 0x134) == 0x13) {
      *(undefined4 *)(((int)this) + 8) = 0xffffffff;
      *(undefined4 *)(((int)this) + 0xc) = 0xffffffff;
      (**(code **)(*piVar1 + 0x20))(piVar1);
      iVar2 = (**(code **)(*DAT_007187c8 + 0x78))
                        (DAT_007187c8,&DAT_00719798 + unaff_retaddr * 0x52,0,2);
      if (iVar2 < 0) {
        FUN_00406580();
      }
      *(int *)(((int)this) + 0x118) = unaff_retaddr;
      return;
    }
    *(undefined4 *)(((int)this) + 0x118) = param_2;
    return;
  }
  *(undefined4 *)(((int)this) + 0x118) = param_2;
  return;
}
