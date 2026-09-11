/* Decompiled from Speed.exe @ 004b2220 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b2220(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x14), iVar2 != 0)) {
    iVar1 = *(int *)(iVar2 + 0x40);
    FUN_004ae9a0();
    *(undefined4 *)(iVar1 + 0x84) = 1;
    iVar2 = *(int *)(iVar2 + 0x44);
    FUN_004ae9a0();
    *(undefined4 *)(iVar2 + 0x84) = 1;
  }
  return;
}

