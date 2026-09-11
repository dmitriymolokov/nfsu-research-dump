/* spd-match: far pct=9.42 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_int/batches/20260724T143210Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

int __cdecl FUN_005c8e04(...);
int __cdecl FUN_005ccec4(...);
int __cdecl FUN_005d65b0(...);
int __cdecl FUN_005e8fb1(...);
extern void LAB_005cea93(...);
extern void LAB_005ceb61(...);

struct ThisCallBox {
  int FUN_005ce8ec(int *param_2, int param_3, int *param_4);
};
int ThisCallBox::FUN_005ce8ec(int *param_2, int param_3, int *param_4) {
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  iVar6 = (int)(param_3);
  if (param_4 != (int *)0x0) {
    iVar6 = *(int *)(param_4[2] + param_3 * 4);
  }
  iVar6 = iVar6 * 0x1c + ((int *)this)[9];
  local_c = ((int *)this);
  if (param_2 == (int *)0x0) {
    piVar1 = *(int **)(iVar6 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(int *)(iVar6 + 4) = 0;
    }
    piVar1 = *(int **)(iVar6 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(iVar6 + 0x10) = 0;
    }
    *(undefined4 *)(iVar6 + 0x14) = 0;
    goto LAB_005cea93;
  }
  local_18 = 0;
  iVar5 = (**(code **)(*param_2 + 0x10))(param_2,0,&local_14);
  if (iVar5 < 0) goto LAB_005ceb61;
  piVar1 = *(int **)(iVar6 + 0x10);
  if ((piVar1 == (int *)0x0) || (uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1), uVar3 < local_14)) {
    iVar5 = FUN_005d65b0(local_14,&local_8);
    if (iVar5 < 0) goto LAB_005ceb61;
  }
  else {
    local_8 = *(int **)(iVar6 + 0x10);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 4))(local_8);
    }
  }
  iVar5 = *param_2;
  uVar4 = (**(code **)(*local_8 + 0xc))(local_8,&local_14);
  iVar5 = (**(code **)(iVar5 + 0x10))(param_2,uVar4);
  if (iVar5 < 0) goto LAB_005ceb61;
  puVar7 = (undefined4 *)&local_18;
  uVar4 = (**(code **)(*local_8 + 0xc))(local_8,puVar7);
  iVar5 = FUN_005c8e04(uVar4,puVar7);
  if ((iVar5 < 0) || (iVar5 = (**(code **)(*param_2 + 0xc))(param_2,&local_10), iVar5 < 0))
  goto LAB_005ceb61;
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 4))(local_8);
  }
  piVar1 = *(int **)(iVar6 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  *(int **)(iVar6 + 0x10) = local_8;
  *(undefined4 *)(iVar6 + 0x14) = local_18;
  if (local_10 == (int *)local_c[2]) {
    (**(code **)(*param_2 + 4))(param_2);
    piVar1 = (int *)(unsigned int)((iVar6 + 4));
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    *piVar1 = (int)param_2;
LAB_005cea93:
    *(undefined4 *)(iVar6 + 0xc) = 1;
  }
  else {
    piVar1 = (int *)(unsigned int)((iVar6 + 4));
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    FUN_005e8fb1(1);
    iVar5 = *(int *)local_c[2];
    uVar4 = (**(code **)(*local_8 + 0xc))(local_8,piVar1);
    iVar5 = (**(code **)(iVar5 + 0x16c))(local_c[2],uVar4);
    if (-1 < iVar5) {
      FUN_005e8fb1(0);
      goto LAB_005cea93;
    }
    FUN_005e8fb1(0);
    *(undefined4 *)(iVar6 + 0xc) = 0;
  }
  param_2 = (int *)FUN_005ccec4(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x14),0);
  iVar5 = (int)param_2;
  if ((-1 < (int)param_2) && (param_4 != (int *)0x0)) {
    for (local_c = (int *)param_4[4]; iVar5 = (int)param_2, local_c != param_4;
        local_c = (int *)local_c[4]) {
      if (*local_c != 0) {
        iVar5 = *(int *)(local_c[2] + param_3 * 4) * 0x1c + *(int *)(*local_c + 0x24);
        piVar1 = *(int **)(iVar6 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        piVar1 = *(int **)(iVar6 + 0x10);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        piVar1 = *(int **)(iVar5 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar5 + 4) = 0;
        }
        piVar1 = *(int **)(iVar5 + 0x10);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar5 + 0x10) = 0;
        }
        *(int *)(iVar5 + 4) = *(int *)(iVar6 + 4);
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
        uVar4 = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)(iVar5 + 0x14) = uVar4;
        param_2 = (int *)FUN_005ccec4(*(undefined4 *)(iVar5 + 0x18),uVar4,0);
        iVar5 = (int)param_2;
        if ((int)param_2 < 0) break;
      }
    }
  }
LAB_005ceb61:
  param_2 = (int *)iVar5;
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return (int)param_2;
}
