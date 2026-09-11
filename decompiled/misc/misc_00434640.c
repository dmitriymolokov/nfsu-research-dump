/* spd-match: far pct=8.36 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00434640 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0043feb0();
int __cdecl FUN_0043fef0();
int __cdecl FUN_00443a10();
extern int DAT_006cc7a4;
extern int DAT_007372b0;
extern int _DAT_006cc9f8;
int __fastcall FUN_00434640(byte * obj, int param_1, undefined4 *param_2, float param_3, int param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  int iVar5;

  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  iVar5 = param_1;
  fVar4 = _DAT_006cc9f8;
  iVar9 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (fVar4 < param_3) {
    param_3 = param_3 - _DAT_006cc9f8;
  }
  iVar6 = -1;
  bVar2 = *obj;
  bVar3 = bVar2;
  pbVar8 = obj;
  while (bVar3 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    bVar3 = *pbVar1;
  }
  param_1 = FUN_0043fef0(iVar6,0);
  if (param_4 != 0) {
    iVar6 = -1;
    bVar3 = bVar2;
    pbVar8 = obj;
    while (bVar3 != 0) {
      iVar6 = iVar6 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar8 + 1;
      pbVar8 = pbVar8 + 1;
      bVar3 = *pbVar1;
    }
    iVar6 = FUN_0043feb0(iVar6);
    if (0 < iVar6) {
      do {
        iVar7 = -1;
        bVar3 = bVar2;
        pbVar8 = obj;
        while (bVar3 != 0) {
          iVar7 = iVar7 * 0x21 + (uint)bVar3;
          pbVar1 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar3 = *pbVar1;
        }
        iVar7 = FUN_0043fef0(iVar7,iVar9);
        if (param_4 == *(int *)(iVar7 + 0xc)) {
          param_1 = iVar7;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar6);
    }
  }
  if (param_1 != 0) {
    FUN_00443a10(&DAT_007372b0,(undefined4 *)(param_1 + 0x10));
    fVar4 = _DAT_006cc9f8 * 0.0;
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    param_2[1] = *(undefined4 *)(param_1 + 0x14);
    *(float *)(iVar5 + 0x540 + *(short *)(iVar5 + 0x53c) * 4) = fVar4;
    *(short *)(iVar5 + 0x53c) = *(short *)(iVar5 + 0x53c) + 1;
    return *(short *)(iVar5 + 0x53c) + -1;
  }
  if (DAT_006cc7a4 <= param_3) {
    *(float *)(iVar5 + 0x540 + *(short *)(iVar5 + 0x53c) * 4) = param_3;
    *(short *)(iVar5 + 0x53c) = *(short *)(iVar5 + 0x53c) + 1;
    return *(short *)(iVar5 + 0x53c) + -1;
  }
  return -1;
}
