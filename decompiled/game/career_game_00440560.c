/* spd-match: far pct=4.46 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00440450();
int __cdecl FUN_00567740();
extern int DAT_006cc7a4;
extern void LAB_004406bd(void);
int unaff_EDI;

uint FUN_00440560(float *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,
                 char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined2 uVar8;
  uint uVar6;
  uint uVar7;
  int iVar9;
  int unaff_EDI;
  
  fVar1 = *(float *)(unaff_EDI + 0x30);
  fVar2 = *(float *)(unaff_EDI + 0x34);
  fVar3 = *(float *)(unaff_EDI + 0x38);
  iVar5 = (int)*(char *)(unaff_EDI + 9);
  if (1 < iVar5) {
    iVar9 = iVar5 + -1;
    do {
      iVar5 = FUN_00567740();
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  fVar4 = *param_4;
  uVar8 = (undefined2)((uint)iVar5 >> 0x10);
  uVar6 = CONCAT22(uVar8,(ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                         (ushort)(fVar4 == fVar1) << 0xe);
  if (fVar4 < fVar1) {
    fVar4 = *param_5;
    uVar6 = CONCAT22(uVar8,(ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                           (ushort)(fVar4 == fVar1) << 0xe);
    if (fVar4 >= fVar1 && (fVar4 == fVar1) == 0) {
      fVar4 = param_4[1];
      uVar6 = CONCAT22(uVar8,(ushort)(fVar4 < fVar2) << 8 | (ushort)(NAN(fVar4) || NAN(fVar2)) << 10
                             | (ushort)(fVar4 == fVar2) << 0xe);
      if (fVar4 < fVar2) {
        fVar4 = param_5[1];
        uVar6 = CONCAT22(uVar8,(ushort)(fVar4 < fVar2) << 8 |
                               (ushort)(NAN(fVar4) || NAN(fVar2)) << 10 |
                               (ushort)(fVar4 == fVar2) << 0xe);
        if (fVar4 >= fVar2 && (fVar4 == fVar2) == 0) {
          fVar4 = param_4[2];
          uVar6 = CONCAT22(uVar8,(ushort)(fVar4 < fVar3) << 8 |
                                 (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                                 (ushort)(fVar4 == fVar3) << 0xe);
          if (fVar4 < fVar3) {
            fVar4 = param_5[2];
            uVar6 = CONCAT22(uVar8,(ushort)(fVar4 < fVar3) << 8 |
                                   (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                                   (ushort)(fVar4 == fVar3) << 0xe);
            if ((fVar4 >= fVar3 && (fVar4 == fVar3) == 0) &&
               (uVar6 = FUN_00440450(), (char)uVar6 != '\0')) {
              fVar1 = fVar1 - *param_2;
              fVar2 = fVar2 - param_2[1];
              fVar3 = fVar3 - param_2[2];
              uVar7 = CONCAT31((int3)(uVar6 >> 8),param_6);
              if (param_6 == '\0') {
                fVar4 = fVar1 * *(float *)(unaff_EDI + 0x70) +
                        fVar2 * *(float *)(unaff_EDI + 0x74) + fVar3 * *(float *)(unaff_EDI + 0x78);
                uVar6 = CONCAT22((short)(uVar6 >> 0x10),
                                 (ushort)(fVar4 < DAT_006cc7a4) << 8 |
                                 (ushort)(NAN(fVar4) || NAN(DAT_006cc7a4)) << 10 |
                                 (ushort)(fVar4 == DAT_006cc7a4) << 0xe);
                uVar7 = uVar6;
                if (fVar4 >= DAT_006cc7a4) goto LAB_004406bd;
              }
              fVar2 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
              fVar1 = *param_1;
              uVar6 = CONCAT22((short)(uVar7 >> 0x10),
                               (ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
              if (fVar2 < fVar1) {
                *param_1 = fVar2;
                return CONCAT31((int3)(uVar6 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
LAB_004406bd:
  return uVar6 & 0xffffff00;
}
