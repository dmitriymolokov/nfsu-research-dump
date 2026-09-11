/* Decompiled from Speed.exe @ 004ee490 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ee490(void)

{
  int iVar1;
  
  if (((DAT_0073578c != 0) && (iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) != 0)) {
    FUN_004f09b0(*(int *)(iVar1 + 0x18));
  }
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0xff;
  }
  return;
}

