/* Decompiled from Speed.exe @ 00655a40 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00655a40(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  bVar2 = *(byte *)(param_1 + 0x23);
  iVar1 = DAT_00713ce0 * 6;
  iVar5 = 0;
  if (bVar2 != 0) {
    psVar6 = (short *)(param_1 + 4);
    do {
      sVar3 = *psVar6;
      iVar4 = iVar5 + ((uint)bVar2 + iVar1) * 6;
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 1;
      *(ushort *)(sVar3 * 0x8c + 0x1c + DAT_00713f48) = (ushort)(byte)(&DAT_006aaa32)[iVar4] << 8;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x23));
  }
  return;
}

