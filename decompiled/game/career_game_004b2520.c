/* Decompiled from Speed.exe @ 004b2520 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b2520(void)

{
  int iVar1;
  undefined4 unaff_EDI;
  
  iVar1 = FUN_004b2330();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = unaff_EDI;
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x18) == 0) {
      return;
    }
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      return;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + 0x44);
  }
  else {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x14);
    }
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = unaff_EDI;
  }
  return;
}

