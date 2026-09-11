/* Decompiled from Speed.exe @ 00587070 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00587070(int param_1,undefined4 *param_2,int param_3)

{
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar1;
  float10 fVar2;
  char local_25;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = (float10)FUN_00440a40(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),unaff_EDI,param_2,
                                unaff_ESI,&local_25);
  local_24 = (float)fVar1;
  fVar1 = (float10)FUN_00577060(*(undefined4 *)(*(int *)(param_1 + 0x20) + 8),
                                *(undefined4 *)(*(int *)(param_1 + 0x20) + 4),local_24,unaff_EDI,
                                param_2,unaff_ESI,&local_25);
  local_24 = (float)fVar1;
  if (local_25 == '\0') {
    local_24 = -10000.0;
  }
  local_20 = *unaff_EDI;
  local_1c = unaff_EDI[1];
  local_18 = local_24;
  fVar1 = (float10)FUN_00441d80(*param_2);
  *(float *)(param_1 + 0x15c) = (float)fVar1;
  fVar2 = (float10)*unaff_ESI * (float10)*(float *)(param_3 + 0x20) +
          (float10)*(float *)(param_3 + 0x28) * (float10)unaff_ESI[2] +
          (float10)*(float *)(param_3 + 0x24) * (float10)unaff_ESI[1];
  if (fVar2 < (float10)_DAT_006cc8bc) {
    *param_2 = 0;
    return (float10)_DAT_006ccd64;
  }
  return (((float10)(float)(fVar1 + (float10)local_24) - (float10)unaff_EDI[2]) *
          (float10)unaff_ESI[2] +
         ((float10)local_20 - (float10)*unaff_EDI) * (float10)*unaff_ESI +
         ((float10)local_1c - (float10)unaff_EDI[1]) * (float10)unaff_ESI[1]) / fVar2;
}

