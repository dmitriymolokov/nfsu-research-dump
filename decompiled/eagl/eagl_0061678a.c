/* spd-match: far pct=4.83 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005f7186();
int __cdecl FUN_005f752b();
int __cdecl FUN_005f75cb();
int __cdecl FUN_005f7a42();
int __cdecl FUN_005f7a96();
int __cdecl FUN_0061674c();

int __fastcall FUN_0061678a(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  uint *puVar9;
  bool bVar10;
  undefined4 local_58 [4];
  int local_48 [4];
  char local_38 [16];
  uint local_28;
  int local_24;
  int local_20;
  char *local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = FUN_0061674c();
  if (-1 < iVar1) {
    local_8 = 0;
    uVar4 = param_1[3];
    local_28 = uVar4;
    if (uVar4 != 0) {
      do {
        puVar9 = *(uint **)(param_1[6] + local_8 * 4);
        local_10 = puVar9;
        iVar1 = FUN_005f7a96();
        if (iVar1 == 0) {
          local_14 = 0;
          uVar4 = *puVar9 & 0xffffff;
          local_c = uVar4;
          iVar1 = (**(code **)(*param_1 + 0x24))(puVar9,&local_20);
          if (iVar1 != 0) {
            local_18 = ((-(uint)(uVar4 != 1) & 0xfffffffd) + 3) * 4;
            do {
              if ((uint)param_1[0x38] <= local_8) {
                local_48[0] = -1;
                local_48[1] = 0xffffffff;
                local_48[2] = 0xffffffff;
                local_48[3] = 0xffffffff;
                local_38[0] = -1;
                local_38[1] = -1;
                local_38[2] = -1;
                local_38[3] = -1;
                local_38[4] = -1;
                local_38[5] = -1;
                local_38[6] = -1;
                local_38[7] = -1;
                local_38[8] = -1;
                local_38[9] = -1;
                local_38[10] = -1;
                local_38[0xb] = -1;
                local_38[0xc] = -1;
                local_38[0xd] = -1;
                local_38[0xe] = -1;
                local_38[0xf] = -1;
                puVar9 = local_10;
              }
              local_1c = (char *)(puVar9[2] + local_20 * uVar4 * 4);
              iVar1 = uVar4 << 2;
              bVar10 = true;
              pcVar6 = local_1c;
              pcVar8 = local_38 + local_18;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar10 = *pcVar6 == *pcVar8;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
              } while (bVar10);
              if (!bVar10) {
                iVar1 = FUN_005f752b(local_c & 0xffffff | 0x10000000,0xffffffff,0xffffffff);
                if (iVar1 == -1) {
                  return -0x7ff8fff2;
                }
                iVar1 = *(int *)(param_1[6] + iVar1 * 4);
                local_24 = iVar1;
                iVar2 = FUN_005f7a42(local_10);
                if (iVar2 < 0) {
                  return iVar2;
                }
                piVar5 = (int *)((int)local_48 + local_18);
                iVar2 = (**(code **)(*param_1 + 0x6c))(local_8,piVar5,local_c,local_58,local_14);
                if (iVar2 < 0) {
                  return iVar2;
                }
                local_58[local_14] = *(undefined4 *)(*(int *)(param_1[5] + *piVar5 * 4) + 8);
                piVar7 = *(int **)(iVar1 + 0x10);
                for (uVar4 = local_c & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *piVar7 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar7 = piVar7 + 1;
                }
                for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *(char *)piVar7 = (char)*piVar5;
                  piVar5 = (int *)((int)piVar5 + 1);
                  piVar7 = (int *)((int)piVar7 + 1);
                }
                pcVar6 = local_1c;
                pcVar8 = *(char **)(local_24 + 8);
                for (uVar4 = local_c & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                local_14 = local_14 + 1;
                for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *pcVar8 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar8 = pcVar8 + 1;
                }
                pcVar6 = local_1c;
                pcVar8 = local_38 + local_18;
                for (uVar4 = local_c & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
                  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
                  pcVar6 = pcVar6 + 4;
                  pcVar8 = pcVar8 + 4;
                }
                for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *pcVar8 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                  pcVar8 = pcVar8 + 1;
                }
              }
              pcVar6 = (char *)((int)local_48 + local_18);
              pcVar8 = local_1c;
              for (uVar4 = local_c & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
                pcVar6 = pcVar6 + 4;
                pcVar8 = pcVar8 + 4;
              }
              for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
                *pcVar8 = *pcVar6;
                pcVar6 = pcVar6 + 1;
                pcVar8 = pcVar8 + 1;
              }
              iVar1 = (**(code **)(*param_1 + 0x24))(local_10,&local_20);
              uVar4 = local_c;
              puVar9 = local_10;
            } while (iVar1 != 0);
          }
          iVar1 = FUN_005f75cb(puVar9);
          if (iVar1 == -1) {
            return -0x7ff8fff2;
          }
          FUN_005f7186(1);
          *(undefined4 *)(param_1[6] + local_8 * 4) = 0;
          uVar4 = local_28;
        }
        local_8 = local_8 + 1;
      } while (local_8 < uVar4);
    }
    if (uVar4 < (uint)param_1[3]) {
      iVar1 = 0;
      uVar3 = uVar4;
      do {
        *(undefined4 *)(iVar1 + param_1[6]) = *(undefined4 *)(param_1[6] + uVar3 * 4);
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 4;
      } while (uVar3 < (uint)param_1[3]);
    }
    param_1[3] = param_1[3] - uVar4;
    iVar1 = 0;
  }
  return iVar1;
}
