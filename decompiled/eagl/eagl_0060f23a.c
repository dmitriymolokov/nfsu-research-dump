/* spd-match: far pct=17.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186();
int __cdecl FUN_005f73c0();
int __cdecl FUN_005f75cb();
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760();
int __cdecl FUN_005f7a42();
int __cdecl FUN_005f7a96();
int __cdecl FUN_005fbec8();
int __cdecl FUN_0060d0f0();
int __cdecl FUN_0060d1c2();
int __cdecl FUN_0060d294();
int __cdecl FUN_0060d3be();
int __cdecl FUN_0060e0d8();
int __cdecl FUN_0061674c();
int __cdecl FUN_0061a69c();
int __cdecl FUN_0061a6fd();
int __cdecl FUN_0061a761();
int __cdecl FUN_0061a7c5();
int __cdecl FUN_0061a7fa();
int __cdecl FUN_0061a926();
int __cdecl FUN_0061aa11();
int __cdecl FUN_0061ab23();
int __cdecl FUN_0061abc1();
int __cdecl FUN_0061b0f2();
int __cdecl FUN_0061b1e6();
int __cdecl FUN_0061b204();
int __cdecl FUN_0061b20c();
int __cdecl FUN_0061b22a();
int __cdecl FUN_0061b248();
int __cdecl FUN_0061b2e2();
int __cdecl FUN_0061b2ea();
int __cdecl FUN_0061b2fa();
int __cdecl FUN_0061b3a4();
int __cdecl FUN_0061b3ac();
int __cdecl FUN_0061b3b4();
extern void LAB_0060f821(void);
extern void LAB_0060f873(void);
extern void LAB_0060f89b(void);
extern void LAB_0060f8b7(void);
extern void LAB_0060f8bf(void);
extern void LAB_0060f8d0(void);
extern void LAB_0060f909(void);

undefined4 __fastcall FUN_0060f23a(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint *puVar12;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28 [6];
  undefined4 local_10 [4];
  
  uVar1 = param_1[3];
  iVar8 = 0;
  local_2c = 0;
  if (uVar1 != 0) {
    do {
      param_1[0x25] = local_2c;
      puVar12 = *(uint **)(param_1[6] + local_2c * 4);
      param_1[0x26] = (int)puVar12;
      uVar3 = *puVar12 & 0xff000000;
      if ((((((uVar3 == 0x44000000) || (uVar3 == 0x4c000000)) || (uVar3 == 0x48000000)) ||
           (((uVar3 == 0x42000000 || (uVar3 == 0x46000000)) ||
            ((uVar3 == 0x4a000000 || ((uVar3 == 0x4e000000 || (uVar3 == 0x43000000)))))))) ||
          (uVar3 == 0x47000000)) ||
         ((((uVar3 == 0x4b000000 || (uVar3 == 0x4f000000)) || (uVar3 == 0x40000000)) ||
          (uVar3 == 0x34000000)))) {
        uVar6 = *puVar12 & 0xffffff;
        local_28[0] = uVar6;
        if (uVar3 == 0x34000000) {
          local_28[0] = 0;
        }
        local_30 = 0;
        if (uVar6 != 0) {
          piVar7 = (int *)(puVar12[2] + local_28[0] * 4);
          do {
            piVar2 = *(int **)(param_1[5] + *piVar7 * 4);
            if ((piVar2[3] != local_30) || ((*(byte *)((int)piVar2 + 0x22) & 0xf) != 0)) break;
            if (*piVar2 == param_1[0x16]) {
              bVar11 = (char)piVar2[0x14] == '\x03';
            }
            else {
              bVar11 = *piVar2 == param_1[0x18];
            }
            if (!bVar11) break;
            local_30 = local_30 + 1;
            piVar7 = piVar7 + 1;
          } while (local_30 < uVar6);
        }
        if (((*puVar12 & 0xff000000) == 0x40000000) && (uVar6 == 1)) {
          iVar8 = (**(code **)(*param_1 + 0x6c))(local_2c,local_28 + 2,4,0,0);
          if (iVar8 < 0) {
            return 0;
          }
          pvVar4 = _malloc(0x38);
          if (pvVar4 == (void *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = FUN_005f7709();
          }
          if (local_34 == 0) {
            return 0x8007000e;
          }
          iVar8 = FUN_005f7760(0x10000002,2,2,0);
          if ((iVar8 < 0) || (iVar8 = FUN_005f7a42(param_1[0x26]), iVar8 < 0)) goto LAB_0060f8b7;
          **(undefined4 **)(local_34 + 8) = *(undefined4 *)(*(int *)(param_1[0x26] + 8) + 4);
          *(undefined4 *)(*(int *)(local_34 + 8) + 4) =
               *(undefined4 *)(*(int *)(param_1[0x26] + 8) + 4);
          **(undefined4 **)(local_34 + 0x10) = local_28[2];
          *(uint *)(*(int *)(local_34 + 0x10) + 4) = local_28[3];
          iVar8 = FUN_005f73c0(local_34);
          if (iVar8 < 0) goto LAB_0060f8b7;
          pvVar4 = _malloc(0x38);
          if (pvVar4 == (void *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = FUN_005f7709();
          }
          if (iVar8 == 0) {
            return 0;
          }
          iVar5 = FUN_005f7760(0x44000002,4,*(undefined4 *)(param_1[0x26] + 0xc),0);
          if ((iVar5 < 0) || (iVar5 = FUN_005f7a42(param_1[0x26]), iVar5 < 0)) goto LAB_0060f8bf;
          uVar3 = 8;
          do {
            *(undefined4 *)(*(int *)(iVar8 + 8) + -8 + uVar3) = **(undefined4 **)(param_1[0x26] + 8)
            ;
            *(undefined4 *)(uVar3 + *(int *)(iVar8 + 8)) = *(undefined4 *)((int)local_28 + uVar3);
            uVar3 = uVar3 + 4;
          } while (uVar3 < 0x10);
          puVar9 = *(undefined4 **)(param_1[0x26] + 0x10);
          puVar10 = *(undefined4 **)(iVar8 + 0x10);
          for (uVar3 = *(uint *)(param_1[0x26] + 0xc) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          if (param_1[0x26] != 0) {
            FUN_005f7186(1);
          }
          *(int *)(param_1[6] + local_2c * 4) = iVar8;
          param_1[0x26] = iVar8;
        }
        else if (local_30 != uVar6) {
          iVar8 = (**(code **)(*param_1 + 0x6c))(local_2c,local_10,4,0,0);
          if (iVar8 < 0) {
            return 0;
          }
          pvVar4 = _malloc(0x38);
          if (pvVar4 == (void *)0x0) {
            local_34 = 0;
          }
          else {
            local_34 = FUN_005f7709();
          }
          if (local_34 == 0) {
            return 0x8007000e;
          }
          iVar8 = FUN_005f7760(uVar6 | 0x10000000,uVar6,uVar6,0);
          if ((iVar8 < 0) || (iVar8 = FUN_005f7a42(param_1[0x26]), iVar8 < 0)) goto LAB_0060f8b7;
          uVar3 = 0;
          if (uVar6 != 0) {
            iVar8 = local_28[0] << 2;
            do {
              iVar5 = uVar3 * 4;
              *(undefined4 *)(iVar5 + *(int *)(local_34 + 8)) =
                   *(undefined4 *)(iVar8 + *(int *)(param_1[0x26] + 8));
              *(undefined4 *)(iVar5 + *(int *)(local_34 + 0x10)) = local_10[uVar3];
              *(undefined4 *)(iVar8 + *(int *)(param_1[0x26] + 8)) =
                   *(undefined4 *)(iVar5 + *(int *)(local_34 + 0x10));
              uVar3 = uVar3 + 1;
              iVar8 = iVar8 + 4;
            } while (uVar3 < uVar6);
          }
          iVar8 = FUN_005f73c0(local_34);
          if (iVar8 < 0) goto LAB_0060f8b7;
        }
        puVar12 = (uint *)param_1[0x26];
      }
      iVar8 = FUN_005f75cb(puVar12);
      if (iVar8 < 0) {
        return 0;
      }
      *(undefined4 *)param_1[0x26] = 0;
      local_2c = local_2c + 1;
    } while (local_2c < uVar1);
  }
  local_34 = 0;
  uVar1 = param_1[3];
  if ((*(byte *)(param_1 + 0x24) & 2) != 0) {
    FUN_0061674c();
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        iVar5 = *(int *)(param_1[6] + uVar3 * 4);
        param_1[0x26] = iVar5;
        param_1[0x25] = uVar3;
        if ((*(char *)(iVar5 + 3) != '\0') && (iVar8 = FUN_0060e0d8(), iVar8 < 0)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
  }
  FUN_0061674c();
  uVar1 = param_1[3];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      param_1[0x25] = uVar3;
      iVar5 = *(int *)(param_1[6] + uVar3 * 4);
      param_1[0x26] = iVar5;
      iVar5 = *(int *)(iVar5 + 0x34);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0xc)) {
        param_1[0x27] = iVar5 + 0x30;
      }
      iVar5 = FUN_005f7a96();
      if (((iVar5 == 0) && (*(int *)(param_1[0x26] + 4) != 0)) &&
         (*(int *)(*(int *)(param_1[5] + **(int **)(param_1[0x26] + 8) * 4) + 4) != -1)) {
        FUN_005fbec8(param_1,*(undefined4 *)(param_1[0x26] + 0x34),0x119f,
                     "relative addressing not allowed for pixel shaders");
        return 0;
      }
      uVar6 = *(uint *)param_1[0x26] & 0xff000000;
      if (uVar6 < 0x43000001) {
        if (uVar6 == 0x43000000) goto LAB_0060f8d0;
        if (uVar6 < 0x21000001) {
          if (uVar6 == 0x21000000) {
            iVar8 = FUN_0060d294();
          }
          else if (uVar6 < 0x13000001) {
            if (uVar6 == 0x13000000) {
              iVar8 = FUN_0061b204();
            }
            else if (uVar6 != 0) {
              if (uVar6 == 0x10000000) {
                iVar8 = FUN_0061b0f2();
              }
              else if (uVar6 == 0x11000000) {
                iVar8 = FUN_0061a926();
              }
              else {
                if (uVar6 != 0x12000000) goto LAB_0060f89b;
                iVar8 = FUN_0061b1e6();
              }
            }
          }
          else if (uVar6 == 0x14000000) {
            iVar8 = FUN_0061b20c();
          }
          else if (uVar6 == 0x15000000) {
            iVar8 = FUN_0061b22a();
          }
          else if (uVar6 == 0x16000000) {
            iVar8 = FUN_0061b248();
          }
          else {
            if (uVar6 != 0x20000000) goto LAB_0060f89b;
            iVar8 = FUN_0060d3be();
          }
        }
        else if (uVar6 < 0x30000001) {
          if (uVar6 == 0x30000000) {
            iVar8 = FUN_0061b2fa();
          }
          else if (uVar6 == 0x22000000) {
            iVar8 = FUN_0060d1c2();
          }
          else if (uVar6 == 0x23000000) {
            iVar8 = FUN_0060d0f0();
          }
          else if (uVar6 == 0x24000000) {
            iVar8 = FUN_0061b2e2();
          }
          else {
            if (uVar6 != 0x25000000) goto LAB_0060f89b;
            iVar8 = FUN_0061b2ea();
          }
        }
        else {
          if (uVar6 != 0x34000000) {
            if (uVar6 == 0x40000000) goto LAB_0060f873;
            if (uVar6 != 0x42000000) goto LAB_0060f89b;
            goto LAB_0060f821;
          }
          iVar8 = FUN_0061a7fa();
        }
      }
      else if (uVar6 < 0x50000001) {
        if (uVar6 == 0x50000000) {
          iVar8 = FUN_0061b3a4();
        }
        else if (uVar6 < 0x4a000001) {
          if (uVar6 == 0x4a000000) {
LAB_0060f821:
            iVar8 = FUN_0061a6fd();
          }
          else {
            if (uVar6 != 0x44000000) {
              if (uVar6 == 0x46000000) goto LAB_0060f821;
              if (uVar6 == 0x47000000) goto LAB_0060f8d0;
              if (uVar6 != 0x48000000) goto LAB_0060f89b;
            }
LAB_0060f873:
            iVar8 = FUN_0061a69c();
          }
        }
        else {
          if (uVar6 != 0x4b000000) {
            if (uVar6 == 0x4c000000) goto LAB_0060f873;
            if (uVar6 == 0x4e000000) goto LAB_0060f821;
            if (uVar6 != 0x4f000000) goto LAB_0060f89b;
          }
LAB_0060f8d0:
          iVar8 = FUN_0061a761();
        }
      }
      else if (uVar6 < 0xf4000001) {
        if (uVar6 == 0xf4000000) {
LAB_0060f909:
          iVar8 = FUN_0061b3b4();
        }
        else if (uVar6 == 0xf0000000) {
          iVar8 = FUN_0061b3ac();
        }
        else if (uVar6 == 0xf1000000) {
          iVar8 = FUN_0061aa11();
        }
        else {
          if (uVar6 != 0xf2000000) {
            if (uVar6 != 0xf3000000) goto LAB_0060f89b;
            goto LAB_0060f909;
          }
          iVar8 = FUN_0061ab23();
        }
      }
      else if ((uVar6 == 0xf5000000) || (uVar6 == 0xf6000000)) {
        iVar8 = FUN_0061abc1();
      }
      else {
        if (uVar6 != 0xfa000000) goto LAB_0060f89b;
        iVar8 = FUN_0061a7c5();
      }
      if (iVar8 == -0x7fffbfff) {
LAB_0060f89b:
        FUN_005fbec8(param_1,*(undefined4 *)(param_1[0x26] + 0x34),0x11b4,
                     "cannot map expression to pixel shader instruction set");
LAB_0060f8b7:
        if (local_34 == 0) {
          return 0;
        }
LAB_0060f8bf:
        FUN_005f7186(1);
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}
