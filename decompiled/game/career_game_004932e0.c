/* spd-match: far pct=1.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_0040a880();
int __cdecl FUN_00442690();
int __cdecl FUN_00493190();
extern int DAT_007372b0;
extern int DAT_007372b4;
extern int DAT_0077af20;
extern int DAT_0078a318;
extern void LAB_0049340c(void);

uint FUN_004932e0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,int param_6)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  float local_38;
  int local_30 [12];
  
  puVar3 = DAT_0077af20;
  iVar7 = 0;
  local_30[10] = 0xffffffff;
  local_30[4] = 0xffffffff;
  local_38 = 1e+06;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[8] = 0;
  local_30[9] = 0;
  local_30[0xb] = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[5] = 0;
  puVar4 = (undefined4 *)FUN_0040a880();
  for (; puVar3 != puVar4; puVar3 = (undefined4 *)*puVar3) {
    iVar7 = FUN_00442690(puVar3,param_3,1,0);
    if (((iVar7 != 0) && (param_6 != iVar7)) &&
       (fVar10 = (float10)FUN_00493190(param_1,local_30 + 6,puVar3,param_2,param_4),
       fVar10 < (float10)local_38)) {
      local_38 = (float)fVar10;
      piVar8 = local_30 + 6;
      piVar9 = local_30;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
    }
  }
  uVar5 = *param_1;
  piVar8 = local_30;
  piVar9 = (int *)(uVar5 + param_5 * 0x18);
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  if ((iVar7 != 0) && (local_30[1] != 0)) {
    uVar5 = 0;
    if (DAT_0078a318 == 0) {
LAB_0049340c:
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    uVar5 = 0;
    if (param_6 != 0) {
      fVar1 = *(float *)(param_6 + 0x38);
      if (DAT_007372b4 == 0) {
        fVar2 = *(float *)(local_30[1] + 0x38);
      }
      else {
        fVar1 = DAT_007372b0 - fVar1;
        fVar2 = DAT_007372b0 - *(float *)(local_30[1] + 0x38);
      }
      uVar5 = CONCAT22((short)((uint)param_6 >> 0x10),
                       (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                       (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 >= fVar1) goto LAB_0049340c;
    }
  }
  return uVar5 & 0xffffff00;
}
