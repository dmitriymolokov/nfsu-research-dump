/* Decompiled from Speed.exe @ 0058db20 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058db20(void)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int *unaff_EDI;
  
  if ((char)unaff_EDI[2] != '\0') {
    FUN_0058d620();
    iVar1 = FUN_0058d9e0(unaff_EDI);
    unaff_EDI[0x38] = iVar1;
    if (iVar1 != unaff_EDI[0x39]) {
      bVar2 = 0;
      piVar3 = &DAT_006f041c;
      do {
        uVar4 = (uint)unaff_EDI[0x38] >> (bVar2 & 0x1f) & 3;
        if (uVar4 != ((uint)unaff_EDI[0x39] >> (bVar2 & 0x1f) & 3)) {
          if ((*piVar3 != 0) && (uVar4 != 0)) {
            FUN_00569a00(*unaff_EDI,*(undefined4 *)(&DAT_006f061c + uVar4 * 4),0,0);
          }
          unaff_EDI[0x39] = ~(3 << (bVar2 & 0x1f)) & unaff_EDI[0x39] | uVar4 << (bVar2 & 0x1f);
        }
        piVar3 = piVar3 + 9;
        bVar2 = bVar2 + 2;
      } while ((int)piVar3 < 0x6f0638);
      FUN_0056ca60(*(undefined4 *)(*unaff_EDI + 0x4d4));
    }
  }
  return;
}

