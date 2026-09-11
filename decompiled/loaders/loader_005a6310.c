/* spd-match: far pct=4.59 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A6310 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004594d0();
int __cdecl FUN_005a7270();
extern int DAT_006cc7a4;
extern int DAT_00700638;
extern int _DAT_006cc8bc;
void __fastcall FUN_005a6310(int obj, uint param_1, int param_2, int param_3, char *param_4, float param_5, float param_6, int param_7, char param_8)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;

  uint uVar7;
  uint uVar8;
  int *piVar9;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_34;
  uint local_2c;
  undefined1 local_20 [28];
  
  iVar1 = *(char *)(obj + 0x388) * 0x38 + 8 + obj;
  uVar7 = *(int *)(param_3 + 4) - 1;
  local_2c = ((int)param_1 < 1) - 1 & param_1;
  if ((int)uVar7 < (int)local_2c) {
    local_2c = uVar7;
  }
  uVar8 = param_2 - 2U;
  if ((int)(param_2 - 2U) <= (int)local_2c) {
    uVar8 = local_2c;
  }
  if ((int)uVar7 < (int)uVar8) {
    uVar8 = uVar7;
  }
  fVar2 = *(float *)(*(int *)(param_3 + 8 + local_2c * 4) + 0x58);
  piVar9 = (int *)(param_3 + 8 + local_2c * 4);
  if (0 < (int)((uVar8 - local_2c) + 1)) {
    fVar4 = *(float *)(*(int *)(param_3 + 8 + uVar8 * 4) + 0x58) - fVar2;
    local_34 = 0.0;
    fVar5 = ABS(fVar4);
    if (fVar5 < _DAT_006cc8bc == (fVar5 == _DAT_006cc8bc)) {
      local_34 = (param_6 - param_5) / fVar4;
    }
    else {
      param_5 = param_6;
    }
    if ((int)local_2c <= (int)uVar8) {
      while (*param_4 < '\x14') {
        iVar3 = *piVar9;
        local_50 = (*(float *)(iVar3 + 0x58) - fVar2) * local_34 + param_5;
        if (param_6 <= param_5) {
          if (local_50 <= param_6) {
            local_50 = param_6;
          }
        }
        else if (param_6 <= local_50) {
          local_50 = param_6;
        }
        if ((param_7 < 0) || (4 < param_7)) {
          local_4c = DAT_006cc7a4;
          if ((10 < param_7) && (param_7 < 0x11)) {
            local_4c = *(float *)(iVar3 + -8 + param_7 * 4);
          }
        }
        else {
          local_4c = *(float *)(iVar3 + 0x20);
        }
        local_4c = local_4c + *(float *)(iVar1 + 8);
        if ((param_7 < 0) || (4 < param_7)) {
          local_44 = DAT_006cc7a4;
          if ((10 < param_7) && (param_7 < 0x11)) {
            local_44 = *(float *)(iVar3 + 0x14 + param_7 * 4);
          }
        }
        else {
          local_44 = *(float *)(iVar3 + 0x3c);
        }
        local_44 = local_44 - *(float *)(iVar1 + 8);
        if (param_8 != '\0') {
          local_4c = ((int)(DAT_00700638)) + local_4c;
          local_44 = local_44 - DAT_00700638;
        }
        if (DAT_006cc7a4 <= local_4c) {
          local_4c = 0.0;
        }
        if (local_44 <= DAT_006cc7a4) {
          local_44 = DAT_006cc7a4;
        }
        if (local_50 <= local_4c) {
          local_48 = local_4c;
        }
        else {
          local_48 = local_50;
        }
        if (local_48 <= local_44) {
          local_44 = local_48;
        }
        FUN_005a7270(local_20,*(float *)(iVar3 + 0x58),local_44,param_7);
        FUN_004594d0((int)*(char *)(*piVar9 + 0x5c),*(undefined2 *)(*piVar9 + 0x5e),param_7,1);
        if ((param_4[0x1b1] == '\0') && (local_44 == local_50)) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        param_4[0x1b1] = cVar6;
        local_2c = local_2c + 1;
        piVar9 = piVar9 + 1;
        if ((int)uVar8 < (int)local_2c) {
          return;
        }
      }
    }
  }
  return;
}
