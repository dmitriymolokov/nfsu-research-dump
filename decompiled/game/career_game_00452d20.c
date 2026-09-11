/* spd-match: far pct=8.84 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_9/buckets/p09_game_b/attempt2_recipe_thiscall */
#include "ghidra_compat.h"

extern int m375_in_EAX;
typedef void *WNDPROC;
typedef void *LPTHREAD_START_ROUTINE;

int __cdecl FUN_00429cc0(...);
int __cdecl FUN_0044f6c0(...);
int __cdecl FUN_00454f30(...);
int __cdecl FUN_0045c370(...);
int __cdecl FUN_0045cff0(...);
int __cdecl FUN_0045d130(...);
int __cdecl FUN_0045d250(...);
extern int DAT_006b76c4;
extern int DAT_006b76cc;
extern int DAT_006b76d0;
extern int DAT_006cc7a4;
extern int DAT_007006ec;
extern int DAT_007361a8;
extern int DAT_0078a344;
extern int _DAT_006b7610;
extern int _DAT_006b76c8;
extern int _DAT_006cc7bc;
extern int _DAT_006cc7dc;
extern int _DAT_006cc8bc;
extern int _DAT_006cca58;
extern void LAB_00452d8c(...);
extern void LAB_00452dad(...);
extern void LAB_00452db6(...);

struct ThisCallBox {
  void FUN_00452d20(int *param_2);
};
void ThisCallBox::FUN_00452d20(int *param_2) {
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float local_4c;
  float local_48;
  int *local_44;
  float *local_40;
  float local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  local_44 = param_2 + 0xe6;
  local_38 = (undefined4 *)(unsigned int)(*param_2);
  piVar1 = (int *)local_38[0xb];
  iVar4 = 0;
  if (0 < param_2[1]) {
    piVar5 = param_2 + 0xf;
    do {
      if (*piVar5 == *(int *)(((int)this) + 0x200)) {
        if ((iVar4 != -1) &&
           (local_40 = (float *)(unsigned int)((param_2 + iVar4 * 0xe + 2)), local_40 != (float *)0x0)) {
          local_4c = 1.0f;
          if (*local_40 <= DAT_006cc7a4) {
            local_4c = 256.0f;
          }
          if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
            cVar3 = FUN_0045d250(local_44,DAT_007006ec,local_4c);
          }
          else {
            cVar3 = FUN_0045d130(((int)this) + 0x20,DAT_007006ec,local_4c);
          }
          if (cVar3 != '\0') goto LAB_00452d8c;
          if (ABS(*(float *)(unsigned int)((((int)this) + 0x204))) < _DAT_006cc8bc ==
              (ABS(*(float *)(unsigned int)((((int)this) + 0x204))) == _DAT_006cc8bc)) {
            local_3c = local_40[1];
            local_48 = local_40[4] - (float)(unsigned int)(param_2[(char)param_2[0xe2] * 0xe + 6]);
            local_40 = (float *)(unsigned int)(*local_40);
            fVar6 = (float10)FUN_00429cc0();
            if ((fVar6 * (float10)*(float *)(unsigned int)((((int)this) + 0x204)) * (float10)(unsigned int)(_DAT_006cc7dc) +
                (float10)(unsigned int)(local_3c)) * (float10)*(float *)(unsigned int)((((int)this) + 0x204)) + (float10)(unsigned int)(local_48) <=
                (float10)(unsigned int)(_DAT_006b76c8)) {
              fVar6 = (float10)(**(code **)(*piVar1 + 0x5c))();
              *(float *)(unsigned int)((((int)this) + 0x1e4)) = (float)(fVar6 + fVar6);
              *(undefined4 *)(((int)this) + 0x1ec) = 0;
              *(undefined4 *)(((int)this) + 0x1e8) = 0;
              FUN_0044f6c0(((int)this));
              goto LAB_00452dad;
            }
          }
          else if (local_40[4] - (float)(unsigned int)(param_2[(char)param_2[0xe2] * 0xe + 6]) <= DAT_006cc7a4)
          goto LAB_00452d8c;
          local_28 = *(float *)(unsigned int)((((int)this) + 0x20c)) * _DAT_006cca58;
          local_20 = *(undefined4 *)(((int)this) + 0x20c);
          local_30 = DAT_006b76c4;
          local_18 = *(float *)(unsigned int)((((int)this) + 0x20c)) + _DAT_006cc8bc;
          local_1c = DAT_006b76d0;
          local_24 = DAT_006b76cc;
          local_38 = &local_30;
          local_2c = 0;
          local_14 = 0x3f800000;
          local_34 = 4;
          FUN_00454f30(&local_4c,*(undefined4 *)(((int)this) + 0x204));
          if (_DAT_006cc7bc <= local_4c) {
            fVar6 = (float10)(**(code **)(*piVar1 + 0x5c))();
            *(float *)(unsigned int)((((int)this) + 0x1e4)) = (float)fVar6;
            *(undefined4 *)(((int)this) + 0x1ec) = 0x40000000;
          }
          else {
            *(float *)(unsigned int)((((int)this) + 0x1e4)) = *(float *)(unsigned int)((*param_2 + 0x3d4)) * local_4c;
            *(float *)(unsigned int)((((int)this) + 0x1ec)) = local_4c + local_4c;
          }
          *(undefined4 *)(((int)this) + 0x1e8) = 0;
          *(undefined1 *)(*param_2 + 0x88c) = 0;
          fVar2 = *(float *)(unsigned int)((((int)this) + 0x1e4));
          if (*(float *)(unsigned int)((((int)this) + 0x1e4)) <= _DAT_006b7610) {
            fVar2 = _DAT_006b7610;
          }
          *(float *)(unsigned int)((((int)this) + 0x1e4)) = fVar2;
          goto LAB_00452db6;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xe;
    } while (iVar4 < param_2[1]);
  }
  FUN_0045c370(((int)this) + 0x20,param_2,0,0,0,0x47c34f80);
LAB_00452d8c:
  fVar6 = (float10)(**(code **)(*piVar1 + 0x5c))();
  *(float *)(unsigned int)((((int)this) + 0x1e4)) = (float)fVar6;
  *(undefined4 *)(((int)this) + 0x1e8) = 0;
  *(undefined4 *)(((int)this) + 0x1ec) = 0x40000000;
LAB_00452dad:
  *(undefined1 *)(*param_2 + 0x88c) = 0;
LAB_00452db6:
  if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
    FUN_0045cff0(((int)this) + 0x20,param_2,DAT_007006ec);
  }
  *(undefined1 *)(((int)this) + 0x1f0) = 0;
  *(undefined1 *)(((int)this) + 0x1f1) = 1;
  *(undefined1 *)(((int)this) + 0x1f2) = 1;
  *(undefined1 *)(((int)this) + 0x1e0) = 1;
  return;
}
