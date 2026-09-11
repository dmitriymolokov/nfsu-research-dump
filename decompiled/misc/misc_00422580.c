/* spd-match: far pct=4.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0043feb0();
int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_00443a10();
int __cdecl FUN_00443c90();
int __cdecl FUN_00564db0();
extern int DAT_006b7c30;
extern int DAT_006cc7a4;
extern int DAT_007361a8;
extern int DAT_007372b0;
extern int DAT_0077b190;
extern int DAT_0078a2fc;
extern int DAT_0078a320;
extern int DAT_0078a334;
extern int DAT_0078a335;
extern int DAT_0078a344;
extern int _DAT_006b7c2c;
extern int _DAT_006b7c34;
extern int _DAT_006cca94;
extern int _DAT_0078a3b8;
extern int _DAT_0078a3f0;
extern void LAB_00422620(void);
extern void LAB_0042265d(void);
extern void LAB_00422675(void);
extern void LAB_0042275a(void);
extern void LAB_00422808(void);
extern void LAB_0068600b(void);
void *ExceptionList;

void FUN_00422580(int param_1,int param_2)

{
  byte *pbVar1;
  float *pfVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  float *pfVar15;
  bool bVar16;
  float10 fVar17;
  float fVar18;
  int local_32c;
  float local_324 [17];
  undefined1 local_2e0 [32];
  int aiStack_2c0 [160];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0068600b;
  local_1c = ExceptionList;
  iVar8 = -1;
  if (DAT_0078a2fc == 0) {
    pcVar10 = "ForwardStartingPosition";
    uVar14 = 0x46;
    do {
      iVar8 = iVar8 * 0x21 + uVar14;
      pbVar1 = (byte *)(pcVar10 + 1);
      uVar14 = (uint)*pbVar1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
  }
  else {
    pcVar10 = "BackwardStartingPosition";
    uVar14 = 0x42;
    do {
      iVar8 = iVar8 * 0x21 + uVar14;
      pbVar1 = (byte *)(pcVar10 + 1);
      uVar14 = (uint)*pbVar1;
      pcVar10 = pcVar10 + 1;
    } while (*pbVar1 != 0);
  }
  ExceptionList = &local_1c;
  iVar5 = FUN_0043feb0(iVar8);
  if (iVar5 < param_1) {
LAB_00422675:
    local_324[7] = 0.0;
    local_324[8] = 0.0;
    local_324[9] = 0.0;
    local_324[10] = 0.0;
    local_324[0xb] = 0.0;
    local_324[0xc] = 0.0;
    local_324[0xd] = 1.0;
    local_324[0xe] = 0.0;
    local_324[0xf] = 0.0;
    local_324[0x10] = 0.0;
    fVar18 = DAT_006cc7a4;
    if (DAT_006cc7a4 < _DAT_006b7c34) {
      do {
        fVar18 = fVar18 + _DAT_006cca94;
        FUN_00443c90(&DAT_007372b0,fVar18,0);
      } while (fVar18 < _DAT_006b7c34);
    }
    uVar14 = 0;
    if (0 < param_1) {
      puVar13 = (undefined4 *)(param_2 + 8);
      do {
        uVar7 = uVar14 & 0x80000001;
        bVar16 = uVar7 == 0;
        if ((int)uVar7 < 0) {
          bVar16 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
        }
        fVar18 = DAT_006b7c30;
        if (!bVar16) {
          local_324[0] = -DAT_006b7c30;
          fVar18 = local_324[0];
        }
        FUN_00443c90(&DAT_007372b0,(float)((int)uVar14 / 2) * ((int)_DAT_006b7c2c) + _DAT_006b7c34,fVar18);
        puVar13[-2] = local_324[7];
        puVar13[-1] = local_324[8];
        *puVar13 = 0;
        uVar4 = FUN_00564db0(local_324[0xd],local_324[0xe]);
        *(undefined2 *)(puVar13 + 2) = uVar4;
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 8;
      } while ((int)uVar14 < param_1);
    }
  }
  else {
    local_324[0] = 0.0;
    if (0 < param_1) {
      puVar13 = (undefined4 *)(param_2 + 8);
LAB_00422620:
      iVar12 = 0;
      if (0 < iVar5) {
        puVar6 = (undefined4 *)FUN_0040a880();
        do {
          iVar11 = 0;
          for (puVar9 = DAT_0077b190; puVar9 != puVar6; puVar9 = (undefined4 *)*puVar9) {
            if (puVar9[2] == iVar8) {
              if (iVar11 == iVar12) goto LAB_0042265d;
              iVar11 = iVar11 + 1;
            }
          }
          puVar9 = (undefined4 *)0x0;
LAB_0042265d:
          if ((float)puVar9[3] == local_324[0]) goto LAB_0042275a;
          iVar12 = iVar12 + 1;
          if (iVar5 <= iVar12) break;
        } while( true );
      }
      goto LAB_00422675;
    }
  }
LAB_00422808:
  if ((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) {
    local_324[1] = 0.0;
    local_324[2] = 0.0;
    local_324[3] = 0.0;
    local_324[4] = 0.0;
    local_324[DAT_0078a334] = _DAT_0078a3b8;
    if (1 < DAT_0078a320) {
      local_324[DAT_0078a335] = _DAT_0078a3f0;
    }
    iVar8 = 0;
    fVar18 = DAT_006cc7a4;
    if (3 < param_1) {
      iVar5 = 3;
      do {
        if (fVar18 <= local_324[iVar8 + 1]) {
          fVar18 = local_324[iVar8 + 1];
        }
        if (fVar18 <= local_324[iVar8 + 2]) {
          fVar18 = local_324[iVar8 + 2];
        }
        if (fVar18 <= local_324[iVar8 + 3]) {
          fVar18 = local_324[iVar8 + 3];
        }
        if (fVar18 <= local_324[iVar8 + 4]) {
          fVar18 = local_324[iVar8 + 4];
        }
        iVar5 = iVar5 + 4;
        iVar8 = iVar8 + 4;
      } while (iVar5 < param_1);
    }
    for (; iVar8 < param_1; iVar8 = iVar8 + 1) {
      if (fVar18 <= local_324[iVar8 + 1]) {
        fVar18 = local_324[iVar8 + 1];
      }
    }
    iVar8 = 0;
    if (0 < param_1) {
      do {
        iVar5 = iVar8 + 1;
        iVar8 = iVar8 + 1;
        local_324[iVar8] = local_324[iVar5] - fVar18;
      } while (iVar8 < param_1);
    }
    local_32c = 0;
    if (0 < param_1) {
      pfVar15 = (float *)(param_2 + 8);
      do {
        pfVar2 = pfVar15 + -2;
        local_324[9] = 0.0;
        local_324[0xf] = 0.0;
        local_324[0x10] = 0.0;
        local_324[7] = 0.0;
        local_324[8] = 0.0;
        local_324[10] = 0.0;
        local_324[0xb] = 0.0;
        local_324[0xc] = 0.0;
        local_324[0xd] = 1.0;
        local_324[0xe] = 0.0;
        FUN_00443a10(&DAT_007372b0,pfVar2);
        fVar18 = local_324[local_32c + 1];
        local_32c = local_32c + 1;
        *pfVar2 = local_324[0xd] * fVar18 + *pfVar2;
        *pfVar15 = local_324[3] * fVar18 + *pfVar15;
        pfVar15[-1] = local_324[0xe] * fVar18 + pfVar15[-1];
        pfVar15 = pfVar15 + 8;
      } while (local_32c < param_1);
    }
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_00440740();
  if (0 < param_1) {
    do {
      fVar17 = (float10)FUN_00440a40(local_2e0,param_2,0,0,0);
      *(float *)(param_2 + 8) = (float)fVar17;
      param_2 = param_2 + 0x20;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar8 = 0;
  if (0 < local_40) {
    do {
      piVar3 = aiStack_2c0 + iVar8;
      iVar8 = iVar8 + 1;
      *(char *)(*piVar3 + 8) = *(char *)(*piVar3 + 8) + -1;
    } while (iVar8 < local_40);
  }
  ExceptionList = local_1c;
  return;
LAB_0042275a:
  puVar13[-2] = puVar9[4];
  puVar13[-1] = puVar9[5];
  *puVar13 = puVar9[6];
  local_324[0] = (float)((int)local_324[0] + 1);
  *(undefined2 *)(puVar13 + 2) = *(undefined2 *)(puVar9 + 8);
  puVar13 = puVar13 + 8;
  if (param_1 <= (int)local_324[0]) goto LAB_00422808;
  goto LAB_00422620;
}
