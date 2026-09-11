/* spd-match: far pct=4.58 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004f0700();
int __cdecl FUN_004f0b00();
int __cdecl FUN_004ff1d0();
int __cdecl FUN_0051a750();
extern void LAB_004f0033(void);
extern void LAB_004f0146(void);
extern void LAB_004f0151(void);
int unaff_EBP;
int unaff_EBX;

void FUN_004eff20(uint param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  uint uVar10;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined4 uVar11;
  ushort local_10;
  ushort local_c;
  uint auStack_8 [2];
  
  iVar6 = param_1;
  if (((*(byte *)(param_1 + 0x1c) & 1) != 0) && (*(char *)(unaff_ESI + 1) != '\0')) {
    fVar3 = (float)*(int *)(unaff_ESI + 0xc);
    param_1 = 0;
    fVar4 = (float)*(int *)(unaff_ESI + 0x10);
    do {
      if (*(char *)(unaff_ESI + 1) == '\0') break;
      local_c = 0;
      local_10 = 0;
      uVar5 = (ushort)(1 << ((byte)param_1 & 0x1f));
      if (((*(ushort *)(unaff_ESI + 0x1a) & uVar5) == uVar5) &&
         ((*(ushort *)(unaff_ESI + 0x18) & uVar5) != uVar5)) {
        local_10 = uVar5;
      }
      if (((*(ushort *)(unaff_ESI + 0x1a) & uVar5) != uVar5) &&
         ((*(ushort *)(unaff_ESI + 0x18) & uVar5) == uVar5)) {
        local_c = uVar5;
      }
      if (((*(ushort *)(unaff_ESI + 0x1a) & uVar5) == uVar5) &&
         ((*(ushort *)(unaff_ESI + 0x18) & uVar5) == uVar5)) {
        uVar8 = FUN_0051a750();
        auStack_8[param_1] = uVar8;
      }
      iVar1 = *(int *)(iVar6 + 0x80);
      if ((local_10 & uVar5) != 0) {
        if (param_1 == 0) {
          *(int *)(unaff_ESI + 0x94) = iVar1;
          if (iVar1 != 0) {
            for (iVar9 = *(int *)(iVar1 + 0x3c); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
              if (*(int *)(iVar9 + 0xc) == 0xc407210) {
                cVar7 = (**(code **)(**(int **)(unaff_ESI + 0x10c) + 0x48))(fVar3,fVar4,iVar1);
                if (cVar7 == '\x01') {
                  FUN_004f0700(0xc407210,0,iVar6,*(undefined4 *)(iVar6 + 0x80),1);
                  iVar9 = *(int *)(iVar6 + 0x80);
                  uVar11 = 0xc407210;
                  goto LAB_004f0146;
                }
                break;
              }
            }
          }
          for (iVar9 = *(int *)(iVar6 + 0x50); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
            if (*(int *)(iVar9 + 0xc) == 0x406415e3) {
              FUN_004f0700(0x406415e3,0,iVar6,0xfffffffd,1);
              iVar9 = 0;
              uVar11 = 0x406415e3;
              goto LAB_004f0146;
            }
          }
        }
        else if (param_1 == 1) {
          if (iVar1 != 0) {
            for (iVar9 = *(int *)(iVar1 + 0x3c); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
              if (*(int *)(iVar9 + 0xc) == 0x14dd0705) {
                cVar7 = (**(code **)(**(int **)(unaff_ESI + 0x10c) + 0x48))(fVar3,fVar4,iVar1);
                if (cVar7 == '\x01') {
                  FUN_004f0700(0x14dd0705,0,iVar6,iVar1,1);
                  uVar11 = 0x14dd0705;
                  iVar9 = iVar1;
                  goto LAB_004f0146;
                }
                break;
              }
            }
          }
          iVar9 = *(int *)(iVar6 + 0x50);
          if (iVar9 != 0) {
LAB_004f0033:
            if (*(int *)(iVar9 + 0xc) != 0x14dd0705) goto code_r0x004f0038;
            FUN_004f0700(0x14dd0705,0,iVar6,0xfffffffd,1);
            uVar11 = 0x14dd0705;
            iVar9 = 0;
LAB_004f0146:
            FUN_004f0700(uVar11,iVar9,iVar6,0xfffffffb,1);
          }
        }
      }
LAB_004f0151:
      if (((local_c & uVar5) != 0) && (param_1 == 0)) {
        if ((*(int *)(unaff_ESI + 0x94) == iVar1) && (iVar1 != 0)) {
          *(undefined4 *)(unaff_ESI + 0x94) = 0;
          iVar9 = FUN_004ff1d0();
          if (iVar9 != 0) {
            FUN_004f0700(extraout_ECX,0,iVar6,iVar1,1);
            FUN_004f0700(0x936a6a7f,iVar1,iVar6,0xfffffffb,1);
          }
        }
        for (iVar1 = *(int *)(iVar6 + 0x50); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
          if (*(int *)(iVar1 + 0xc) == -0x6c959581) {
            FUN_004f0700(0x936a6a7f,0,iVar6,0xfffffffd,1);
            FUN_004f0700(0x936a6a7f,0,iVar6,0xfffffffb,1);
            break;
          }
        }
      }
      if (*(int *)(unaff_ESI + 0x4118) != 0) {
        FUN_004f0b00(unaff_ESI);
      }
      param_1 = param_1 + 1;
    } while (param_1 < 2);
    if (((*(char *)(unaff_ESI + 0x29) != '\0') && (*(int *)(iVar6 + 0x80) != 0)) &&
       (cVar7 = (**(code **)(**(int **)(unaff_ESI + 0x10c) + 0x48))
                          (fVar3,fVar4,*(int *)(iVar6 + 0x80)), cVar7 != '\x01')) {
      uVar8 = *(uint *)(iVar6 + 0x88);
      uVar10 = 0;
      auStack_8[0] = uVar8;
      if (uVar8 != 0) {
        while ((iVar1 = *(int *)(*(int *)(iVar6 + 0x84) + uVar10 * 4),
               (*(uint *)(iVar1 + 0x1c) & 0x4000000) != 0 ||
               (cVar7 = (**(code **)(**(int **)(unaff_ESI + 0x10c) + 0x48))
                                  (unaff_EBP,unaff_EBX,iVar1), uVar8 = auStack_8[0], cVar7 == '\0'))
              ) {
          uVar10 = uVar10 + 1;
          if (uVar8 <= uVar10) {
            return;
          }
        }
        auStack_8[0] = 4;
        do {
          if (*(int *)(unaff_ESI + 0x84 + auStack_8[0] * 4) != 0) {
            *(undefined4 *)(unaff_ESI + 0x84 + auStack_8[0] * 4) = 0;
            iVar9 = *(int *)(auStack_8[0] * 4 + 0x6fa058);
            if (auStack_8[0] == 4) {
              iVar9 = -0x6c959581;
            }
            for (iVar2 = *(int *)((int)fVar4 + 0x3c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
              if (*(int *)(iVar2 + 0xc) == iVar9) {
                FUN_004f0700(iVar9,0,iVar6,fVar4,1);
                FUN_004f0700(iVar9,fVar4,iVar6,0xfffffffb,1);
                break;
              }
            }
          }
          auStack_8[0] = auStack_8[0] + 1;
        } while (auStack_8[0] < 0x13);
        if (*(int *)(iVar6 + 0x80) != 0) {
          FUN_004f0700(0x55d1e635,0,iVar6,*(int *)(iVar6 + 0x80),0);
          FUN_004f0700(0x55d1e635,*(undefined4 *)(iVar6 + 0x80),iVar6,0xfffffffb,0);
        }
        FUN_004f0700(0xabc08912,0,iVar6,iVar1,0);
        FUN_004f0700(0xabc08912,iVar1,iVar6,0xfffffffb,0);
        *(int *)(iVar6 + 0x80) = iVar1;
      }
    }
  }
  return;
code_r0x004f0038:
  iVar9 = *(int *)(iVar9 + 4);
  if (iVar9 == 0) goto LAB_004f0151;
  goto LAB_004f0033;
}
