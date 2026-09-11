/* Decompiled from Speed.exe @ 004f5b90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5b90(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_00735788 != 0) {
    puVar2 = &DAT_006f923c;
    do {
      uVar1 = puVar2[-3];
      iVar4 = 0;
      do {
        FUN_005740b0(uVar1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar3 = puVar2 + 7;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar3;
    } while ((int)puVar3 < 0x6f9488);
    FUN_005740b0(0x2c);
  }
  DAT_00735788 = 0;
  return;
}

