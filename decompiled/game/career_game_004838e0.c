/* spd-match: far pct=3.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00440200();
int __cdecl FUN_00441030();
extern int DAT_006b6c80;
extern int DAT_006cc7a4;
extern int DAT_006ef2dd;
extern int _DAT_006b6c98;
extern int _DAT_006cc7bc;

void FUN_004838e0(int *param_1,int param_2,undefined4 param_3,float *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  int local_50;
  float local_4c;
  int *local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_30 = *param_4;
  local_2c = param_4[1];
  local_28 = param_4[2];
  FUN_00441030(param_2,1,1,&local_30,DAT_006b6c80,0x3f800000);
  local_40 = local_30 - *param_4;
  local_44 = 0;
  local_3c = local_2c - param_4[1];
  local_38 = local_28 - param_4[2];
  do {
    iVar4 = 0;
    local_20 = local_40 + *param_4;
    local_50 = 0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_1c = local_3c + param_4[1];
    local_28 = 0.0;
    local_18 = local_38 + param_4[2];
    if (*(int *)(param_2 + 0x2a0) < 1) break;
    local_48 = (int *)(param_2 + 0x20);
    do {
      iVar1 = *local_48;
      if (((&DAT_006ef2dd)[*(char *)(iVar1 + 0xb) * 0x94] == '\0') &&
         (cVar3 = FUN_00440200(&local_4c), cVar3 != '\0')) {
        if ((*(byte *)(iVar1 + 10) & 2) == 0) {
          fVar5 = (float10)_DAT_006b6c98;
        }
        else {
          fVar5 = (**(float10 (**)())(*param_1 + 0x2c))();
        }
        if ((DAT_006cc7a4 <= local_4c) && ((float10)local_4c < fVar5)) {
          fVar5 = fVar5 - (float10)local_4c;
          local_50 = local_50 + 1;
          local_30 = (float)(fVar5 * (float10)*(float *)(iVar1 + 0x70) + (float10)local_30);
          local_2c = (float)(fVar5 * (float10)*(float *)(iVar1 + 0x74) + (float10)local_2c);
          local_28 = (float)(fVar5 * (float10)*(float *)(iVar1 + 0x78) + (float10)local_28);
        }
      }
      iVar4 = iVar4 + 1;
      local_48 = local_48 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x2a0));
    if (local_50 == 0) break;
    local_44 = local_44 + 1;
    fVar2 = _DAT_006cc7bc / (float)local_50;
    local_40 = local_30 * fVar2 + local_40;
    local_3c = local_2c * fVar2 + local_3c;
    local_38 = local_28 * fVar2 + local_38;
  } while (local_44 < 3);
  *param_5 = local_40;
  param_5[3] = 0.0;
  param_5[1] = local_3c;
  param_5[2] = local_38;
  return;
}
