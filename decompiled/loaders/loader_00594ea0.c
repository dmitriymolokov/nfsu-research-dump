/* Decompiled from Speed.exe @ 00594ea0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594ea0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = FUN_00594c60();
  if (iVar1 != 0) {
    FUN_0063c290(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 8),param_1);
    iVar2 = *(int *)(iVar1 + 8) + unaff_EDI;
    *(int *)(iVar1 + 8) = iVar2;
    if (*(int *)(iVar1 + 4) < iVar2) {
      *(int *)(iVar1 + 4) = iVar2;
    }
    FUN_00594d40();
  }
  return;
}

