/* Decompiled from Speed.exe @ 005031c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_005031c0(void)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  
  if (*(short *)(unaff_ESI + 0xe) != 0x20) {
    uVar5 = 0;
    cVar3 = *(char *)(unaff_ESI + 0x10);
    while (cVar3 == -1) {
      pcVar1 = (char *)(unaff_ESI + 0x11 + uVar5);
      uVar5 = uVar5 + 1;
      cVar3 = *pcVar1;
    }
    uVar6 = uVar5 << 3;
    bVar4 = *(byte *)((uVar5 & 0x1fffffff) + 0x10 + unaff_ESI) & 1;
    while (bVar4 != 0) {
      uVar6 = uVar6 + 1;
      bVar4 = *(byte *)((uVar6 >> 3) + 0x10 + unaff_ESI) & (byte)(1 << ((byte)uVar6 & 7));
    }
    *(short *)(unaff_ESI + 0xe) = *(short *)(unaff_ESI + 0xe) + 1;
    pbVar2 = (byte *)((uVar6 >> 3) + 0x10 + unaff_ESI);
    *pbVar2 = *pbVar2 | '\x01' << ((byte)uVar6 & 7);
    return *(ushort *)(unaff_ESI + 0xc) * uVar6 + *(int *)(unaff_ESI + 0x14);
  }
  return 0;
}

