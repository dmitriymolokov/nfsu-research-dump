/* Decompiled from Speed.exe @ 004b94c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b94c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EDI < *(int *)(unaff_EBX + 0x10)) {
    while( true ) {
      iVar2 = 0;
      for (puVar1 = *(undefined4 **)(unaff_EBX + 4);
          (puVar1 != (undefined4 *)(unaff_EBX + 4) &&
          (iVar2 = iVar2 + 1, puVar1 != (undefined4 *)0x0)); puVar1 = (undefined4 *)*puVar1) {
      }
      if (iVar2 <= unaff_EDI) break;
      FUN_004b9750(unaff_EBX);
    }
  }
  *(int *)(unaff_EBX + 0x10) = unaff_EDI;
  return;
}

