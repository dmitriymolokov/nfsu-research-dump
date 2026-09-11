/* Decompiled from Speed.exe @ 0049d370 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049d370(void)

{
  int unaff_EBX;
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(unaff_EBX + 0x80);
  iVar2 = 10;
  do {
    FUN_004f6910(puVar1[-10]);
    FUN_004f6910(*puVar1);
    FUN_004f6910(puVar1[10]);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(unaff_EBX + 0x128);
  iVar2 = 5;
  do {
    FUN_004f6910(*puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x120));
  FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x124));
  return;
}

