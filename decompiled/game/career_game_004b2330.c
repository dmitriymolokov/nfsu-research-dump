/* Decompiled from Speed.exe @ 004b2330 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_004b2330(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
      iVar1 = FUN_004f3f90(&DAT_00746104);
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), iVar1 != 0)) {
        if (unaff_ESI == 0) {
          return *(undefined4 *)(iVar1 + 0x40);
        }
        if (unaff_ESI == 1) {
          return *(undefined4 *)(iVar1 + 0x44);
        }
      }
    }
  }
  else {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x14);
    }
  }
  return 0;
}

