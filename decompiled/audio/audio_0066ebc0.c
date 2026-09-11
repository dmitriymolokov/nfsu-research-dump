/* spd-match: far pct=3.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00447030();
int __cdecl FUN_00549460();
extern int DAT_006eb720;
int unaff_retaddr;

void FUN_0066ebc0(undefined4 param_1,int param_2,int param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint unaff_retaddr;
  int local_402c;
  int *piStack_4028;
  undefined4 *local_4020;
  int *local_401c [2];
  uint local_4014;
  int *piStack_4010;
  int *piStack_400c;
  int iStack_4008;
  int local_4004 [1024];
  undefined4 local_3004 [1024];
  int local_2004 [1024];
  undefined1 local_1004 [4096];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (1 < param_3) {
    if (param_3 < 0x400) {
      piVar5 = local_4004;
      local_401c[0] = local_2004;
      local_401c[1] = (int *)local_1004;
    }
    else {
      iVar1 = param_3 * 4;
      piVar5 = (int *)FUN_00549460(iVar1);
      local_401c[0] = (int *)FUN_00549460(iVar1);
      local_401c[1] = (int *)FUN_00549460(iVar1);
    }
    if ((int)param_4 < 0x1001) {
      local_4020 = local_3004;
    }
    else {
      local_4020 = (undefined4 *)FUN_00549460(param_4);
    }
    *local_401c[0] = param_2;
    *piVar5 = 1;
    piVar8 = piVar5;
    piVar9 = local_401c[0];
    iVar1 = param_2;
    while (iVar1 = iVar1 + param_4, iVar1 != param_3 * param_4 + param_2) {
      iVar6 = (*param_5)(param_1,*piVar9,iVar1);
      if (iVar6 < 1) {
        *piVar8 = *piVar8 + 1;
      }
      else {
        piVar8 = piVar8 + 1;
        *piVar8 = 1;
      }
      piVar9 = piVar9 + 1;
      *piVar9 = iVar1;
    }
    piVar8[1] = 0;
    piVar8[2] = 0;
    local_4014 = 0;
    if (piVar5[1] != 0) {
      do {
        iVar1 = *piVar5;
        piStack_4028 = local_401c[~local_4014 & 1];
        piVar8 = local_401c[local_4014 & 1] + iVar1;
        piStack_400c = piVar8;
        piStack_4010 = piVar5;
        iStack_4008 = piVar5[1];
        piVar9 = local_401c[local_4014 & 1];
        piVar3 = piVar8 + piVar5[1];
        piVar4 = piVar5;
        while (piVar4 = piVar4 + 2, piStack_400c = piVar8, iVar1 != 0) {
          while( true ) {
            while (piVar9 != piStack_400c) {
              if (piVar8 == piVar3) {
                *piStack_4028 = *piVar9;
                piStack_4028 = piStack_4028 + 1;
                piVar9 = piVar9 + 1;
              }
              else {
                iVar6 = (*param_5)(param_1,*piVar9,*piVar8);
                if (iVar6 < 1) {
                  *piStack_4028 = *piVar9;
                  piStack_4028 = piStack_4028 + 1;
                  piVar9 = piVar9 + 1;
                }
                else {
                  *piStack_4028 = *piVar8;
                  piStack_4028 = piStack_4028 + 1;
                  piVar8 = piVar8 + 1;
                }
              }
            }
            if (piVar8 == piVar3) break;
            *piStack_4028 = *piVar8;
            piStack_4028 = piStack_4028 + 1;
            piVar8 = piVar8 + 1;
          }
          *piStack_4010 = iStack_4008 + iVar1;
          iVar1 = *piVar4;
          piVar8 = piVar3 + iVar1;
          piStack_4010 = piStack_4010 + 1;
          iStack_4008 = piVar4[1];
          piStack_400c = piVar8;
          piVar9 = piVar3;
          piVar3 = piVar8 + piVar4[1];
        }
        *piStack_4010 = 0;
        piStack_4010[1] = 0;
        local_4014 = local_4014 + 1;
      } while (piVar5[1] != 0);
      if (local_4014 != 0) {
        piVar8 = local_401c[local_4014 & 1];
        local_402c = 0;
        if (0 < param_3) {
          do {
            if ((undefined4 *)piVar8[local_402c] != (undefined4 *)0x0) {
              puVar10 = (undefined4 *)piVar8[local_402c];
              puVar11 = local_4020;
              for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar7 = param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              iVar6 = piVar8[local_402c] - param_2;
              iVar1 = local_402c;
              while (iVar2 = iVar6 / (int)param_4, iVar2 != local_402c) {
                puVar10 = (undefined4 *)piVar8[iVar2];
                puVar11 = (undefined4 *)piVar8[iVar1];
                for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar11 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar11 = puVar11 + 1;
                }
                for (uVar7 = param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                }
                piVar8[iVar1] = 0;
                iVar1 = iVar2;
                iVar6 = piVar8[iVar2] - param_2;
              }
              puVar10 = local_4020;
              puVar11 = (undefined4 *)piVar8[iVar1];
              for (uVar7 = param_4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar7 = param_4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
                puVar10 = (undefined4 *)((int)puVar10 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              piVar8[iVar1] = 0;
            }
            local_402c = local_402c + 1;
          } while (local_402c < param_3);
        }
      }
    }
    if (piVar5 != local_4004) {
      FUN_00447030(piVar5);
      FUN_00447030(local_401c[0]);
      FUN_00447030(local_401c[1]);
    }
    if (local_4020 != local_3004) {
      FUN_00447030(local_4020);
    }
  }
  return;
}
