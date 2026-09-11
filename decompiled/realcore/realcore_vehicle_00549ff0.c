/* Decompiled from Speed.exe @ 00549ff0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00549ff0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x290) < DAT_0073ad3c) {
    iVar3 = 0;
    while( true ) {
      if (*(int *)(unaff_EDI + 0x68) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0064c660(*(undefined4 *)(unaff_EDI + 0x70));
      }
      if (iVar1 <= iVar3) break;
      iVar1 = FUN_00666f30(DAT_0073d8d8,iVar3);
      FUN_00668bc0(*(undefined4 *)(unaff_EDI + 0x28c),*(undefined4 *)(iVar1 + 0x30));
      iVar3 = iVar3 + 1;
    }
    uVar2 = FUN_00674898();
    *(undefined4 *)(unaff_EDI + 0x290) = uVar2;
  }
  return;
}

