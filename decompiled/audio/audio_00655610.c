/* Decompiled from Speed.exe @ 00655610 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00655610(int param_1)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_00713ee4 != '\0') {
    iVar1 = (&DAT_007163dc)[param_1];
    uVar3 = (uint)*(byte *)(iVar1 + 0x62);
    if (uVar3 != 0) {
      psVar2 = (short *)(iVar1 + 0x34);
      do {
        if (iVar4 <= *psVar2) {
          iVar4 = (int)*psVar2;
        }
        psVar2 = psVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return (*(short *)(iVar1 + 0x40) - iVar4) + -1;
  }
  return -10;
}

