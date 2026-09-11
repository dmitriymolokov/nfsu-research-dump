/* Decompiled from Speed.exe @ 004f39a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f39a0(byte *param_1,undefined *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined **ppuVar5;
  
  ppuVar5 = &PTR_s_Options_fng_006f94d8;
  do {
    pbVar3 = *ppuVar5;
    pbVar4 = param_1;
    do {
      bVar2 = *pbVar4;
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 & 0x5f;
      }
      bVar1 = *pbVar3;
      pbVar4 = pbVar4 + 1;
      if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
        bVar1 = bVar1 & 0x5f;
      }
      pbVar3 = pbVar3 + 1;
    } while (((bVar2 != 0) && (bVar1 != 0)) && (bVar2 == bVar1));
    if (bVar2 == bVar1) {
      ppuVar5[1] = param_2;
    }
    ppuVar5 = ppuVar5 + 5;
  } while ((int)ppuVar5 < 0x6f9fdc);
  return;
}

