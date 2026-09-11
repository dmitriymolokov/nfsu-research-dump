/* Decompiled from Speed.exe @ 00463800 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


float10 FUN_00463800(undefined4 param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_ESI;
  float *unaff_EDI;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_0059d350(&local_20,param_3,0);
  *unaff_ESI = local_20;
  unaff_ESI[1] = local_1c;
  unaff_ESI[2] = local_18;
  FUN_0059d350(&local_20,param_3,1);
  *unaff_EDI = local_20;
  unaff_EDI[1] = local_1c;
  unaff_EDI[2] = local_18;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *unaff_ESI = *unaff_ESI - *param_2;
  fVar3 = unaff_ESI[1];
  unaff_ESI[1] = fVar3 - fVar1;
  fVar4 = unaff_ESI[2];
  unaff_ESI[2] = (float)((float10)fVar4 - (float10)fVar2);
  return (float10)*unaff_ESI * (float10)*unaff_EDI +
         ((float10)fVar4 - (float10)fVar2) * (float10)unaff_EDI[2] +
         (float10)(fVar3 - fVar1) * (float10)unaff_EDI[1];
}

