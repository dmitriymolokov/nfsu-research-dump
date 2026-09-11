/* spd-match: far pct=7.25 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_00/attempt2_thiscall_strings */
#include "ghidra_compat.h"

int __cdecl FUN_00522520(...);
int __cdecl FUN_0064b510(...);
int __cdecl FUN_0064b580(...);
int __cdecl FUN_0064b5a0(...);
int __cdecl FUN_0064bbd0(...);
extern int DAT_006f1dd8;
extern void *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684e6b(...);
void *ExceptionList;

char s_SND__FE_FrontEnd_006bf464[1];

struct ThisCallBox {
  undefined4 FUN_00522b40(int param_2);
};
undefined4 ThisCallBox::FUN_00522b40(int param_2) {
  int iVar1;
  int *piVar2;
  int *local_10;
  void *local_c;
  void (*puStack_8)(...);
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00684e6b;
  local_c = ExceptionList;
  if ((DAT_006f1dd8 != 0) && (param_2 != 0)) {
    ExceptionList = &local_c;
    local_10 = ((int *)this);
    (**(code **)(((int *)this)[8] + 0x28))(0,0);
    PTR_s_CSISSOUND_006f8714 = (unsigned char *)s_SND__FE_FrontEnd_006bf464;
    FUN_0064b510(&puStack_4);
    FUN_0064b580();
    iVar1 = (**(code **)*puStack_4)(0x14,4,0xffffffff);
    FUN_0064b5a0();
    puStack_4 = (undefined4 *)0x0;
    if (iVar1 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00522520();
    }
    puStack_4 = (undefined4 *)0xffffffff;
    ((int *)this)[0xa2] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&local_10);
      FUN_0064b580();
      (**(code **)(*local_10 + 4))(piVar2);
      FUN_0064b5a0();
    }
    ((int *)this)[0xa2] = 0;
  }
  ExceptionList = local_c;
  return 0xffffffff;
}
