/* spd-match: far pct=5.52 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_005A6860 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a7270(...);
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern void LAB_005a6922(...);

struct ThisCallBox {
  float10 FUN_005a6860(int obj, undefined4 param_2, float param_3);
};
float10 ThisCallBox::FUN_005a6860(int obj, undefined4 param_2, float param_3)

{
  int this_index = (int)(uintptr_t)this;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  float local_40;
  float local_3c;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  
  iVar1 = *(int *)(obj + 4);
  iVar7 = iVar1 - this_index;
  if (iVar7 < 2) {
    return (float10)DAT_006cc7a4;
  }
  local_40 = *(float *)(obj + 8 + this_index * 4);
  piVar10 = (int *)(obj + 8 + this_index * 4);
  if (DAT_006cc7a4 <= param_3) {
    while ((iVar9 = -1, this_index < iVar1 &&
           (iVar9 = this_index,
           *(float *)(*piVar10 + 0x58) - *(float *)((int)local_40 + 0x58) < param_3 * _DAT_006cc7dc)
           )) {
      this_index = this_index + 1;
      piVar10 = piVar10 + 1;
    }
    iVar8 = iVar9 + 1;
    if (iVar8 < iVar1) {
      piVar10 = (int *)(obj + 8 + iVar8 * 4);
      do {
        if (param_3 <= *(float *)(*piVar10 + 0x58) - *(float *)((int)local_40 + 0x58)) {
          if (iVar8 != -1) goto LAB_005a6922;
          break;
        }
        iVar8 = iVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar8 < iVar1);
    }
  }
  iVar9 = iVar7 / 2;
  iVar8 = iVar1 + -1;
LAB_005a6922:
  iVar1 = *(int *)(obj + 8 + iVar9 * 4);
  iVar7 = *(int *)(obj + 8 + iVar8 * 4);
  FUN_005a7270(&local_40,*(undefined4 *)((int)local_40 + 0x58),0,param_2);
  FUN_005a7270(&local_30,*(undefined4 *)(iVar1 + 0x58),0,param_2);
  FUN_005a7270(&local_20,*(undefined4 *)(iVar7 + 0x58),0,param_2);
  local_40 = local_40 - local_30;
  local_3c = local_3c - local_2c;
  local_30 = local_30 - local_20;
  local_2c = local_2c - local_1c;
  fVar2 = SQRT(local_3c * local_3c + local_40 * local_40);
  if (fVar2 == DAT_006cc7a4) {
    local_3c = 0.0;
    fVar2 = _DAT_006cc7bc;
  }
  else {
    fVar2 = _DAT_006cc7bc / fVar2;
    local_3c = fVar2 * local_3c;
    fVar2 = fVar2 * local_40;
  }
  fVar4 = SQRT(local_2c * local_2c + local_30 * local_30);
  fVar3 = _DAT_006cc7bc;
  fVar5 = DAT_006cc7a4;
  if (fVar4 != DAT_006cc7a4) {
    fVar4 = _DAT_006cc7bc / fVar4;
    fVar3 = fVar4 * local_30;
    fVar5 = fVar4 * local_2c;
  }
  fVar6 = local_3c * DAT_006cc7a4 - fVar5 * DAT_006cc7a4;
  fVar4 = fVar3 * DAT_006cc7a4 - fVar2 * DAT_006cc7a4;
  fVar2 = fVar5 * fVar2 - local_3c * fVar3;
  fVar3 = SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar4 * fVar4);
  if (DAT_006cc7a4 <= fVar2) {
    return (float10)fVar3;
  }
  return -(float10)fVar3;
}
