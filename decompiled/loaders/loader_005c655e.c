/* spd-match: far pct=4.66 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_03/attempt3_005C655E */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005b212b(...);
int __cdecl FUN_005b291b(...);
int __cdecl FUN_005c51e6(...);
int __cdecl FUN_005c63d8(...);
int __cdecl FUN_005d7ac2(...);
extern void LAB_005c6631(...);
extern void LAB_005c6636(...);
extern void LAB_005c66ce(...);
extern void LAB_005c678d(...);
extern void LAB_005c67b3(...);

struct ThisCallBox {
  int FUN_005c655e(undefined4 *param_2, int *param_3);
};
int ThisCallBox::FUN_005c655e(undefined4 *param_2, int *param_3) {
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  int *piVar10;
  byte *pbVar11;
  char *pcVar12;
  int *piVar13;
  bool bVar14;
  
  puVar3 = (undefined4 *)_malloc(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = (unsigned int)(uintptr_t)param_2;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    param_2 = (undefined4 *)puVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (((param_3 != (int *)0x0) &&
        (pcVar9 = (char *)**(undefined4 **)(((int)this) + 0x54),
        pcVar9 < (char *)(*(undefined4 **)(((int)this) + 0x54))[1])) && (*pcVar9 == '(')) {
      piVar6 = (int *)(((int)this) + 0x60);
      iVar4 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),piVar6);
      param_3 = (int *)(param_2 + 1);
      if (iVar4 < 0) goto LAB_005c67b3;
      do {
        iVar4 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),piVar6);
        if (iVar4 < 0) goto LAB_005c67b3;
        if (*piVar6 != 9) goto LAB_005c66ce;
        for (iVar4 = param_2[1]; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
          pbVar8 = *(byte **)(iVar4 + 0x18);
          pbVar11 = *(byte **)(((int)this) + 0x68);
          do {
            bVar2 = *pbVar11;
            bVar14 = bVar2 < *pbVar8;
            if (bVar2 != *pbVar8) {
LAB_005c6631:
              iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_005c6636;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar11[1];
            bVar14 = bVar2 < pbVar8[1];
            if (bVar2 != pbVar8[1]) goto LAB_005c6631;
            pbVar11 = pbVar11 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_005c6636:
          if (iVar7 == 0) {
            FUN_005b1f01(((int)this) + 4,piVar6,0x5e7,"duplicate macro parameter \'%s\'",
                         *(undefined4 *)(((int)this) + 0x68));
            break;
          }
        }
        pvVar5 = (undefined4 *)_malloc(0x30);
        if (pvVar5 == (void *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_005d7ac2(piVar6);
        }
        *param_3 = iVar4;
        if (iVar4 == 0) goto LAB_005c678d;
        param_3 = (int *)(iVar4 + 0xc);
        iVar4 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),piVar6);
        if (iVar4 < 0) goto LAB_005c67b3;
        if (*piVar6 != 1) goto LAB_005c66ce;
        iVar4 = 2;
        bVar14 = true;
        pcVar9 = ",";
        pcVar12 = (char *)(((int)this) + 0x68);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar14 = *pcVar9 == *pcVar12;
          pcVar9 = pcVar9 + 1;
          pcVar12 = pcVar12 + 1;
        } while (bVar14);
      } while (bVar14);
      iVar4 = 2;
      bVar14 = true;
      pcVar9 = ")";
      pcVar12 = (char *)(((int)this) + 0x68);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = *pcVar9 == *pcVar12;
        pcVar9 = pcVar9 + 1;
        pcVar12 = pcVar12 + 1;
      } while (bVar14);
      if (!bVar14) {
LAB_005c66ce:
        if ((*piVar6 == 0xc) || (*piVar6 == 0xd)) {
          *(undefined4 *)(((int)this) + 0x28) = 1;
        }
        FUN_005b212b(0x5dc,piVar6);
        *(undefined4 *)(((int)this) + 0x2c) = 1;
        iVar4 = -0x7fffbffb;
        goto LAB_005c67b3;
      }
    }
    piVar6 = (int *)(param_2 + 2);
    while( true ) {
      puVar3 = *(undefined4 **)(((int)this) + 0x44);
      piVar1 = (int *)(((int)this) + 0x60);
      if (puVar3 == (undefined4 *)0x0) {
        iVar4 = FUN_005b291b(*(undefined4 *)(((int)this) + 0x80),piVar1);
        if (iVar4 < 0) goto LAB_005c67b3;
      }
      else {
        piVar10 = (int *)(puVar3 + 4);
        piVar13 = piVar1;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar13 = *piVar10;
          piVar10 = piVar10 + 1;
          piVar13 = piVar13 + 1;
        }
        *(undefined4 *)(((int)this) + 0x44) = puVar3[3];
        puVar3[3] = 0;
        (**(code **)*puVar3)(1);
        *(undefined4 *)(((int)this) + 0x70) = *(undefined4 *)(*(int *)(((int)this) + 0x54) + 0x18);
        *(undefined4 *)(((int)this) + 0x74) = *(undefined4 *)(*(int *)(((int)this) + 0x54) + 0x1c);
      }
      if ((*piVar1 == 0xc) || (*piVar1 == 0xd)) {
        *(undefined4 *)(((int)this) + 0x28) = 1;
        iVar4 = FUN_005c63d8(param_2);
        if (-1 < iVar4) {
          param_2 = (undefined4 *)0x0;
          iVar4 = 0;
        }
        goto LAB_005c67b3;
      }
      pvVar5 = (undefined4 *)_malloc(0x30);
      if (pvVar5 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005d7ac2(piVar1);
      }
      *piVar6 = iVar4;
      if (iVar4 == 0) break;
      piVar6 = (int *)(iVar4 + 0xc);
    }
  }
LAB_005c678d:
  iVar4 = -0x7ff8fff2;
LAB_005c67b3:
  if (param_2 != (undefined4 *)0x0) {
    FUN_005c51e6(1);
  }
  return iVar4;
}
