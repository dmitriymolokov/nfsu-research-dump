/* Decompiled from Speed.exe @ 0064d7d0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_0064D7D0(void)

{
  float fVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  float10 in_ST0;
  float fStack00000020;
  
  fStack00000020 = (float)in_ST0;
  iVar2 = func_0x00652770();
  unaff_ESI[1] = (int)ROUND((float)iVar2 * fStack00000020);
  if (*(int *)(unaff_EDI + 0x18) < 1) {
    iVar2 = *(int *)(unaff_EDI + 0x14) - iVar2;
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + _DAT_006cc858;
    }
    *unaff_ESI = (int)ROUND(fVar1 * fStack00000020);
    return 1;
  }
  *unaff_ESI = 0;
  return 1;
}

