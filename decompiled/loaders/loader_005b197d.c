/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_int/batches/20260724T143356Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

int __cdecl FUN_005d65b0(...);

struct ThisCallBox {
  int FUN_005b197d(undefined4 *param_2);
};
int ThisCallBox::FUN_005b197d(undefined4 *param_2) {
  undefined4 * this_ecx = (undefined4 *)this;
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  if (param_2 != (undefined4 *)0x0) {
    if (this_ecx[1] == 0) {
      *param_2 = 0;
    }
    else {
      iVar2 = FUN_005d65b0(this_ecx[1] + 1,param_2);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)*param_2 + 0xc))((int *)*param_2);
      pcVar3 = (char *)(iVar2 + this_ecx[1]);
      *pcVar3 = '\0';
      for (this_ecx = (undefined4 *)*this_ecx; this_ecx != (undefined4 *)0x0;
          this_ecx = (undefined4 *)*this_ecx) {
        pcVar4 = (char *)(this_ecx + 1);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - ((int)this_ecx + 5);
        pcVar3 = pcVar3 + -uVar5;
        pcVar4 = (char *)(this_ecx + 1);
        pcVar7 = pcVar3;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          _memmove(pcVar7, pcVar4, 4);
          pcVar4 = pcVar4 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar7 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
    }
  }
  return 0;
}
