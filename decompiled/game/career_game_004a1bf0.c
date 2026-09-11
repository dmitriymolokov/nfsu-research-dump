/* Decompiled from Speed.exe @ 004a1bf0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1bf0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  bool bVar3;
  
  FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x24));
  if ((*(uint *)(unaff_ESI + 0x18) & *(uint *)(unaff_ESI + 0x10)) != 0 ||
      (*(uint *)(unaff_ESI + 0x1c) & *(uint *)(unaff_ESI + 0x14)) != 0) {
    bVar3 = DAT_006fbf14 == 0;
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
    *(undefined4 *)(unaff_ESI + 0x30) = 0;
    iVar2 = *(int *)(param_1 + 4);
    if (((bVar3) && (*(int *)(param_1 + 0x10) == 0)) && (iVar1 = FUN_0041ffe0(), iVar1 != 0)) {
      iVar2 = iVar1;
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if ((iVar2 == 0) || ((*(char *)(iVar2 + 0xd) == '\0' && (*(char *)(iVar2 + 0xe) == '\0')))) {
      if (_DAT_006cc7ac < (float)(DAT_0073ad34 - *(int *)(unaff_ESI + 0x2c)) * _DAT_006cca38) {
        FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x20));
        FUN_004f6910(*(undefined4 *)(unaff_ESI + 0x24));
        *(undefined1 *)(unaff_ESI + 0x28) = 0;
      }
    }
    else {
      switch(*(undefined1 *)(param_1 + 0x26)) {
      case 0:
        FUN_004a1d00();
        return;
      case 1:
        FUN_004a1e20();
        return;
      case 2:
        FUN_004a1d90();
        return;
      case 3:
        FUN_004a1e80();
        return;
      }
    }
  }
  return;
}

