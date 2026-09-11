/* Decompiled from Speed.exe @ 004067d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004067d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = DAT_00736500;
  iVar1 = 0;
  iVar2 = *(int *)(unaff_EDI + 0x130) * 0x110;
  while (((*(byte *)(iVar2 + DAT_00736500 + 0x2254 + iVar1) & 0x80) != 0 ||
         (((&DAT_0071d8d8)[iVar1 + iVar2] & 0x80) == 0))) {
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
LAB_00406812:
      iVar1 = 0;
      do {
        if (*(short *)(iVar3 + 0x20 + (*(int *)(unaff_EDI + 0x130) * 0x44 + iVar1) * 4) != -1) {
          FUN_00406c40(iVar1);
          iVar3 = DAT_00736500;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
      iVar1 = *(int *)(unaff_EDI + 0x23c);
      if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) || (iVar1 == 4)) {
        iVar1 = 1000;
        if (*(int *)(unaff_EDI + 0x134) == 0x16) {
          iVar1 = 500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + iVar3) - _DAT_00719a28;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0xc + iVar3) - DAT_00719a34;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 4 + iVar3) - DAT_00719a2c;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x10 + iVar3) - _DAT_00719a38;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 8 + iVar3) - DAT_00719a30;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x14 + iVar3) - DAT_00719a3c;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x18 + iVar3) - _DAT_00719a40;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        iVar2 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x1c + iVar3) - DAT_00719a44;
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar1 < iVar2) {
          FUN_00406680();
          iVar3 = DAT_00736500;
        }
        _DAT_00719a28 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + iVar3);
        DAT_00719a34 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0xc + iVar3);
        DAT_00719a2c = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 4 + iVar3);
        _DAT_00719a38 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x10 + iVar3);
        DAT_00719a30 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 8 + iVar3);
        DAT_00719a3c = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x14 + iVar3);
        _DAT_00719a40 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x18 + iVar3);
        DAT_00719a44 = *(int *)(*(int *)(unaff_EDI + 0x130) * 0x110 + 0x1c + iVar3);
      }
      return;
    }
  }
  FUN_00406e10(iVar1);
  goto LAB_00406812;
}

