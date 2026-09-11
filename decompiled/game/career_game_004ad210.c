/* Decompiled from Speed.exe @ 004ad210 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ad210(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  *(undefined4 *)(unaff_EDI + 0xae0) = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar1 = (undefined4 *)(param_1 + 0x520);
    do {
      FUN_004acd20(*puVar1,0);
      *(int *)(unaff_EDI + 0xae0) = *(int *)(unaff_EDI + 0xae0) + 1;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  FUN_004ad2d0();
  return;
}

