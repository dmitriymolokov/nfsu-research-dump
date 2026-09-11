/* spd-match: far pct=8.24 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005afb2f();
int __cdecl FUN_005cba05();
int __cdecl FUN_005d0298();
int __cdecl FUN_005d02d7();
extern void LAB_005d1009(void);
extern void LAB_005d149a(void);

int FUN_005d0dd1(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *local_28;
  int *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  int local_8;
  
  if (param_3 == (int *)0x0) {
    param_2 = -0x7789f794;
  }
  else {
    piVar13 = *(int **)((int)param_1 + 0x38);
    uVar17 = *(undefined4 *)((int)param_1 + 0xc);
    uVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    piVar4 = piVar13;
    uVar1 = (**(code **)(*piVar13 + 0x10))(piVar13,0,0,0,uVar17,param_3,0);
    uVar2 = (**(code **)(*piVar13 + 0xc))(piVar13,uVar1);
    param_2 = FUN_005afb2f(param_2,uVar2,piVar13,uVar1,piVar4,uVar14,uVar15,uVar16,uVar17);
    if (-1 < param_2) {
      piVar13 = (int *)*param_3;
      *param_3 = 0;
      local_c = 0;
      if (*(int *)((int)param_1 + 0x10) != 0) {
        local_8 = 0;
        do {
          iVar12 = *(int *)((int)param_1 + 0x14) + local_8;
          iVar3 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar12 + 4) * 4);
          iVar11 = piVar13[5] + local_8;
          if (*(int *)(iVar3 + 0x38) == 0) {
            iVar7 = *(int *)((int)param_1 + 0x2c);
            iVar5 = *(int *)((int)param_1 + 0x2c);
          }
          else {
            iVar7 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            iVar5 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
          }
          iVar6 = *(int *)(iVar3 + 0x24) + *(int *)(iVar12 + 8);
          if (*(int *)(iVar7 + *(int *)(iVar6 + 8 + iVar5)) == 0) {
            local_1c = 0;
          }
          else {
            if (*(int *)(iVar3 + 0x38) == 0) {
              local_1c = *(int *)((int)param_1 + 0x2c);
              iVar7 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              local_1c = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
              iVar7 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            local_1c = *(int *)(iVar6 + 8 + iVar7) + 4 + local_1c;
          }
          iVar7 = iVar11;
          if ((*(uint *)(iVar3 + 0x20) & 2) != 0) goto LAB_005d1009;
          if (*(int *)(iVar3 + 0x38) == 0) {
            iVar7 = *(int *)((int)param_1 + 0x2c);
          }
          else {
            iVar7 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
          }
          iVar5 = *(int *)(piVar13[0x23] + *(int *)(iVar11 + 4) * 4);
          if (*(int *)(iVar5 + 0x38) == 0) {
            iVar8 = piVar13[0xb];
          }
          else {
            iVar8 = *(int *)(piVar13[3] + 8);
          }
          if (*(int *)(iVar3 + 0x38) == 0) {
            iVar9 = *(int *)((int)param_1 + 0x2c);
          }
          else {
            iVar9 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
          }
          param_2 = FUN_005d0298(iVar6 + iVar9,
                                 *(int *)(iVar5 + 0x28) + *(int *)(iVar11 + 0xc) + iVar8,
                                 *(int *)(iVar3 + 0x28) + *(int *)(iVar12 + 0xc) + iVar7,
                                 *(undefined4 *)(iVar11 + 0x38),*(undefined4 *)(iVar12 + 0x38),
                                 param_1);
          if (param_2 < 0) goto LAB_005d149a;
          param_2 = FUN_005d02d7(iVar11);
          while( true ) {
            iVar7 = iVar11;
            if (param_2 < 0) goto LAB_005d149a;
LAB_005d1009:
            iVar12 = *(int *)(iVar12 + 0x34);
            iVar11 = *(int *)(iVar7 + 0x34);
            if (iVar11 == 0) break;
            iVar3 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar12 + 4) * 4);
            if (*(int *)(iVar3 + 0x38) == 0) {
              iVar7 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar7 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            iVar5 = *(int *)(piVar13[0x23] + *(int *)(iVar11 + 4) * 4);
            if (*(int *)(iVar5 + 0x38) == 0) {
              iVar6 = piVar13[0xb];
            }
            else {
              iVar6 = *(int *)(piVar13[3] + 8);
            }
            if (*(int *)(iVar3 + 0x38) == 0) {
              iVar8 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar8 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            param_2 = FUN_005d0298(*(int *)(iVar3 + 0x24) + *(int *)(iVar12 + 8) + iVar8,
                                   *(int *)(iVar5 + 0x28) + *(int *)(iVar11 + 0xc) + iVar6,
                                   *(int *)(iVar3 + 0x28) + *(int *)(iVar12 + 0xc) + iVar7,
                                   *(undefined4 *)(iVar11 + 0x38),*(undefined4 *)(iVar12 + 0x38),
                                   param_1);
          }
          for (; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x34)) {
            param_2 = FUN_005cba05(local_1c,iVar12,piVar13);
            if (param_2 < 0) goto LAB_005d149a;
            iVar3 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar12 + 4) * 4);
            iVar7 = *(int *)(iVar7 + 0x34);
            if (*(int *)(iVar3 + 0x38) == 0) {
              iVar11 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar11 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            iVar5 = *(int *)(piVar13[0x23] + *(int *)(iVar7 + 4) * 4);
            if (*(int *)(iVar5 + 0x38) == 0) {
              iVar6 = piVar13[0xb];
            }
            else {
              iVar6 = *(int *)(piVar13[3] + 8);
            }
            if (*(int *)(iVar3 + 0x38) == 0) {
              iVar8 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar8 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            param_2 = FUN_005d0298(*(int *)(iVar3 + 0x24) + *(int *)(iVar12 + 8) + iVar8,
                                   *(int *)(iVar5 + 0x28) + *(int *)(iVar7 + 0xc) + iVar6,
                                   *(int *)(iVar3 + 0x28) + *(int *)(iVar12 + 0xc) + iVar11,
                                   *(undefined4 *)(iVar7 + 0x38),*(undefined4 *)(iVar12 + 0x38),
                                   param_1);
            if (param_2 < 0) goto LAB_005d149a;
          }
          local_c = local_c + 1;
          local_8 = local_8 + 0x44;
        } while (local_c < *(uint *)((int)param_1 + 0x10));
      }
      local_18 = 0;
      if (*(int *)((int)param_1 + 0x18) != 0) {
        local_c = 0;
        do {
          iVar3 = *(int *)((int)param_1 + 0x1c) + local_c;
          iVar11 = piVar13[7] + local_c;
          local_20 = (int *)(*(int *)(iVar3 + 0x20) + *(int *)((int)param_1 + 0x2c));
          if (*local_20 == 0) {
            local_20 = (int *)0x0;
          }
          else {
            local_20 = local_20 + 1;
          }
          piVar4 = (int *)(iVar3 + 0x28);
          iVar7 = *piVar4;
          iVar12 = *(int *)(iVar11 + 0x28);
          while (iVar12 != 0) {
            iVar5 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar7 + 4) * 4);
            if (*(int *)(iVar5 + 0x38) == 0) {
              iVar6 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar6 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            iVar8 = *(int *)(piVar13[0x23] + *(int *)(iVar12 + 4) * 4);
            if (*(int *)(iVar8 + 0x38) == 0) {
              iVar9 = piVar13[0xb];
            }
            else {
              iVar9 = *(int *)(piVar13[3] + 8);
            }
            if (*(int *)(iVar5 + 0x38) == 0) {
              iVar10 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar10 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            param_2 = FUN_005d0298(*(int *)(iVar5 + 0x24) + *(int *)(iVar7 + 8) + iVar10,
                                   *(int *)(iVar8 + 0x28) + *(int *)(iVar12 + 0xc) + iVar9,
                                   *(int *)(iVar5 + 0x28) + *(int *)(iVar7 + 0xc) + iVar6,
                                   *(undefined4 *)(iVar12 + 0x38),*(undefined4 *)(iVar7 + 0x38),
                                   param_1);
            if (param_2 < 0) goto LAB_005d149a;
            iVar7 = *(int *)(iVar7 + 0x34);
            piVar4 = (int *)(iVar12 + 0x34);
            iVar12 = *piVar4;
          }
          iVar12 = *piVar4;
          for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x34)) {
            param_2 = FUN_005cba05(local_20,iVar7,piVar13);
            if (param_2 < 0) goto LAB_005d149a;
            iVar5 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar7 + 4) * 4);
            iVar12 = *(int *)(iVar12 + 0x34);
            if (*(int *)(iVar5 + 0x38) == 0) {
              iVar6 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar6 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            iVar8 = *(int *)(piVar13[0x23] + *(int *)(iVar12 + 4) * 4);
            if (*(int *)(iVar8 + 0x38) == 0) {
              iVar9 = piVar13[0xb];
            }
            else {
              iVar9 = *(int *)(piVar13[3] + 8);
            }
            if (*(int *)(iVar5 + 0x38) == 0) {
              iVar10 = *(int *)((int)param_1 + 0x2c);
            }
            else {
              iVar10 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
            }
            param_2 = FUN_005d0298(*(int *)(iVar5 + 0x24) + *(int *)(iVar7 + 8) + iVar10,
                                   *(int *)(iVar8 + 0x28) + *(int *)(iVar12 + 0xc) + iVar9,
                                   *(int *)(iVar5 + 0x28) + *(int *)(iVar7 + 0xc) + iVar6,
                                   *(undefined4 *)(iVar12 + 0x38),*(undefined4 *)(iVar7 + 0x38),
                                   param_1);
            if (param_2 < 0) goto LAB_005d149a;
          }
          if (*(int *)(iVar11 + 0x2c) != 0) {
            local_14 = 0;
            local_8 = 0;
            do {
              local_28 = (int *)0x0;
              iVar12 = *(int *)(iVar3 + 0x30) + local_8;
              piVar4 = (int *)(*(int *)(iVar12 + 0x20) + *(int *)((int)param_1 + 0x2c));
              if (*piVar4 != 0) {
                local_28 = piVar4 + 1;
              }
              piVar4 = (int *)(iVar12 + 0x30);
              iVar7 = *piVar4;
              iVar12 = *(int *)(*(int *)(iVar11 + 0x30) + local_8 + 0x30);
              while (iVar12 != 0) {
                iVar5 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar7 + 4) * 4);
                if (*(int *)(iVar5 + 0x38) == 0) {
                  iVar6 = *(int *)((int)param_1 + 0x2c);
                }
                else {
                  iVar6 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
                }
                iVar8 = *(int *)(piVar13[0x23] + *(int *)(iVar12 + 4) * 4);
                if (*(int *)(iVar8 + 0x38) == 0) {
                  iVar9 = piVar13[0xb];
                }
                else {
                  iVar9 = *(int *)(piVar13[3] + 8);
                }
                if (*(int *)(iVar5 + 0x38) == 0) {
                  iVar10 = *(int *)((int)param_1 + 0x2c);
                }
                else {
                  iVar10 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
                }
                param_2 = FUN_005d0298(*(int *)(iVar5 + 0x24) + *(int *)(iVar7 + 8) + iVar10,
                                       *(int *)(iVar8 + 0x28) + *(int *)(iVar12 + 0xc) + iVar9,
                                       *(int *)(iVar5 + 0x28) + *(int *)(iVar7 + 0xc) + iVar6,
                                       *(undefined4 *)(iVar12 + 0x38),*(undefined4 *)(iVar7 + 0x38),
                                       param_1);
                if (param_2 < 0) goto LAB_005d149a;
                iVar7 = *(int *)(iVar7 + 0x34);
                piVar4 = (int *)(iVar12 + 0x34);
                iVar12 = *piVar4;
              }
              iVar12 = *piVar4;
              for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x34)) {
                param_2 = FUN_005cba05(local_28,iVar7,piVar13);
                if (param_2 < 0) goto LAB_005d149a;
                iVar5 = *(int *)(*(int *)((int)param_1 + 0x8c) + *(int *)(iVar7 + 4) * 4);
                iVar12 = *(int *)(iVar12 + 0x34);
                if (*(int *)(iVar5 + 0x38) == 0) {
                  iVar6 = *(int *)((int)param_1 + 0x2c);
                }
                else {
                  iVar6 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
                }
                iVar8 = *(int *)(piVar13[0x23] + *(int *)(iVar12 + 4) * 4);
                if (*(int *)(iVar8 + 0x38) == 0) {
                  iVar9 = piVar13[0xb];
                }
                else {
                  iVar9 = *(int *)(piVar13[3] + 8);
                }
                if (*(int *)(iVar5 + 0x38) == 0) {
                  iVar10 = *(int *)((int)param_1 + 0x2c);
                }
                else {
                  iVar10 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
                }
                param_2 = FUN_005d0298(*(int *)(iVar5 + 0x24) + *(int *)(iVar7 + 8) + iVar10,
                                       *(int *)(iVar8 + 0x28) + *(int *)(iVar12 + 0xc) + iVar9,
                                       *(int *)(iVar5 + 0x28) + *(int *)(iVar7 + 0xc) + iVar6,
                                       *(undefined4 *)(iVar12 + 0x38),*(undefined4 *)(iVar7 + 0x38),
                                       param_1);
                if (param_2 < 0) goto LAB_005d149a;
              }
              local_14 = local_14 + 1;
              local_8 = local_8 + 0x3c;
            } while (local_14 < *(uint *)(iVar11 + 0x2c));
          }
          local_18 = local_18 + 1;
          local_c = local_c + 0xac;
        } while (local_18 < *(uint *)((int)param_1 + 0x18));
      }
      param_1 = (int *)0x0;
      *param_3 = (int)piVar13;
      piVar13 = param_1;
LAB_005d149a:
      param_1 = piVar13;
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
    }
  }
  return param_2;
}
