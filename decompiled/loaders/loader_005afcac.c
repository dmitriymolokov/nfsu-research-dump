/* spd-match: far pct=5.61 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005afcac */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005afcac(int param_1,int param_2,int param_3,float *param_4,uint param_5,int param_6,
                 int *param_7,int *param_8,uint param_9,undefined4 *param_10,float *param_11,
                 int param_12)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float local_344 [195];
  uint local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)(param_3 + (int)param_10);
  uVar7 = param_6 - (int)param_10;
  if (param_2 == 0) {
    param_2 = param_1;
  }
  if (param_9 == 1) {
    if (param_5 != 0) {
      param_9 = param_5;
      param_10 = (undefined4 *)((int)param_4 + (int)param_10);
      do {
        local_14 = 0.0;
        local_10 = 0.0;
        local_c = 0.0;
        local_344[0] = 0.0;
        local_344[1] = 0.0;
        local_344[2] = 0.0;
        if (DAT_006cc7a4 <= *param_11) {
          do {
            uVar4 = __ftol();
            iVar5 = (uVar4 >> 1) * 2;
            fVar2 = (float)iVar5;
            if (iVar5 < 0) {
              fVar2 = fVar2 + _DAT_006cc858;
            }
            fVar2 = *param_11 - fVar2;
            iVar5 = (uVar4 >> 1) * 0x40;
            FUN_005abef8(&local_2c,param_3,param_1 + iVar5);
            FUN_005abf22(&local_20,*param_7,iVar5 + param_2);
            param_11 = param_11 + 1;
            local_2c = local_2c * fVar2;
            local_28 = local_28 * fVar2;
            local_24 = local_24 * fVar2;
            local_20 = local_20 * fVar2;
            local_1c = local_1c * fVar2;
            local_18 = local_18 * fVar2;
            local_14 = local_2c + local_14;
            local_10 = local_28 + local_10;
            local_c = local_24 + local_c;
            local_344[0] = local_20 + local_344[0];
            local_344[1] = local_1c + local_344[1];
            local_344[2] = local_18 + local_344[2];
          } while (DAT_006cc7a4 <= *param_11);
        }
        if (param_12 == 0) {
          *param_4 = local_14;
          param_4[1] = local_10;
          param_4[2] = local_c;
          pfVar9 = (float *)*param_8;
          *pfVar9 = local_344[0];
          pfVar9[1] = local_344[1];
          pfVar9[2] = local_344[2];
          puVar10 = local_8;
          puVar11 = param_10;
          for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
        }
        else {
          puVar10 = local_8;
          puVar11 = param_10;
          for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *param_4 = local_14;
          param_4[1] = local_10;
          param_4[2] = local_c;
          pfVar9 = (float *)*param_8;
          *pfVar9 = local_344[0];
          pfVar9[1] = local_344[1];
          pfVar9[2] = local_344[2];
        }
        *param_8 = *param_8 + param_6;
        param_10 = (undefined4 *)((int)param_10 + param_6);
        local_8 = (undefined4 *)((int)local_8 + param_6);
        param_4 = (float *)((int)param_4 + param_6);
        param_3 = param_3 + param_6;
        *param_7 = *param_7 + param_6;
        param_11 = param_11 + 1;
        param_9 = param_9 + -1;
      } while (param_9 != 0);
    }
  }
  else if (param_5 != 0) {
    local_38 = param_9 * 0xc;
    local_30 = param_5;
    param_10 = (undefined4 *)((int)param_4 + (int)param_10);
    do {
      uVar4 = local_38;
      local_14 = 0.0;
      local_10 = 0.0;
      pfVar9 = local_344;
      for (uVar8 = local_38 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pfVar9 = 0.0;
        pfVar9 = pfVar9 + 1;
      }
      local_c = 0.0;
      fVar2 = *param_11;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)pfVar9 = 0;
        pfVar9 = (float *)((int)pfVar9 + 1);
      }
      if (DAT_006cc7a4 <= fVar2) {
        do {
          uVar4 = __ftol();
          iVar5 = (uVar4 >> 1) * 2;
          fVar2 = (float)iVar5;
          if (iVar5 < 0) {
            fVar2 = fVar2 + _DAT_006cc858;
          }
          fVar2 = *param_11 - fVar2;
          iVar5 = (uVar4 >> 1) * 0x40;
          FUN_005abef8(&local_20,param_3,param_1 + iVar5);
          local_20 = local_20 * fVar2;
          param_5 = 0;
          local_1c = local_1c * fVar2;
          local_18 = local_18 * fVar2;
          local_14 = local_20 + local_14;
          local_10 = local_1c + local_10;
          local_c = local_18 + local_c;
          if (param_9 != 0) {
            local_34 = iVar5 + param_2;
            pfVar9 = local_344 + 2;
            do {
              FUN_005abf22(&local_2c,param_7[param_5],local_34);
              local_2c = local_2c * fVar2;
              param_5 = param_5 + 1;
              local_28 = local_28 * fVar2;
              local_24 = local_24 * fVar2;
              pfVar9[-2] = local_2c + pfVar9[-2];
              pfVar9[-1] = local_28 + pfVar9[-1];
              *pfVar9 = local_24 + *pfVar9;
              pfVar9 = pfVar9 + 3;
            } while (param_5 < param_9);
          }
          param_11 = param_11 + 1;
        } while (DAT_006cc7a4 <= *param_11);
      }
      if (param_12 == 0) {
        *param_4 = local_14;
        param_4[1] = local_10;
        param_4[2] = local_c;
        if (param_9 != 0) {
          pfVar9 = local_344;
          param_5 = param_9;
          piVar6 = param_8;
          do {
            pfVar3 = (float *)*piVar6;
            *pfVar3 = *pfVar9;
            pfVar3[1] = pfVar9[1];
            pfVar3[2] = pfVar9[2];
            *piVar6 = *piVar6 + param_6;
            piVar1 = (int *)((int)piVar6 + ((int)param_7 - (int)param_8));
            *piVar1 = *piVar1 + param_6;
            pfVar9 = pfVar9 + 3;
            piVar6 = piVar6 + 1;
            param_5 = param_5 - 1;
          } while (param_5 != 0);
        }
        puVar10 = local_8;
        puVar11 = param_10;
        for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
      }
      else {
        puVar10 = local_8;
        puVar11 = param_10;
        for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *param_4 = local_14;
        param_4[1] = local_10;
        param_4[2] = local_c;
        if (param_9 != 0) {
          pfVar9 = local_344;
          param_5 = param_9;
          piVar6 = param_8;
          do {
            pfVar3 = (float *)*piVar6;
            *pfVar3 = *pfVar9;
            pfVar3[1] = pfVar9[1];
            pfVar3[2] = pfVar9[2];
            *piVar6 = *piVar6 + param_6;
            piVar1 = (int *)(((int)param_7 - (int)param_8) + (int)piVar6);
            *piVar1 = *piVar1 + param_6;
            pfVar9 = pfVar9 + 3;
            piVar6 = piVar6 + 1;
            param_5 = param_5 - 1;
          } while (param_5 != 0);
        }
      }
      param_10 = (undefined4 *)((int)param_10 + param_6);
      local_8 = (undefined4 *)((int)local_8 + param_6);
      param_4 = (float *)((int)param_4 + param_6);
      param_3 = param_3 + param_6;
      param_11 = param_11 + 1;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  return;
}

