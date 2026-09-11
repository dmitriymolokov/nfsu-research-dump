/* Decompiled from Speed.exe @ 00661460 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00661460(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_8;
  float local_4;
  
  if (((param_2 == 3) || (param_2 == 4)) && (_DAT_006cc95c < *(float *)(param_1 + 0x34))) {
    *(undefined4 *)(param_1 + 0x34) = 0x3f4ccccd;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x38);
    local_8 = 1;
    pfVar3 = (float *)(param_1 + 0x2c);
    do {
      fVar1 = (float)(int)local_8 * _DAT_006cca44;
      fVar6 = (float10)FUN_00659130(fVar1 * *(float *)(param_1 + 0x38));
      local_8 = local_8 + 1;
      *pfVar3 = (float)(fVar6 / (float10)fVar1);
      pfVar3 = pfVar3 + -1;
    } while ((int)local_8 < 5);
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);
    local_8 = 1;
    pfVar3 = (float *)(param_1 + 0x2c);
    do {
      fVar1 = (float)(int)local_8 * _DAT_006cca44;
      fVar6 = (float10)FUN_00659130(fVar1 * *(float *)(param_1 + 0x34));
      local_8 = local_8 + 1;
      *pfVar3 = (float)(fVar6 / (float10)fVar1);
      pfVar3 = pfVar3 + -1;
    } while ((int)local_8 < 5);
  }
  else if (param_2 == 4) {
    local_8 = 1;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34);
    pfVar3 = (float *)(param_1 + 0x2c);
    do {
      fVar1 = (float)(int)local_8 * _DAT_006cca44;
      fVar6 = (float10)FUN_00659130((*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34)) *
                                    fVar1 * _DAT_006cc7dc);
      fVar7 = (float10)FUN_006590b0((*(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x34)) *
                                    fVar1 * _DAT_006cc7dc);
      fVar7 = fVar7 * (float10)(float)(fVar6 / (float10)fVar1);
      local_8 = local_8 + 1;
      *pfVar3 = (float)(fVar7 + fVar7);
      pfVar3 = pfVar3 + -1;
    } while ((int)local_8 < 5);
  }
  pfVar3 = (float *)(param_1 + 0x20);
  local_4 = 0.0;
  local_8 = 0;
  pfVar4 = pfVar3;
  do {
    if ((param_2 == 2) || (param_2 == 4)) {
      fVar6 = (float10)FUN_006590b0((float)(int)local_8 * _DAT_006ccd70);
      fVar6 = ((float10)_DAT_006ccccc - fVar6 * (float10)_DAT_006aab84) * (float10)*pfVar4;
      *pfVar4 = (float)fVar6;
LAB_00661656:
      fVar6 = fVar6 + (float10)local_4;
LAB_0066165a:
      local_4 = (float)fVar6;
    }
    else if (param_2 == 3) {
      fVar6 = (float10)FUN_006590b0((float)(int)local_8 * _DAT_006ccd70);
      uVar2 = local_8 & 0x80000001;
      bVar5 = uVar2 == 0;
      fVar6 = -(((float10)_DAT_006ccccc - fVar6 * (float10)_DAT_006aab84) * (float10)*pfVar4);
      fVar1 = (float)fVar6;
      *pfVar4 = (float)fVar6;
      if ((int)uVar2 < 0) {
        bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar5) {
        fVar6 = (float10)fVar1;
        goto LAB_00661656;
      }
      fVar6 = (float10)local_4 - (float10)fVar1;
      goto LAB_0066165a;
    }
    local_8 = local_8 + 1;
    pfVar4 = pfVar4 + 1;
    if (4 < (int)local_8) {
      if (param_2 == 3) {
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + _DAT_006cc7bc;
        local_4 = local_4 + _DAT_006cc7bc;
      }
      fVar1 = (local_4 + local_4) - *(float *)(param_1 + 0x30);
      if (fVar1 < DAT_006cc7a4) {
        fVar1 = fVar1 * _DAT_006cc8a8;
      }
      fVar1 = _DAT_006cc7bc / fVar1;
      *pfVar3 = fVar1 * *pfVar3;
      *(float *)(param_1 + 0x24) = fVar1 * *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x28) = fVar1 * *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = fVar1 * *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = fVar1 * *(float *)(param_1 + 0x30);
      return;
    }
  } while( true );
}

