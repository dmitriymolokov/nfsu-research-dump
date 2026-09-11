/* spd-match: far pct=4.18 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_0061663f(...);
int __cdecl FUN_0061a26f(...);

struct ThisCallBox {
  int FUN_0061a3fb(undefined4 param_2, int *param_3, undefined4 param_4, int *param_5, int *param_6, int *param_7, undefined4 param_8, uint param_9, uint param_10, uint param_11);
};
int ThisCallBox::FUN_0061a3fb(undefined4 param_2, int *param_3, undefined4 param_4, int *param_5, int *param_6, int *param_7, undefined4 param_8, uint param_9, uint param_10, uint param_11) {
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar2 = (**(code **)(*((int *)this) + 0x4c))(param_2);
  iVar3 = FUN_0061a26f(iVar2);
  piVar1 = param_3;
  if ((((-1 < iVar3) &&
       (iVar3 = (**(code **)(*((int *)this) + 0x5c))
                          (*(undefined4 *)(((int *)this)[5] + *param_3 * 4),&local_8,&local_14),
       -1 < iVar3)) &&
      (iVar3 = (**(code **)(*((int *)this) + 0x60))(piVar1,param_4,&param_2,local_14), -1 < iVar3)) &&
     (iVar3 = (**(code **)(*((int *)this) + 0x54))(local_8,param_2), piVar1 = param_5, -1 < iVar3)) {
    if (iVar2 == 8) {
      param_2 = 0x70000;
    }
    else if (iVar2 == 9) {
      param_2 = 0xf0000;
    }
    else if (iVar2 == 0x5a) {
      param_2 = 0x30000;
    }
    else if (((iVar2 == 6) || (iVar2 == 0xe)) || ((iVar2 == 0xf || (iVar2 == 7)))) {
      param_2 = 0x10000;
    }
    if (((param_5 == (int *)0x0) ||
        (((iVar3 = (**(code **)(*((int *)this) + 100))
                             (*(undefined4 *)(((int *)this)[5] + *param_5 * 4),&local_8,&local_c),
          -1 < iVar3 &&
          (iVar3 = (**(code **)(*((int *)this) + 0x68))(piVar1,param_8,param_2,&local_10), -1 < iVar3)) &&
         (iVar3 = (**(code **)(*((int *)this) + 0x58))(local_8 ^ param_9,local_10,local_c), -1 < iVar3))))
       && ((((piVar1 = param_6, param_6 == (int *)0x0 ||
             (((iVar3 = (**(code **)(*((int *)this) + 100))
                                  (*(undefined4 *)(((int *)this)[5] + *param_6 * 4),&local_8,&local_c),
               -1 < iVar3 &&
               (iVar3 = (**(code **)(*((int *)this) + 0x68))(piVar1,param_8,param_2,&local_10), -1 < iVar3
               )) && (iVar3 = (**(code **)(*((int *)this) + 0x58))(local_8 ^ param_10,local_10,local_c),
                     -1 < iVar3)))) &&
            ((piVar1 = param_7, param_7 == (int *)0x0 ||
             (((iVar3 = (**(code **)(*((int *)this) + 100))
                                  (*(undefined4 *)(((int *)this)[5] + *param_7 * 4),&local_8,&local_c),
               -1 < iVar3 &&
               (iVar3 = (**(code **)(*((int *)this) + 0x68))(piVar1,param_8,param_2,&local_10), -1 < iVar3
               )) && (iVar3 = (**(code **)(*((int *)this) + 0x58))(local_8 ^ param_11,local_10,local_c),
                     -1 < iVar3)))))) &&
           ((iVar3 = (**(code **)(*((int *)this) + 0x50))(), -1 < iVar3 &&
            (iVar3 = FUN_0061663f(), -1 < iVar3)))))) {
      iVar3 = 0;
    }
  }
  return iVar3;
}
