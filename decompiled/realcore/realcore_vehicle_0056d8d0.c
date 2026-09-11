/* spd-match: far pct=7.03 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-c2198-0056d8d0/va_0056D8D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040db20();
int __cdecl FUN_005447c0();
int __cdecl FUN_00545180();
int __cdecl FUN_005693b0();
int __cdecl FUN_00674898();
extern int DAT_006b5d9c;
extern int DAT_006b5da0;
extern int DAT_006b5da4;
extern int DAT_006cc7a4;
extern int DAT_007345e4;
extern int DAT_007345e8;
extern unsigned char *DAT_007355b4;
extern int DAT_007355b8;
extern int DAT_007355c4;
extern unsigned char *DAT_007355c8;
extern int DAT_007364a0;
extern int _DAT_006b5dac;
extern int _DAT_006b5db0;
extern int _DAT_006cc7bc;
extern void LAB_0056daa5(void);
extern void LAB_0056db4c(void);
void __fastcall FUN_0056d8d0(undefined4 * obj, int *param_1, undefined4 param_2, undefined4 param_3, uint param_4, int param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  char cVar7;

  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float local_44;
  float local_40;
  float local_38;
  float local_2c;
  int local_28;
  int local_20;
  int local_1c;
  float local_18;
  
  iVar6 = DAT_007355b4;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(int *)(iVar2 + 0x30);
  }
  uVar1 = DAT_007355b4 + 0x40;
  if (DAT_007355b8 <= uVar1) {
    DAT_007355c4 = 1;
    DAT_007355c8 = DAT_007355c8 + 0x40;
    return;
  }
  if (DAT_007355b4 == 0) {
    DAT_007355b4 = uVar1;
    return;
  }
  DAT_007355b4 = uVar1;
  FUN_00401cd0();
  *(undefined4 *)(iVar6 + 0x30) = *obj;
  *(undefined4 *)(iVar6 + 0x34) = obj[1];
  *(undefined4 *)(iVar6 + 0x38) = obj[2];
  *(undefined4 *)(iVar6 + 0x3c) = 0x3f800000;
  iVar8 = FUN_00545180(0x40400000);
  if (DAT_007364a0 == 3) {
    iVar8 = FUN_00674898();
  }
  if (iVar8 < 4) {
    return;
  }
  iVar8 = FUN_0040db20(param_2);
  if (iVar8 == 0) {
    return;
  }
  local_40 = 0.0;
  if ((iVar2 == 0) || (local_2c = DAT_006b5da4, *(int *)(*(int *)(iVar2 + 0x14) + 4) != 3)) {
    local_40 = DAT_006b5d9c;
    local_2c = DAT_006b5da0;
  }
  local_38 = local_40;
  if (DAT_007345e4 != 0) {
    param_4 = param_4 | 1;
  }
  if (DAT_007345e8 != 0) {
    param_4 = param_4 | 2;
  }
  if (((param_4 & 1) != 0) || ((iVar2 != 0 && (cVar7 = FUN_005693b0(), cVar7 != '\0')))) {
    local_38 = local_40 + _DAT_006cc7bc;
  }
  fVar11 = _DAT_006cc7bc;
  if ((param_4 & 2) == 0) {
    if ((local_28 == 0) || (*(float *)(local_28 + 0x1e4) <= _DAT_006b5db0)) goto LAB_0056daa5;
    fVar11 = _DAT_006b5dac * *(float *)(local_28 + 0x1e4);
  }
  local_2c = local_2c + fVar11;
LAB_0056daa5:
  if (param_1[1] == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(param_1[1] + 0x71c);
  }
  if (iVar8 == 0) {
    cVar7 = 'x';
  }
  else {
    cVar7 = *(char *)(iVar8 + 0x10);
  }
  piVar3 = (int *)param_1[0x140];
  do {
    if (piVar3 == param_1 + 0x140) {
      return;
    }
    iVar8 = piVar3[2];
    bVar5 = false;
    bVar4 = false;
    local_44 = 0.0;
    if (iVar8 == -0x6246fecd) {
      local_44 = local_38;
      bVar5 = true;
    }
    else if (iVar8 == -0x2f6f6e3a) {
      local_44 = local_38;
      bVar5 = true;
    }
    else {
      fVar11 = local_2c;
      if (iVar8 != 0x31a66786) {
        if (iVar8 == -0x5d5d0384) {
          local_44 = local_2c;
          fVar11 = local_44;
        }
        else {
          fVar11 = local_2c;
          if (iVar8 != -0x408ff587) goto LAB_0056db4c;
        }
      }
      local_44 = fVar11;
      bVar4 = true;
    }
LAB_0056db4c:
    if ((((cVar7 != '\x0e') && (bVar4 = bVar5, cVar7 != '\r')) || (!bVar4)) &&
       (DAT_006cc7a4 < local_44)) {
      if (_DAT_006cc7bc < local_44) {
        local_44 = 1.0;
      }
      if (param_5 == 0) {
        fVar11 = 0.0;
        uVar10 = 0;
        uVar9 = 0;
      }
      else {
        if ((iVar2 == 0) || (2 < *(int *)(iVar2 + 0x3cc))) {
          local_1c = piVar3[5];
          local_20 = piVar3[4];
          local_18 = -(float)piVar3[6];
          thunk_FUN_005abda2(&local_20,&local_20,iVar6);
          uVar9 = 2;
          fVar11 = local_18;
        }
        else {
          uVar9 = 1;
          fVar11 = 0.0;
        }
        uVar10 = 2;
      }
      FUN_005447c0(param_2,piVar3,local_44,uVar9,uVar10,fVar11);
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}
