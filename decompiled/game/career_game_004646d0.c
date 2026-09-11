/* Decompiled from Speed.exe @ 004646d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004646d0(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int unaff_ESI;
  float *unaff_EDI;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = *(float *)(unaff_ESI + 0x24);
  fVar4 = param_1 * *(float *)(unaff_ESI + 0x24);
  fVar5 = (_DAT_006cc7dc * fVar4 + *(float *)(unaff_ESI + 0x20)) * param_1 +
          *(float *)(unaff_ESI + 0x1c);
  fVar4 = fVar4 + *(float *)(unaff_ESI + 0x20);
  FUN_0059d350(&local_20,fVar5,1);
  fVar2 = local_20 * fVar1;
  fVar3 = local_1c * fVar1;
  fVar1 = local_18 * fVar1;
  FUN_0059d350(&local_20,fVar5,2);
  fVar4 = fVar4 * fVar4;
  *unaff_EDI = local_20 * fVar4 + fVar2;
  unaff_EDI[2] = local_18 * fVar4 + fVar1;
  unaff_EDI[1] = local_1c * fVar4 + fVar3;
  return;
}

