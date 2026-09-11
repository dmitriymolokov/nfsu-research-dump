/* spd-match: far pct=7.56 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_int/batches/20260724T143422Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

extern void LAB_0060b6de(...);

struct ThisCallBox {
  undefined4 FUN_0060b4e1(int param_2, uint param_3, int *param_4);
};
undefined4 ThisCallBox::FUN_0060b4e1(int param_2, uint param_3, int *param_4) {
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_18;
  uint local_14;
  int *local_c;
  
  uVar5 = (int)param_4 - 1;
  do {
    if (uVar5 <= param_3) {
      return 0;
    }
    bVar3 = false;
    piVar8 = (int *)(unsigned int)((param_3 * 4 + param_2));
    puVar9 = (uint *)*piVar8;
    piVar1 = (int *)(unsigned int)((param_3 * 4 + 4 + param_2));
    puVar10 = (uint *)*piVar1;
    if ((puVar9 != (uint *)0x0) && (puVar10 != (uint *)0x0)) {
      puVar9[9] = 0;
      puVar10[9] = 0;
      bVar4 = false;
      if (((*puVar9 & 0xffffff) == 1) && ((*puVar10 & 0xffffff) < 4)) {
        puVar9 = (uint *)*piVar1;
        puVar10 = (uint *)*piVar8;
        bVar4 = true;
      }
      else if (((*puVar9 & 0xffffff) == 4) || ((*puVar10 & 0xffffff) != 1)) goto LAB_0060b6de;
      if ((((((((int *)this)[0xc] & 0xffffU) == 0x104) ||
            (iVar6 = (**(code **)(*((int *)this) + 0x84))(puVar9,puVar10), iVar6 == 0)) &&
           (uVar7 = *puVar9 & 0xff000000, uVar7 != 0xe1000000)) &&
          (((uVar7 != 0xe0000000 && (uVar7 != 0x44000000)) &&
           ((uVar7 != 0x48000000 && ((uVar7 != 0x40000000 && (uVar7 != 0x4c000000)))))))) &&
         (uVar7 != 0)) {
        bVar2 = false;
        if (puVar9[3] != 0) {
          local_c = (int *)puVar9[4];
          local_18 = puVar9[3];
          do {
            iVar6 = *local_c;
            if (*(int *)(*(int *)(((int *)this)[5] + iVar6 * 4) + 0xc) == 3) {
              bVar3 = true;
            }
            if (puVar10[1] != 0) {
              param_4 = (int *)puVar10[2];
              local_14 = puVar10[1];
              do {
                if ((*(int *)(*(int *)(((int *)this)[5] + *param_4 * 4) + 0x24) == iVar6) ||
                   (*param_4 == iVar6)) {
                  bVar2 = true;
                }
                param_4 = param_4 + 1;
                local_14 = local_14 - 1;
              } while (local_14 != 0);
            }
            local_c = local_c + 1;
            local_18 = local_18 - 1;
          } while (local_18 != 0);
        }
        param_4 = (int *)0x0;
        if (puVar10[3] != 0) {
          do {
            if (puVar9[1] != 0) {
              local_18 = puVar9[1];
              iVar6 = *(int *)(puVar10[4] + (int)param_4 * 4);
              piVar8 = (int *)puVar9[2];
              do {
                if ((*(int *)(*(int *)(((int *)this)[5] + *piVar8 * 4) + 0x24) == iVar6) ||
                   (*piVar8 == iVar6)) {
                  bVar2 = true;
                }
                piVar8 = piVar8 + 1;
                local_18 = local_18 - 1;
              } while (local_18 != 0);
            }
            param_4 = (int *)((int)param_4 + 1);
          } while ((int)param_4 < puVar10[3]);
        }
        if (((!bVar2) && (!bVar3)) &&
           (*(int *)(*(int *)(((int *)this)[5] + *(int *)puVar10[4] * 4) + 0xc) == 3)) {
          if (bVar4) {
            puVar9[9] = 1;
          }
          else {
            puVar10[9] = 1;
          }
          param_3 = param_3 + 1;
        }
      }
    }
LAB_0060b6de:
    param_3 = param_3 + 1;
  } while( true );
}
