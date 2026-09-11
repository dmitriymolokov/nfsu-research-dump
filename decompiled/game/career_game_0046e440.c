/* Decompiled from Speed.exe @ 0046e440 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e440(void)

{
  float fVar1;
  int iVar2;
  int unaff_ESI;
  float10 fVar3;
  float local_4;
  
  if (DAT_006fff2c != 0) {
    if ((((*(int *)(unaff_ESI + 0x3c) != 1) && (*(int *)(unaff_ESI + 0x44) == 3)) &&
        ((local_4 = *(float *)(unaff_ESI + 0x4c) - *(float *)(*(int *)(unaff_ESI + 0x20) + 0x14),
         *(float *)(*(int *)(unaff_ESI + 0x20) + 0x78) <= _DAT_006cc960 ||
         (fVar3 = (float10)FUN_0046d830(), fVar3 <= (float10)DAT_006cc7a4)))) &&
       (local_4 < DAT_006cc7a4)) {
      fVar3 = (float10)FUN_0046cff0();
      iVar2 = *(int *)(unaff_ESI + 0x20);
      fVar3 = (float10)FUN_00401c80(local_4 * *(float *)(*(int *)(unaff_ESI + 0x18) + 0x14),
                                    -(float)ABS(fVar3 + fVar3),(float)ABS(fVar3 + fVar3));
      *(float *)(iVar2 + 0x7c) = (float)(fVar3 + (float10)*(float *)(iVar2 + 0x7c));
    }
    fVar3 = (float10)FUN_0046cff0();
    iVar2 = *(int *)(unaff_ESI + 0x20);
    fVar1 = (float)((float10)*(float *)(iVar2 + 0x7c) + fVar3);
    if (((float10)*(float *)(iVar2 + 0x7c) < fVar3) && (fVar1 < DAT_006cc7a4)) {
      FUN_00454f30(&local_4,fVar1);
      *(float *)(iVar2 + 0x7c) =
           local_4 * *(float *)(unaff_ESI + 0xe4) * fVar1 + *(float *)(iVar2 + 0x7c);
    }
  }
  return;
}

