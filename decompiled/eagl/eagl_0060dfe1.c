/* spd-match: far pct=14.17 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_int/batches/20260724T143422Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

int __cdecl FUN_005f7186(...);
int __cdecl FUN_005f7709(...);
int __cdecl FUN_005f7760(...);
int __cdecl FUN_005f7a42(...);

struct ThisCallBox {
  int FUN_0060dfe1(int *param_2, uint param_3);
};
int ThisCallBox::FUN_0060dfe1(int *param_2, uint param_3) {
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 local_14 [4];
  
  piVar1 = param_2;
  iVar2 = (**(code **)(*((int *)this) + 0x6c))
                    (((int *)this)[0x25],local_14,*(undefined4 *)(((int *)this)[0x26] + 0xc),0,0);
  if (-1 < iVar2) {
    pvVar3 = _malloc(0x38);
    if (pvVar3 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005f7709();
    }
    *param_2 = iVar2;
    if (iVar2 == 0) {
      iVar2 = -0x7ff8fff2;
    }
    else {
      iVar2 = FUN_005f7760(param_3 & 0xffffff | 0x10000000,param_3,param_3,0);
      iVar4 = *param_2;
      if (-1 < iVar2) {
        iVar2 = FUN_005f7a42(((int *)this)[0x26]);
        if (-1 < iVar2) {
          param_2 = (int *)0x0;
          if (param_3 != 0) {
            do {
              iVar2 = (int)param_2 * 4;
              *(undefined4 *)(iVar2 + *(int *)(*piVar1 + 8)) = local_14[(int)param_2];
              *(undefined4 *)(iVar2 + *(int *)(*piVar1 + 0x10)) =
                   *(undefined4 *)(iVar2 + *(int *)(((int *)this)[0x26] + 0x10));
              *(undefined4 *)(iVar2 + *(int *)(((int *)this)[0x26] + 0x10)) = local_14[(int)param_2];
              param_2 = (int *)((int)param_2 + 1);
            } while ((int)param_2 < param_3);
          }
          return 0;
        }
        iVar4 = *param_2;
      }
      param_2 = (int *)iVar2;
      iVar2 = (int)param_2;
      if (iVar4 != 0) {
        FUN_005f7186(1);
      }
    }
  }
  return iVar2;
}
