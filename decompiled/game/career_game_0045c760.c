/* spd-match: far pct=5.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2440_float_int */
#include "ghidra_compat.h"

int __cdecl FUN_0045c370();
int __cdecl FUN_0045cb00();
int __cdecl FUN_0045cea0();
int __cdecl FUN_005791c0();
int __cdecl FUN_005a6310();
int __cdecl FUN_005a7390();
int __cdecl FUN_00647b70();
extern int DAT_006cc7a4;
extern int DAT_00700638;
extern int _DAT_006b74f8;
extern int _DAT_006cc954;
extern void LAB_0045c79e(void);
extern void LAB_0045caad(void);

undefined4 FUN_0045c760(int *param_1,char *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  float local_1c;
  int local_18;
  float local_10;
  
  piVar7 = param_3;
  iVar2 = param_3[0xea];
  iVar9 = 0;
  iVar3 = param_3[0xe5];
  if (0 < param_3[1]) {
    piVar11 = param_3 + 0xf;
    do {
      if (*piVar11 == param_1[1]) {
        if (iVar9 != -1) {
          piVar11 = param_3 + iVar9 * 0xe + 2;
          goto LAB_0045c79e;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      piVar11 = piVar11 + 0xe;
    } while (iVar9 < param_3[1]);
  }
  piVar11 = (int *)0x0;
LAB_0045c79e:
  iVar9 = (int)(char)param_3[0xe2];
  if ((iVar3 < 0) || (4 < iVar3)) {
    if ((iVar3 < 0xb) || (0x10 < iVar3)) {
      local_1c = 0.0;
    }
    else {
      local_1c = (float)(unsigned int)(piVar11[iVar3 + -5]);
    }
  }
  else {
    local_1c = (float)(unsigned int)(piVar11[5]);
  }
  iVar10 = *(int *)(iVar2 + 8 + piVar11[0xc] * 4);
  if ((iVar3 < 0) || (4 < iVar3)) {
    if ((iVar3 < 0xb) || (0x10 < iVar3)) {
      local_18 = 0;
    }
    else {
      local_18 = param_3[iVar9 * 0xe + iVar3 + -3];
    }
  }
  else {
    local_18 = param_3[iVar9 * 0xe + 7];
  }
  iVar4 = *(int *)(*(int *)(param_1[1] + 0x1d4) + 0x1c);
  if (*(int *)(iVar4 + 0xe4) != 0) {
    FUN_005791c0();
  }
  fVar12 = (float10)FUN_005a7390(iVar4 + 0x40,0);
  if (fVar12 <= (float10)(unsigned int)(DAT_006cc7a4)) {
    fVar12 = (float10)*(float *)(iVar10 + 0x20) - fVar12;
  }
  else {
    fVar12 = fVar12 - (float10)*(float *)(iVar10 + 0x3c);
  }
  if ((float10)(unsigned int)(_DAT_006cc954) <= fVar12) {
    FUN_0045c370(param_2,param_3,DAT_00700638,2,0,0x47c34f80);
    return 0;
  }
  local_10 = -1.0;
  if (*param_1 != 2) {
    local_10 = 1.0;
  }
  fVar12 = (float10)FUN_0045cea0(param_1,iVar2);
  if ((char)param_1[3] != '\0') {
    fVar12 = fVar12 + (float10)(unsigned int)(_DAT_006b74f8);
  }
  fVar1 = (float)(((float10)(float)(unsigned int)(piVar11[2]) + (float10)(float)(unsigned int)(param_3[iVar9 * 0xe + 4]) + fVar12) *
                 (float10)(unsigned int)(local_10));
  local_1c = fVar1 + local_1c;
  if ((iVar3 < 0) || (4 < iVar3)) {
    fVar5 = DAT_006cc7a4;
    if ((10 < iVar3) && (iVar3 < 0x11)) {
      fVar5 = *(float *)(iVar10 + 0x14 + iVar3 * 4);
    }
  }
  else {
    fVar5 = *(float *)(iVar10 + 0x3c);
  }
  fVar5 = (fVar5 - DAT_00700638) - (float)(unsigned int)(param_3[iVar9 * 0xe + 4]);
  if ((iVar3 < 0) || (4 < iVar3)) {
    fVar6 = DAT_006cc7a4;
    if ((10 < iVar3) && (iVar3 < 0x11)) {
      fVar6 = *(float *)(iVar10 + -8 + iVar3 * 4);
    }
  }
  else {
    fVar6 = *(float *)(iVar10 + 0x20);
  }
  param_3 = (int *)(unsigned int)((fVar6 + (float)(unsigned int)(param_3[iVar9 * 0xe + 4]) + DAT_00700638));
  if ((float)(unsigned int)(param_3) < local_1c) {
    param_3 = (int *)(unsigned int)(local_1c);
  }
  if (fVar5 < (float)(unsigned int)(param_3)) {
    param_3 = (int *)(unsigned int)(fVar5);
  }
  FUN_005a6310(iVar2,param_2,local_18,param_3,iVar3,0);
  if ((param_2[0x1b1] == '\0') && ((float)(unsigned int)(param_3) == local_1c)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  param_2[0x1b0] = *param_2 + -1;
  param_2[0x1b1] = cVar8;
  iVar9 = param_1[1];
  iVar10 = FUN_00647b70();
  if ((iVar10 != 6) ||
     (*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x1d4) + 0x90) + 0x14) + 4) != 1)) {
    iVar9 = param_1[1];
    iVar10 = FUN_00647b70();
    if ((iVar10 != 6) ||
       ((*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x1d4) + 0x90) + 0x14) + 4) != 3 ||
        (*(int *)(*(int *)(*piVar7 + 0x14) + 4) == 3)))) goto LAB_0045caad;
  }
  iVar9 = param_1[1];
  iVar10 = FUN_00647b70();
  if ((iVar10 != 6) ||
     (*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x1d4) + 0x90) + 0xc) + 0xc54) != 1)) {
    FUN_0045cb00(param_1,param_2,iVar2,fVar1,iVar3);
  }
LAB_0045caad:
  FUN_0045c370(param_2,piVar7,DAT_00700638,2,0,0x47c34f80);
  return 1;
}
