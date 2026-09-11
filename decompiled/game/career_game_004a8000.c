/* Decompiled from Speed.exe @ 004a8000 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a8000(void)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int extraout_EDX;
  int unaff_EDI;
  float10 fVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(unaff_EDI + 0x18) & *(uint *)(unaff_EDI + 0x10)) != 0 ||
      (*(uint *)(unaff_EDI + 0x1c) & *(uint *)(unaff_EDI + 0x14)) != 0) {
    iVar2 = FUN_00434d10();
    if (iVar2 == 0) {
      FUN_004f6910(*(undefined4 *)(unaff_EDI + 0x20));
      return;
    }
    FUN_004f6970(*(undefined4 *)(unaff_EDI + 0x20));
    if (extraout_EDX == 4) {
      FUN_004f66f0();
    }
    else {
      FUN_004f68a0(&DAT_006ca778,extraout_EDX);
    }
    fVar4 = (float10)FUN_00434dd0();
    FUN_00674898();
    FUN_00564b10();
    iVar2 = FUN_00674898();
    uVar3 = FUN_0049fc90();
    FUN_004f75b0(iVar2 << 0x18 | uVar3 & 0xffffff);
    FUN_004f7260(&local_4,&local_8);
    fVar1 = _DAT_006b6b70 * (float)fVar4 + _DAT_006cc7bc;
    FUN_004f74f0(fVar1);
    FUN_004f7430(fVar1);
    FUN_004f7140(local_4,local_8);
  }
  return;
}

