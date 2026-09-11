/* spd-match: far pct=4.59 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00443a10 */
/* Module: Loader */
/* Symbol: track_stream_visible — camera-driven section select (zone band + grid ring + distance) */
/* Ghidra DecompileVAs (nocd unpacked; retail game/Speed.exe is THX-packed) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443a10(float *param_1,float *param_2)

{
  float *pfVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *unaff_esi_local;
  int iVar7;
  float10 fVar8;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  fVar5 = unaff_esi_local[2];
  if ((fVar5 == 0.0) ||
     (_DAT_006cc7c4 <
      SQRT((*param_2 - *unaff_esi_local) * (*param_2 - *unaff_esi_local) +
           (param_2[1] - unaff_esi_local[1]) * (param_2[1] - unaff_esi_local[1])))) {
    fVar5 = (float)FUN_00443630(param_1);
  }
  if (fVar5 != 0.0) {
    pfVar6 = (float *)FUN_00443920(param_2);
    iVar7 = 10;
    local_2c = SQRT((param_2[1] - pfVar6[1]) * (param_2[1] - pfVar6[1]) +
                    (*param_2 - *pfVar6) * (*param_2 - *pfVar6));
    do {
      if (((-1 < *(short *)(iVar7 + (int)pfVar6)) &&
          (pfVar1 = (float *)(*(int *)&param_1[5] + *(short *)(iVar7 + (int)pfVar6) * 0x14),
          pfVar1 != (float *)0x0)) &&
         (fVar5 = SQRT((param_2[1] - pfVar1[1]) * (param_2[1] - pfVar1[1]) +
                       (*param_2 - *pfVar1) * (*param_2 - *pfVar1)), fVar5 < local_2c)) {
        pfVar6 = pfVar1;
        local_2c = fVar5;
      }
      iVar7 = iVar7 + 2;
    } while (iVar7 < 0x10);
    iVar7 = *(int *)&param_1[3] + *(char *)((int)pfVar6 + 2) * 0x28;
    local_2c = unaff_esi_local[3];
    if (pfVar6 != *(float **)&unaff_esi_local[2]) {
      fVar5 = param_1[5];
      sVar2 = *(short *)(iVar7 + 2);
      *(float **)&unaff_esi_local[2] = pfVar6;
      local_2c = (float)(((int)pfVar6 - *(int *)&fVar5) / 0x14 - (int)sVar2);
    }
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = 0;
    fVar8 = (float10)FUN_0059d540(&local_20,local_2c,0x3d4ccccd,0);
    fVar5 = (float)fVar8;
    FUN_0059d350(&local_20,fVar5,0);
    FUN_0059d350(&local_20,fVar5,1);
    local_24 = local_1c;
    fVar4 = local_20;
    FUN_0059d350(&local_20,fVar5,0);
    fVar3 = SQRT(fVar4 * fVar4 + local_24 * local_24);
    if (fVar3 == (float)DAT_006cc7a4) {
      local_24 = 0.0;
      fVar3 = (float)_DAT_006cc7bc;
    }
    else {
      fVar3 = (float)_DAT_006cc7bc / fVar3;
      local_24 = fVar3 * local_24;
      fVar3 = fVar3 * fVar4;
    }
    local_2c = local_14 * *(float *)(iVar7 + 0x10) + *(float *)(iVar7 + 8);
    if (param_1[1] != 0.0) {
      local_2c = *param_1 - local_2c;
      fVar3 = -fVar3;
      local_24 = -local_24;
    }
    unaff_esi_local[3] = fVar5;
    fVar5 = *param_2;
    unaff_esi_local[1] = param_2[1];
    *unaff_esi_local = fVar5;
    unaff_esi_local[6] = fVar3;
    unaff_esi_local[7] = local_24;
    unaff_esi_local[5] = local_2c;
    unaff_esi_local[4] = local_2c / *param_1;
    return;
  }
  fVar5 = *param_2;
  unaff_esi_local[1] = param_2[1];
  *unaff_esi_local = fVar5;
  unaff_esi_local[6] = 1.0;
  unaff_esi_local[7] = 0.0;
  unaff_esi_local[5] = 0.0;
  unaff_esi_local[4] = 0.0;
  return;
}
