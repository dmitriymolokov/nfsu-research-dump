/* Decompiled from Speed.exe @ 0058b630 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058b630(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if (*(int *)(*(int *)(unaff_EDI + 8) * 0xc90 + 0xc54 + DAT_00734588) != 2) {
    iVar1 = unaff_EDI + 0x14;
    iVar2 = FUN_0053ede0(&DAT_00743c20,iVar1,0x78,4);
    while ((iVar2 != 0 && (iVar2 = FUN_0058ca20(param_1), iVar2 != 0))) {
      iVar2 = FUN_0053ede0(&DAT_00743c20,iVar1,0x78,4);
    }
    *(undefined1 *)(unaff_EDI + 0xd) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_0053e9e0(&DAT_00743c20,iVar1,0x78,FUN_0058ce20,unaff_EDI,4);
    return 1;
  }
  *(undefined1 *)(unaff_EDI + 0xd) = 2;
  return 0;
}

