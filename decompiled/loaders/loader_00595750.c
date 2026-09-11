/* spd-match: far pct=4.89 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069_void_illegal */
#include "ghidra_compat.h"

int __cdecl FUN_0040cb70();
int __cdecl FUN_00421400();
int __cdecl FUN_00440a40();
extern int DAT_006ef284;
extern unsigned char *DAT_00734468;
extern int DAT_0073ad34;
extern unsigned char *DAT_00779c70;
extern int _DAT_006cc844;
extern int _DAT_006cc93c;
extern int _DAT_006cca38;
extern int _DAT_006ccb4c;
extern int _DAT_006ccb74;
extern int _DAT_006ccb8c;
extern int _DAT_006ccd60;
extern void LAB_006855b8(void);
void *ExceptionList;

void FUN_00595750(char param_1)

{
  int *******pppppppiVar1;
  int *******pppppppiVar2;
  int ******ppppppiVar3;
  int ******ppppppiVar4;
  float fVar5;
  int *******pppppppiVar6;
  int *******pppppppiVar7;
  int iVar8;
  int *******pppppppiVar9;
  float *pfVar10;
  int *******pppppppiVar11;
  float10 fVar12;
  float10 fVar13;
  int *******local_34;
  int *******pppppppiStack_24;
  int *******local_20;
  int *******local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_006855b8;
  local_14 = ExceptionList;
  if (DAT_00734468 != 0) {
    pppppppiVar11 = (int *******)&local_20;
    local_20 = pppppppiVar11;
    local_1c = (int *******)&local_20;
    local_c = 0;
    ExceptionList = &local_14;
    if (param_1 == '\0') {
      if (DAT_006ef284 == 0) {
        if (DAT_00779c70 == (int *******)0x0) {
          pppppppiVar7 = (int *******)0x0;
        }
        else {
          pppppppiVar7 = DAT_00779c70 + -1;
        }
        ExceptionList = &local_14;
        pppppppiVar9 = (int *******)FUN_0040cb70();
        while (pppppppiVar1 = pppppppiVar7, pppppppiVar1 != pppppppiVar9) {
          pppppppiVar2 = pppppppiVar1 + 1;
          if (pppppppiVar1[1] == (int ******)0x0) {
            pppppppiVar7 = (int *******)0x0;
          }
          else {
            pppppppiVar7 = (int *******)(pppppppiVar1[1] + -1);
          }
          pppppppiVar11 = local_20;
          if (*(char *)((int)pppppppiVar1 + 0x15) == '\x01') {
            pfVar10 = (*(float * (*)())(*pppppppiVar1)[3])();
            if ((_DAT_006cc844 <
                 SQRT(pfVar10[2] * pfVar10[2] + pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10)) &&
               (pppppppiVar1[0x56][0x39] == (int *****)0x0)) {
              ppppppiVar3 = *pppppppiVar2;
              ppppppiVar4 = pppppppiVar1[2];
              *ppppppiVar4 = (int *****)ppppppiVar3;
              ppppppiVar3[1] = (int *****)ppppppiVar4;
              *local_1c = (int ******)pppppppiVar2;
              pppppppiVar1[2] = (int ******)local_1c;
              *pppppppiVar2 = (int ******)&local_20;
              local_1c = pppppppiVar2;
            }
            pfVar10 = (*(float * (*)())(*pppppppiVar1)[5])();
            pppppppiVar6 = local_1c;
            pppppppiVar11 = local_20;
            if (_DAT_006cc93c < ABS(*pfVar10)) {
              ppppppiVar3 = *pppppppiVar2;
              ppppppiVar4 = pppppppiVar1[2];
              *ppppppiVar4 = (int *****)ppppppiVar3;
              ppppppiVar3[1] = (int *****)ppppppiVar4;
              *local_1c = (int ******)pppppppiVar2;
              local_1c = pppppppiVar2;
              pppppppiVar1[2] = (int ******)pppppppiVar6;
              *pppppppiVar2 = (int ******)&local_20;
              pppppppiVar11 = local_20;
            }
          }
        }
      }
      else {
        if (DAT_00779c70 == (int *******)0x0) {
          local_34 = (int *******)0x0;
        }
        else {
          local_34 = DAT_00779c70 + -1;
        }
        ExceptionList = &local_14;
        pppppppiVar7 = (int *******)FUN_0040cb70();
        while (pppppppiVar9 = local_34, pppppppiVar9 != pppppppiVar7) {
          pppppppiVar1 = pppppppiVar9 + 1;
          if (pppppppiVar9[1] == (int ******)0x0) {
            local_34 = (int *******)0x0;
          }
          else {
            local_34 = (int *******)(pppppppiVar9[1] + -1);
          }
          if (((*(char *)((int)pppppppiVar9 + 0x15) == '\x01') &&
              (*(char *)((int)pppppppiVar9 + 0x16) != '\0')) &&
             (pppppppiVar9[0x56][0x39] == (int *****)0x0)) {
            iVar8 = (*(code *)(*pppppppiVar9)[2])();
            fVar12 = (float10)FUN_00440a40(pppppppiVar9[0x19],iVar8,0,0,0);
            fVar13 = (*(float10 (*)())(*pppppppiVar9)[8])();
            pppppppiVar2 = local_1c;
            pppppppiVar11 = local_20;
            if (fVar13 + (float10)*(float *)(iVar8 + 8) < (float10)(float)fVar12) {
              ppppppiVar3 = *pppppppiVar1;
              ppppppiVar4 = pppppppiVar9[2];
              *ppppppiVar4 = (int *****)ppppppiVar3;
              ppppppiVar3[1] = (int *****)ppppppiVar4;
              *local_1c = (int ******)pppppppiVar1;
              local_1c = pppppppiVar1;
              pppppppiVar9[2] = (int ******)pppppppiVar2;
              *pppppppiVar1 = (int ******)&local_20;
              pppppppiVar11 = local_20;
            }
          }
        }
      }
    }
    iVar8 = *(int *)(DAT_00734468 + 0x2c) - *(int *)(DAT_00734468 + 0x18);
    if (iVar8 < 10) {
      if (DAT_00779c70 == (int *******)0x0) {
        local_34 = (int *******)0x0;
      }
      else {
        local_34 = DAT_00779c70 + -1;
      }
      pppppppiVar7 = (int *******)FUN_0040cb70();
      while (pppppppiVar9 = local_34, pppppppiVar9 != pppppppiVar7) {
        pppppppiVar1 = pppppppiVar9 + 1;
        if (pppppppiVar9[1] == (int ******)0x0) {
          pppppppiStack_24 = (int *******)0x0;
        }
        else {
          pppppppiStack_24 = (int *******)(pppppppiVar9[1] + -1);
        }
        pppppppiVar11 = local_20;
        local_34 = pppppppiStack_24;
        if (*(char *)((int)pppppppiVar9 + 0x15) == '\x01') {
          (*(code *)(*pppppppiVar9)[2])();
          fVar12 = (float10)FUN_00421400();
          pppppppiVar2 = local_1c;
          fVar5 = _DAT_006ccb74;
          if (iVar8 < 4) {
            fVar5 = _DAT_006ccb4c;
          }
          pppppppiVar11 = local_20;
          local_34 = pppppppiStack_24;
          if ((*(char *)((int)pppppppiVar9 + 0x4c2) == '\0') &&
             (((fVar5 < (float)fVar12 ||
               (((local_34 = pppppppiStack_24, pppppppiVar9[0x5a] != (int ******)0x0 &&
                 (local_34 = pppppppiStack_24, pppppppiVar9[0x5a] != (int ******)0x7fffffff)) &&
                ((local_34 = pppppppiStack_24,
                 _DAT_006ccb8c < (float)(DAT_0073ad34 - (int)pppppppiVar9[0x5a]) * _DAT_006cca38 &&
                 (local_34 = pppppppiStack_24, _DAT_006ccd60 < (float)fVar12)))))) &&
              (local_34 = pppppppiStack_24, pppppppiVar9[0x56][0x39] == (int *****)0x0)))) {
            ppppppiVar3 = *pppppppiVar1;
            ppppppiVar4 = pppppppiVar9[2];
            *ppppppiVar4 = (int *****)ppppppiVar3;
            ppppppiVar3[1] = (int *****)ppppppiVar4;
            *local_1c = (int ******)pppppppiVar1;
            local_1c = pppppppiVar1;
            pppppppiVar9[2] = (int ******)pppppppiVar2;
            *pppppppiVar1 = (int ******)&local_20;
            pppppppiVar11 = local_20;
            local_34 = pppppppiStack_24;
          }
        }
      }
    }
    if ((int ********)pppppppiVar11 != &local_20) {
      do {
        ppppppiVar3 = pppppppiVar11[1];
        ppppppiVar4 = *pppppppiVar11;
        *ppppppiVar3 = (int *****)ppppppiVar4;
        ppppppiVar4[1] = (int *****)ppppppiVar3;
        pppppppiVar7 = pppppppiVar11 + -1;
        if (pppppppiVar7 == (int *******)0x0) {
          pppppppiVar11 = (int *******)0x0;
        }
        DAT_00779c70[1] = (int ******)pppppppiVar11;
        pppppppiVar11[1] = (int ******)&DAT_00779c70;
        *pppppppiVar11 = (int ******)DAT_00779c70;
        DAT_00779c70 = pppppppiVar11;
        if (pppppppiVar7 != (int *******)0x0) {
          (*(code *)**pppppppiVar7)(1);
        }
        pppppppiVar11 = local_20;
      } while ((int ********)local_20 != &local_20);
    }
    local_c = 0xffffffff;
    if ((int ********)pppppppiVar11 != &local_20) {
      do {
        ppppppiVar3 = pppppppiVar11[1];
        ppppppiVar4 = *pppppppiVar11;
        *ppppppiVar3 = (int *****)ppppppiVar4;
        ppppppiVar4[1] = (int *****)ppppppiVar3;
        if (pppppppiVar11 + -1 != (int *******)0x0) {
          (*(code *)*pppppppiVar11[-1])(1);
        }
        pppppppiVar11 = local_20;
      } while ((int ********)local_20 != &local_20);
    }
  }
  ExceptionList = local_14;
  return;
}
