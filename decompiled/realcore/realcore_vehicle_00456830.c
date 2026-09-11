/* Decompiled from Speed.exe @ 00456830 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00456830(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float local_28;
  
  iVar3 = *(int *)(param_1 + 0x20);
  param_2 = param_2 / *(float *)(param_1 + 0x404);
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar5 = (float10)FUN_00583ea0(param_2);
  local_28 = (float)fVar5;
  fVar4 = ((_DAT_006cc7bc - *(float *)(param_1 + 0x47c)) * *(float *)(iVar3 + 0x260) * param_2 *
          param_2) / *(float *)(iVar3 + 0x110);
  fVar1 = *(float *)(*(int *)(param_1 + 0x10) + 0x42c);
  if (((DAT_006cc7a4 < fVar1) && (fVar1 <= param_2)) && (fVar4 < local_28)) {
    local_28 = fVar4;
  }
  if (*(int *)(param_1 + 0x28) != 4) {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x98);
    FUN_00567370();
    return ((float10)local_28 - (float10)fVar4) +
           -((float10)_DAT_007000ac * (float10)(fVar2 + fVar1));
  }
  fVar5 = (float10)FUN_004638a0();
  return ((float10)local_28 - (float10)fVar4) + fVar5;
}

