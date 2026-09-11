/* Decompiled from Speed.exe @ 004c9650 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004c9650(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  uVar2 = DAT_00735e44;
  *(undefined1 **)(unaff_EDI + 0x40) = &LAB_00557470;
  *(undefined1 *)(unaff_EDI + 0x48) = 1;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int *)(iVar1 + 0x14) != 0)) {
    FUN_004f7c00(uVar2,0,0,*(int *)(iVar1 + 0x18));
  }
  uVar2 = *(undefined4 *)(unaff_EDI + 0xc);
  if (DAT_0073578c != 0) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    uVar2 = 0;
    if ((iVar1 != 0) && (uVar2 = 0, *(int *)(iVar1 + 0x18) != 0)) {
      uVar2 = FUN_004f09b0(*(int *)(iVar1 + 0x18));
    }
  }
  return uVar2;
}

