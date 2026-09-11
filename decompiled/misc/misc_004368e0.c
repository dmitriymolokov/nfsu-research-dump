/* Decompiled from Speed.exe @ 004368e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004368e0(void)

{
  void *pvVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  do {
    pvVar1 = *(void **)(unaff_EDI + iVar2 * 4);
    if (pvVar1 != (void *)0x0) {
      _free(pvVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1f);
  if (DAT_0073618c != (void *)0x0) {
    pvVar1 = (void *)((int)DAT_0073618c + -4);
    _eh_vector_destructor_iterator_(DAT_0073618c,0x44,*(int *)((int)DAT_0073618c + -4),FUN_0040a880)
    ;
    _free(pvVar1);
  }
  DAT_0073618c = (void *)0x0;
  DAT_00736190 = 0;
  return;
}

