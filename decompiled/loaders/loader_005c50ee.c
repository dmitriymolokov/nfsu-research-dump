/* spd-match: far pct=13.78 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_uint_int/batches/20260724T134631Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_005ba2ff(...);
int __cdecl FUN_005c3e7d(...);
int __cdecl FUN_005c564d(...);
int __cdecl FUN_005c7ed5(...);
extern int DAT_00707cb8;

struct ThisCallBox {
  uint FUN_005c50ee(undefined4 param_2, undefined4 param_3, undefined4 *param_4);
};
uint ThisCallBox::FUN_005c50ee(undefined4 param_2, undefined4 param_3, undefined4 *param_4) {
  uint uVar1;
  int iVar2;
  
  if (param_4 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    *param_4 = 0;
    if ((undefined4 *)((undefined4 *)this)[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)((undefined4 *)this)[2])(1);
    }
    if ((undefined4 *)((undefined4 *)this)[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)((undefined4 *)this)[3])(1);
    }
    *((undefined4 *)this) = param_3;
    ((undefined4 *)this)[1] = param_2;
    ((undefined4 *)this)[2] = 0;
    ((undefined4 *)this)[3] = 0;
    ((undefined4 *)this)[4] = 0;
    ((undefined4 *)this)[5] = 0;
    ((undefined4 *)this)[6] = 0;
    ((undefined4 *)this)[0x10] = 0;
    ((undefined4 *)this)[0x11] = 0;
    ((undefined4 *)this)[0x12] = 1;
    ((undefined4 *)this)[0x13] = 0;
    ((undefined4 *)this)[0x14] = 0;
    ((undefined4 *)this)[0x15] = 0;
    ((undefined4 *)this)[0x16] = 0;
    DAT_00707cb8 = (unsigned int)(((undefined4 *)this));
    uVar1 = FUN_005c564d(1);
    if (-1 < (int)uVar1) {
      FUN_005ba2ff(0,0);
      iVar2 = FUN_005c3e7d();
      if (iVar2 != 0) {
        ((undefined4 *)this)[0x10] = 1;
      }
      uVar1 = FUN_005c7ed5();
      if (-1 < (int)uVar1) {
        if (((undefined4 *)this)[0x10] == 0) {
          *param_4 = *(undefined4 *)(((undefined4 *)this)[2] + 8);
          *(undefined4 *)(((undefined4 *)this)[2] + 8) = 0;
        }
        uVar1 = -(uint)(((undefined4 *)this)[0x10] != 0) & 0x80004005;
      }
    }
  }
  return uVar1;
}
