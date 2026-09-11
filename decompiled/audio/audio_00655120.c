/* spd-match: far pct=3.08 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

int __cdecl FUN_00651490();
int __cdecl FUN_00651a00();
int __cdecl FUN_00652270();
int __cdecl FUN_006525f0();
int __cdecl FUN_00652ca0();
int __cdecl FUN_00655a40();
int __cdecl FUN_006599e0();
int __cdecl FUN_00659a70();
extern int DAT_00713ee4;
extern unsigned char *DAT_00713f48;
extern unsigned char *DAT_00713f70;
extern int DAT_007163dc;
extern int _DAT_006ccbec;
extern int _DAT_006e9bc8;

int FUN_00655120(int param_1,int *param_2,undefined2 *param_3,char *param_4)

{
  short *psVar1;
  char cVar2;
  int *piVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  short sVar15;
  int *piVar16;
  short *local_f8;
  uint local_f4;
  undefined2 local_f0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined1 local_cc [3];
  byte local_c9;
  undefined2 local_b4;
  
  if (DAT_00713ee4 == '\0') {
    return -10;
  }
  piVar3 = (int *)(&DAT_007163dc)[param_1];
  local_c9 = *(byte *)((int)param_2 + 2);
  iVar6 = *param_2;
  uVar10 = (uint)local_c9;
  local_dc = 0;
  local_b4 = param_3[4];
  piVar3[1] = 0;
  piVar3[0x12] = 0;
  piVar3[0x18] = iVar6;
  piVar3[0x13] = 0;
  piVar3[3] = 0;
  piVar3[2] = 0;
  *(undefined2 *)((int)piVar3 + 0x46) = 0;
  *(undefined2 *)(piVar3 + 0x11) = 0;
  local_f8 = (short *)0x0;
  if (*(char *)((int)piVar3 + 0x62) != '\0') {
    piVar16 = (int *)(param_3 + 0xc);
    piVar11 = piVar3 + 0x19;
    piVar5 = piVar3 + 10;
    do {
      piVar11[-0x15] = 0;
      *(undefined2 *)(piVar5 + 3) = 0;
      *(undefined2 *)piVar5 = 0;
      *piVar11 = *piVar16;
      local_f8 = (short *)((int)local_f8 + 1);
      piVar5 = (int *)((int)piVar5 + 2);
      piVar16 = piVar16 + 1;
      piVar11 = piVar11 + 1;
    } while ((int)local_f8 < (int)(uint)*(byte *)((int)piVar3 + 0x62));
  }
  while (iVar6 = FUN_00659a70(&local_dc,local_cc), iVar6 != 0) {
    FUN_00651a00(iVar6,&local_d4,&local_d8);
    iVar7 = FUN_00652270(uVar10,0x65,&local_d0,local_d4,local_d8);
    if (iVar7 < 0) {
      *piVar3 = -9;
    }
    else {
      *piVar3 = local_d0;
      local_f4 = -1;
      (*(unsigned char *)&(local_f4)) = 0xff;
      iVar12 = 0;
      if (*(char *)((int)param_2 + 2) != '\0') {
        local_f8 = (short *)(iVar7 * 0x8c + 4 + DAT_00713f48);
        sVar15 = -1;
        do {
          if (sVar15 < *local_f8) {
            local_f4 = iVar12;
            sVar15 = *local_f8;
          }
          local_f8 = local_f8 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)(uint)*(byte *)((int)param_2 + 2));
      }
      *(undefined1 *)((int)piVar3 + 0x42) = (undefined1)local_f4;
      iVar12 = iVar7 * 0x8c + DAT_00713f48;
      *(undefined4 *)(iVar12 + 0x18) = 0xffffffff;
      *(undefined4 *)(iVar12 + 0x14) = 0;
      *(short *)(iVar12 + 0x20) = (short)*param_2;
      *(undefined1 *)(iVar12 + 0x22) = *(undefined1 *)((int)param_2 + 3);
      *(undefined1 *)(iVar12 + 0x23) = *(undefined1 *)((int)param_2 + 2);
      if (*(char *)((int)param_2 + 2) == '\x01') {
        *(undefined2 *)(iVar12 + 0x1c) = *(undefined2 *)(param_4 + 8);
      }
      else {
        FUN_00655a40(iVar12);
      }
      *(undefined2 *)(iVar12 + 0x4c) = 0;
      *(undefined2 *)(iVar12 + 0x12) = 0xffff;
      *(undefined2 *)(iVar12 + 0x84) = *param_3;
      *(undefined2 *)(iVar12 + 0x88) = *(undefined2 *)(param_4 + 0xc);
      *(char *)(iVar12 + 100) = param_4[1];
      *(undefined1 *)(iVar12 + 0x60) = *(undefined1 *)((int)param_3 + 5);
      *(char *)(iVar12 + 0x61) = param_4[5];
      cVar2 = *(char *)(param_3 + 3);
      *(undefined1 *)(iVar12 + 0x26) = 0;
      *(undefined1 *)(iVar12 + 0x27) = 0;
      *(undefined4 *)(iVar12 + 0x74) = 0;
      *(undefined4 *)(iVar12 + 0x7c) = 0;
      *(short *)(iVar12 + 0x82) = cVar2 * 100;
      iVar13 = 0;
      *(float *)(iVar12 + 0x38) = (float)(int)*param_4 * _DAT_006ccbec;
      uVar8 = (uint)*(byte *)((int)param_2 + 2);
      if (uVar8 != 0) {
        do {
          *(short *)(iVar12 + 0x50 + iVar13 * 2) =
               param_3[iVar13 + 6] - *(short *)(&DAT_00713f70 + (iVar13 + uVar8 * 6) * 2);
          iVar9 = *(short *)(iVar12 + 4 + iVar13 * 2) * 0x8c + DAT_00713f48;
          local_f0 = (undefined2)iVar6;
          *(undefined2 *)(iVar9 + 0x24) = local_f0;
          *(char *)(iVar9 + 0x5f) = param_4[4];
          *(undefined1 *)(iVar9 + 0x2b) = *(undefined1 *)((int)param_3 + 3);
          *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar12 + 0x38);
          *(undefined4 *)(iVar9 + 0x70) = 0;
          *(undefined4 *)(iVar9 + 0x30) = 0;
          *(undefined1 *)(iVar9 + 0x5c) = 1;
          *(undefined1 *)(iVar9 + 0x5e) = 0;
          *(undefined1 *)(iVar9 + 0x5d) = 0;
          *(undefined4 *)(iVar9 + 0x40) = 0x7f0000;
          *(undefined4 *)(iVar9 + 0x44) = 0x7fffffff;
          *(undefined4 *)(iVar9 + 0x3c) = 0;
          *(undefined4 *)(iVar9 + 0x6c) = 0;
          *(undefined4 *)(iVar9 + 0x78) = 0;
          fVar4 = _DAT_006e9bc8 * *(float *)(iVar9 + 0x38);
          *(bool *)(iVar9 + 0x4e) = iVar13 == 5;
          *(undefined2 *)(iVar9 + 0x1e) = 0;
          iVar13 = iVar13 + 1;
          *(float *)(iVar9 + 0x48) = fVar4;
          uVar8 = (uint)*(byte *)((int)param_2 + 2);
        } while (iVar13 < (int)uVar8);
      }
      if (*(char *)((int)param_2 + 2) == '\x01') {
        *(undefined2 *)(iVar12 + 0x1e) = *(undefined2 *)(param_4 + 10);
      }
      local_f8 = (short *)0x0;
      if (*(char *)((int)param_2 + 2) != '\0') {
        psVar14 = (short *)(iVar12 + 0x50);
        do {
          psVar1 = (short *)(psVar14[-0x26] * 0x8c + DAT_00713f48 + 0x1c);
          *psVar1 = *psVar1 + *psVar14;
          local_f8 = (short *)((int)local_f8 + 1);
          psVar14 = psVar14 + 1;
        } while ((int)local_f8 < (int)(uint)*(byte *)((int)param_2 + 2));
      }
      *(undefined2 *)(iVar12 + 0x86) = 0;
      FUN_00652ca0(iVar7);
      FUN_00651490(0,iVar7);
      iVar6 = FUN_006599e0(param_1,iVar7,*(undefined2 *)(param_4 + 0xe),
                           *(undefined2 *)(param_4 + 0x12),*(undefined2 *)(param_4 + 0x14),
                           *(undefined2 *)(param_4 + 0x16),param_2,param_3);
      if (-1 < iVar6) break;
      if (uVar10 != 0) {
        iVar7 = iVar7 * 0x8c + 4;
        local_f4 = uVar10;
        do {
          FUN_006525f0((int)*(short *)(DAT_00713f48 + iVar7));
          iVar7 = iVar7 + 2;
          local_f4 = local_f4 - 1;
        } while (local_f4 != 0);
      }
      *piVar3 = iVar6;
    }
  }
  return *piVar3;
}
