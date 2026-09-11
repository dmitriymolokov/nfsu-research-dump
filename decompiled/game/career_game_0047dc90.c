/* Decompiled from Speed.exe @ 0047dc90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047dc90(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_007796fc == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_007796fc + -4;
  }
  iVar1 = FUN_0040cb70();
  while (iVar2 != iVar1) {
    *(undefined4 *)(iVar2 + 0x18) = 1;
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + -4;
    }
  }
  return;
}

