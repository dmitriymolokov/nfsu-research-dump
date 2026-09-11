/* Decompiled from Speed.exe @ 00565810 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_00565810(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  FUN_0063f190(unaff_EDI + 0x3c);
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(unaff_EDI + 4); puVar1 != (undefined4 *)(unaff_EDI + 4);
      puVar1 = (undefined4 *)*puVar1) {
    if (iVar2 < (int)puVar1[2]) {
      iVar2 = puVar1[2];
    }
  }
  FUN_0063f1a0(unaff_EDI + 0x3c);
  return iVar2;
}

