/* spd-match: far pct=11.83 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005f7478(...);
int __cdecl FUN_005f7f90(...);
extern int DAT_0069ecd8;
extern int DAT_0069ed74;
extern int DAT_0069ed7c;
extern int DAT_0069ee78;
extern int DAT_006a2f38;
extern int DAT_006a2f84;
extern int DAT_006c166c;
extern int DAT_006c16ac;

struct ThisCallBox {
  int FUN_005fbfb9(int param_2, int param_3, int param_4, int param_5);
};
int ThisCallBox::FUN_005fbfb9(int param_2, int param_3, int param_4, int param_5) {
  int iVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    iVar1 = -0x7fffbffb;
  }
  else {
    ((int *)this)[0xb] = param_3;
    ((int *)this)[0xc] = param_4;
    ((int *)this)[0xd] = param_5;
    ((int *)this)[10] = param_2;
    ((int *)this)[0xe] = 0;
    ((int *)this)[0xf] = 0;
    ((int *)this)[0x10] = 0;
    iVar1 = FUN_005f7478(&DAT_0069ee78,0,0xffffffff,4);
    ((int *)this)[0x13] = iVar1;
    iVar1 = FUN_005f7478(&DAT_0069ed74,0x189,0xffffffff,4);
    ((int *)this)[0x14] = iVar1;
    iVar1 = FUN_005f7478(&DAT_0069ecd8,0x129,0xffffffff,4);
    ((int *)this)[0x15] = iVar1;
    iVar1 = FUN_005f7478(&DAT_006a2f84,0x29,0xffffffff,4);
    ((int *)this)[0x16] = iVar1;
    iVar1 = FUN_005f7478(&DAT_006a2f38,0x32,0xffffffff,4);
    ((int *)this)[0x17] = iVar1;
    iVar1 = FUN_005f7478(&DAT_006c16ac,3,0xffffffff,4);
    ((int *)this)[0x18] = iVar1;
    iVar1 = FUN_005f7478(&DAT_006c166c,6,0xffffffff,4);
    ((int *)this)[0x19] = iVar1;
    iVar1 = FUN_005f7478(&DAT_0069ed7c,0x169,0xffffffff,4);
    ((int *)this)[0x1a] = iVar1;
    if (((int *)this)[1] == 8) {
      piVar2 = ((int *)this) + 0x1b;
      for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar2 = 0;
        piVar2 = piVar2 + 1;
      }
      iVar1 = (**(code **)(*((int *)this) + 0x10))();
      if ((-1 < iVar1) && (iVar1 = FUN_005f7f90(0), -1 < iVar1)) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = -0x7ff8fff2;
    }
  }
  return iVar1;
}
