/* Decompiled from Speed.exe @ 0048cd40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_0048cd40(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *unaff_ESI;
  int unaff_EDI;
  
  *unaff_ESI = 1.0;
  unaff_ESI[1] = 0.0;
  unaff_ESI[2] = 0.0;
  unaff_ESI[3] = 0.0;
  unaff_ESI[4] = 0.0;
  unaff_ESI[5] = 1.0;
  unaff_ESI[6] = 0.0;
  unaff_ESI[7] = 0.0;
  unaff_ESI[8] = 0.0;
  unaff_ESI[9] = 0.0;
  unaff_ESI[10] = 1.0;
  unaff_ESI[0xb] = 0.0;
  unaff_ESI[0xc] = 0.0;
  unaff_ESI[0xd] = 0.0;
  unaff_ESI[0xe] = 0.0;
  unaff_ESI[0xf] = 1.0;
  FUN_00567370();
  unaff_ESI[4] = unaff_ESI[2] * unaff_ESI[9] - unaff_ESI[1] * unaff_ESI[10];
  unaff_ESI[5] = *unaff_ESI * unaff_ESI[10] - unaff_ESI[2] * unaff_ESI[8];
  unaff_ESI[6] = unaff_ESI[8] * unaff_ESI[1] - *unaff_ESI * unaff_ESI[9];
  unaff_ESI[8] = unaff_ESI[6] * unaff_ESI[1] - unaff_ESI[2] * unaff_ESI[5];
  unaff_ESI[9] = unaff_ESI[2] * unaff_ESI[4] - unaff_ESI[6] * *unaff_ESI;
  unaff_ESI[10] = unaff_ESI[5] * *unaff_ESI - unaff_ESI[4] * unaff_ESI[1];
  iVar3 = *(int *)(unaff_EDI + 0x2c);
  fVar1 = *(float *)(iVar3 + 0x54);
  fVar2 = *(float *)(iVar3 + 0x58);
  unaff_ESI[0xc] = *(float *)(iVar3 + 0x50);
  unaff_ESI[0xd] = fVar1;
  unaff_ESI[0xf] = 1.0;
  unaff_ESI[0xe] = fVar2;
  return iVar3 + 0x50;
}

