/* Decompiled from Speed.exe @ 004f3940 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined ** FUN_004f3940(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_EBX;
  undefined **ppuVar5;
  int iVar6;
  
  iVar6 = 0;
  ppuVar5 = &PTR_s_Options_fng_006f94d8;
  while( true ) {
    pbVar4 = *ppuVar5;
    iVar3 = -1;
    if (pbVar4 != (byte *)0x0) {
      bVar2 = *pbVar4;
      while (bVar2 != 0) {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        iVar3 = iVar3 * 0x21 + (uint)bVar2;
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar1;
      }
    }
    if (unaff_EBX == iVar3) break;
    ppuVar5 = ppuVar5 + 5;
    iVar6 = iVar6 + 1;
    if (0x6f9fdb < (int)ppuVar5) {
      return (undefined **)0x0;
    }
  }
  return &PTR_s_Options_fng_006f94d8 + iVar6 * 5;
}

