/* spd-match: far pct=6.36 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_005f56ad();
int __cdecl FUN_005f573e();
int __cdecl FUN_005f57dd();
int __cdecl FUN_005f57fd();
int __cdecl FUN_005f5941();
extern void LAB_005f6a61(void);
extern void LAB_005f6a66(void);

int FUN_005f6829(int *param_1,byte *param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_3c;
  short local_36;
  short local_34;
  undefined4 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  if (param_3 != (char *)0x0) {
    while( true ) {
      while( true ) {
        bVar15 = false;
        iVar7 = _isspace((int)*param_3);
        while (iVar7 != 0) {
          param_3 = param_3 + 1;
          iVar7 = _isspace((int)*param_3);
        }
        if (*param_3 == '\0') {
          return (int)param_2;
        }
        if ((param_2 != (byte *)0x0) && (*param_3 == '.')) {
          param_3 = param_3 + 1;
          iVar7 = _isspace((int)*param_3);
          while (iVar7 != 0) {
            param_3 = param_3 + 1;
            iVar7 = _isspace((int)*param_3);
          }
          bVar15 = true;
        }
        cVar3 = *param_3;
        if (cVar3 == '@') {
          return 0;
        }
        if (((param_2 == (byte *)0x0) || (bVar15)) || (cVar3 != '[')) break;
        cVar3 = param_3[1];
        iVar7 = 0;
        iVar10 = 1;
        while (iVar8 = _isspace((int)cVar3), iVar8 != 0) {
          iVar10 = iVar10 + 1;
          cVar3 = param_3[iVar10];
        }
        while (iVar8 = _isdigit((int)param_3[iVar10]), iVar8 != 0) {
          iVar7 = param_3[iVar10] + -0x30 + iVar7 * 10;
          iVar10 = iVar10 + 1;
        }
        while (iVar8 = _isspace((int)param_3[iVar10]), iVar8 != 0) {
          iVar10 = iVar10 + 1;
        }
        if (param_3[iVar10] != ']') {
          return 0;
        }
        param_2 = (**(byte * (**)())(*param_1 + 0x24))(param_1,param_2,iVar7);
        if (param_2 == (byte *)0x0) {
          return 0;
        }
        param_3 = param_3 + iVar10 + 1;
      }
      iVar7 = _isalnum((int)cVar3);
      if (((iVar7 == 0) && (*param_3 != '_')) && (*param_3 != '$')) break;
      local_10 = 1;
      while( true ) {
        pcVar1 = param_3 + local_10;
        iVar7 = _isalnum((int)*pcVar1);
        if ((iVar7 == 0) && (*pcVar1 != '_')) break;
        local_10 = local_10 + 1;
      }
      if (param_2 == (byte *)0x0) {
        uVar16 = FUN_005f57dd(&local_24);
        iVar7 = (int)((ulonglong)uVar16 >> 0x20);
        if ((int)uVar16 < 0) {
          return 0;
        }
        param_2 = *(byte **)(local_24 + 0xc);
        local_14 = *(uint *)(iVar7 + 8);
        if (local_14 < (uint)(*(int *)(local_24 + 0x10) + (int)param_2 * 0x14)) {
          return 0;
        }
        local_8 = *(int *)(iVar7 + 0xc);
        piVar11 = (int *)0x0;
        local_c = (int *)0x0;
        iVar7 = local_8 + *(int *)(local_24 + 0x10);
        if (param_2 != (byte *)0x0) {
          do {
            piVar11 = (int *)((uint)((int)param_2 + (int)local_c) >> 1);
            uVar5 = *(uint *)(iVar7 + (int)piVar11 * 0x14);
            if (uVar5 == 0) {
              return 0;
            }
            if (local_14 <= uVar5) {
              return 0;
            }
            iVar10 = FUN_005f56ad(local_10);
            if (iVar10 == 0) break;
            piVar2 = piVar11;
            if (iVar10 < 0) {
              local_c = (int *)((int)piVar11 + 1);
              piVar2 = (int *)param_2;
            }
            param_2 = (byte *)piVar2;
          } while (local_c < param_2);
        }
        if ((byte *)local_c == param_2) {
          return 0;
        }
        piVar2 = (int *)(iVar7 + (int)piVar11 * 0x14);
        pbVar9 = (byte *)(*piVar2 + local_8);
        if (piVar11 != (int *)0x0) {
          local_18 = piVar2 + -5;
          do {
            param_2 = (byte *)(*local_18 + local_8);
            pbVar13 = pbVar9;
            if (pbVar9 != param_2) {
              do {
                bVar4 = *pbVar13;
                bVar15 = bVar4 < *param_2;
                if (bVar4 != *param_2) {
LAB_005f6a61:
                  iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_005f6a66;
                }
                if (bVar4 == 0) break;
                bVar4 = pbVar13[1];
                bVar15 = bVar4 < param_2[1];
                if (bVar4 != param_2[1]) goto LAB_005f6a61;
                param_2 = param_2 + 2;
                pbVar13 = pbVar13 + 2;
              } while (bVar4 != 0);
              iVar7 = 0;
LAB_005f6a66:
              if (iVar7 != 0) break;
            }
            piVar11 = (int *)((int)piVar11 + -1);
            local_18 = local_18 + -5;
          } while (piVar11 != (int *)0x0);
        }
        if ((int *)0xfffd < piVar11) {
          return 0;
        }
        param_2 = (byte *)((int)piVar11 + 1);
      }
      else {
        iVar7 = FUN_005f57fd(param_2,&local_28,&local_1c,0);
        if (iVar7 < 0) {
          return 0;
        }
        local_18 = (int *)(uint)*(ushort *)(local_1c + 10);
        local_14 = param_1[2];
        if (local_14 < (uint)(*(int *)(local_1c + 0xc) + (int)local_18 * 8)) {
          return 0;
        }
        iVar7 = param_1[3];
        local_c = (int *)0x0;
        iVar8 = *(int *)(local_1c + 0xc) + iVar7;
        bVar15 = local_18 != (int *)0x0;
        puVar12 = local_28;
        puVar14 = &local_3c;
        local_20 = iVar8;
        local_8 = iVar7;
        for (iVar10 = 5; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        if (bVar15) {
          do {
            uVar5 = *(uint *)((int)local_c * 8 + iVar8);
            if (uVar5 == 0) {
              return 0;
            }
            if (local_14 <= uVar5) {
              return 0;
            }
            iVar10 = *(int *)((int)local_c * 8 + 4 + iVar8);
            if (iVar10 == 0) {
              return 0;
            }
            if (local_14 < iVar10 + 0x10U) {
              return 0;
            }
            iVar10 = iVar10 + iVar7;
            local_1c = iVar10;
            sVar6 = FUN_005f573e(&local_3c,iVar10);
            sVar6 = sVar6 * *(short *)(iVar10 + 8);
            iVar7 = FUN_005f56ad(local_10);
            if (iVar7 == 0) {
              local_3c = *(undefined4 *)(local_20 + (int)local_c * 8);
              local_34 = sVar6;
              param_2 = (byte *)FUN_005f5941(&local_3c,iVar10);
              break;
            }
            local_36 = local_36 + sVar6;
            local_c = (int *)((int)local_c + 1);
            iVar8 = local_20;
            iVar7 = local_8;
          } while (local_c < local_18);
        }
        if (local_c == local_18) {
          return 0;
        }
      }
      param_3 = param_3 + local_10;
    }
  }
  return 0;
}
