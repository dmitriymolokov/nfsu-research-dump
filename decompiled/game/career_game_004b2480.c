/* Decompiled from Speed.exe @ 004b2480 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b2480(void)

{
  int iVar1;
  
  iVar1 = FUN_004b2330();
  if (iVar1 != 0) {
    FUN_004b14e0();
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
  if (iVar1 == 0) {
    return;
  }
  FUN_004b14e0();
  return;
}

