/* Decompiled from Speed.exe @ 004b8310 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004b8310(int param_1)

{
  int iVar1;
  
  FUN_004f68c0(0x20,"Option%1dTextString",*(undefined4 *)(param_1 + 0x98));
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  FUN_004f68c0(0x20,"Option%1dData",*(undefined4 *)(param_1 + 0x98));
  FUN_004ab510();
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_004f67f0(iVar1);
  return;
}

