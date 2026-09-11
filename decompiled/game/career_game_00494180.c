/* spd-match: far pct=5.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00494180 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004407b0();
int __cdecl FUN_00440a40();
int __cdecl FUN_00441030();
int __cdecl FUN_004422b0();
int __cdecl FUN_00493420();
int __cdecl FUN_004936e0();
int __cdecl FUN_004939e0();
int __cdecl FUN_005825e0();
int __cdecl FUN_005829e0();
int __cdecl FUN_00674898();
extern int DAT_006b6ba8;
extern int DAT_006b6bac;
extern int DAT_006b6c20;
extern int DAT_006b6c24;
extern int DAT_006cc7a4;
extern int _DAT_006b6c0c;
extern int _DAT_006b6c10;
extern int _DAT_006b6c14;
extern int _DAT_006b6c18;
extern int _DAT_006b6c1c;
extern int _DAT_006ccd8c;
extern void LAB_004943de(void);
extern void LAB_00494827(void);
void __fastcall FUN_00494180(int * obj, undefined4 param_1, int param_2, int param_3, int param_4, int param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;

  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int local_850;
  float local_84c;
  float local_848;
  float local_844;
  undefined4 local_840;
  undefined4 local_83c;
  float local_838;
  undefined4 local_830;
  undefined4 local_82c;
  float local_828;
  undefined4 local_81c;
  float afStack_810 [255];
  float afStack_414 [260];
  
  if (*obj == 0) {
    return;
  }
  local_844 = 0.0;
  local_848 = 0.0;
  local_850 = 0;
  fVar5 = local_848;
  fVar2 = DAT_006cc7a4;
  if (obj[1] != 1 && -1 < obj[1] + -1) {
    do {
      local_848 = fVar5;
      if ((float)obj[4] <= local_848) break;
      FUN_004422b0(local_844,obj[5]);
      FUN_004407b0(&local_840,0x41400000,0);
      fVar9 = (float10)FUN_00440a40(param_1,&local_840,0,0,0);
      local_838 = (float)(fVar9 + (float10)_DAT_006b6c0c);
      if (param_2 != 0) {
        FUN_005825e0(param_2,&local_840);
      }
      if (param_3 != 0) {
        local_828 = ((int)(_DAT_006b6c10)) + local_838;
        local_830 = local_840;
        local_82c = local_83c;
        FUN_005825e0(param_3,&local_830);
      }
      if (param_4 != 0) {
        local_828 = ((int)(_DAT_006b6c14)) + local_838;
        local_830 = local_840;
        local_82c = local_83c;
        FUN_005825e0(param_4,&local_830);
      }
      local_844 = ((int)(_DAT_006b6c1c)) + local_844;
      fVar5 = ((int)(_DAT_006b6c1c)) + local_848;
      if (fVar5 < (float)obj[4]) {
        iVar8 = local_850 * 0x18;
        do {
          if ((obj[1] + -1 <= local_850) ||
             (iVar6 = *obj, local_844 <= *(float *)(iVar8 + 8 + iVar6))) break;
          local_844 = local_844 - *(float *)(iVar8 + 8 + iVar6);
          local_850 = local_850 + 1;
          obj[5] = (int)(*(float *)(iVar8 + 0x2c + iVar6) + (float)obj[5]);
          iVar8 = iVar8 + 0x18;
        } while (fVar5 < (float)obj[4]);
      }
      local_84c = _DAT_006b6c18 * _DAT_006b6c1c;
      fVar2 = *(float *)(*obj + 0xc + local_850 * 0x18);
      fVar3 = (float)obj[5];
      if (ABS(fVar2 - fVar3) <= local_84c) {
        local_84c = ABS(fVar2 - fVar3);
      }
      if (fVar3 <= fVar2) {
        if (fVar3 < fVar2) {
          fVar3 = fVar3 + local_84c;
        }
      }
      else {
        fVar3 = fVar3 - local_84c;
      }
      obj[5] = (int)fVar3;
      fVar2 = local_848;
    } while (local_850 < obj[1] + -1);
  }
  obj[4] = (int)fVar2;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    local_850 = 0;
    do {
      iVar8 = *(int *)(param_2 + 8);
      if (iVar8 == 0) {
LAB_004943de:
        fVar2 = (float)(*(int *)(param_2 + 4) + -1);
      }
      else if (iVar8 == 1) {
        fVar2 = (float)*(int *)(param_2 + 4);
      }
      else {
        fVar2 = DAT_006cc7a4;
        if (iVar8 == 2) goto LAB_004943de;
      }
      fVar2 = (float)local_850 * fVar2 * _DAT_006ccd8c;
      FUN_005829e0(fVar2);
      FUN_004407b0(&local_840,((int)(DAT_006b6ba8)) + _DAT_006b6c14,0);
      fVar9 = (float10)FUN_00440a40(param_1,&local_840,0,0,0);
      local_838 = (float)(fVar9 + (float10)_DAT_006b6c0c);
      FUN_005829e0(fVar2);
      uVar4 = DAT_006b6bac;
      local_828 = ((int)(_DAT_006b6c10)) + local_838;
      FUN_00441030(param_1,0,0,&local_830,DAT_006b6ba8,DAT_006b6bac);
      FUN_00441030(param_1,1,0,&local_830,DAT_006b6ba8,uVar4);
      FUN_00441030(param_1,0,0,&local_840,DAT_006b6ba8,uVar4);
      FUN_00441030(param_1,1,0,&local_840,DAT_006b6ba8,uVar4);
      afStack_810[local_850] = local_828 - local_838;
      FUN_005829e0(fVar2);
      uVar4 = DAT_006b6bac;
      local_828 = ((int)(_DAT_006b6c14)) + local_838;
      FUN_00441030(param_1,0,0,&local_830,DAT_006b6ba8,DAT_006b6bac);
      FUN_00441030(param_1,1,0,&local_830,DAT_006b6ba8,uVar4);
      FUN_00441030(param_1,0,0,&local_840,DAT_006b6ba8,uVar4);
      FUN_00441030(param_1,1,0,&local_840,DAT_006b6ba8,uVar4);
      local_850 = local_850 + 1;
      afStack_414[local_850] = local_828 - local_838;
    } while (local_850 < 100);
    local_850 = 0;
    do {
      iVar6 = FUN_00674898();
      iVar8 = iVar6 + -1;
      if (iVar8 < iVar6 + 3) {
        fVar2 = afStack_810[local_850];
        iVar7 = iVar8 * 0x10;
        do {
          if ((-1 < iVar7) && (iVar8 < *(int *)(param_3 + 4))) {
            uVar4 = *(undefined4 *)(*(int *)(param_3 + 0xc) + iVar7);
            puVar1 = (undefined4 *)(*(int *)(param_3 + 0xc) + iVar7);
            local_81c = puVar1[1];
            fVar5 = *(float *)(*(int *)(param_2 + 0xc) + 8 + iVar7);
            if (fVar2 < (float)puVar1[2] - fVar5) {
              puVar1[1] = local_81c;
              *puVar1 = uVar4;
              puVar1[2] = fVar5 + fVar2;
            }
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x10;
        } while (iVar8 < iVar6 + 3);
      }
      local_850 = local_850 + 1;
    } while (local_850 < 100);
    local_850 = 0;
    do {
      iVar6 = FUN_00674898();
      iVar8 = iVar6 + -1;
      if (iVar8 < iVar6 + 3) {
        fVar2 = afStack_414[local_850 + 1];
        iVar7 = iVar8 * 0x10;
        do {
          if ((-1 < iVar7) && (iVar8 < *(int *)(param_4 + 4))) {
            uVar4 = *(undefined4 *)(*(int *)(param_4 + 0xc) + iVar7);
            puVar1 = (undefined4 *)(*(int *)(param_4 + 0xc) + iVar7);
            local_81c = puVar1[1];
            fVar5 = *(float *)(*(int *)(param_2 + 0xc) + 8 + iVar7);
            if (fVar2 < (float)puVar1[2] - fVar5) {
              puVar1[1] = local_81c;
              *puVar1 = uVar4;
              puVar1[2] = fVar5 + fVar2;
            }
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x10;
        } while (iVar8 < iVar6 + 3);
      }
      local_850 = local_850 + 1;
    } while (local_850 < 100);
  }
  if ((param_5 != 0) && (param_2 != 0)) {
    if (param_3 == 0) goto LAB_00494827;
    FUN_00674898();
    FUN_00674898();
    FUN_00493420(param_2,param_3);
    FUN_00493420(param_2,param_3);
    if (param_4 != 0) {
      FUN_00493420(param_2,param_4);
      FUN_00493420(param_2,param_4);
    }
  }
  if (param_3 != 0) {
    FUN_004939e0(DAT_006b6c24);
  }
LAB_00494827:
  if (param_4 != 0) {
    FUN_004939e0(DAT_006b6c24);
  }
  if (param_2 != 0) {
    FUN_004936e0(param_2,DAT_006b6c20,0,0);
  }
  if (param_3 != 0) {
    FUN_004936e0(param_3,DAT_006b6c20,0,0);
  }
  if (param_4 != 0) {
    FUN_004936e0(param_4,DAT_006b6c20,0,0);
  }
  return;
}
