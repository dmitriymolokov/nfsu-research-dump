/* Decompiled from Speed.exe @ 0040bd40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040bd40(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int extraout_EDX;
  float *unaff_ESI;
  float local_40;
  float local_3c;
  float local_38;
  float local_24;
  float local_14;
  
  FUN_00567370();
  fVar1 = local_3c * *(float *)(extraout_EDX + 0x18) - local_38 * *(float *)(extraout_EDX + 0x14);
  fVar2 = local_38 * *(float *)(extraout_EDX + 0x10) - local_40 * *(float *)(extraout_EDX + 0x18);
  fVar3 = local_40 * *(float *)(extraout_EDX + 0x14) - local_3c * *(float *)(extraout_EDX + 0x10);
  FUN_00567370();
  *unaff_ESI = local_40;
  unaff_ESI[1] = local_3c;
  unaff_ESI[2] = local_38;
  unaff_ESI[7] = local_14;
  unaff_ESI[4] = local_38 * fVar2 - fVar3 * local_3c;
  unaff_ESI[6] = local_3c * fVar1 - fVar2 * local_40;
  unaff_ESI[5] = fVar3 * local_40 - local_38 * fVar1;
  unaff_ESI[8] = fVar1;
  unaff_ESI[9] = fVar2;
  unaff_ESI[10] = fVar3;
  unaff_ESI[0xb] = local_24;
  unaff_ESI[3] = 0.0;
  unaff_ESI[7] = 0.0;
  unaff_ESI[0xb] = 0.0;
  unaff_ESI[0xc] = 0.0;
  unaff_ESI[0xd] = 0.0;
  unaff_ESI[0xe] = 0.0;
  unaff_ESI[0xf] = 1.0;
  return;
}

