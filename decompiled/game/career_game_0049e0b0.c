/* Decompiled from Speed.exe @ 0049e0b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


bool FUN_0049e0b0(void)

{
  int iVar1;
  
  if (DAT_00777b4c == 1) {
    if (*(int *)(DAT_007677a8 + 0x58a0) == 0) {
      return false;
    }
  }
  else if (DAT_00777b4c == 4) {
    return false;
  }
  FUN_004ad270();
  iVar1 = FUN_00674898();
  return iVar1 != 0;
}

