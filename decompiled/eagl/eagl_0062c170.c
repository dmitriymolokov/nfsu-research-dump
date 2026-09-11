/* spd-match: far pct=1.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

extern unsigned char *DAT_0070d364;
extern int _DAT_006a8180;
extern int _DAT_006a8188;

void __fastcall FUN_0062c170(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(ushort *)(iVar2 + 0xe) != 0) {
    uVar4 = (**(code **)(*DAT_0070d364 + 0x14))((uint)*(ushort *)(iVar2 + 0xe) << 2);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar4 = (**(code **)(*DAT_0070d364 + 0x14))((uint)*(ushort *)(iVar2 + 0xe) << 2);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    uVar4 = (**(code **)(*DAT_0070d364 + 0x14))((uint)*(ushort *)(iVar2 + 0xe) << 4);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    iVar7 = 0;
    if (*(short *)(iVar2 + 0xe) != 0) {
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar2 + 0x14);
      do {
        fVar3 = _DAT_006a8188;
        *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x2c)) = *puVar5;
        *(undefined4 *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) = puVar5[1];
        iVar7 = iVar7 + 1;
        *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x2c)) =
             fVar3 * *(float *)(iVar6 + 4 + *(int *)(param_1 + 0x2c));
        fVar3 = (float)*(ushort *)(puVar5 + 2) * (float)puVar5[1] * _DAT_006a8188;
        *(float *)(iVar6 + 8 + *(int *)(param_1 + 0x2c)) = (fVar3 + fVar3) - (float)puVar5[1];
        fVar3 = (float)*(ushort *)((int)puVar5 + 10) * (float)puVar5[1] * _DAT_006a8188;
        *(float *)(iVar6 + 0xc + *(int *)(param_1 + 0x2c)) = fVar3 + fVar3;
        pfVar1 = (float *)(iVar6 + 0xc + *(int *)(param_1 + 0x2c));
        iVar6 = iVar6 + 0x10;
        *pfVar1 = _DAT_006a8180 * *pfVar1;
        puVar5 = puVar5 + 3;
      } while (iVar7 < (int)(uint)*(ushort *)(iVar2 + 0xe));
    }
  }
  return;
}
