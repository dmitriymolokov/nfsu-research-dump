/* Decompiled from Speed.exe @ 00564cd0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00564cd0(float param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = param_1 < DAT_006cc7a4;
  if (bVar1) {
    param_1 = -param_1;
  }
  if (_DAT_006cc7bc <= param_1) {
    return (-(ushort)bVar1 & 0x8000) + 0x4000;
  }
  iVar3 = FUN_00674898();
  iVar5 = 0x8000;
  iVar6 = 0;
  iVar4 = 0x8000;
  if (0x7fff < iVar3) {
    do {
      if (10 < iVar6) break;
      iVar5 = iVar5 >> 1;
      iVar4 = iVar4 + iVar5;
      iVar6 = iVar6 + 1;
    } while (iVar4 <= iVar3);
  }
  sVar2 = FUN_00674898();
  if (bVar1) {
    return -(*(short *)(&DAT_006f2280 +
                       (iVar6 * 0x10 + (iVar3 - (iVar4 - iVar5) >> (0xbU - (char)iVar6 & 0x1f))) * 8
                       ) - sVar2);
  }
  return *(short *)(&DAT_006f2280 +
                   (iVar6 * 0x10 + (iVar3 - (iVar4 - iVar5) >> (0xbU - (char)iVar6 & 0x1f))) * 8) -
         sVar2;
}

