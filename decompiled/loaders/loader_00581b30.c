/* spd-match: far pct=4.03 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00581B30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0046d1c0();
int __cdecl FUN_00583ea0();
extern int DAT_0078efb4;
extern int DAT_0078efb8;
extern int _DAT_006ba014;
extern int _DAT_006ba018;
extern int _DAT_006cc7bc;
extern int _DAT_006ccb78;
void __fastcall FUN_00581b30(int obj, int *param_1, int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int local_60;
  float local_5c;
  float local_24 [9];
  
  fVar1 = *(float *)(obj + 0x1c0);
  fVar5 = _DAT_006cc7bc - fVar1;
  fVar4 = *(float *)(obj + 0x110);
  fVar2 = *(float *)(obj + 0x80);
  fVar3 = *(float *)(obj + 0x20);
  fVar6 = fVar1 * *(float *)(obj + 0x1bc) + fVar5 * *(float *)(obj + 0x1b8);
  FUN_0046d1c0(obj + 0x1b0,local_24);
  local_60 = 0;
  local_5c = 0.0;
  pfVar7 = (float *)(obj + 0x1d8);
  fVar1 = _DAT_006cc7bc / (fVar5 * fVar3 + fVar1 * fVar2);
  iVar8 = 2;
  do {
    fVar2 = fVar1 * local_5c * *pfVar7 * fVar6 * _DAT_006ccb78;
    if (local_24[iVar8] <= fVar2) {
      iVar8 = iVar8 + 1;
      pfVar7 = pfVar7 + 1;
      if (*(int *)(obj + 0x1c8) + 2 <= iVar8) break;
    }
    fVar10 = (float10)FUN_00583ea0(fVar2);
    local_60 = local_60 + 1;
    *(float *)(&((int)(DAT_0078efb4)) + local_60 * 4) =
         (float)((fVar10 * (float10)*pfVar7 * (float10)fVar6 * (float10)fVar1) / (float10)fVar4);
    local_5c = ((int)(_DAT_006ba014)) + local_5c;
  } while (local_60 < 0x4b);
  *(float *)(param_2 + 0x42c) = local_5c;
  local_60 = local_60 + -1;
  if (local_60 < 0x4b) {
    puVar9 = (undefined4 *)(&((int)(DAT_0078efb8)) + local_60 * 4);
    for (iVar8 = 0x4b - local_60; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  local_60 = 0;
  if (0 < *param_1) {
    do {
      fVar10 = (float10)FUN_00583ea0((_DAT_006ba018 * (float)local_60) / (float)(*param_1 + -1));
      *(float *)(param_1[4] + local_60 * 4) = (float)fVar10;
      local_60 = local_60 + 1;
    } while (local_60 < *param_1);
  }
  fVar1 = _DAT_006ba018;
  param_1[2] = (int)_DAT_006ba018;
  param_1[1] = 0;
  param_1[3] = (int)((float)(*param_1 + -1) / fVar1);
  return;
}
