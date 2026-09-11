/* spd-match: far pct=7.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00433650();
int __cdecl FUN_004337a0();
int __cdecl FUN_00434a10();
int __cdecl FUN_00580240();
int __cdecl FUN_00586690();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_0073457c;
extern unsigned char *DAT_007345d0;
extern unsigned char *DAT_0073619c;
extern int DAT_007361a8;
extern int DAT_007372b0;
extern int DAT_007372b8;
extern unsigned char *DAT_007372bc;
extern int DAT_0078a30c;
extern int DAT_0078a344;
extern int _DAT_006b79ec;
extern int _DAT_006cc79c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc844;
extern int _DAT_006cc8b0;
extern int _DAT_006cc920;
extern int _DAT_006cc9f0;
extern int _DAT_006cc9f8;
extern int _DAT_006cca38;
extern int _DAT_006ccc80;

void FUN_004338c0(void)

{
  float fVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int *unaff_EDI;
  float10 fVar9;
  float10 extraout_ST1;
  float local_18;
  int local_c;
  
  iVar7 = *unaff_EDI;
  *(undefined1 *)((int)unaff_EDI + 0xd) = 0;
  *(undefined1 *)((int)unaff_EDI + 0xe) = 0;
  if ((*(int *)(iVar7 + 0x28) != 0) || (*(char *)(*(int *)(iVar7 + 0x14) + 0x734) != '\0')) {
    fVar3 = *(float *)(iVar7 + 0x810) * _DAT_006cc9f8;
    local_18 = 0.0;
    iVar7 = DAT_0073619c;
    if (0 < *(short *)(DAT_0073619c + 0x53c)) {
      piVar8 = unaff_EDI + 0xe;
      do {
        iVar4 = FUN_00433650(unaff_EDI,fVar3,
                             *(undefined4 *)((int)piVar8 + iVar7 + (0x508 - (int)unaff_EDI)));
        if (iVar4 != 0) {
          if (local_c == 0) {
            if (local_18 == (float)(int)*(char *)(iVar7 + 0x53f)) {
              *(char *)(unaff_EDI + 2) = (char)unaff_EDI[2] + -1;
            }
          }
          else {
            if (local_18 == (float)(int)*(char *)(iVar7 + 0x53f)) {
              cVar6 = (char)unaff_EDI[2] + '\x01';
              *(char *)(unaff_EDI + 2) = cVar6;
              if (*(char *)((int)unaff_EDI + 9) < cVar6) {
                *(char *)((int)unaff_EDI + 9) = cVar6;
                *(undefined1 *)((int)unaff_EDI + 0xd) = 1;
              }
            }
            sVar2 = SUB42(local_18,0) + (char)unaff_EDI[2] * 5;
            *(short *)(unaff_EDI + 1) = sVar2;
            if (*(short *)((int)unaff_EDI + 6) < sVar2) {
              *(short *)((int)unaff_EDI + 6) = sVar2;
              *(undefined1 *)((int)unaff_EDI + 0xe) = 1;
              FUN_00586690(0x3c23d70a);
              iVar4 = FUN_00674898();
              iVar7 = DAT_0073619c;
              if (*DAT_007345d0 == 0) {
                if ((unaff_EDI[9] != 0) && (unaff_EDI[9] != 0x7fffffff)) {
                  piVar8[5] = *piVar8;
                  *piVar8 = iVar4 - unaff_EDI[9];
                  piVar8[0xf] = piVar8[10];
                  if (*piVar8 < piVar8[10]) {
                    piVar8[10] = *piVar8;
                  }
                  if (((local_18 == (float)(int)*(char *)(iVar7 + 0x53f)) &&
                      (cVar6 = (char)unaff_EDI[2], -1 < cVar6)) && (cVar6 < '\v')) {
                    unaff_EDI[cVar6 + 0x22] = *piVar8;
                    unaff_EDI[(char)unaff_EDI[2] + 0x2d] = unaff_EDI[(char)unaff_EDI[2] + 0x22];
                    cVar6 = (char)unaff_EDI[2];
                    if ('\0' < cVar6) {
                      unaff_EDI[cVar6 + 0x2d] = unaff_EDI[cVar6 + 0x2d] + unaff_EDI[cVar6 + 0x2c];
                    }
                  }
                }
                piVar8[-5] = iVar4;
              }
              else if ((DAT_0078a30c == 2) &&
                      (local_18 == (float)(int)*(char *)(DAT_0073619c + 0x53f))) {
                iVar5 = unaff_EDI[9];
                if ((iVar5 != 0) && (iVar5 != 0x7fffffff)) {
                  *piVar8 = iVar4 - iVar5;
                }
                piVar8[-5] = iVar4;
              }
            }
          }
        }
        local_18 = (float)((int)local_18 + 1);
        piVar8 = piVar8 + 1;
      } while ((int)local_18 < (int)*(short *)(iVar7 + 0x53c));
    }
    if (*DAT_007345d0 == 0) {
      iVar4 = *unaff_EDI;
      if (2 < *(int *)(iVar4 + 0x3cc)) {
        if (*(int *)(*(int *)(iVar4 + 0x14) + 4) == 1) {
          fVar1 = *(float *)(iVar4 + 0x3d0);
          if (*(float *)(iVar4 + 0x3d0) < (float)unaff_EDI[0x46]) {
            fVar1 = (float)unaff_EDI[0x46];
          }
        }
        else {
          local_18 = *(float *)(iVar4 + 0x404);
          if (local_18 < _DAT_006cc7bc) {
            local_18 = 1.0;
          }
          fVar9 = (**(float10 (**)())(**(int **)(iVar4 + 0x30) + 0x70))();
          local_18 = (float)(fVar9 / (float10)local_18);
          if (ABS(*(float *)(*unaff_EDI + 0x3d0)) <= local_18) {
            local_18 = ABS(*(float *)(*unaff_EDI + 0x3d0));
          }
          fVar9 = (float10)FUN_00580240();
          if (fVar9 <= (float10)local_18) {
            local_18 = (float)fVar9;
          }
          fVar1 = (float)unaff_EDI[0x46];
          if ((float)unaff_EDI[0x46] <= local_18) {
            fVar1 = local_18;
          }
          iVar7 = DAT_0073619c;
          if ((fVar1 < DAT_006cc7a4) || (_DAT_006cc844 < fVar1)) {
            fVar1 = (float)unaff_EDI[0x46];
          }
        }
        if (fVar1 != (float)unaff_EDI[0x46]) {
          unaff_EDI[0x46] = (int)fVar1;
        }
      }
      if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
        iVar4 = *unaff_EDI;
        fVar1 = *(float *)(iVar4 + 0x814) -
                *(float *)(iVar7 + 0x540 + *(char *)(iVar7 + 0x53e) * 4) * _DAT_006cc79c *
                DAT_007372b0;
        if ((0 < DAT_007372b8) && (*(char *)(DAT_007372bc + 1) != '\0')) {
          if (DAT_007372b0 * _DAT_006cc920 <= fVar1) {
            if (DAT_007372b0 * _DAT_006cc7dc < fVar1) {
              fVar1 = fVar1 - DAT_007372b0;
            }
          }
          else {
            fVar1 = fVar1 + DAT_007372b0;
          }
        }
        if ((_DAT_006ccc80 <= ABS(fVar1)) && ((float)unaff_EDI[0x49] < DAT_006cc7a4)) {
          iVar5 = FUN_00674898();
          unaff_EDI[0x4a] = iVar5;
          unaff_EDI[0x49] = *(int *)(iVar4 + 0x3d0);
        }
      }
      fVar1 = (float)*(int *)(iVar7 + 0x14) * _DAT_006cca38;
      if (DAT_006cc7a4 < fVar1) {
        unaff_EDI[0x47] = (int)(*(float *)(*unaff_EDI + 0x3bc) / fVar1);
        if ((unaff_EDI[0x48] == 0) &&
           (_DAT_006cc8b0 <= *(float *)(*unaff_EDI + 0x3d0) * _DAT_006cc9f0)) {
          iVar4 = FUN_00674898();
          unaff_EDI[0x48] = iVar4;
        }
      }
      iVar4 = *unaff_EDI;
      if ((((unaff_EDI[0x4e] < *(int *)(iVar4 + 0x3d8)) && (*(int *)(iVar4 + 0x3d8) != 0)) &&
          (unaff_EDI[0x4b] = unaff_EDI[0x4b] + 1, *(int *)(iVar4 + 0x28) == 1)) &&
         (_DAT_006cc7dc < *(float *)(*(int *)(*(int *)(iVar4 + 0x34) + 0x4c) + 0x68))) {
        unaff_EDI[0x4c] = unaff_EDI[0x4c] + 1;
      }
      if (unaff_EDI[0x4e] != *(int *)(iVar4 + 0x3d8)) {
        unaff_EDI[0x4e] = *(int *)(iVar4 + 0x3d8);
      }
    }
    fVar9 = (float10)FUN_00434a10(fVar3);
    fVar9 = (float10)(int)(char)unaff_EDI[2] + fVar9;
    unaff_EDI[5] = (int)(float)fVar9;
    unaff_EDI[8] = (int)(float)fVar9;
    if (DAT_006cc7a4 < DAT_0073457c) {
      unaff_EDI[6] = (int)(float)((float10)_DAT_006b79ec *
                                  ((fVar9 - extraout_ST1) / (float10)DAT_0073457c) +
                                 ((float10)_DAT_006cc7bc - (float10)_DAT_006b79ec) *
                                 (float10)(float)unaff_EDI[6]);
    }
    unaff_EDI[7] = (int)fVar3;
    if ((*(char *)((int)unaff_EDI + 0xd) == '\0') ||
       ((int)*(char *)((int)unaff_EDI + 9) < *(int *)(iVar7 + 0x530))) {
      FUN_004337a0(0);
    }
  }
  return;
}
