/* spd-match: far pct=5.26 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/residual_m375_c2120/batches/20260724T142643Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;

int __cdecl FUN_0040cb70();
int __cdecl FUN_00421970();
int __cdecl FUN_00468060();
int __cdecl FUN_00469580();
int __cdecl FUN_0046ac90();
int __cdecl FUN_0046b5e0();
int __cdecl FUN_005302f0();
int __cdecl FUN_00597d10();
extern int DAT_006f1dd8;
extern int DAT_00700e5c;
extern int DAT_00700e60;
extern int DAT_00735fe4;
extern int DAT_00736004;
extern int DAT_00736088;
extern int DAT_0073ad34;
extern int DAT_00779be0;
extern int DAT_00779c70;
extern int _DAT_006cc7b8;
extern int _DAT_006cc8a8;
extern int _DAT_006cca38;
extern int _DAT_007000d8;
extern void LAB_00689748(void);
void *ExceptionList;

void FUN_00420380(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int *****pppppiVar3;
  int *****pppppiVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int ******ppppppiVar14;
  undefined4 uVar15;
  int iStack_54;
  int iStack_4c;
  LARGE_INTEGER LStack_48;
  int *****pppppiStack_40;
  int *****pppppiStack_3c;
  int ****appppiStack_38 [9];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00689748;
  pvStack_14 = ExceptionList;
  if (DAT_00779be0 == 0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13 = (undefined4 *)(((int)DAT_00779be0) + -0x250);
  }
  ExceptionList = &pvStack_14;
  puVar8 = (undefined4 *)FUN_00421970();
  while (puVar7 = puVar13, puVar7 != puVar8) {
    if (puVar7[0x94] == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)(puVar7[0x94] + -0x250);
    }
    if (puVar7[0x99] == 0) {
      piVar2 = (int *)puVar7[0x96];
      iVar9 = puVar7[0x97];
      if (((((float)(unsigned int)piVar2[9] < *(float *)(iVar9 + 0x2c) ==
             ((float)(unsigned int)piVar2[9] == *(float *)(iVar9 + 0x2c))) ||
           ((float)(unsigned int)piVar2[0xb] < *(float *)(iVar9 + 0x24))) ||
          ((float)(unsigned int)piVar2[10] < *(float *)(iVar9 + 0x30) ==
           ((float)(unsigned int)piVar2[10] == *(float *)(iVar9 + 0x30)))) ||
         (((((float)(unsigned int)piVar2[0xc] < *(float *)(iVar9 + 0x28) ||
            ((*(char *)((int)piVar2 + 0x1d) == '\0' && (*(char *)(iVar9 + 0x1d) == '\0')))) ||
           (iVar9 = (**(code **)(*piVar2 + 0x50))(), iVar9 == 0)) ||
          (iVar9 = (**(code **)(*(int *)puVar7[0x97] + 0x50))(), iVar9 == 0)))) {
        (**(code **)*puVar7)(1);
      }
    }
  }
  if (DAT_00779c70 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = ((int)DAT_00779c70) + -4;
  }
  iVar10 = FUN_0040cb70();
  while (iVar9 != iVar10) {
    if ((*(char *)(iVar9 + 0x16) != '\0') && (*(char *)(iVar9 + 0x1d) != '\0')) {
      FUN_00469580(iVar9);
    }
    if (*(int *)(iVar9 + 4) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar9 + 4) + -4;
    }
  }
  pppppiStack_40 = (int *****)&pppppiStack_40;
  pppppiStack_3c = (int *****)&pppppiStack_40;
  uStack_c = 0;
  if (DAT_00779be0 == 0) {
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar13 = (undefined4 *)(((int)DAT_00779be0) + -0x250);
  }
  while (puVar13 != puVar8) {
    puVar13[0x98] = 0;
    FUN_00468060(&pppppiStack_40);
    if (puVar13[0x94] == 0) {
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar13 = (undefined4 *)(puVar13[0x94] + -0x250);
    }
  }
  QueryPerformanceCounter(&LStack_48);
  iStack_4c = 0;
  if ((int ******)pppppiStack_40 != &pppppiStack_40) {
    do {
      pppppiVar4 = pppppiStack_40;
      if (DAT_00700e5c <= iStack_4c) break;
      iStack_54 = 0;
      FUN_0046b5e0();
      pppppiVar4[5][0x98] = (int ***)((int)pppppiVar4[5][0x98] + 1);
      pppppiVar3 = (int *****)pppppiVar4[3];
      uVar15 = pppppiVar4[4];
      LStack_48.s.LowPart = uVar15;
      if (*(char *)((int)pppppiVar3 + 0x16) != '\0') {
        FUN_0046ac90();
      }
      if (*(char *)(uVar15 + 0x16) != '\0') {
        FUN_0046ac90();
      }
      if ((*(char *)((int)pppppiVar3 + 0x15) == '\x01') &&
         ((float)(unsigned int)pppppiVar3[0x58] == _DAT_006cc8a8)) {
        iStack_54 = FUN_00597d10(appppiStack_38);
        uVar15 = LStack_48.s.LowPart;
      }
      else if ((*(char *)((int)pppppiVar3 + 0x16) != '\0') &&
              (*(char *)((int)pppppiVar3 + 0x1d) != '\0')) {
        appppiStack_38[0] = (int ****)pppppiVar3;
        iStack_54 = 1;
      }
      if ((*(char *)(uVar15 + 0x15) == '\x01') &&
         ((float)(unsigned int)*(int *****)(uVar15 + 0x160) == _DAT_006cc8a8)) {
        iVar9 = FUN_00597d10(appppiStack_38 + iStack_54);
        iStack_54 = iStack_54 + iVar9;
      }
      else if ((*(char *)(uVar15 + 0x16) != '\0') && (*(char *)(uVar15 + 0x1d) != '\0')) {
        appppiStack_38[iStack_54] = (int ****)uVar15;
        iStack_54 = iStack_54 + 1;
      }
      iVar9 = 0;
      if (0 < iStack_54) {
        do {
          FUN_00469580(appppiStack_38[iVar9]);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iStack_54);
      }
      if (DAT_00779be0 == 0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        puVar13 = (undefined4 *)(((int)DAT_00779be0) + -0x250);
      }
      while (puVar13 != puVar8) {
        iVar9 = 0;
        if (0 < iStack_54) {
          do {
            if ((((int ****)puVar13[0x96] == appppiStack_38[iVar9]) ||
                ((int ****)puVar13[0x97] == appppiStack_38[iVar9])) &&
               ((int)puVar13[0x98] < DAT_00700e60)) {
              FUN_00468060(&pppppiStack_40);
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < iStack_54);
        }
        if (puVar13[0x94] == 0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          puVar13 = (undefined4 *)(puVar13[0x94] + -0x250);
        }
      }
      iStack_4c = iStack_4c + 1;
    } while ((int ******)pppppiStack_40 != &pppppiStack_40);
  }
  iVar9 = DAT_00735fe4;
  if (iStack_4c == DAT_00700e5c) {
    while ((int ******)pppppiStack_40 != &pppppiStack_40) {
      pppppiVar4 = (int *****)*pppppiStack_40;
      pppppiVar3 = (int *****)pppppiStack_40[1];
      *pppppiVar3 = (int ****)pppppiVar4;
      pppppiVar4[1] = (int ****)pppppiVar3;
      iVar10 = *(int *)(iVar9 + 0x18);
      *pppppiStack_40 = (int ****)*(int ******)(iVar9 + 0x10);
      *(int ******)(iVar9 + 0x10) = pppppiStack_40;
      *(int *)(iVar9 + 0x18) = iVar10 + -1;
    }
  }
  puVar13 = *(undefined4 **)(param_1 + 0x10);
  ppppppiVar14 = (int ******)pppppiStack_40;
  while (puVar8 = puVar13, puVar8 != (undefined4 *)(param_1 + 0x10)) {
    LStack_48.s.LowPart = DAT_0073ad34 - puVar8[3];
    puVar13 = (undefined4 *)*puVar8;
    if (_DAT_007000d8 <= (float)(int)LStack_48.s.LowPart * ((int)_DAT_006cca38)) {
      iVar10 = puVar8[0x19];
      piVar2 = *(int **)(iVar10 + 0x264);
      if (piVar2 != (int *)0x0) {
        iVar5 = *piVar2;
        piVar6 = (int *)piVar2[1];
        *piVar6 = iVar5;
        *(int **)(iVar5 + 4) = piVar6;
        if (DAT_006f1dd8 != 0) {
          FUN_005302f0();
        }
        iVar5 = piVar2[0x19];
        iVar12 = *(int *)(iVar5 + 600);
        if (((*(char *)(iVar12 + 0x15) == '\x03') &&
            (ABS(*(float *)(*(int *)(iVar12 + 0x60) + 0x78)) < _DAT_006cc7b8)) ||
           ((*(char *)(*(int *)(iVar5 + 0x25c) + 0x15) == '\x03' &&
            (ABS(*(float *)(*(int *)(*(int *)(iVar5 + 0x25c) + 0x60) + 0x78)) < _DAT_006cc7b8)))) {
          if (*(char *)(iVar12 + 0x15) == '\x03') {
            iVar12 = *(int *)(iVar5 + 0x25c);
          }
          if (iVar12 != 0) {
            uVar11 = *(int *)(iVar12 + 0x130) - 1;
            *(uint *)(iVar12 + 0x130) = uVar11 & ((int)uVar11 < 0) - 1;
          }
        }
        iVar12 = DAT_00736088;
        iVar5 = *(int *)(((int)DAT_00736088) + 0x18);
        *piVar2 = *(int *)(((int)DAT_00736088) + 0x10);
        *(int *)(iVar12 + 0x18) = iVar5 + -1;
        *(int **)(iVar12 + 0x10) = piVar2;
      }
      *(undefined4 *)(iVar10 + 0x264) = 0;
      DAT_00736004 = ((int)DAT_00736004) + -1;
      pcVar1 = (char *)(*(int *)(iVar10 + 600) + 0x1c);
      *pcVar1 = *pcVar1 + -1;
      *(char *)(*(int *)(iVar10 + 0x25c) + 0x1c) = *(char *)(*(int *)(iVar10 + 0x25c) + 0x1c) + -1;
      ppppppiVar14 = (int ******)pppppiStack_40;
    }
  }
  if (ppppppiVar14 != &pppppiStack_40) {
    do {
      pppppiVar4 = *ppppppiVar14;
      pppppiVar3 = ppppppiVar14[1];
      *pppppiVar3 = (int ****)pppppiVar4;
      pppppiVar4[1] = (int ****)pppppiVar3;
      iVar10 = *(int *)(iVar9 + 0x18);
      *ppppppiVar14 = *(int ******)(iVar9 + 0x10);
      *(int *******)(iVar9 + 0x10) = ppppppiVar14;
      *(int *)(iVar9 + 0x18) = iVar10 + -1;
      ppppppiVar14 = (int ******)pppppiStack_40;
    } while ((int ******)pppppiStack_40 != &pppppiStack_40);
  }
  ExceptionList = pvStack_14;
  return;
}
