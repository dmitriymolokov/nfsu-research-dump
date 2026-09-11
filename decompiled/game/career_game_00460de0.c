/* Decompiled from Speed.exe @ 00460de0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00460de0(float param_1,float param_2)

{
  float fVar1;
  int *unaff_EDI;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  
  fVar4 = (float)DAT_0073ad3c * _DAT_006cca38;
  fVar2 = (float10)FUN_00583ea0(ABS((param_1 - (float)unaff_EDI[0x1e]) / param_2));
  FUN_00584500((float)fVar2,fVar4);
  fVar1 = DAT_006b7380;
  fVar2 = (float10)FUN_00583ea0(*(undefined4 *)(*unaff_EDI + 0x3d0));
  fVar4 = (float)unaff_EDI[0x12];
  fVar3 = (float10)FUN_00583ea0(ABS((float)unaff_EDI[5]));
  return fVar3 * (float10)(float)((float10)fVar4 * fVar2 * (float10)fVar1);
}

