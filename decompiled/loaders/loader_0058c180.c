/* Decompiled from Speed.exe @ 0058c180 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058c180(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < unaff_ESI) {
    do {
      iVar1 = *(int *)(unaff_EDI + iVar3 * 4);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
        *(undefined1 *)(iVar1 + 0xe) = 1;
        *(undefined4 *)(param_2 + iVar2 * 4) = *(undefined4 *)(iVar1 + 8);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_ESI);
  }
  return;
}

