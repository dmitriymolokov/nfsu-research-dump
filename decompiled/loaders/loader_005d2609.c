/* spd-match: far pct=8.17 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_04/attempt3_d2609_recipe */
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
int __cdecl FUN_m375_thunk_helper(int *, int *);

int __cdecl FUN_005c8e04();
int __cdecl FUN_005cb49a();
int __cdecl FUN_005ccec4();
int __cdecl FUN_005cd207();
int __cdecl FUN_005d1d40();
int __cdecl FUN_005d65b0();
extern void LAB_005d290f(void);
extern void LAB_005d293e(void);

int FUN_005d2609(int param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *_Memory;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint local_c;
  int local_8;
  
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    local_8 = *(int *)(iVar4 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
    local_c = *(uint *)(iVar4 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if (((param_2 != (int *)0x0) &&
      (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), uVar3 < *param_3)) || (local_c < 2)) {
    return -0x7fffbffb;
  }
  _Memory = (undefined4 *)_malloc(local_c);
  if (_Memory != (undefined4 *)0x0) {
    if (local_c != 0) {
      if ((param_2 != (int *)0x0) &&
         (uVar3 = (**(code **)(*param_2 + 0x10))(param_2),
         (uint)((local_c & 3) != 0) + (local_c >> 2) + *param_3 <= uVar3)) {
        iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
        puVar5 = (undefined4 *)(iVar4 + *param_3 * 4);
        puVar9 = _Memory;
        for (uVar3 = local_c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar3 = local_c & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      *param_3 = *param_3 + (uint)((local_c & 3) != 0) + (local_c >> 2);
    }
    if (((param_2 != (int *)0x0) &&
        (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), uVar3 < *param_3)) ||
       ((*(char *)((local_c - 1) + (int)_Memory) != '\0' ||
        (puVar5 = (undefined4 *)FUN_005d1d40(_Memory,2,0), puVar5 == (undefined4 *)0x0)))) {
LAB_005d290f:
      iVar4 = -0x7fffbffb;
      goto LAB_005d293e;
    }
    puVar9 = puVar5;
    puVar10 = (undefined4 *)(param_1 + 8);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 1;
    pvVar6 = (void *)_malloc(4);
    *(void **)(param_1 + 0x30) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      iVar4 = FUN_005cb49a(puVar5,param_1,0);
      if (iVar4 < 0) goto LAB_005d293e;
      pvVar6 = (void *)_malloc(0xac);
      if (pvVar6 == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_005cd207((int)pvVar6);
      }
      *(int *)(param_1 + 0x60) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x58) = *(undefined4 *)(param_1 + 0x58);
        **(undefined4 **)(param_1 + 0x60) = 0xffffffff;
        puVar1 = (uint *)(*(int *)(param_1 + 0x60) + 0x28);
        *puVar1 = *puVar1 | 1;
        *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x2c) = 0;
        *(int *)(*(int *)(param_1 + 0x60) + 100) = param_1;
        *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x38) = 1;
        *(int *)(*(int *)(param_1 + 0x60) + 0x40) = *(int *)(*(int *)(param_1 + 0x60) + 0x38) << 2;
        iVar7 = *(int *)(*(int *)(param_1 + 0x60) + 0x40);
        if (iVar7 != 0) {
          *(int *)(*(int *)(param_1 + 0x60) + 0x40) = iVar7 + -1;
        }
        uVar3 = *(uint *)(*(int *)(param_1 + 0x60) + 0x40);
        *(uint *)(*(int *)(param_1 + 0x60) + 0x40) = uVar3 >> 1 | uVar3;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x60) + 0x40);
        *(uint *)(*(int *)(param_1 + 0x60) + 0x40) = uVar3 >> 2 | uVar3;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x60) + 0x40);
        *(uint *)(*(int *)(param_1 + 0x60) + 0x40) = uVar3 >> 4 | uVar3;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x60) + 0x40);
        *(uint *)(*(int *)(param_1 + 0x60) + 0x40) = uVar3 >> 8 | uVar3;
        uVar3 = *(uint *)(*(int *)(param_1 + 0x60) + 0x40);
        *(uint *)(*(int *)(param_1 + 0x60) + 0x40) = uVar3 >> 0x10 | uVar3;
        uVar3 = *(int *)(*(int *)(param_1 + 0x60) + 0x40) * 8 + 8;
        pvVar6 = (void *)_malloc(uVar3);
        *(void **)(*(int *)(param_1 + 0x60) + 0x48) = pvVar6;
        if (pvVar6 != (void *)0x0) {
          puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x60) + 0x48);
          for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          uVar3 = local_8 + (-4 - local_c);
          if ((uVar3 == 0) ||
             (iVar4 = FUN_005d65b0(uVar3,*(int *)(param_1 + 0x60) + 0x50), iVar4 < 0))
          goto LAB_005d293e;
          piVar2 = *(int **)(*(int *)(param_1 + 0x60) + 0x50);
          puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
          if ((param_2 != (int *)0x0) &&
             (uVar8 = (**(code **)(*param_2 + 0x10))(param_2),
             (uint)((uVar3 & 3) != 0) + (uVar3 >> 2) + *param_3 <= uVar8)) {
            iVar4 = (**(code **)(*param_2 + 0xc))(param_2);
            puVar9 = (undefined4 *)(iVar4 + *param_3 * 4);
            puVar10 = puVar5;
            for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar8 = uVar3 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
          }
          *param_3 = *param_3 + (uint)((uVar3 & 3) != 0) + (uVar3 >> 2);
          if ((param_2 == (int *)0x0) ||
             (uVar3 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 <= uVar3)) {
            iVar4 = FUN_005c8e04(puVar5,*(int *)(param_1 + 0x60) + 0x34);
            if (-1 < iVar4) {
              iVar4 = FUN_005ccec4(*(int *)(param_1 + 0x60),
                                   *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x34),1);
            }
            goto LAB_005d293e;
          }
          goto LAB_005d290f;
        }
      }
    }
  }
  iVar4 = -0x7ff8fff2;
LAB_005d293e:
  if (_Memory != (undefined4 *)0x0) {
    _free(_Memory);
  }
  return iVar4;
}
