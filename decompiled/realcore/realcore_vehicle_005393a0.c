/* Decompiled from Speed.exe @ 005393a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005393a0(void)

{
  float fVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = 0;
  if (DAT_006cc7a4 <= *(float *)(unaff_ESI + 0x280)) {
    fVar1 = *(float *)(unaff_ESI + 0x290);
    *(float *)(unaff_ESI + 0x290) = *(float *)(unaff_ESI + 0x210) + *(float *)(unaff_ESI + 0x290);
    if (_DAT_006cc7bc < fVar1 / *(float *)(unaff_ESI + 0x280)) {
      *(undefined4 *)(unaff_ESI + 0x290) = 0;
      *(undefined4 *)(unaff_ESI + 0x224) = 0;
      *(undefined4 *)(unaff_ESI + 0x244) = 0;
      return 0;
    }
    iVar2 = FUN_00674898();
    iVar2 = (&DAT_006f7220)[iVar2];
    *(undefined4 *)(unaff_ESI + 0x224) = 1;
  }
  iVar2 = (*(int *)(unaff_ESI + 0x240) * iVar2 >> 0xf) * *(int *)(unaff_ESI + 0x50) >> 0xf;
  *(int *)(unaff_ESI + 0x244) = iVar2;
  return iVar2;
}

