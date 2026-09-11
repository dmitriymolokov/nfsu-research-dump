/* spd-match: far pct=5.60 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004422b0();
int __cdecl FUN_00442690();
extern int DAT_006b7704;
extern int DAT_006cc7a4;
extern int DAT_0077af20;
extern int DAT_0077af30;
extern void LAB_0044aee1(void);
extern void LAB_0044af11(void);
extern void LAB_0044afd9(void);

void FUN_0044adc0(int *param_1,int param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  undefined4 uStack_48;
  int iStack_44;
  float local_34;
  int local_30;
  float *local_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  iVar1 = *(int *)param_1[0xf6];
  local_34 = DAT_006b7704;
  fVar2 = *(float *)(param_1[1] + 0x814);
  iVar13 = 0;
  local_30 = 0;
  local_2c = (float *)0x0;
  iVar10 = (**(code **)(*param_1 + 0x40))();
  iVar3 = param_1[1];
  iVar4 = *(int *)(*(int *)(iVar3 + 0x14) + 4);
  uStack_48 = 1;
  if (iVar4 == 1) {
    uStack_48 = 0x401;
  }
  else if (iVar4 == 2) {
    uStack_48 = 5;
  }
  else if (iVar4 == 3) {
    uStack_48 = 0x201;
  }
  iStack_44 = 0;
  do {
    iVar4 = param_2;
    if (1 < iStack_44) {
      puVar5 = DAT_0077af20;
      if (iVar13 == 0) goto joined_r0x0044b02d;
      break;
    }
    for (; iVar4 <= param_3; iVar4 = iVar4 + 1) {
      if ((-1 < iVar4) && (iVar13 = (&DAT_0077af30)[iVar4], iVar13 != 0)) {
        if (iStack_44 < 1) {
          bVar6 = *(float *)(iVar13 + 0x18) <= fVar2;
          if (*(float *)(iVar13 + 0x1c) <= *(float *)(iVar13 + 0x18)) {
            if (bVar6) goto LAB_0044aee1;
          }
          else if (!bVar6) goto LAB_0044afd9;
          if (fVar2 < *(float *)(iVar13 + 0x1c) == (fVar2 == *(float *)(iVar13 + 0x1c)))
          goto LAB_0044afd9;
        }
LAB_0044aee1:
        if (param_4 == '\0') {
LAB_0044af11:
          pfVar12 = (float *)FUN_00442690(iVar13,DAT_006b7704,uStack_48,0);
          if (pfVar12 != (float *)0x0) {
            FUN_004422b0(0,0);
            fVar7 = *(float *)(iVar3 + 0x60) - fStack_20;
            fVar9 = *(float *)(iVar3 + 100) - fStack_1c;
            fVar8 = *(float *)(iVar3 + 0x68) - fStack_18;
            fVar7 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
            if (param_5 == '\0') {
              fVar8 = (*(float *)(iVar3 + 0x60) - *pfVar12) * pfVar12[4] -
                      (*(float *)(iVar3 + 100) - pfVar12[1]) * pfVar12[3];
              if (fVar8 <= DAT_006cc7a4) {
                fVar8 = -(fVar8 + pfVar12[9]);
              }
              else {
                fVar8 = fVar8 - pfVar12[10];
              }
              if (DAT_006cc7a4 <= fVar8) goto LAB_0044afd9;
            }
            if ((fVar7 < local_34) && (iVar13 != iVar1)) {
              local_34 = fVar7;
              local_30 = iVar13;
              local_2c = pfVar12;
            }
          }
        }
        else {
          iVar11 = 0;
          do {
            if (*(char *)((-(uint)(iVar10 == 0) & 0xfffffffa) + 0x276 + iVar13 + iVar11) != '\0')
            goto LAB_0044af11;
            iVar11 = iVar11 + 1;
          } while (iVar11 < 6);
        }
      }
LAB_0044afd9:
      iVar13 = local_30;
    }
    iStack_44 = iStack_44 + 1;
  } while (iVar13 == 0);
  puVar5 = DAT_0077af20;
  if (local_2c != (float *)0x0) {
    (**(code **)(*param_1 + 0x10))(iVar13,local_2c,0xffffffff);
    return;
  }
joined_r0x0044b02d:
  for (; ((undefined4 **)puVar5 != &DAT_0077af20 && (puVar5 != (undefined4 *)0x0));
      puVar5 = (undefined4 *)*puVar5) {
  }
  puVar5 = (undefined4 *)param_1[0xf6];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0xffffffff;
  return;
}
