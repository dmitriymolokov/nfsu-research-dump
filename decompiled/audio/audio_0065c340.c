/* Decompiled from Speed.exe @ 0065c340 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065c340(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int unaff_EBX;
  int iVar6;
  float local_60 [12];
  float local_30 [12];
  
  iVar6 = 10;
  do {
    iVar2 = iVar6 + -1;
    local_60[iVar6 + 1] = *(float *)(param_1 + 4 + iVar2 * 4);
    iVar6 = iVar2;
  } while (-1 < iVar2);
  iVar6 = 0;
  local_60[0] = 1.0;
  do {
    local_60[0] = -(local_60[0xb] * *(float *)(param_1 + 0x2c));
    pfVar3 = (float *)(param_1 + 0x28);
    iVar2 = 10;
    do {
      iVar4 = iVar2 + -1;
      local_60[0] = local_60[0] - local_60[iVar2] * *pfVar3;
      *(float *)((int)pfVar3 + (int)local_60 + (4 - param_1)) =
           local_60[0] * *pfVar3 + local_60[iVar2];
      pfVar3 = pfVar3 + -1;
      iVar2 = iVar4;
    } while (-1 < iVar4);
    iVar2 = 0;
    local_60[iVar6 + 0xc] = local_60[0];
    if (3 < iVar6) {
      iVar4 = 3;
      pfVar3 = (float *)(unaff_EBX + 8);
      pfVar5 = local_60 + iVar6 + 10;
      do {
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 4;
        local_60[0] = (((local_60[0] - pfVar5[1] * pfVar3[-2]) - pfVar3[-1] * *pfVar5) -
                      pfVar5[-1] * *pfVar3) - pfVar5[-2] * pfVar3[1];
        pfVar3 = pfVar3 + 4;
        pfVar5 = pfVar5 + -4;
      } while (iVar4 < iVar6);
    }
    if (iVar2 < iVar6) {
      pfVar3 = local_60 + (iVar6 - iVar2) + 0xb;
      do {
        iVar4 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        fVar1 = *pfVar3;
        pfVar3 = pfVar3 + -1;
        local_60[0] = local_60[0] - *(float *)(unaff_EBX + iVar4) * fVar1;
      } while (iVar2 < iVar6);
    }
    iVar2 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(float *)(unaff_EBX + iVar2) = local_60[0];
  } while (iVar6 < 0xc);
  return;
}

