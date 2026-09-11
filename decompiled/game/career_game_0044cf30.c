/* spd-match: far pct=7.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0044a2a0();
int __cdecl FUN_0044a2c0();
int __cdecl FUN_00456e90();
int __cdecl FUN_0045d920();
int __cdecl FUN_0057a910();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_005a5340();
int __cdecl FUN_005a5730();
int __cdecl FUN_005a6150();
int __cdecl FUN_005a6700();
int __cdecl FUN_005a67d0();
int __cdecl FUN_005a6d20();
int __cdecl FUN_005a71f0();
int __cdecl FUN_005a75c0();
extern int DAT_006cc7a4;
extern int DAT_0073608c;
extern int _DAT_006ccc30;
extern void LAB_0044d107(void);
extern void LAB_0044d2f4(void);
extern void LAB_0044d337(void);

undefined1 FUN_0044cf30(int *param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  undefined1 local_31;
  float local_2c;
  int *local_28;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_20 = *(float *)(*(int *)(*param_1 + 0x3c) + 0x104) -
             *(float *)(*(int *)(*param_1 + 0x3c) + 0xf4);
  local_28 = param_1 + 0xe3;
  iVar1 = param_2[1];
  local_31 = 1;
  if (param_1[0xe3] == 0) {
    local_24 = 0;
  }
  else {
    local_24 = param_1[0xe5];
  }
  if (*(int *)(param_1[0xea] + 4) == 0) {
    if (param_1[0xe3] != 0) {
      pfVar2 = (float *)param_1[0xe4];
      fVar3 = *(float *)(iVar1 + 100) - pfVar2[1];
      fVar4 = *(float *)(iVar1 + 0x60) - *pfVar2;
      local_14 = fVar4 * pfVar2[3] + fVar3 * pfVar2[4];
      fVar3 = fVar4 * pfVar2[4] - fVar3 * pfVar2[3];
      if (fVar3 <= DAT_006cc7a4) {
        fVar3 = -(fVar3 + pfVar2[9]);
      }
      else {
        fVar3 = fVar3 - pfVar2[10];
      }
      if ((fVar3 < local_20 != (fVar3 == local_20)) && (local_14 <= pfVar2[7])) {
        if (-pfVar2[8] < local_14 == (-pfVar2[8] == local_14)) {
          (**(code **)(*param_2 + 0x2c))(1);
        }
        goto LAB_0044d107;
      }
    }
  }
  else {
    local_2c = 0.0;
    local_1c = 0;
    FUN_005a6700(&local_2c,&local_1c,local_24);
    iVar8 = param_1[0xea];
    local_14 = (float)FUN_005a67d0(local_2c,0);
    local_18 = *(int *)(iVar8 + 8 + (int)local_14 * 4);
    fVar3 = DAT_006cc7a4;
    if (*(int *)(iVar8 + 4) != 0) {
      fVar3 = *(float *)(*(int *)(iVar8 + 8) + 0x58);
    }
    if (fVar3 - _DAT_006ccc30 <= local_2c) {
      fVar3 = DAT_006cc7a4;
      if (*(int *)(iVar8 + 4) != 0) {
        fVar3 = *(float *)(*(int *)(iVar8 + 4 + *(int *)(iVar8 + 4) * 4) + 0x58);
      }
      if ((local_2c < fVar3 != (local_2c == fVar3)) &&
         ((fVar10 = (float10)FUN_005a71f0(local_1c),
          fVar10 < (float10)local_20 != (fVar10 == (float10)local_20) ||
          (cVar5 = (**(code **)(*param_2 + 100))(), cVar5 != '\0')))) {
        iVar8 = param_1[0xe5];
        local_1c = FUN_0044a2c0();
        iVar6 = FUN_0044a2a0();
        *local_28 = iVar6;
        local_28[1] = local_1c;
        local_28[2] = iVar8;
        uVar9 = ((char)param_2[0x129] < 1) - 1 & (int)(char)param_2[0x129];
        if ((int)uVar9 <= (int)local_14) {
          local_18 = uVar9 * 4 + 8;
          do {
            if ((*(char *)(*(int *)(local_18 + param_1[0xea]) + 0x60) != '\0') && (8 < local_18)) {
              local_1c = *param_2;
              uVar7 = FUN_005a6d20();
              (**(code **)(local_1c + 0x4c))(uVar7);
            }
            uVar9 = uVar9 + 1;
            local_18 = local_18 + 4;
          } while ((int)uVar9 <= (int)local_14);
        }
        goto LAB_0044d107;
      }
    }
  }
  (**(code **)(*param_2 + 0x2c))(1);
LAB_0044d107:
  if (*local_28 == 0) {
    FUN_005a5340();
    local_31 = 0;
  }
  else {
    fVar10 = (float10)(**(code **)(*param_2 + 0x28))();
    if ((float10)local_20 < fVar10) {
      (**(code **)(*param_2 + 0x68))();
    }
    FUN_005a5730(local_28,iVar1);
    iVar8 = FUN_005a6150(param_1[0xea],iVar1 + 0x60,1);
    *(char *)(param_2 + 0x129) = (char)iVar8;
    if (iVar8 == -1) {
      if (*(char *)(*(int *)(iVar1 + 0x10) + 0x424) == -1) {
        FUN_0057f2b0(1);
      }
      FUN_005a5340();
    }
    else {
      cVar5 = FUN_005a75c0(iVar1);
      if (((cVar5 == '\0') && (10 < param_1[0xe5])) && (param_1[0xe5] < 0x17)) {
        local_2c = 1.4013e-45;
        do {
          iVar8 = param_1[0xe5] + (int)local_2c;
          cVar5 = FUN_005a75c0(iVar1);
          if (cVar5 != '\0') {
LAB_0044d337:
            param_1[0xe5] = iVar8;
            param_1[0xe6] = 1;
            param_1[0xe7] = 0;
            *(undefined1 *)(param_1 + 0xe9) = 0;
            param_1[0xe8] = 0;
            goto LAB_0044d2f4;
          }
          iVar8 = param_1[0xe5] - (int)local_2c;
          cVar5 = FUN_005a75c0(iVar1);
          if (cVar5 != '\0') goto LAB_0044d337;
          local_2c = (float)((int)local_2c + 1);
        } while ((int)local_2c < 6);
        uVar7 = (**(code **)(*(int *)param_1[0xea] + 4))(0xff,0xff);
        iVar8 = FUN_00456e90(iVar1,uVar7);
        if (iVar8 != -1) {
          param_1[0xe5] = iVar8;
        }
      }
    }
  }
LAB_0044d2f4:
  if (*(int *)(param_1[0xea] + 4) == 0) {
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0xe2) = 0xff;
    local_31 = 0;
  }
  else {
    FUN_0057a910(param_1,param_1[0xea],param_1[0xe5]);
    iVar8 = *(int *)(param_1[0xea] + 4);
    fVar3 = DAT_006cc7a4;
    if (iVar8 != 0) {
      fVar3 = *(float *)(*(int *)(param_1[0xea] + 4 + iVar8 * 4) + 0x58);
    }
    if (fVar3 < (float)param_1[(char)param_1[0xe2] * 0xe + 6]) {
      local_31 = 0;
    }
  }
  if (((DAT_0073608c != 0) && (*local_28 != 0)) &&
     ((*(int *)(*(int *)(iVar1 + 0x14) + 4) == 1 && (*(int *)(iVar1 + 0x24) == 2)))) {
    FUN_0045d920();
  }
  return local_31;
}
