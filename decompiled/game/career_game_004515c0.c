/* spd-match: far pct=8.86 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_uchar_float */
#include "ghidra_compat.h"

int __cdecl FUN_0044e950(...);
int __cdecl FUN_00451590(...);
int __cdecl FUN_00456960(...);
int __cdecl FUN_00457590(...);
int __cdecl FUN_00458f10(...);
int __cdecl FUN_0045ae10(...);
int __cdecl FUN_0045b150(...);
int __cdecl FUN_0045c370(...);
int __cdecl FUN_00468820(...);
extern int DAT_006b7664;
extern int DAT_006b7670;
extern int DAT_007006ec;
extern int DAT_0073ad34;
extern int DAT_0077a4ac;
extern int _DAT_006b7654;
extern int _DAT_006b7658;
extern int _DAT_006b765c;
extern int _DAT_006b7660;
extern int _DAT_006b7668;
extern int _DAT_006b766c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc8bc;
extern int _DAT_006cca38;
extern int _DAT_006ccda0;
extern void LAB_004519a9(...);
extern void LAB_004519bb(...);
extern void LAB_004519c9(...);

struct ThisCallBox {
  void FUN_004515c0(int *param_2);
};
void ThisCallBox::FUN_004515c0(int *param_2) {
  int *piVar1;
  char cVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int *extraout_EDX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  float10 fVar10;
  float local_1e8;
  char local_1e2;
  undefined1 local_1e1;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d4;
  undefined4 local_1d0 [105];
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar7 = (undefined4 *)(*(int *)(*param_2 + 0x30) + 0x10);
  puVar8 = (undefined4 *)(((int)this) + 0x20);
  for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  fVar3 = ABS(*(float *)(((int)this) + 0x20c) - _DAT_006ccda0);
  *(undefined1 *)(((int)this) + 0x1f0) = 0;
  *(undefined1 *)(((int)this) + 0x1f1) = 1;
  *(undefined4 *)(((int)this) + 0x1ec) = 0;
  *(undefined1 *)(((int)this) + 0x1f2) = 0;
  local_1e2 = *(int *)(*(int *)(*param_2 + 0x14) + 4) == 1;
  local_1e8 = (float)(unsigned int)(DAT_0073ad34 - *(int *)(((int)this) + 0x200));
  if ((fVar3 < _DAT_006cc8bc != (fVar3 == _DAT_006cc8bc)) ||
     ((float)(int)local_1e8 * _DAT_006cca38 < *(float *)(((int)this) + 0x20c))) {
    local_1e8 = (float)(unsigned int)(DAT_0073ad34 - *(int *)(((int)this) + 0x204));
    if ((_DAT_006b765c < (float)(int)local_1e8 * _DAT_006cca38) ||
       (*(char *)(((int)this) + 0x20) == '\0')) {
      piVar1 = param_2 + 0xe6;
      *(int *)(((int)this) + 0x204) = DAT_0073ad34;
      if (*piVar1 != 1) {
        *piVar1 = 1;
        param_2[0xe7] = 0;
        *(undefined1 *)(param_2 + 0xe9) = 0;
        param_2[0xe8] = 0;
      }
      *(undefined1 *)(((int)this) + 0x208) = 1;
      if ((bool)local_1e2) {
        FUN_0045ae10(piVar1,((int)this) + 0x20,param_2,0,2);
      }
      else {
        FUN_00458f10(0,0);
        FUN_0045c370(((int)this) + 0x20,param_2,0,4,0,0x47c34f80);
      }
      local_1e8 = 0.0;
      iVar5 = FUN_00457590(&DAT_0077a4ac,((int)this) + 0x20,param_2 + 0xe3,DAT_007006ec,&local_1e8);
      if ((iVar5 != 0) && (local_1e8 < _DAT_006b7660)) {
        local_2c = 0;
        local_28 = 0;
        puVar7 = local_1d0;
        for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        FUN_00458f10(0,0);
        local_1e1 = 1;
        local_1e0 = 2;
        local_1d4 = local_1d4 & 0xffffff00;
        local_1d8 = 0;
        local_1dc = iVar5;
        uVar4 = FUN_0045b150(&local_1e0,local_1d0,param_2,DAT_007006ec,&local_1e1,1);
        *(undefined1 *)(((int)this) + 0x208) = uVar4;
        puVar7 = local_1d0;
        puVar8 = (undefined4 *)(((int)this) + 0x20);
        for (iVar5 = 0x70; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        param_2[0xe6] = local_1e0;
        param_2[0xe7] = local_1dc;
        param_2[0xe8] = local_1d8;
        param_2[0xe9] = local_1d4;
      }
    }
    iVar5 = 0;
    local_1e8 = *(float *)(*param_2 + 0x3d4);
    if (local_1e2 == '\0') {
      if ((param_2[0xe3] == 0) || (*(char *)(((int)this) + 0x208) == '\0')) {
        FUN_0044e950(DAT_006b7664);
      }
      else if (local_1e8 <= _DAT_006b7658) {
        fVar10 = (float10)FUN_00451590(((int)this));
        if (*(char *)(((int)this) + 0x209) == '\0') {
          if ((float10)(unsigned int)(_DAT_006b766c) + (float10)(unsigned int)(_DAT_006b7668) < fVar10) {
            *(undefined1 *)(((int)this) + 0x209) = 1;
          }
        }
        else if (fVar10 < (float10)(unsigned int)(_DAT_006b7668)) {
          *(undefined1 *)(((int)this) + 0x209) = 0;
        }
        if (*(char *)(((int)this) + 0x209) == '\0') {
          *(undefined4 *)(((int)this) + 0x1e4) = 0;
          *(undefined4 *)(((int)this) + 0x1ec) = 0;
        }
        else {
          fVar3 = _DAT_006b7658 - _DAT_006cc7bc;
          *(undefined4 *)(((int)this) + 0x1ec) = DAT_006b7670;
          *(float *)(((int)this) + 0x1e4) = fVar3;
        }
      }
      else {
        *(undefined1 *)(((int)this) + 0x209) = 1;
        *(undefined4 *)(((int)this) + 0x1e4) = 0;
        *(undefined4 *)(((int)this) + 0x1ec) = 0;
      }
    }
    else if (*(char *)(((int)this) + 0x208) == '\0') {
      fVar10 = (float10)FUN_00456960(*(undefined4 *)(*param_2 + 0x3d4));
      *(float *)(((int)this) + 0x1e4) = (float)(fVar10 * (float10)(unsigned int)(DAT_006b7664) + (float10)local_1e8);
      param_2 = extraout_EDX;
    }
    else {
      *(undefined4 *)(((int)this) + 0x1e4) = 0;
      *(undefined4 *)(((int)this) + 0x1ec) = 0;
    }
    if (_DAT_006b7654 <= *(float *)(((int)this) + 0x1e4)) {
      local_1e8 = (float)(int)*(char *)(*(int *)(*param_2 + 0x3c) + 0x1c);
      if (0 < (int)local_1e8) {
        do {
          iVar6 = FUN_00468820(iVar5);
          iVar6 = *(int *)(iVar6 + 100);
          cVar2 = *(char *)(*(int *)(iVar6 + 600) + 0x15);
          if ((cVar2 == '\0') && (*(char *)(*(int *)(iVar6 + 0x25c) + 0x15) == '\0')) {
LAB_004519bb:
            *(undefined4 *)(((int)this) + 0x1e4) = 0;
            *(undefined4 *)(((int)this) + 0x1ec) = 0;
            break;
          }
          if (cVar2 == '\0') {
            bVar9 = *(char *)(*(int *)(iVar6 + 0x25c) + 0x15) == '\x04';
LAB_004519a9:
            if (bVar9) goto LAB_004519bb;
          }
          else if (cVar2 == '\x04') {
            bVar9 = *(char *)(*(int *)(iVar6 + 0x25c) + 0x15) == '\0';
            goto LAB_004519a9;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)local_1e8);
      }
      goto LAB_004519c9;
    }
  }
  else {
    local_1e0 = 1;
    local_1dc = 0;
    local_1d4 = local_1d4 & 0xffffff00;
    local_1d8 = 0;
    FUN_0045ae10(&local_1e0,((int)this) + 0x20,param_2,0,2);
  }
  *(undefined4 *)(((int)this) + 0x1e4) = 0;
  *(undefined4 *)(((int)this) + 0x1ec) = 0;
LAB_004519c9:
  *(float *)(((int)this) + 0x1e8) = DAT_006b7664;
  *(undefined1 *)(((int)this) + 0x1e0) = 1;
  return;
}
