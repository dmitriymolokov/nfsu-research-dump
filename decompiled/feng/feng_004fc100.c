/* Decompiled from Speed.exe @ 004fc100 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc100(undefined1 *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float local_20;
  int local_1c;
  
  iVar8 = 0;
  pfVar6 = (float *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x30);
  local_20 = 0.0;
  local_1c = 0;
  if (param_1[0x2c] != '\0') {
    iVar5 = FUN_004fc0e0();
  }
  if (iVar5 == 0) goto LAB_004fc29b;
  do {
    iVar5 = *(int *)(iVar5 + 4);
    iVar8 = iVar8 + 1;
  } while (iVar5 != 0);
  if (iVar8 == 0) goto LAB_004fc29b;
  bVar4 = param_1[3] & 0x7f;
  if ((param_1[3] & 0x7f) == 0) {
    iVar5 = FUN_004fccb0();
    if (iVar5 == 0) goto LAB_004fc29b;
    local_1c = *(int *)(iVar5 + 8);
    if (local_1c == 0) {
      local_20 = 1.0;
    }
    else if (param_2 < *(int *)(iVar5 + 0xc)) {
      local_20 = (float)(*(int *)(iVar5 + 0xc) - *(int *)(local_1c + 0xc));
      if (local_20 <= _DAT_006ccb7c) goto LAB_004fc285;
      local_20 = (float)(param_2 - *(int *)(local_1c + 0xc)) / local_20;
    }
    else {
      local_20 = 1.0;
    }
  }
  else if (bVar4 == 1) {
    local_1c = FUN_004fccb0();
    if (local_1c == 0) goto LAB_004fc29b;
    iVar8 = *(int *)(local_1c + 0xc);
    if (iVar8 < param_2) {
      iVar5 = *(int *)(param_1 + 0x30);
      if (param_1[0x2c] != '\0') {
        iVar5 = FUN_004fc0e0();
      }
      local_20 = (float)((((*(int *)(param_1 + 4) << 8) >> 8) + *(int *)(iVar5 + 0xc)) -
                        *(int *)(local_1c + 0xc));
      if (local_20 <= _DAT_006ccb7c) goto LAB_004fc285;
      local_20 = (float)(param_2 - *(int *)(local_1c + 0xc)) / local_20;
    }
    else {
      iVar5 = local_1c;
      if (iVar8 == param_2) {
        local_20 = 0.0;
      }
      else {
        local_1c = *(int *)(local_1c + 8);
        if (local_1c == 0) {
          iVar9 = *(int *)(param_1 + 4);
          local_1c = FUN_004fcc70();
          iVar9 = ((iVar9 << 8) >> 8) - *(int *)(local_1c + 0xc);
          local_20 = (float)(iVar9 + iVar8);
          if (local_20 <= _DAT_006ccb7c) {
LAB_004fc285:
            local_20 = 0.0;
          }
          else {
            local_20 = (float)(iVar9 + param_2) / local_20;
          }
        }
        else {
          local_20 = (float)(iVar8 - *(int *)(local_1c + 0xc));
          if (local_20 <= _DAT_006ccb7c) goto LAB_004fc285;
          local_20 = (float)(param_2 - *(int *)(local_1c + 0xc)) / local_20;
        }
      }
    }
  }
  else {
    if (bVar4 != 2) goto LAB_004fc29b;
    iVar5 = FUN_004fccb0();
  }
  if (iVar5 != 0) {
    iVar8 = local_1c;
    if ((local_20 != DAT_006cc7a4) && (iVar8 = iVar5, local_20 != _DAT_006cc7bc)) {
      switch(*param_1) {
      case 1:
        FUN_004fc5d0(local_20,pfVar6,param_3);
        return;
      case 2:
        *param_3 = (*(float *)(iVar5 + 0x10) - *(float *)(local_1c + 0x10)) * local_20 +
                   *(float *)(local_1c + 0x10) + *pfVar6;
        return;
      case 3:
        *param_3 = (*(float *)(iVar5 + 0x10) - *(float *)(local_1c + 0x10)) * local_20 + *pfVar6 +
                   *(float *)(local_1c + 0x10);
        param_3[1] = (*(float *)(iVar5 + 0x14) - *(float *)(local_1c + 0x14)) * local_20 +
                     *(float *)(param_1 + 0x1c) + *(float *)(local_1c + 0x14);
        return;
      case 4:
        FUN_004fc600(local_20);
        return;
      case 5:
        FUN_004fc640(local_20,pfVar6);
        return;
      case 6:
        FUN_004fc8e0(local_1c + 0x10,iVar5 + 0x10,local_20);
        return;
      default:
        return;
      }
    }
    pfVar7 = (float *)(iVar8 + 0x10);
    switch(*param_1) {
    case 1:
      *param_3 = (float)((int)*pfVar6 + (int)*pfVar7);
      return;
    case 2:
      *param_3 = *pfVar6 + *pfVar7;
      return;
    case 3:
      *param_3 = *pfVar6 + *pfVar7;
      param_3[1] = *(float *)(iVar8 + 0x14) + *(float *)(param_1 + 0x1c);
      return;
    case 4:
      *param_3 = *pfVar6 + *pfVar7;
      param_3[1] = *(float *)(iVar8 + 0x14) + *(float *)(param_1 + 0x1c);
      param_3[2] = *(float *)(iVar8 + 0x18) + *(float *)(param_1 + 0x20);
      return;
    case 5:
      pfVar6 = (float *)FUN_004fbfc0();
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      param_3[3] = pfVar6[3];
      return;
    case 6:
      param_3[2] = (float)(*(int *)(iVar8 + 0x18) + *(int *)(param_1 + 0x20));
      param_3[1] = (float)(*(int *)(iVar8 + 0x14) + *(int *)(param_1 + 0x1c));
      *param_3 = (float)((int)*pfVar6 + (int)*pfVar7);
      param_3[3] = (float)(*(int *)(iVar8 + 0x1c) + *(int *)(param_1 + 0x24));
      return;
    default:
      return;
    }
  }
LAB_004fc29b:
  switch(*param_1) {
  case 1:
  case 2:
    *param_3 = *pfVar6;
    return;
  case 3:
    fVar1 = *(float *)(param_1 + 0x1c);
    *param_3 = *pfVar6;
    param_3[1] = fVar1;
    return;
  case 4:
    fVar1 = *(float *)(param_1 + 0x1c);
    fVar2 = *(float *)(param_1 + 0x20);
    *param_3 = *pfVar6;
    param_3[1] = fVar1;
    param_3[2] = fVar2;
    return;
  case 5:
  case 6:
    fVar1 = *(float *)(param_1 + 0x1c);
    fVar2 = *(float *)(param_1 + 0x20);
    fVar3 = *(float *)(param_1 + 0x24);
    *param_3 = *pfVar6;
    param_3[1] = fVar1;
    param_3[2] = fVar2;
    param_3[3] = fVar3;
    return;
  default:
    return;
  }
}

