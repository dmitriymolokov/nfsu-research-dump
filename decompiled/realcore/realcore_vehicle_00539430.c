/* Decompiled from Speed.exe @ 00539430 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00539430(void)

{
  float fVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = 0x7fff;
  if (DAT_006cc7a4 <= *(float *)(unaff_ESI + 0x284)) {
    fVar1 = *(float *)(unaff_ESI + 0x290);
    *(float *)(unaff_ESI + 0x290) = *(float *)(unaff_ESI + 0x210) + *(float *)(unaff_ESI + 0x290);
    if (fVar1 / *(float *)(unaff_ESI + 0x284) <= _DAT_006cc7bc) {
      iVar2 = FUN_00674898();
      iVar2 = (&DAT_006f7220)[iVar2];
      *(undefined4 *)(unaff_ESI + 0x224) = 8;
    }
    else {
      *(undefined4 *)(unaff_ESI + 0x220) = 4;
      *(undefined4 *)(unaff_ESI + 0x224) = 4;
      *(undefined4 *)(unaff_ESI + 0x290) = 0;
    }
  }
  *(int *)(unaff_ESI + 0x244) =
       (*(int *)(unaff_ESI + 0x240) * iVar2 >> 0xf) * *(int *)(unaff_ESI + 0x50) >> 0xf;
  return;
}

