/* spd-match: far pct=6.47 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_c2440_float_int/batches/20260724T132922Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl FUN_0044d570(...);
int __cdecl FUN_0044efd0(...);
int __cdecl FUN_0044f470(...);
int __cdecl FUN_0045ae10(...);
int __cdecl FUN_005a6e10(...);
int __cdecl FUN_005aaca0(...);
extern int DAT_006b76e0;
extern int DAT_006b76f0;
extern int DAT_006cc7a4;
extern int _DAT_006b76dc;
extern int _DAT_006b76e4;
extern int _DAT_006b76ec;
extern int _DAT_006cc7a8;
extern int _DAT_006cc7dc;
extern void LAB_00454740(...);
extern void LAB_0045476f(...);

struct ThisCallBox {
  void FUN_00454490(float *param_2);
};
void ThisCallBox::FUN_00454490(float *param_2) {
  int *piVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  int local_30;
  float fStack_24;
  float *local_20;
  int *local_1c;
  float fStack_18;
  float local_14;
  
  local_14 = *param_2;
  piVar1 = (int *)(unsigned int)(param_2[0xea]);
  local_1c = *(int **)(unsigned int)(((int)local_14 + 0x2c));
  local_20 = param_2 + *(char *)(param_2 + 0xe2) * 0xe + 2;
  if (piVar1[0x2e] == -1) {
    local_30 = 0;
  }
  else {
    local_30 = piVar1[piVar1[0x2e] + 2];
  }
  puVar5 = (undefined4 *)FUN_0044d570();
  fVar7 = (float10)(**(code **)(*local_1c + 0x5c))();
  *(float *)(((int)this) + 0x1e4) = (float)fVar7;
  fVar2 = param_2[0xe5];
  if (((int)fVar2 < 0) || (4 < (int)fVar2)) {
    if (((int)fVar2 < 0xb) || (0x10 < (int)fVar2)) {
      fStack_24 = 0.0;
    }
    else {
      fStack_24 = local_20[(int)fVar2 + -5];
    }
  }
  else {
    fStack_24 = local_20[5];
  }
  fStack_18 = 0.0;
  local_20 = (float *)0x0;
  iVar6 = FUN_0044f470(fVar2,fStack_24,DAT_006b76f0,&fStack_18,&local_20);
  if (((iVar6 != 0) && (cVar4 = FUN_0044efd0(iVar6), cVar4 != '\0')) &&
     ((fStack_18 < _DAT_006b76dc || ((float)(unsigned int)(local_20) < DAT_006b76e0)))) {
    fVar2 = *(float *)(((int)this) + 0x1e4);
    if ((float)(unsigned int)(local_20) <= _DAT_006b76e4) {
      if (DAT_006cc7a4 <= fVar2) {
        fVar2 = DAT_006cc7a4;
      }
      *(undefined4 *)(((int)this) + 0x1ec) = 0;
    }
    else {
      if (_DAT_006cc7a8 <= fVar2) {
        fVar2 = _DAT_006cc7a8;
      }
      *(undefined4 *)(((int)this) + 0x1ec) = 0x40000000;
    }
    *(float *)(((int)this) + 0x1e4) = fVar2;
    fVar2 = *param_2;
    *(undefined1 *)(unsigned int)((int)fVar2 + 0x88c) = 1;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x890) = 0x437f0000;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x894) = 0x43000000;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x898) = 0;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x89c) = 0;
  }
  bVar3 = false;
  if (*(char *)(((int)this) + 0x204) == '\0') {
    fStack_18 = (float)(int)*(char *)(local_30 + 0x5c);
    (**(code **)(*piVar1 + 4))();
    switch(*puVar5) {
    case 2:
      if (fStack_18 == (float)(int)*(char *)((int)puVar5 + 5)) goto switchD_00454665_caseD_3;
      break;
    case 3:
switchD_00454665_caseD_3:
      fVar2 = *param_2;
      *(undefined1 *)(unsigned int)((int)fVar2 + 0x88c) = 1;
      bVar3 = true;
      *(undefined4 *)(unsigned int)((int)fVar2 + 0x890) = 0;
      *(undefined4 *)(unsigned int)((int)fVar2 + 0x894) = 0;
      *(undefined4 *)(unsigned int)((int)fVar2 + 0x898) = 0x437f0000;
      *(undefined4 *)(unsigned int)((int)fVar2 + 0x89c) = 0;
      goto LAB_0045476f;
    }
  }
  fStack_18 = (float)(int)*(char *)(local_30 + 0x5c);
  local_20 = (float *)(**(code **)(*piVar1 + 4))();
  iVar6 = 0;
  do {
    if ((float)(int)*(char *)((int)puVar5 + iVar6 + 4) == fStack_18) {
      if ((iVar6 != -1) && (cVar4 = FUN_005aaca0(local_20), cVar4 != '\0')) {
        iVar6 = 0;
        goto LAB_00454740;
      }
      break;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  fVar2 = *param_2;
  *(undefined1 *)(unsigned int)((int)fVar2 + 0x88c) = 1;
  bVar3 = true;
  *(undefined4 *)(unsigned int)((int)fVar2 + 0x890) = 0x437f0000;
  *(undefined4 *)(unsigned int)((int)fVar2 + 0x894) = 0;
  *(undefined4 *)(unsigned int)((int)fVar2 + 0x898) = 0;
  *(undefined4 *)(unsigned int)((int)fVar2 + 0x89c) = 0;
LAB_0045476f:
  fVar7 = (float10)FUN_005a6e10(piVar1,param_2 + *(char *)(param_2 + 0xe2) * 0xe + 2);
  fStack_18 = (float)fVar7;
  if (bVar3) {
    if (fStack_18 <= _DAT_006b76ec) {
      fVar7 = (float10)*(float *)(((int)this) + 0x1e4);
      if ((float10)(unsigned int)(_DAT_006cc7a8) <= fVar7) {
        fVar7 = (float10)(unsigned int)(_DAT_006cc7a8);
      }
    }
    else {
      fVar7 = (float10)(**(code **)(*local_1c + 0x5c))();
      local_1c = *(int **)(((int)this) + 0x1e4);
      if ((float10)(float)(unsigned int)(local_1c) < fVar7) {
        fVar7 = (float10)(float)(unsigned int)(local_1c);
      }
    }
    *(float *)(((int)this) + 0x1e4) = (float)fVar7;
    if (fStack_18 < DAT_006cc7a4) {
      fVar2 = *(float *)(((int)this) + 0x1e4);
      if (DAT_006cc7a4 <= *(float *)(((int)this) + 0x1e4)) {
        fVar2 = DAT_006cc7a4;
      }
      *(float *)(((int)this) + 0x1e4) = fVar2;
      if (*(float *)((int)local_14 + 0x3d4) < _DAT_006cc7dc) {
        *(undefined1 *)(((int)this) + 0x204) = 1;
      }
    }
  }
  else {
    fVar7 = (float10)(**(code **)(*local_1c + 0x5c))();
    local_14 = *(float *)(((int)this) + 0x1e4);
    if ((float10)(unsigned int)(local_14) < fVar7) {
      fVar7 = (float10)(unsigned int)(local_14);
    }
    *(float *)(((int)this) + 0x1e4) = (float)fVar7;
    fVar2 = *param_2;
    *(undefined1 *)(unsigned int)((int)fVar2 + 0x88c) = 1;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x890) = 0;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x894) = 0x437f0000;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x898) = 0;
    *(undefined4 *)(unsigned int)((int)fVar2 + 0x89c) = 0;
  }
  if (param_2[0xe6] == 0.0) {
    param_2[0xe6] = 1.4013e-45;
    param_2[0xe7] = 0.0;
    *(undefined1 *)(param_2 + 0xe9) = 0;
    param_2[0xe8] = 0.0;
  }
  FUN_0045ae10(param_2 + 0xe6,((int)this) + 0x20,param_2,0,0);
  *(undefined4 *)(((int)this) + 0x1e8) = 0;
  *(undefined4 *)(((int)this) + 0x1ec) = 0x3f800000;
  *(undefined1 *)(((int)this) + 0x1f0) = 0;
  *(undefined1 *)(((int)this) + 0x1f1) = 1;
  *(undefined1 *)(((int)this) + 0x1f2) = 0;
  *(undefined1 *)(((int)this) + 0x1e0) = 1;
  return;
  while (iVar6 = iVar6 + 1, iVar6 < 2) {
LAB_00454740:
    if (*(char *)((int)puVar5 + iVar6 + 4) == *(char *)(local_30 + 0x5c)) {
      if ((iVar6 != -1) && (puVar5[3] != (uint)(iVar6 == 0))) {
        puVar5[3] = iVar6;
      }
      break;
    }
  }
  goto LAB_0045476f;
}
