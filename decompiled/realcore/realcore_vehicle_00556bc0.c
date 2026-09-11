/* Decompiled from Speed.exe @ 00556bc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00556bc0(void)

{
  int iVar1;
  
  if (((DAT_0073578c != 0) && (iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) != 0)) {
    FUN_004f09b0(*(int *)(iVar1 + 0x18));
  }
  iVar1 = FUN_004f65d0();
  *(undefined4 *)(iVar1 + 0x1c) = 0xff;
  return;
}

