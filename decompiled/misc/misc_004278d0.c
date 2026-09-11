/* Decompiled from Speed.exe @ 004278d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004278d0(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int unaff_ESI;
  
  FUN_004273d0(unaff_ESI,unaff_ESI + 0x90,(float *)(unaff_ESI + 0x60),unaff_ESI + 0x540);
  pfVar3 = *(float **)(unaff_ESI + 0x20);
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[2];
  *(float *)(unaff_ESI + 0x50) = *(float *)(unaff_ESI + 0x60) - *pfVar3;
  *(float *)(unaff_ESI + 0x58) = *(float *)(unaff_ESI + 0x68) - fVar2;
  *(float *)(unaff_ESI + 0x54) = *(float *)(unaff_ESI + 100) - fVar1;
  return;
}

