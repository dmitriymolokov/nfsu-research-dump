/* Decompiled from Speed.exe @ 004a8d90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a8d90(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(DAT_007361b4 + 0x95c) + 0x54) != 0) {
    iVar1 = FUN_0059fb80();
    if (iVar1 == 0) {
      iVar1 = FUN_0059fb80();
    }
    FUN_004f68c0(0x100,iVar1,param_1 + 0x19);
    FUN_004a8b10();
  }
  return;
}

