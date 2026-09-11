/* spd-match: far pct=7.68 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_04/attempt2_cd327_recipe */
#include "ghidra_compat.h"

extern char s_UnknownVendr_006a0898[];
typedef struct {
  undefined4 _0_4_;
  undefined4 _4_4_;
  undefined4 _8_4_;
  undefined2 _12_2_;
  char _14_1_;
} m375_s_authentic_amd_006a0888;
extern m375_s_authentic_amd_006a0888 s_AuthenticAMD_006a0888;
int __cdecl FUN_m375_thunk_helper(...);

int __cdecl FUN_005c8e04(...);
int __cdecl FUN_005ccec4(...);
int __cdecl FUN_005e8fb1(...);
extern void LAB_005cd510(...);
extern void LAB_005cd535(...);
extern void LAB_005cd5a6(...);

struct ThisCallBox {
  int FUN_005cd327(int *param_2, uint *param_3);
};
int ThisCallBox::FUN_005cd327(int *param_2, uint *param_3) {
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *_Memory;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint local_10;
  
  puVar2 = param_3;
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    local_10 = *(uint *)(iVar4 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    param_3 = (uint *)(*(uint **)(iVar4 + *param_3 * 4));
  }
  *puVar2 = *puVar2 + 1;
  if (((param_2 != (int *)0x0) && (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), uVar3 < *puVar2)
      ) || (*(uint *)(((int)this) + 0x20) <= local_10)) {
    return -0x7fffbffb;
  }
  _Memory = (undefined4 *)_malloc((size_t)param_3);
  if (_Memory == (undefined4 *)0x0) {
    param_2 = (int *)0x8007000e;
    goto LAB_005cd5a6;
  }
  if (param_3 != (uint *)0x0) {
    if ((param_2 != (int *)0x0) &&
       (uVar3 = (**(code **)(*param_2 + 0x10))(param_2),
       (uint)(((uint)param_3 & 3) != 0) + ((uint)param_3 >> 2) + *puVar2 <= uVar3)) {
      iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
      puVar7 = (undefined4 *)(iVar4 + *puVar2 * 4);
      puVar5 = _Memory;
      for (uVar3 = (uint)param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = (uint)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    *puVar2 = *puVar2 + (uint)(((uint)param_3 & 3) != 0) + ((uint)param_3 >> 2);
  }
  if ((param_2 == (int *)0x0) || (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *puVar2 <= uVar3)
     ) {
    piVar8 = (int *)(local_10 * 0x1c + *(int *)(((int)this) + 0x24));
    piVar1 = piVar8 + 1;
    param_2 = (int *)0x0;
    if ((*piVar1 == 0) && (piVar9 = piVar8 + 4, *piVar9 == 0)) {
      if (param_3 == (uint *)0x0) goto LAB_005cd5a6;
      iVar4 = *piVar8;
      if (iVar4 == 4) {
        if (*(char *)((int)param_3 + -1 + (int)_Memory) == '\0') {
          param_2 = (int *)FUN_m375_thunk_helper(param_3,piVar1);
          if (-1 < (int)param_2) {
            puVar5 = (undefined4 *)(**(code **)(*(int *)*piVar1 + 0xc))((int *)*piVar1);
            puVar7 = _Memory;
            for (uVar3 = (uint)param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar5 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar5 = puVar5 + 1;
            }
            for (uVar3 = (uint)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar5 = (undefined4 *)((int)puVar5 + 1);
            }
          }
          goto LAB_005cd5a6;
        }
      }
      else if ((0xe < iVar4) && (iVar4 < 0x11)) {
        *(undefined4 *)(piVar8[6] + 0x54) = 0xffffffff;
        *(int *)(piVar8[6] + 0x5c) = piVar8[2];
        param_2 = (int *)FUN_m375_thunk_helper(param_3,piVar9);
        if ((int)param_2 < 0) goto LAB_005cd5a6;
        piVar9 = (int *)*piVar9;
        puVar5 = (undefined4 *)(**(code **)(*piVar9 + 0xc))(piVar9);
        puVar7 = _Memory;
        for (uVar3 = (uint)param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
        for (uVar3 = (uint)param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        uVar6 = (**(code **)(*(int *)piVar8[4] + 0xc))((int *)piVar8[4],piVar8 + 5);
        param_2 = (int *)FUN_005c8e04(uVar6,piVar9);
        if ((int)param_2 < 0) goto LAB_005cd5a6;
        FUN_005e8fb1(1);
        if (*piVar8 == 0x10) {
          iVar4 = **(int **)(((int)this) + 8);
          uVar6 = (**(code **)(*(int *)piVar8[4] + 0xc))((int *)piVar8[4],piVar8 + 1);
          iVar4 = (**(code **)(iVar4 + 0x16c))(*(undefined4 *)(((int)this) + 8),uVar6);
          if (iVar4 < 0) goto LAB_005cd510;
LAB_005cd535:
          FUN_005e8fb1(0);
          piVar8[3] = 1;
        }
        else {
LAB_005cd510:
          if (*piVar8 == 0xf) {
            iVar4 = **(int **)(((int)this) + 8);
            uVar6 = (**(code **)(*(int *)piVar8[4] + 0xc))((int *)piVar8[4],piVar8 + 1);
            iVar4 = (**(code **)(iVar4 + 0x1a8))(*(undefined4 *)(((int)this) + 8),uVar6);
            if (-1 < iVar4) goto LAB_005cd535;
          }
          FUN_005e8fb1(0);
          piVar8[1] = 0;
          piVar8[3] = 0;
        }
        param_2 = (int *)FUN_005ccec4(piVar8[6],piVar8[5],0);
        goto LAB_005cd5a6;
      }
    }
  }
  param_2 = (int *)0x80004005;
LAB_005cd5a6:
  if (_Memory != (undefined4 *)0x0) {
    _free(_Memory);
  }
  return (int)param_2;
}
