/* Decompiled from Speed.exe @ 004fdd40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fdd40(void)

{
  void *_Memory;
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x60) * *(int *)(unaff_EDI + 0x5c);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      if ((*(int *)(*(int *)(unaff_EDI + 0x8c) + 0x18 + iVar2) == 2) &&
         (_Memory = *(void **)(*(int *)(unaff_EDI + 0x8c) + iVar2 + 0x20), _Memory != (void *)0x0))
      {
        _free(_Memory);
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8c) + 0x20 + iVar2) = 0;
      }
      iVar2 = iVar2 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    _free(*(void **)(unaff_EDI + 0x8c));
    *(undefined4 *)(unaff_EDI + 0x8c) = 0;
  }
  return;
}

