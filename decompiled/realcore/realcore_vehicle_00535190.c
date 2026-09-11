/* spd-match: far pct=7.49 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_03/attempt5_overlay_pointer_thiscall */
#include "ghidra_compat.h"

int __cdecl FUN_0064b510(...);
int __cdecl FUN_0064b580(...);
int __cdecl FUN_0064b5a0(...);
int __cdecl FUN_0064bbd0(...);
int __cdecl FUN_0064c000(...);
int __cdecl FUN_0064c1a0(...);
int __cdecl FUN_00674898(...);
extern int DAT_006b63b0;
extern int DAT_006b63b4;
extern int DAT_006f1dd8;
extern int DAT_006f227c;
extern int DAT_00744220;
extern int _DAT_006cc7bc;
extern void *PTR_s_ENV_STATIC_006f81c0;
extern void LAB_00684d4b(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_00535190(int *param_2, undefined4 *param_3);
};
void ThisCallBox::FUN_00535190(int *param_2, undefined4 *param_3) {
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  LARGE_INTEGER local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (undefined1 *)(unsigned int)&LAB_00684d4b;
  local_10 = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    iVar5 = 0;
    piVar2 = (int *)(((int)this) + 0x234);
    do {
      if ((piVar2[-1] != 0) && (param_2 == (int *)*piVar2)) {
        return;
      }
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 0x8c;
    } while (iVar5 < 2);
    ExceptionList = &local_10;
    *(int **)(*(int *)(((int)this) + 0x480) * 0x230 + 0x234 + ((int)this)) = param_2;
    piVar2 = *(int **)((*(int *)(((int)this) + 0x480) + 1) * 0x230 + ((int)this));
    if (piVar2 != (int *)0x0) {
      if (*piVar2 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&param_2);
      FUN_0064b580();
      (**(code **)(*param_2 + 4))(piVar2);
      FUN_0064b5a0();
      *(undefined4 *)((*(int *)(((int)this) + 0x480) + 1) * 0x230 + ((int)this)) = 0;
    }
    uVar6 = DAT_006f227c ^ 0x1d872b41;
    uVar7 = uVar6 >> 5 ^ uVar6;
    DAT_006f227c = uVar7 << 0x1b ^ uVar7 ^ uVar6;
    iVar5 = *(int *)(((int)this) + 0x480) * 0x230 + ((int)this);
    (**(code **)(*(int *)(iVar5 + 0x20) + 0x28))(*(undefined4 *)(iVar5 + 0x234),0);
    iVar8 = *(int *)(((int)this) + 0x480) * 0x230;
    iVar5 = *(int *)(iVar8 + 0x6c + ((int)this));
    *(int *)(((int)this) + 0x18) = iVar5;
    if (0x7fff < iVar5) {
      *(int *)(((int)this) + 0x18) = 0xffff - iVar5;
    }
    puVar1 = (undefined4 *)(unsigned int)DAT_006b63b0;
    *(uint *)(((int)this) + 0x18) = (0x3fff - (*(uint *)(((int)this) + 0x18) & 0x3fff)) * 2;
    if ((float)(unsigned int)puVar1 < (float)(unsigned int)param_3) {
      param_3 = (undefined4 *)(unsigned int)DAT_006b63b0;
    }
    if ((float)(unsigned int)param_3 < (float)(unsigned int)DAT_006b63b4 != ((float)(unsigned int)param_3 == (float)(unsigned int)DAT_006b63b4)) {
      param_3 = (undefined4 *)(unsigned int)DAT_006b63b4;
    }
    uVar3 = FUN_00674898();
    fVar9 = (float10)_DAT_006cc7bc;
    *(undefined4 *)(iVar8 + ((int)this) + 0x240) = uVar3;
    iVar8 = (**(code **)(*(int *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x20 + ((int)this)) + 4))
                      (0,(float)(fVar9 - extraout_ST0));
    iVar5 = *(int *)(((int)this) + 0x480) * 0x230 + ((int)this);
    *(int *)(iVar5 + 0x23c) =
         *(int *)(iVar5 + 0x70) * (iVar8 * *(int *)(((int)this) + 0x18) >> 0xf) >> 0xf;
    if ((uint)(*(int *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x23c + ((int)this)) *
              *(int *)(((int)this) + 0x18)) >> 0xf != 0) {
      FUN_0064b510(&param_3);
      FUN_0064b580();
      iVar5 = (**(code **)*param_3)(0x18,4,0xffffffff);
      FUN_0064b5a0();
      local_8 = 0;
      param_2 = (int *)(unsigned int)iVar5;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar4 = *(int *)(((int)this) + 0x480) * 0x230;
        iVar8 = *(int *)(iVar4 + 0x6c + ((int)this));
        iVar4 = *(int *)(iVar4 + ((int)this) + 0x240);
        puVar1 = (undefined4 *)(iVar5 + 4);
        *puVar1 = 8;
        *(undefined4 *)(iVar5 + 8) = 0;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0x1fa0 < iVar4) {
          iVar4 = 0x1fa0;
        }
        *(int *)(iVar5 + 0xc) = iVar4;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else if (0xffff < iVar8) {
          iVar8 = 0xffff;
        }
        *(int *)(iVar5 + 0x10) = iVar8;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        iVar8 = FUN_0064c1a0(&DAT_00744220,puVar1,iVar5);
        if (iVar8 < 0) {
          FUN_0064c000(&PTR_s_ENV_STATIC_006f81c0);
          FUN_0064c1a0(&DAT_00744220,puVar1,iVar5);
        }
      }
      *(int *)((*(int *)(((int)this) + 0x480) + 1) * 0x230 + ((int)this)) = iVar5;
      QueryPerformanceCounter(&local_18);
      uVar3 = __allshr();
      *(undefined4 *)(*(int *)(((int)this) + 0x480) * 0x230 + 0x238 + ((int)this)) = uVar3;
    }
    iVar5 = *(int *)(((int)this) + 0x480) + 1;
    *(int *)(((int)this) + 0x480) = iVar5;
    if (1 < iVar5) {
      *(undefined4 *)(((int)this) + 0x480) = 0;
    }
  }
  ExceptionList = local_10;
  return;
}
